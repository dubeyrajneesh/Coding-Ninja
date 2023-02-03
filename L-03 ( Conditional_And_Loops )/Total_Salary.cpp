#include <bits/stdc++.h>
using namespace std;

int total_Salary(int basic, char grade) {
  
  double hra, da, pf;

  hra = 0.2 * basic;
  da = 0.5 * basic;
  pf = 0.11 * basic;

  int allowance ;

  
  if (grade == 'A')
   {
    allowance = 1700;
  } 
  else if (grade == 'B')
   {
    allowance = 1500;
  } 
  else {
    allowance = 1300;
  }
  int gross_salary;

  
  gross_salary = round(basic + hra + da + allowance - pf);
  return gross_salary;
}


int main() {
  int basic;
  char grade;

  cin >> basic >> grade;

  cout << total_Salary(basic, grade);
}
