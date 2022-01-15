#include <bits/stdc++.h>
#include<iostream>
using namespace std; 
void maxheaping(int a[],int n,int i){
    int largest=i;
    int l=(2*i)+1;
    int r=(2*i)+2;
    while (l<n&&a[l]>a[largest])
    {
        largest=l;
    }
    while (r<n&&a[r]>a[largest])
    {
        largest=r;
    }
    if (largest!=i)
    {
        int temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        maxheaping(a,n,largest);
    }
}
void Heapsort(int a[],int n)
{
    for (int i = (n/2)-1; i >=0; i--)
    {
        maxheaping(a,n,i);
    }
    for (int i = n-1; i>=0; i--)
    {
        int temp;
        temp=a[i];
        a[i]=a[0];
        a[0]=temp;
        maxheaping(a,i,0);
    }
}
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
    Heapsort(a,n);
      std::cout << "sorted Array are"<< std::endl;
      for (int i = 0; i <n; i++)
    {
    std::cout <<a[i] << std::endl;
    }
    return 0;
}