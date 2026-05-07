//simon parker

/*

linked list (for storing frequency info)
binary tree (for storing huffman encoding)

*/

// TREE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
struct tree{
  struct tree * left;
  struct tree * right;
  char * chars;
  int count;
};

//constructor for the tree
struct tree * make_tree(char * chars_, int count_, struct tree * left_, struct tree * right_);

//destructor for the tree
void destroy_tree(struct tree * tree_);

//takes 2 trees and creates a new tree that is the merging of the 2 trees
struct tree * merge_tree(struct tree * t1, struct tree * t2);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// NODE  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
struct LL_node{
  struct tree * data;
  struct LL_node * next; 
};

//node constructor
struct LL_node * make_node(struct tree * data_);

//node destructor
void destroy_node(struct LL_node * node);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//LINKED LIST~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
struct LL{
  struct LL_node * head; 
};

//list constructor
struct LL * make_list();

//list destructor
void destroy_list(struct LL * list);

//inserting
void insert(struct LL * list, struct LL_node * node);

//remove node that matches the key from the list
void remove_node(struct LL * list, char * key);


//adds 1 to the count of the char if its in the list
//if not in the list it adds it to the end of the list with count = 1
void increment(struct LL * list, char character);

//finds the 2 nodes with smallest total count, merges them into 1 node with their trees merged
//fails when only 1 node in the list
void merge_smallest_2(struct LL * list);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
