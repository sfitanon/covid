#include <iostream>
#include<string>
using namespace std;
void Quadruples(string t[],int n)
{
    cout<<"\n\tQuadruples\n op\t arg1\t arg2\t result";
    for(int i=0; i<n;i++)
    {
        cout<<"\n"<<t[i][3]<<"\t"<<t[i][2]<<"\t"<<t[i][4]<<"\t"<<t[i][0]<<"\n"; 
    }
}

void Triples(string t[],int n)
{
    cout<<"\n\tTriples\n op\t arg1\t arg2";
    for(int i=0; i<n;i++)
    {
        cout<<"\n"<<t[i][3]<<"\t"<<t[i][2]<<"\t"<<t[i][4]<<"\t"<<"\n"; 
    }
}

void input()
{
    string t[10];
    int n;
    cout<<"Enter number of statements: ";
    cin>>n;
    for(int i=0; i <n;i++)
    {
        cin>>t[i];
    }
    Quadruples(t,n);
    Triples(t,n);
}
int main()
{
    input();
    return 0;
}