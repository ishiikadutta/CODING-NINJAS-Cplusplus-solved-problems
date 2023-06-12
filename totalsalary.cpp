/*Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and 
the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only. */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double basic,hra,da,allow,pf,salary;
    char grade;
    cin>> basic;
    cin>> grade;
    hra=0.20*basic;
    da=0.50*basic;
    pf=0.11*basic;

    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    salary=basic+hra+da+allow-pf;
    cout<<salary<<endl;
    cout<<round(salary);

}