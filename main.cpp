/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elaheh Aghaarabi
 *
 * Created on October 23, 2019, 7:29 PM
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void sortArray(string arr[],int size);

/*
 * 
 */
int main() {
    
    ifstream  instream;
    string fruit[30];
    int i;
    instream.open("fruits.txt");
    
     if (instream.fail())
   {
       cout << "input file opening failed" << endl;
       exit(1);
   }
    cout << "before sorting:"<< endl;
    do
    {
    
    for  (i=0;i<30;i++)
    {
    instream >> fruit[i];
    cout << fruit[i] << ", ";
    
    }
    
    }
    while (!(instream.eof()));
    
    cout << endl;
    
    sortArray(fruit, 30 );
    cout << "after sorting:"<< endl;
    for (i=0;i<30;i++)
    {
        cout << fruit[i] << ", ";
    }
    

    return 0;
}

void sortArray(string arr[],int size)
{
    string temp;

    for (int i=0; i < size ; i++)
    {
        for(int j=i+1; j<size ; j++)
         {   
        if (arr[i] > arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
            
    }
}
}
            
            
        

