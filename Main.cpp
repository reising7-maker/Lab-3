//Includes these libraries in the code
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

//Makes it so std isnt needed in each line
using namespace std;

//Start of function
int main() 
{
	//File Input
	ifstream infile;
	//Opens the data.dat file
	infile.open("C:/Users/reising7/source/repos/Lab 3/inMeanStd.dat");

	//Gives defenition for all 4 inputs
	int Input1, Input2, Input3, Input4;

	//Storing all 4 inputs from data.dat
	infile >> Input1 >> Input2 >> Input3 >> Input4;

	//Creates the mean for the 4 inputs with decimals
	double mean = (Input1 + Input2 + Input3 + Input4) / 4.0; 

	//Creates Standard deviation for the 4 inputs with decimals 
	double SD = std::sqrt(((Input1 - mean)*(Input1 - mean) + (Input2 - mean)*(Input2 - mean) + (Input3 - mean)*(Input3 - mean) + (Input4 - mean)*(Input4 - mean))/ 4.0);


	//Tells user what each input is
	cout << "Data from the file 1: " << Input1 << endl;
	cout << "Data from the file 2: " << Input2 << endl;
	cout << "Data from the file 3: " << Input3 << endl;
	cout << "Data from the file 4: " << Input4 << endl;
	cout << "" << endl;
	cout << "Mean of those integers: " << mean << endl;
	cout << "Standard Deviation of integers: " << SD << endl;
	
	


	//Output file
	ofstream Output;
	//Opens Output file
	Output.open("outMeanStd.dat", ios::app);

	//Stores the input data into the output data
	Output << "Data from the file: " << Input1 << endl;
	Output << "Data from the file: " << Input2 << endl;
	Output << "Data from the file: " << Input3 << endl;
	Output << "Data from the file: " << Input4 << endl;
	Output << "Mean of those integers: " << mean << endl;
	Output << "Standard Deviation of integers: " << SD << endl;
	Output << "" << endl;


	//Closes both files
	infile.close();
	Output.close();

	//Shows there is no error
	return 0;


}