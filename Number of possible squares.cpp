/* Calculate the number of possible squares in a N*N chess board - 
    logic - 
        in 8*8 chess board, number of squares are - (8*8)+(7*7)+(6*6)+(5*5)......(1*1), 
        Similarly, for n*n matrix, it will be - (n*n)+(n-1*n-1).....(1*1)*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    for(int i = n; i>0; i--)
    {
        sum = sum+(i*i);
    }
    cout<<sum;
}
