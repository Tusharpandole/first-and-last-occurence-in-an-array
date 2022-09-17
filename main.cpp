#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int upperMostElement(int arr[] , int size , int element)
{
    int s = 0 ; 
    int e = size - 1 ;
    int mid = s + (e-s)/2 ;
    int ans = -1 ;
    while(s <= e)
    {
        if(arr[mid] == element)
        {
            ans = mid ;
            e = mid-1 ;
        }
     else   if(arr[mid] < element)
        {
            s = mid+1 ;
            
        }
        else
        {
            e = mid-1 ;
        }
        mid = s+ (e-s)/2 ;
    }
    return ans ;
}

int lowerMostElement(int arr[] , int size , int element)
{
    int s = 0 ; 
    int e = size - 1 ;
    int mid = s + (e-s)/2 ;
    int ans = -1 ;
    while(s <= e)
    {
        if(arr[mid] == element)
        {
            ans = mid ;
           s = mid+1 ;
        }
     else   if(arr[mid] < element)
        {
            s = mid+1 ;
            
        }
        else
        {
            e = mid-1 ;
        }
        mid = s+ (e-s)/2 ;
    }
    return ans ;
}


int main()
{
   int arr[] = {1 , 3 , 4 , 8 , 8 , 8 , 8 , 8 , 8 , 9 ,9 , 9} ;
   int size = sizeof(arr)/sizeof(int) ;
 int a =   upperMostElement(arr ,size , 9) ;
 int b = lowerMostElement(arr , size , 9) ;
 cout << "The upper most elemet is at " << a << endl ;
 cout << "The lower most elememt is at "<< b << endl ;
    return 0;
}