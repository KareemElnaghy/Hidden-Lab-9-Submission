//
//  HashTable.h
//  Hidden Lab 9
//
//  Created by Kareem Elnaghy on 5/4/23.
//

#ifndef HashTable_h
#define HashTable_h
#include <list>
using namespace std;

class HashTable     //used the list STL instead of making my own linked list not to waste time
{
private:
    list <int> *myList;    //creates a pointer to a list
    int size;           //# of values
    
public:
    HashTable():size(10)        //default constructer sets the size to 10
    {
        myList = new list <int> [size];        //creates a new array of type list
    }
    
    HashTable(int x):size(x)            //paramterized sets the size to value passed
    {
        myList = new list <int> [size];    //creates a new array of type list
    }
    
    ~HashTable()        //destructor to delete list pointer
    {
        delete []myList;
    }
    
    int hash (int x)   //hash fucntion that sets the index to the remainder of the value divided by the size
    {
        return x % size;
    }
    
    void insertVal(int x)       //insert function calls the hash function to receive the index and to push the value into the list at the specific element
    {
        int index = hash(x);
        myList[index].push_front(x);
    }
    
    void fillEmpty()        //function i added to set all the empty indicies to -1
    {
        for(int i = 0; i<size; i++)
        {
            if(myList[i].empty())
                myList[i].push_front(-1);
        }
    }
    
    void printHash()    //print function the outputs the hash table using an iterator to iterate through teh list.
    {
        fillEmpty();
        
        for(int i = 0; i<size; i ++)
        {
            cout<< "Index "<<i<<": ";
            for(list<int>::iterator it = myList[i].begin(); it != myList[i].end(); it++)
            {
                if(it == myList[i].begin())
                    cout<<*it;
                else
                cout<<" --> "<<*it;
            }
            cout<<endl;
        }
    }
};

#endif /* HashTable_h */
