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
	cout << "Here are four numbers:" << endl;
	cout << "First number: " << Input1 << endl;
	cout << "Second number: " << Input2 << endl;
	cout << "Third number: " << Input3 << endl;
	cout << "Fourth number: " << Input4 << endl;
	cout << "" << endl;
	cout << "Mean of those integers: " << mean << endl;
	cout << "Standard Deviation of integers: " << SD << endl;
	cout << "" << endl;



	//Now we will have the user imput 4 numbers
	//Gives identities for the user numbers
	int userNum1 = 0;
	int userNum2 = 0;
	int userNum3 = 0;
	int userNum4 = 0;

	//Allows them to enter their numbers
	cout << "Now you enter 4 numbers" << endl;
	cin >> userNum1;
	cin >> userNum2;
	cin >> userNum3;
	cin >> userNum4;

	//Calculates the users numbers into Mean and Population Standard Deviation
	double userMean = (userNum1 + userNum2 + userNum3 + userNum4) / 4.0;
	double userSD = std::sqrt(((userNum1 - userMean) * (userNum1 - userMean) + (userNum2 - userMean) * (userNum2 - userMean) + (userNum3 - userMean) * (userNum3 - userMean) + (userNum4 - userMean) * (userNum4 - userMean)) / 4.0);

	//Shows their numbers mean and SD
	cout << "Mean of those integers: " << userMean << endl;
	cout << "Standard Deviation of integers: " << userSD << endl;


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

	//Stores the User data into the output data
	Output << "Data from the user: " << userNum1 << endl;
	Output << "Data from the user: " << userNum2 << endl;
	Output << "Data from the user: " << userNum3 << endl;
	Output << "Data from the user: " << userNum4 << endl;
	Output << "Mean of those integers: " << userMean << endl;
	Output << "Standard Deviation of integers: " << userSD << endl;
	Output << "" << endl;


	//Closes both files
	infile.close();
	Output.close();

	//Shows there is no error
	return 0;


}