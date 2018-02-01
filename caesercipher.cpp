/**
    author:Nikhil Hegde
    Program: C++ code to implement Caeser cipher
*/

#include<iostream>
#include<cstring>
using namespace std;


#define KEY 3                           //key is 3 for caeser cipher

//function to encrypt the string using caeser cipher
string encrypt(string str,int shft)
{
    string result="";
    int i;
    for(i=0;i<str.length();i++)
    {
        if(str.at(i)==' ')
        {
            result+=" ";
        }

        else if(isupper(str[i]))
        {
            result+=char(int(str[i]+KEY-65)%26+65);
        }
        else
        {
            result+=char(int(str[i]+KEY-97)%26+97);
        }
    }
    return result;

}


//main function
int main()
{

    int i;

    string PT;
    cout<<"Enter the plain text:"<<" ";
    getline(cin,PT);
    cout<<"Plain Text: ";
    cout<< PT<<endl;;

    cout<<"Cipher Text:"<<encrypt(PT,KEY);



    return 0;
}
