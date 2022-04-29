#include <iostream>
#include<fstream>
using namespace std;

void check_left_recursion(int n)
{
    for (int x=0;x<n;x++)
    {
    string str;
    int len;
    string A,a,b;
    cout<<"\nEnter String: ";
    cin>>str;
    len = str.length();
    
    ofstream file;
    file.open("no_left_recursion.txt",ios::in | ios::app);

    for(int i=0;i<len;i++)
    {
        if (str[0]==str[3])
        {
            cout<<"Grammar is left recursive"<<"\n";
            A.push_back(str[3]);
            for (int j =3; j<len;j++)
            {
                if (str[j]=='/')
                {
                    for(int k=4;k<j;k++)
                    {
                        
                        a.push_back(str[k]);
                        
                    }
                    for(int l=j+1;l<len;l++)
                    {
                        b.push_back(str[l]);
                        
                    }
                }
            }
            string new_A,A_dash ;
    
            new_A = A+"->"+b+A+"`";
            A_dash = A+"`->"+a+A+"`/#";
            file<<new_A<<"\n"<<A_dash<<"\n";
    
            cout<<"\n"<<new_A<<"\n"<<A_dash<<"\n";
            break;
        }
        else
        {
            cout<<"Grammar is not left recusive";
            file<<str<<"\n";
            break;
            
        }
    }
    file.close();
    }
    
    
}

int main()
{
    int n;
    cout<<"Enter number of productions: ";
    cin>>n;
    check_left_recursion(n);
    return 0;
    
}