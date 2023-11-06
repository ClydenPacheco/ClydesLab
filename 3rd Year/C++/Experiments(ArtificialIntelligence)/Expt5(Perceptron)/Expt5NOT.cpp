//NOT Gate
#include <iostream>
#include <math.h>
using namespace std;

struct perceptron{
public:
	int Input[1];
	int Bias; //bias
	double Weight[2];
	double Threshold;
};

int main(int argc, char *argv[]){
	perceptron prpMain;
	prpMain.Bias = -1;
	prpMain.Threshold = -1;
	prpMain.Weight[0] = 0.5;
	prpMain.Weight[1] = -1;
	int t;
	double total = prpMain.Bias*prpMain.Weight[0];
	cout << "NOT Gate\n";
	cout << "What is the value of input : ";
	cin >> t;
	prpMain.Input[1] = t;
	total = total+(prpMain.Input[1] * prpMain.Weight[1]);
	if (total > prpMain.Threshold)
		cout << "Output = 1 since Neuron is activated.";
	else if(total<prpMain.Threshold)
		cout << "Output = 0 since Neuron did not get activated.";
    return 0;
}
