#include <bits/stdc++.h>
#include<iostream>
using namespace std;  //5 6 7 3//->5 6 3 7->1//
int main()           //5 3 6 7->2//->3 5 6 7->3//
{                    //5 4 6 7//->4 5 6 7//
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
    //logic//
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (int j = 0;j < n-1-i; j++)//n-1-i//
        {
            if (a[j]>a[j+1])
            {
                int temp;
                temp=a[j];//7->temp=7//
                a[j]=a[j+1]; //a[j]->3//
                a[j+1]=temp;//a[j+1]->7//
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    std::cout << "sorted Array are" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << std::endl;
    }
    return 0;
}