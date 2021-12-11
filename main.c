#include <stdio.h>
#include <string.h>

char *sort(char input_sentence[]);

int main(void) {
  printf("%s", sort("hello everyone")); 
  return 0;
}


char *sort(char input_sentence[]){
  int length = strlen(input_sentence); 
  char temp;
  char sorted_array[length+1];
  strcpy(sorted_array, input_sentence);  
  for (int i = 0; i < length; i++){
    for (int j = 0; j < length; j++){
      if (sorted_array[i] < sorted_array[j]){
        temp = sorted_array[i];
        sorted_array[i] = sorted_array[j];
        sorted_array[j] = temp;
      }
    }
  }
  char *my_pointer = sorted_array;
  return my_pointer;
}