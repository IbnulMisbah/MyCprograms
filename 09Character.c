//Bismillahir Rahmanir Rahim .
//Now we will learn how to receive string input from user .
//getchar() function can hold only one character data type .
//So we will learn how to hold a string variable which is not only one character .

#include <stdio.h>                                      //Header file for standard input and output .
#include <stdlib.h>                                     //Header file for utilizing the program .
#include <unistd.h>                                     //Header file for sleep() function .
#include <ctype.h>                                      //Header file for utilizing character data type .

int main () 
{
   //system ("clear");                                    //clear the screen .
   
   char letter ;                                        //Its a character data type which can hold only one letter.
   printf ("Write first letter of your name :");        //Prompt to the user .
   letter = getchar();                                  //The input would store in letter variable .
   putchar (letter);                                    //Its a function to show the output of getchar() function .
   
   printf ("\n");                                       //To break the line .
   
   char name[20] , land[20] ;
   printf ("please type your name :");                  //Prompt to the user .
   scanf ("%s", name);
   printf ("Type your land's name :");                  //Prompt to the user .
   scanf ("%s", land);
   
   printf ("%s ,This is a very nice name .\n", name );
   printf ("%s ,Its a very beautful land .\n", land );
   
   sleep (3);
   
   return EXIT_SUCCESS ;   
}
/*
Yes, you're right! The code can store only one word because of how `scanf("%s", ...)` works in C.

### Explanation:
- `scanf("%s", ...)` reads input until it encounters a whitespace character (such as a space, tab, or newline). So, it only captures the first "word" of the input.
- A "word" here refers to a sequence of characters that doesn't contain spaces. Once the user types a space or presses Enter, `scanf` stops reading and stores what it has read so far.

### Example:
If you input:
```
John Doe
```
Using `scanf("%s", name);`, it will only store **"John"** in the `name` array, and "Doe" will not be stored.

### How to handle multiple words (for example, full names with spaces)?
To store multiple words (such as a full name), you can use `fgets()` instead of `scanf("%s", ...)`. This allows you to read an entire line, including spaces.

Here is an updated version of the code that will read full names with spaces:

### Updated Code Using `fgets()`:
```c
#include <stdio.h>

int main() {
    char name[50], string[50];  // Increased size to accommodate longer names
    printf("Please type your name: ");
    fgets(name, sizeof(name), stdin);  // Read full line including spaces

    printf("Type your land's name: ");
    fgets(string, sizeof(string), stdin);  // Read full line including spaces

    // Remove the newline character that fgets may add at the end
    name[strcspn(name, "\n")] = 0;
    string[strcspn(string, "\n")] = 0;

    printf("%s, This is a very nice name.\n", name);  // Print name
    printf("%s, It's a very beautiful land.\n", string);  // Print land name

    return 0;
}
```

### Key Changes:
1. **`fgets()` instead of `scanf("%s", ...)`:**
   - `fgets(name, sizeof(name), stdin)` reads an entire line, including spaces, until either the buffer is full or a newline character is encountered (when the user presses Enter).
   
2. **Removing the newline character:**
   - `fgets()` includes the newline character (`\n`) when the user presses Enter, so we use `strcspn()` to remove it from the string.

### Result:
- This code will allow users to input names with spaces, like "John Doe" or "New York", and store them correctly in the `name` and `string` variables.
*/

