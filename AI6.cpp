#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{

 string userinput;
 string stroke;
 string flu;
 string cold;
 
 
 cout << fixed << "---------------------Expert System: MEDICAL FIELD PROGRAM.----------------------" << endl << endl << endl;
 
 cout << fixed << "---------------------------DISEASES INCLUDED IN PROGRAM-------------------------" << endl;
 cout << fixed << "------------------------------------[Stroke]------------------------------------" << endl;
 cout << fixed << "------------------------------------[FLU]---------------------------------------" << endl;
 cout << fixed << "------------------------------------[COLD]--------------------------------------" << endl << endl;
 
 
 while(userinput != "EXIT || exit"){

 cout << "please enter patient name: " << endl << endl;
 cin  >> userinput;
 
 cout << "Does have the following symptom: Headache " << endl;
 cin  >> userinput;
 
 cout << "Does have the following symptom: Runny nose " << endl;
 cin  >> userinput;
 
 cout << "Does have the following symptom: Sore throat " << endl;
 cin  >> userinput;
  
 cout << "Does have the following symptom: Cough " << endl;
 cin  >> userinput;
 
 cout << "Does have the following symptom: Congestion " << endl;
 cin  >> userinput;
 
 cout << "Does have the following symptom: Body Ache or Mild Headache Sneezing " << endl;
 cin  >> userinput;
 
 cout << "Does have the following symptom: Fever " << endl;
 cin  >> userinput;
 
 }
 

 
 



return 0;

}