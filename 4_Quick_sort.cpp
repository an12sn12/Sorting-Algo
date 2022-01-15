#include <bits/stdc++.h>
#include<iostream>
using namespace std; 
int partition (int a[],int start,int end)
{
int pivot=a[start];
int i=start+1;
int j=end;
do
{
    while(a[i]<=pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
} while(i<j);
int temp=a[start];
a[start]=a[j];
a[j]=temp;
return j;
}
void Quicksort(int a[],int start,int end)
{
    int partitionIndex;
    if (start<end)
    {
        partitionIndex=partition (a,start,end);
        Quicksort(a,start,partitionIndex-1);
           Quicksort(a,partitionIndex+1,end);
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
    Quicksort(a,0,n-1);
    std::cout << "Sorted Array are" << std::endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}