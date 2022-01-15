#include <bits/stdc++.h>
#include<iostream>
using namespace std; 
void merge(int a[],int lb,int mid,int ub)
{
   
    int i=lb;
    int j=mid+1;
  
    int k=lb;
     int b[ub+1];
    while (i<=mid&&j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
    else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if (i>mid)
    {
        while (j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
        else
        {
            while(i<=mid)
        {
            b[k]=a[i];
            i++;
             k++;
        }
        }
       
    for (int k = lb; k <= ub; k++)
    {
       a[k]=b[k]; 
    }
}
void MergeSort(int a[],int lb,int ub)
{
     int mid;
    if (lb<ub)
    {
       mid=(lb+ub)/2;
       MergeSort(a,lb,mid);
       MergeSort(a,mid+1,ub);
merge(a,lb,mid,ub);
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
    MergeSort(a,0,n-1);
      std::cout << "sorted Array are"<< std::endl;
      for (int k = 0; k <n; k++)
    {
    std::cout <<a[k] << std::endl;
    }
    return 0;
}