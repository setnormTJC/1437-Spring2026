//Elizabeth Fanton 1/26/2026 COSCI-II 1437 Lab1a

//get data in then output it
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include <vector>


using namespace std;

//struct
struct IndianFood
{
	string name;
	std::vector<string> ingredients;
	string diet;
	double prep_time;
	double cook_time;
	string flavor_profile;
	string course;
	string state;
	string region;
};

int main()
{
	//defined variables
	ifstream inData;
	ofstream outData;
	string dataString = "";
	int const maxRecipes = 500;

	string testarray[500];
	//array for indian food record
	IndianFood indianFoodRecords[maxRecipes];
	//read in data file then output it
	inData.open("indian_food.csv");//opens file
	//inData.open("C:\\Elizabeth\\Documents\\TJC Stuff\\COSC-II\\12.txt");
	//read data
	//int preptime;

	if (inData.fail())
	{
		cout << "file failed to open.";
		return -1;
	}

	int currentLine = 0;
	while (!inData.eof())
	{
		//string name;
		//string ingredients;
		//string diet;
		//double prep_time;
		//double cook_time;
		//string flavor_profile;
		//string course;
		//string state;
		//string region;


		getline(inData, dataString, ',');

		indianFoodRecords[currentLine].name = dataString; 

		
		getline(inData, dataString, ',');

		indianFoodRecords[currentLine].ingredients = 


		cout << dataString << "\n";

		//inData >> indianFoodRecords[currentLine].name; 
		//inData.ignore(2); //ignores , and space
		//inData >> indianFoodRecords[currentLine].ingredients; 

	}//take off while loop?

	//total time calculations
	/*double total_time = 0;
	total_time = IndianFood.cook_time + IndianFood.prep_time;
	cout << "Total time is: " << total_time << endl;
	//inData >> dataString;//extracts info in file?

	//calculate number of ingredients
	if (double j = 0; indianFoodRecors[i] > 0; j++)
	{
		//indianFoodRecords[i].ingredients = dataString.substr(parseBegin, parseEnd);
		cout << "Number of ingredients: " << indianFoodRecords[i] << endl;
	}*/
	inData.close();//closes file

	return 0;
}