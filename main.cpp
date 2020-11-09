/******************************************************************************

Bridget Naylor
Date: 11/9/2020
Lab: CECS 282 Lab Section Lab 10 Part 2

*******************************************************************************/
// listplus.cpp

// demonstrates reverse(), merge(), and unique()

#include <iostream>

#include <list>

#include<algorithm>

using namespace std;

int main()

   {
   //Create 2 lists called list1 and list2. Store integer numbers.

   int arr1[] = { 40, 30, 20, 10 };

   int arr2[] = { 15, 20, 25, 30, 35 };
   
   list<int> list1;
   list<int> list2;


  //Determine the array size of arr1 and arr2
  int size1 = *(&arr1 + 1) - arr1;
  int size2 = *(&arr2 + 1) - arr2;

   //Push elements of array arr1 into list1
   for( int j = 0; j < size1; j++)
   {
       list1.push_back( arr1[j] ); 
   }
 
  //Push elements of array arr2 into list2
    for( int j = 0; j < size2; j++)
    {
       list2.push_back( arr2[j] ); 
    }
 

  // reverse list1: 10 20 30 40
    list1.reverse(); 

  // merge list2 into list1
    list1.merge(list2); 
  
// remove duplicate 20 and 30 from list 1
    list1.unique(); 
 //Diplay the content of list1 using iterator
    list<int>::iterator iter; //iterator to list-of-ints
    for(iter = list1.begin(); iter != list1.end(); iter++)
        cout << *iter << ' '; //display the list
        cout << endl;


   //Display the list1 in reverse
    for(std::list<int>::reverse_iterator rev=list1.rbegin(); rev!=list1.rend(); ++rev)
        cout << *rev << ' '; //display the list
        cout << endl;
        
   //Find 25 in the list. If it's found, display "Found 25";otherwise, display "Not found 25"
    iter = find(list1.begin(), list1.end(), 25);
    if( iter != list1.end() )
    {
        cout << "\nFound 25\n";
    }
    else
    {
        cout << "\nNot Found 25\n";
    }
        

   return 0;

   }
