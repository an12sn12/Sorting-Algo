#include<bits/stdc++.h>
#include<iostream>
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
    for (int  i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
        }
        if (min!=i)
        {
            int temp;
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
      std::cout << "sorted Array are" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << std::endl;
    }
    return 0;
}