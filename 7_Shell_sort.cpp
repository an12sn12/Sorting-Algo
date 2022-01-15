#include <bits/stdc++.h>
using namespace std; 
void ShellSort(int a[],int n)
{
     for (int gap= n/2; gap>0; gap/=2)
    {
        for (int j = gap; j<n; j++)
        {
            for (int i = j-gap; i >= 0; i-=gap)
            {
                if (a[i+gap]>a[i])
                {
                    break;
                }
                else
                {
                    int temp=a[i];
                    a[i]=a[i+gap];
                    a[i+gap]=temp;
                }
            }
        }
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
   ShellSort(a,n);
     std::cout << "Sorted Array are " << std::endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}