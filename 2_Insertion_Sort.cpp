#include <bits/stdc++.h>
#include<iostream>   //5 4 10 1 6 2//
using namespace std;
int main()
{
    int n;
    std::cout << "enter the size of Array" << std::endl;
    cin>>n;
    int a[n];
    std::cout << "enter the element of Array" << std::endl;
    for (int  i = 0; i < n; i++)
    {
        
        cin>>a[i];
        
    }
    std::cout << "enterted Array are :" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << std::endl;
    }
    for (int i = 1; i < n; i++)
    {
        int temp=a[i];
        int j;
        for (j = i-1;j >=0&&a[j]>temp; j--)
        {
           a[j+1]=a[j];
        }
       a[j+1]=temp;
    }
    std::cout << "sorted Array are" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << std::endl;
    }
    return 0;
}