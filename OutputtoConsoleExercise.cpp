// writing output to console exercise 

#include <iostream>

using namespace std; 

int main(){

 double Sales = 95000; 
 cout << "Sales: $" << Sales << endl; 

 const double StateTaxRate = .04;
 double StateTax = Sales * StateTaxRate;
 cout << "State_Tax is $" << StateTax << endl;

 
 const double County_TaxRate = .02;
 double CountyTax = Sales * County_TaxRate;
 cout << "countyTax is $" << CountyTax << endl;

 double TotalTax = StateTax + CountyTax;
 cout << "TotalTax is $" << TotalTax << endl;
 return 0; 
 
}    