//
//  main.cpp
//  Hidden Lab 9
//
//  Created by Kareem Elnaghy on 5/4/23.
//

#include <iostream>
#include "HashTable.h"
#include "BST.h"
int main()
{
    //BST
    BinaryST b;
    BinaryST *root = nullptr;
        root = b.insertValue(root, 9); //creates the first node of the tree and the root points to this first node which stores the value 5
        b.insertValue(root, 11);    //create new nodes on the correct side depending on the value, 11 would go to the right for the root node 9 since it is greater.
        b.insertValue(root, 18);
        b.insertValue(root, 3);
        b.insertValue(root, 4);
        b.insertValue(root, 12);
        b.insertValue(root, 3);
        b.insertValue(root, 4);
        b.insertValue(root, 2);
        b.insertValue(root, 20);
   BinaryST *temp = b.search(root, 12);
    //temp will either point to Null showing that the search function has went through the entire tree and not found the value or it will point to the node that stores the value we are searching for.
    
    if(temp)        //checks if the temp pointer is not pointing to NULL, then the value has been found
        cout<<"Value found"<<endl;
    else
        cout<<"value not found"<<endl;
    cout<<endl;
    //Hashtables
    HashTable hashtable;
    hashtable.insertVal(1);
    hashtable.insertVal(4);
    hashtable.insertVal(7);
    hashtable.insertVal(1);
    hashtable.insertVal(5);
    hashtable.insertVal(2);
    hashtable.insertVal(4);
    hashtable.insertVal(1);
    hashtable.insertVal(3);
    hashtable.insertVal(5);

    hashtable.printHash();
    cout<<" -1 = empty"<<endl;
}


