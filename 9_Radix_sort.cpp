#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int getMax(int a[],int n)
{
    int max=a[0];
    for (int  i = 1; i < n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
void CountingSort(int a[],int n,int place)
{
    int b[n];
     const int max = 10;
    int count[max];
     // Initialize count array with all zeros.//
     for (int i = 0; i <max; i++)
    {
        count[i]=0;
    } 
     // Store the count of each element//
for (int i = 0; i <n; i++)
{
   count[(a[i]/place)%10]++; 
}
// Store the cumulative count of each array//
for (int i = 1; i<max; i++)
{
    count[i]=count[i]+count[i-1];
}
 // Find the index of each element of the original array in count array, and
  // place the elements in output array b//
for (int i = n-1; i>=0; i--)
{
    b[--count[(a[i]/place)%10]]=a[i];
}
  // Copy the sorted elements into original array//
for (int i = 0; i < n; i++)
{
   a[i]=b[i]; 
}
}
void RadixSort(int a[],int n)
{
    int max=getMax(a,n);
    for (int place = 1; max/place>0; place *=10)
    {
        CountingSort(a,n,place);
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
        cout << a[i]<<" ";
    }
RadixSort(a,n);
       cout<<"\n";
    std::cout << "sorted Are" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}