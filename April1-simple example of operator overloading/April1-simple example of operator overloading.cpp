// April1-simple example of operator overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<algorithm> //spoiler alert: this is an IMPORTANT header file
#include<iomanip>
#include <iostream>
#include<vector> 

using namespace std; 


class Shoe
{
public: 

	string name; //Adidas somethings
	int size; //size 7, 11, etc. 

	float cost; //ex: 13.99


	/*compares shoes by their COSTS (not by their sizes - this choice was ARBITRARY) */
	bool operator < (Shoe rightHandShoe)
	{
		if (this->cost < rightHandShoe.cost)
		{
			return true; 
		}

		else
		{
			return false; 
		}
	};

	bool isGreaterShoeSize(Shoe rhsShoe)
	{
		return this->size > rhsShoe.size; 
	}
	
	void print() const
	{
		const int NAME_COLUMN_WIDTH = 25;
		const int SIZE_COLUMN_WIDTH = 10;
		const int COST_COLUMN_WIDTH = 10; 

		const int TOTAL_ROW_WIDTH = NAME_COLUMN_WIDTH + SIZE_COLUMN_WIDTH + COST_COLUMN_WIDTH;
		
		string separator(TOTAL_ROW_WIDTH, '=');
		
		//cout << "=================================================" //the dumb way

		cout << separator << "\n";

		cout << left << setw(NAME_COLUMN_WIDTH) << name;
		cout << left << setw(SIZE_COLUMN_WIDTH) << size;
		cout << left << setw(COST_COLUMN_WIDTH) << cost;
		cout << "\n";

	}
}; //end Shoe class def.


void printShoeList(const vector<Shoe> shoeList)
{

	const int NAME_COLUMN_WIDTH = 25;
	const int SIZE_COLUMN_WIDTH = 10;
	const int COST_COLUMN_WIDTH = 10;

	cout << left << setw(NAME_COLUMN_WIDTH) << "NAME";
	cout << left << setw(SIZE_COLUMN_WIDTH) << "SIZE";
	cout << left << setw(COST_COLUMN_WIDTH) << "COST (USD)";
	cout << "\n";
	const int TOTAL_ROW_WIDTH = NAME_COLUMN_WIDTH + SIZE_COLUMN_WIDTH + COST_COLUMN_WIDTH;


	for (Shoe currentShoe : shoeList) //range-based for loop (no use of int i = 0; ./.blah
	{
		//cout << currentShoe << "\n"; //how to make this work? (remind me next time, if you like
		currentShoe.print(); 
	}
}

void demoSortingCustomObjects()
{
	Shoe myShoe = { "Altra Olympus V", 11, 139.99 }; //Altra Olympus 5

	Shoe JJsShoe = { "Yeezy's", 10, 59.99 }; //Yeezys! 

	Shoe theMostExpensiveAmazonShoe =
	{
		"Nike Men's Free Run",
		9,
		780.99
	};

	vector<Shoe> shoes =
	{
		myShoe,
		JJsShoe,
		theMostExpensiveAmazonShoe,
		{"Adidas", 6, 45.99} //this is called an "anonymous object" in OOP (C++
	};

	//shoes.at(1).print(); 
	//shoes[0].print(); 

	cout << "\n\nBEFORE sorting the shoes:\n";
	printShoeList(shoes);

	std::sort(shoes.begin(), shoes.end()); //sorted by COST

	cout << "\n\nAFTER sorting the shoes:\n";
	//call print
	printShoeList(shoes);
}


//template

//void print(int a)
//{
//	cout << a << "\n";
//}
//
//void print(const std::string& input)
//{
//	cout << input << "\n";
//}


/*Template keyword allows for "generic" data types*/
template<typename TheDataType>
void print(TheDataType theThang) //thang is an homage to Rick from The Walking Dead
{
	cout << theThan << "\n";
}

int main()
{
	//print(5); 

	//print("adsfasdf");

	print("zerba");

	print(1); 

	print(1.23);

	print(true); 

}
