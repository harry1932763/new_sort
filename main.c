#include <stdio.h>
#include <string.h>

char *sort(char input_sentence[]);

int main(void) {
  printf("%s", sort("where is everyone going at this time of night")); 
  return 0;
}

//giving sort(function body)
char *sort(char input_sentence[]){
  // store the length of the input_sentence
  int length = strlen(input_sentence); 
  // temp used to remember a char before it is overwritten
  char temp;
  // an array for storing a copy of input_sentence so that it may be manipulated. 
  char sorted_array[length+1];
  // copy the input_sentence into sorted_array
  strcpy(sorted_array, input_sentence);  
  // for every letter in sentence
  for (int i = 0; i < length; i++){
    // for every letter in sentence again. 
    for (int j = i + 1 ; j < length; j++){
      // if the current letter is bigger than the next switch them. 
      if (sorted_array[i] > sorted_array[j]){
        // store the first to save it
        temp = sorted_array[i];
        // overwrite the current letter with the next one
        sorted_array[i] = sorted_array[j];
        // overwrite the next letter with the previous one. 
        sorted_array[j] = temp;
      }
    }
  }
  // create a pointer as local variables cannot be returned
  char *my_pointer = sorted_array;
  // return sorted input_sentence 
  return my_pointer;
}