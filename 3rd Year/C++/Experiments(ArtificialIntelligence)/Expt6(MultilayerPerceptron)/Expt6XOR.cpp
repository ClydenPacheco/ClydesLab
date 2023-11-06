#include <iostream>
#include <math.h>
using namespace std;

double total = 0;
int t1=0, t2=0;

struct perceptron{
    public:
    int Input[2];
    double Bias; //bias
    double Weight[3];
    double Threshold;
};
perceptron prpMain;

//NAND Gate
int Nandgate(int x, int y){
    perceptron prpMain2;
    prpMain2.Bias = 1;
    prpMain2.Threshold = 0;
    prpMain2.Weight[0] = 1.5;
    prpMain2.Weight[1] = -1;
    prpMain2.Weight[2] = -1;
    int t;
    prpMain2.Input[1] = x;
    prpMain2.Input[2] = y;
    double total = prpMain2.Bias * prpMain2.Weight[0];
    for (int i = 1; i <= 2; i++){
        total = total + (prpMain2.Input[i] * prpMain2.Weight[i]);
    }
    if (total >= prpMain2.Threshold)
        return 1;
    else    
        return 0;
}

//OR GATE
int Orgate(int x1, int y2)
{
    perceptron prpMain;
    prpMain.Bias = 1;
    prpMain.Threshold = 0;
    prpMain.Weight[0] = 0.5;
    prpMain.Weight[1] = 1;
    prpMain.Weight[2] = 1;
    int t;
    prpMain.Input[1] = x1;
    prpMain.Input[2] = y2;
    double total = prpMain.Bias*prpMain.Weight[0]*(-1);
    for (int i = 1; i <= 2; i++){
        total = total + (prpMain.Input[i] * prpMain.Weight[i]);
    }
    if (total >= prpMain.Threshold)
        return 1;
    else
        return 0;
}

//AND GATE
void Andgate(int x, int y){
    perceptron prpMain1;
    prpMain1.Bias = 1;
    prpMain1.Threshold = 0;
    prpMain1.Weight[0] = 1.5;
    prpMain1.Weight[1] = 1;
    prpMain1.Weight[2] = 1;
    int t;
    prpMain1.Input[1] = x;
    prpMain1.Input[2] = y;
    double total = prpMain1.Bias * prpMain1.Weight[0]*(-1);
    for (int i = 1; i <= 2; i++)
    {
        total = total + (prpMain1.Input[i] * prpMain1.Weight[i]);
    }
    if (total > prpMain1.Threshold)
    {
        cout << "Output = 1 since Neuron is activated.";
    }
    else
    {
        cout << "Output = 0 since Neuron did not get activated.";
    }
}
int main(int argc, char* argv[]){
    int m, n;
    cout << "What is the value of input 1 " << ": ";
    cin >> t1;
    cout << "What is the value of input 2 " << ": ";
    cin >> t2;
    m = Nandgate(t1, t2);
    n = Orgate(t1, t2);
    Andgate(m, n);
    return 0;
}