/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elaheh Aghaarabi
 generate 20 random numbers fpr an array between 1 and 100 and passes the array to the function to print it in reverse order, find the max and min
 *
 * Created on October 16, 2019, 7:41 PM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void printArray (int a[], int size);
void printArrayReverse (int a[], int size);
int maxSearch (int a[], int size);
int minSearch (int a[], int size);

/*
 * 
 */
int main() {
    int randNum [20] , max=100 , min=1, maxNum , minNum;
    
    srand(time(0));
    
    for (int i=0; i<=19 ; i++)
    randNum[i]=rand()%(max+min-1)+min;
    printArray(randNum,20);
    printArrayReverse(randNum,20);
    maxNum= maxSearch (randNum, 20);
    cout << "max number is: " << maxNum << endl;
    minNum= minSearch (randNum, 20);
    cout << "min number is: " << minNum << endl;
    
    
    return 0;
}
void printArray (int a[], int size)
{
    cout << "Random Array : [" ;
 for (int i=0; i< size ; i++)  
 cout <<a[i] << " ";
    cout <<"]"<<endl;
 
}
void printArrayReverse (int a[], int size)
{
    cout << "Random Array in reverse : [" ;
   for (int i=size-1; i >=0 ; i--)  
   cout  <<a[i] << " ";
    cout <<"]"<<endl;
}
int maxSearch (int a[], int size)
{
    int max =a[0];
    for (int i=1; i < size ; i++) 
    {
        if (max < a[i])
            max = a[i];
        
    }
    return max;
    
}
int minSearch (int a[], int size)
{ int min =a[0];
    for (int i=1; i < size ; i++) 
    {
        if (min > a[i])
            min = a[i];
        
    }
    return min;
}

