#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

// csc231 program1 sample c++ code 9/16/2019
//

int main()
{
string s1 = "c:\\Users\\Kevin Byron\\";
string outFile;
cout << "\nPlease enter the output filename: ";
cin >> outFile;
string inFileAdd2 = s1 + outFile;
ofstream out_stream;
cout << "File name is " + inFileAdd2 + "\n";
out_stream.open(inFileAdd2.c_str(), ios::out);
if (out_stream.fail())
{
cout << "Error!! Output file opening failed.";
exit(1);
}
out_stream << "CSC231-1301: Discrete Structures and Applications to Computer Science BMCC/CUNY Fall 2019" << endl;
out_stream <<"Program project #1 specifications: Basic set operations" << endl;
out_stream << "Artem Popovych ID:23579191" << endl;
//insert for setA
std::set<std::string> setA;
setA.insert("P1");
setA.insert("P12");
setA.insert("P18");
setA.insert("P20");
setA.insert("P27");
setA.insert("P29");
setA.insert("P6");
setA.insert("P7");
// Display Set size setA
out_stream << "A = " << setA.size() << std::endl;
out_stream << endl;
//Display Elements in A
 out_stream <<"A ={";
for(std::set<std::string>::iterator it = setA.begin(); it !=setA.end(); ++it)
 out_stream << ' ' << *it;
 out_stream <<"}\n";
 out_stream << endl;

//insert for setB
std::set<std::string> setB;
setB.insert("P1");
setB.insert("P12");
setB.insert("P23");
setB.insert("P26");
setB.insert("P28");
setB.insert("P8");
// Display Set size setB
out_stream << "B = " << setB.size() << std::endl;
out_stream << endl;
//Display Elements in B
out_stream <<" B={";
for(std::set<std::string>::iterator it = setB.begin(); it !=setB.end(); ++it)
out_stream << ' ' << *it;
out_stream <<"}\n";
out_stream << endl;

//insert for setC
std::set<std::string> setC;
setC.insert("P1");
setC.insert("P13");
setC.insert("P14");
setC.insert("P15");
setC.insert("P2");
setC.insert("P22");
setC.insert("P23");
setC.insert("P25");
setC.insert("P29");
setC.insert("P7");
// Display Set size setC
out_stream << "C = " << setC.size() << std::endl;
out_stream << endl;
//Display Elements in C
out_stream <<"C ={";
for(std::set<std::string>::iterator it = setC.begin(); it !=setC.end(); ++it)
out_stream << ' ' << *it;
out_stream <<"}\n";

//Set Union in A,B
	std::set<string> union1;
	std::set_union(setA.begin(), setA.end(),setB.begin(),setB.end(),
					std::inserter(union1, union1.begin()));
  out_stream << "\n\nUnion in A + B:" ;
// Display Union A,B
  for (std::set<std::string>::iterator it = union1.begin(); it != union1.end(); ++it)
	out_stream << ' ' << *it;
  out_stream << endl;

    //Set Union in A,C
	std::set<string> union2;
	std::set_union(setA.begin(),setA.end(),setC.begin(),setC.end(),
					std::inserter(union2, union2.begin()));
  out_stream << "\nUnion in A + C:" ;
// Display Union A,C
  for (std::set<std::string>::iterator it = union2.begin(); it != union2.end(); ++it)
	out_stream << ' ' << *it;
  out_stream << endl;

      //Set Union in A,C
	std::set<string> union3;
	std::set_union(setB.begin(),setB.end(),setC.begin(),setC.end(),
					std::inserter(union3, union3.begin()));
  out_stream << "\nUnion in B + C:" ;
// Display Union B,C
  for (std::set<std::string>::iterator it = union3.begin(); it != union3.end(); ++it)
		out_stream << ' ' << *it;
    out_stream << endl;

//Set Intersection A,B
set<string> intersect;
  set_intersection(setA.begin(),setA.end(),setB.begin(),setB.end(),
                  std::inserter(intersect,intersect.begin()));
  out_stream << "\n\nIntersection  AxB:" ;
//Display intersection A,B
  for (std::set<std::string>::iterator it = intersect.begin(); it != intersect.end(); ++it)
	out_stream << ' ' << *it;
  out_stream << endl;

//Set Intersection A,C
set<string> intersect1;
  set_intersection(setA.begin(),setA.end(),setC.begin(),setC.end(),
                  std::inserter(intersect1,intersect1.begin()));
out_stream << "\nIntersection in AxC:" ;
//Display intersection A,C
  for (std::set<std::string>::iterator it = intersect1.begin(); it != intersect1.end(); ++it)
out_stream << ' ' << *it;
out_stream << endl;

//Set Intersection B,C
set<string> intersect2;
  set_intersection(setB.begin(),setB.end(),setC.begin(),setC.end(),
                  std::inserter(intersect2,intersect2.begin()));
out_stream << "\nIntersection in BxC:" ;
//Display intersection B,C
  for (std::set<std::string>::iterator it = intersect2.begin(); it != intersect2.end(); ++it)
out_stream << ' ' << *it;
out_stream << endl;

std::set<string> difference;
//Set Difference A,B
std::set_difference(setA.begin(),setA.end(),setB.begin(),setB.end(),
  std::inserter(difference, difference.end()));
out_stream<< "\nDifference in A - B:" ;
//Display Difference A,B
for (std::set<std::string>::iterator it = difference.begin(); it != difference.end(); ++it)
out_stream << ' ' << *it;
out_stream << endl;

std::set<string> difference1;
//Set Difference B and A
std::set_difference(setB.begin(),setB.end(),setA.begin(),setA.end(),
  std::inserter(difference1, difference1.end()));
out_stream<< "\nDifference in B - A:" ;
//Display Difference B and A
for (std::set<std::string>::iterator it = difference1.begin(); it != difference1.end(); ++it)
out_stream << ' ' << *it;
out_stream << endl;

std::set<string> difference2;
//Set Difference A and C
std::set_difference(setA.begin(),setA.end(),setC.begin(),setC.end(),
  std::inserter(difference2, difference2.end()));
out_stream<< "\nDifference in A - C:" ;
//Display Difference A and C
for (std::set<std::string>::iterator it = difference2.begin(); it != difference2.end(); ++it)
out_stream<< ' ' << *it;
out_stream << endl;


std::set<string> difference3;
//Set Difference C and A
std::set_difference(setC.begin(),setC.end(),setA.begin(),setA.end(),
  std::inserter(difference3, difference3.end()));
out_stream<< "\nDifference in C - A:" ;
//Display Difference C and A
for (std::set<std::string>::iterator it = difference3.begin(); it != difference3.end(); ++it)
out_stream<< ' ' << *it;
out_stream << endl;

std::set<string> difference4;
//Set Difference B and C
std::set_difference(setB.begin(),setB.end(),setC.begin(),setC.end(),
  std::inserter(difference4, difference4.end()));
out_stream<< "\nDifference in B - C:" ;
//Display Difference B and C
  for (std::set<std::string>::iterator it = difference4.begin(); it != difference4.end(); ++it)
out_stream<< ' ' << *it;
out_stream << endl;

std::set<string> difference5;
//Set Difference C and B
std::set_difference(setC.begin(),setC.end(),setB.begin(),setB.end(),
  std::inserter(difference5, difference5.end()));
out_stream<< "\nDifference in C - B:" ;
//Display Difference C and B
  for (std::set<std::string>::iterator it = difference5.begin(); it != difference5.end(); ++it)
out_stream<< ' ' << *it;
out_stream << endl;

out_stream << "Hello. Done.\n";
}
