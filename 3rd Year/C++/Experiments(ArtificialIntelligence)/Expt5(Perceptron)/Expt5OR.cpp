//OR Gate
#include <iostream>
using namespace std;

struct perceptron{
public:
	int Input[2];
	int Bias;
	double Weight[3];
	double Threshold;
};

int main(int argc, char *argv[]){
	perceptron prpMain;
	prpMain.Bias = -1;
	prpMain.Threshold = 0;
	prpMain.Weight[0] = 0.5;
	prpMain.Weight[1] = 1;
	prpMain.Weight[2] = 1;
	int t;
	double total = prpMain.Bias*prpMain.Weight[0];
	cout << "OR Gate\n";
	for (int i = 1; i <= 2; i++){
		cout << "What is the value of input " << i << ": ";
		cin >> t;
		prpMain.Input[i] = t;
		total = total + (prpMain.Input[i] * prpMain.Weight[i]);
	}
	if (total > prpMain.Threshold)
		cout << "Output = 1 since Neuron is activated.";
	else
		cout << "Output = 0 since Neuron did not get activated.";
    return 0;
}
