#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

typedef set<char> CharSet;
typedef map<char, vector<string>> Grammar;

void calculateFirstSet(const Grammar& grammar, char symbol, CharSet& firstSet, set<char>& visited) {
    // Mark the symbol as visited to avoid infinite recursion in the case of left-recursive grammars
    visited.insert(symbol);

    for (const auto& production : grammar.at(symbol)) {
        char firstChar = production.front();

        // If the first character of the production is the same as the symbol, skip it to avoid infinite recursion
        if (firstChar == symbol)
            continue;

        // Calculate first set for the first character of the production
        if (!visited.count(firstChar)) {
            calculateFirstSet(grammar, firstChar, firstSet, visited);
        }

        // Add the first set of the first character to the current symbol's first set
        firstSet.insert(firstSet.begin(), firstSet.end());

        // If the first character can derive epsilon, move to the next character in the production
        if (firstSet.find('$') != firstSet.end()) {
            firstSet.erase('$');
            if (production.length() > 1) {
                calculateFirstSet(grammar, production[1], firstSet, visited);
            }
        }
    }
}

void calculateFollowSet(const Grammar& grammar, char symbol, CharSet& followSet, set<char>& visited) {
    if (symbol == 'S')
        followSet.insert('$');

    for (const auto& production : grammar) {
        for (const auto& symbols : production.second) {
            auto pos = symbols.find(symbol);
            if (pos != string::npos) {
                if (pos < symbols.length() - 1) {
                    char nextSymbol = symbols[pos + 1];
                    if (isupper(nextSymbol)) {
                        calculateFirstSet(grammar, nextSymbol, followSet, visited);
                        if (followSet.find('$') != followSet.end()) {
                            followSet.erase('$');
                            if (!visited.count(production.first)) {
                                calculateFollowSet(grammar, production.first, followSet, visited);
                            }
                        }
                    } else {
                        followSet.insert(nextSymbol);
                    }
                } else if (production.first != symbol && !visited.count(production.first)) {
                    calculateFollowSet(grammar, production.first, followSet, visited);
                }
            }
        }
    }
}

int main() {
    Grammar grammar = {
        {'S', {"E"}},
        {'E', {"E+T", "T"}},
        {'T', {"T*F", "F"}},
        {'F', {"(E)", "id"}}
    };

    for (const auto& production : grammar) {
        char symbol = production.first;
        CharSet firstSet;
        set<char> visited;
        calculateFirstSet(grammar, symbol, firstSet, visited);

        cout << "First(" << symbol << ") = ";
        for (const auto& terminal : firstSet)
            cout << terminal << " ";
        cout << endl;
    }

    cout << endl;

    for (const auto& production : grammar) {
        char symbol = production.first;
        CharSet followSet;
        set<char> visited;
        calculateFollowSet(grammar, symbol, followSet, visited);

        cout << "Follow(" << symbol << ") = ";
        for (const auto& terminal : followSet)
            cout << terminal << " ";
        cout << endl;
    }

    return 0;
}
