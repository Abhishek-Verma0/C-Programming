//  we need to print pattern like this one  

/*
for input n=4
here input is 4 like that 
    we have (n*2)-1 rows columns based on input in this case we have input four so we have 7,7 rows and columns
    
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4 
                            
   n=2   
   here we have 3,3 rows and columns 
                            2 2 2
                            2 1 2
                            2 2 2
*/




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
   int sum = 0;
  for(int i = (gender == 'b' ? 0 : gender == 'g' ? 1 : -1); i < number_of_students; i+=2) {
    sum += marks[i];
  }
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}