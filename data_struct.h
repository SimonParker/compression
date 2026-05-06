//simon parker

/*

linked list (for storing frequency info)
binary tree (for storing huffman encoding)

*/

// TREE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
struct tree{
  tree * left;
  tree * right;
  char * chars;
  int count;
};

//constructor for the tree
tree * make_tree(char * chars_, int count_, tree * left_, tree * right_);

//destructor for the tree
void destroy_tree(tree * tree_);

//takes 2 trees and creates a new tree that is the merging of the 2 trees
tree * merge_tree(tree * t1, tree * t2);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// NODE  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
struct LL_node{
  tree * data;
  LL_node * next; 
};

//node constructor
LL_node * make_node(tree * data_);

//node destructor
void destroy_node(LL_node * node);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//LINKED LIST~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
struct LL{
  LL_node * head; 
};

//list constructor
LL * make_list();

//list destructor
void destroy_list(LL * list);

//inserting
void insert(LL * list, LL_node * node);

//remove node that matches the key from the list
void remove(LL * list, char * key);


//adds 1 to the count of the char if its in the list
//if not in the list it adds it to the end of the list with count = 1
void increment(LL * list, char character);

//finds the 2 nodes with smallest total count, merges them into 1 node with their trees merged
//fails when only 1 node in the list
void merge_smallest_2(LL * list);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
