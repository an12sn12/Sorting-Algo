#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void CountingSort(int a[],int n,int k)
{
    int b[n];
    int count[k];
     // Initialize count array with all zeros.//
     for (int i = 0; i <= k; i++)
    {
        count[i]=0;
    } 
     // Store the count of each element//
for (int i = 0; i < n; i++)
{
   count[a[i]]++; 
}
// Store the cummulative count of each array//
for (int i = 1; i <=k; i++)
{
    count[i]=count[i]+count[i-1];
}
 // Find the index of each element of the original array in count array, and
  // place the elements in output array b//
for (int i = n-1; i>=0; i--)
{
    b[--count[a[i]]]=a[i];
}
  // Copy the sorted elements into original array//
for (int i = 0; i < n; i++)
{
   a[i]=b[i]; 
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
    
  // Find the largest element of the array//
    int k=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>k)
        {
            k=a[i];
           
        }
    }
   /* cout<<k;
    cout << "\n" ;
   int count[k];
    for (int i = 0; i <= k; i++)
    {
        count[i]=0;
    } 
      for (int i = 0; i <=k; i++)
    {
        std::cout <<count[i]<<" ";
    } 
    */
    CountingSort(a,n,k);
    cout<<"\n";
    std::cout << "sorted Are" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}