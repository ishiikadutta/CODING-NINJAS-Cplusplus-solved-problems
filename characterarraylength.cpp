/* WAC to create a function which returns the length of the character array given in input */
#include<iostream>
using namespace std;

int length(char input[])
{
    int count=0;
    for(int i=0;input[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

//length = strlen(name);    (we can directly use this to determine the length of character arrays


int main()
{
    char name[100];
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<< "Name : "<<name<<endl;
    cout<< "Length : "<<length(name)<<endl;

}