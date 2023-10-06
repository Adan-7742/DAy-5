

// 6 hour 30 min compelete

//logical operators.................

#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;
//formatting our output..................

int format() {

	//endl   format
	// \n is also use to move to next line
	cout << "=<===========================================================================" << endl;

	cout << "Warda" << endl << "Adan" << endl;

	//flush:  cause imidiate sending of data  to device connected to stream.



	cout << "=<===========================================================================" << endl;
	//setw()  : 
	// can be right justified ... cout<<right; and cout <<setw(10) <<"name";
	// we can also do same by declearing a variable and we will use it in setw......
	//internal justified data.

	cout << setw(10) << "name" << setw(10) << "lastname" << setw(5) << "Age" << endl;
	cout << setw(10) << "Warda" << setw(10) << "Adan" << setw(5) << "21" << endl;
	cout << setw(10) << "Ayesha" << setw(10) << "Yousaf" << setw(5) << "18" << endl;
	cout << setw(10) << "Affifa " << setw(10) << "Naseer" << setw(5) << "17" << endl;


	//boolalpha to chk the booliean values
	cout << "=<===========================================================================" << endl;



	//set fill
	cout << left;
	cout << setfill('_');
	cout << setw(10) << "name" << setw(10) << "lastname" << setw(5) << "Age" << endl;
	cout << setw(10) << "Warda" << setw(10) << "Adan" << setw(5) << "21" << endl;
	cout << setw(10) << "Ayesha" << setw(10) << "Yousaf" << setw(5) << "18" << endl;
	cout << setw(10) << "Affifa " << setw(10) << "Naseer" << setw(5) << "17" << endl;

	cout << "=====================================================================" << endl;


	//showpos   use for data signs
	int pos_num{ 10 };
	int neg_num{ -29 };


	cout << "without pos function we have" << endl;
	cout << "positive : " << pos_num << endl;
	cout << "nagetive : " << neg_num << endl;

	cout << "With pos function we have" << endl;
	cout << showpos;
	cout << "positive : " << pos_num << endl;
	cout << "nagetive : " << neg_num << endl;


	cout << "==============================================================" << endl;
	// dec hex oct we will use to show values in these
	int pos{ 10 };
	int neg{ -89 };
	double value{ 123449 };

	cout << "int different bases we have ......." << endl;
	cout << "pos (dec)" << dec <<pos << endl;
	cout << "neg (hex)" << hex << neg << endl;
	cout << "value (oct)" << oct<<value<< endl;


	//show base and noshowbase



	cout << "===============================================================================" << endl;
	//upercase and lower case
	cout << uppercase;
	cout << "int different bases in uppercase form......." << endl;
	cout << "pos (dec)" << dec << pos << endl;
	cout << "neg (hex)" << hex << neg << endl;
	cout << "value (oct)" << oct << value << endl;


    //scientific and fixed method


	cout << "==================================================" << endl;
	//set precission
	double w;
	w = 23.8293237362832238378321921712524912; 
		cout <<"will show its default pression "<< w << endl;

	cout << setprecision(10);

	cout << "pression at 10 is : " << w << endl;


	cout << setprecision(14);

	cout << "pression at 14 is : " << w << endl;


	cout << setprecision(30);

	cout << "pression at 30 is : " << w << endl;
	//show point 

	return 0;
}










//and operation on values to chk weather it is true or not

int and_opp() {

	bool a{ true };
	bool b{ false };
	bool c{ true };

	cout << boolalpha<<endl;
	cout << "a : " << a<<endl;
	cout << "b : " << b << endl;
	cout << "c : " <<c<< endl;

	cout << "Basic And Operations ..................."<<endl;
	cout << "a && b : " << (a && b)<<endl;
	cout << "a && c : " << (a && b) <<endl;
	cout << "a && b && c: " << (a && b && c)<<endl;

	return 0;

}
int or_opp() {

	bool a{ true };
	bool b{ false };
	bool c{ true };

	cout << boolalpha << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;

	cout << "Basic Or Operations ..................." << endl;
	cout << "a && b : " << (a || b) << endl;
	cout << "a && c : " << (a || b) << endl;
	cout << "a && b && c: " << (a || b || c) << endl;

	return 0;

}
// not operator
int not_opp() {

	bool a{ true };
	bool b{ false };
	bool c{ true };

	cout << boolalpha << endl;
	cout << "Not Operator use......." << endl;

	cout << "a : " << !a << endl;
	cout << "b : " << !b << endl;
	cout << "c : " << !c << endl;
	return 0;
	
}

int main()
{   

	format();
	and_opp();
	or_opp();
	not_opp();
}
