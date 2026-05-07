//simon parker

/*

general code idea:
  - tree data structure and corresponding functionality
  - building of the huffman tree
    - scanning the file
    -analyzing file
    - creating codes (look into how to do prefix free encoding)
    -creating tree
  - encoding the file based on the tree
    - writing code binary to file


  -decoder that turns the compressed file into .txt again

*/
#include <stdio.h>
#include <stdlib.h>

#include "data_struct.h"


int main(int argc, char * argv[]){
  switch (argc){
    case 2:
      printf("nice, filename is %s\n", argv[1]);
      FILE * fp1 = fopen(argv[1], "rb");
      if (!fp1){
        printf("Uh oh, there is no file named %s in the current directory\n", argv[1]);
        return -1;
      }
      char byte;
      /*
      while(fread(&byte, 1, 1, fp1)){
        printf("%c %d\n", byte, (int) byte);
      }
      */
      for (int i = 0; i < 10; i++){
        fread(&byte, 1, 1, fp1);
        printf("%c %d\n", byte, (int) byte);
      }
      break;
    default:
      printf("Uh oh, you didn't provide the right number of arguments. EXITING\n");
      printf("Usage: ./simzip <filename>\n");
      return -1;
  } 
  return 1;
}
