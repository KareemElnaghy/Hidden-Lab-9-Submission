//
//  BST.h
//  Hidden Lab 9
//
//  Created by Kareem Elnaghy on 5/4/23.
//

#ifndef BST_h
#define BST_h
using namespace std;

class BinaryST
{
private:
    int info;   //stores the value
    BinaryST *left; //pointer to left leaf
    BinaryST *right;//pointer to right leaf
    
public:
    BinaryST():info(0), left(nullptr),right(nullptr)    //default constructur sets pointers to NULL and sets the value to 0
    {
        
    }
    
    BinaryST(int x):left(nullptr),right(nullptr)    //parameterized constructer sets pointers to NULL and the info to value passed
    {
        info = x;
    }
    
    BinaryST* insertValue(BinaryST* node, int x)    //Insert function
    {
        if(!node)       //checks if node is not pointing to an object
        {
            return new BinaryST(x); //if true a new object is created and returned calling the paramterized constructor
        }
        
        if(x > node->info)  //if the value to be inserted is greater than the current root node than we navigate to the right and call the insert function again
        {
            node->right = insertValue(node->right, x);
        }
        
      else if(x <= node->info)  //otherwise it will navigate to the left, includes duplicates
        {
            node->left = insertValue(node ->left, x);
        }
            
            return node;
    }
    BinaryST* search(BinaryST* node, int x)//search function
    {
        if (node == NULL || node->info == x) //checks if the current node contains the value being searched for or if it points to NULL
            return node;    //returns the 
        
        if (x > node->info) {       //checks whether the value being searched for falls on the right subtree
            return search(node->right, x);      //recursive call to navigate through tree
        } else {
            return search(node->left, x);       //value being search for lies on the left subtree
        }
    }

};

#endif /* BST_h */
