\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
////////////////////////SOMDEV BASU////////////////////////////
\\\\\\\\\\\\\\\\\\\\\\\\BOSECODES\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
////////////////////////NSEC, KOLKATA//////////////////////////


--------------------------------------------------------------------------------------------------------------------------
Q6. Print Grade of a student whose marks is inputted through keyboard according to following rules:

--------------------------------------------------------------------------------------------------------------------------
Marks
Grade
90 to 100
O
80 to 89
E
70 to 79
A
60 to 69
B
50 to 59
C
40 to 49
D
Below 40
F
--------------------------------------------------------------------------------------------------------------------------
Using Switch case statement :

#include <stdio.h>

int main(){
    int marks,k;
    char grade;
    printf("Enter the marks of the student ? ");
    scanf("%d", &marks);
    k = marks/10;
    switch(k){
        case 10:
            grade = 'O';
            break;
        case 9:
            grade = 'O';
            break;
        case 8:
            grade = 'E';
            break;
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }
    printf("The grade of the student is %c", grade);
}
--------------------------------------------------------------------------------------------------------------------------
Using If else condition: 
#include <stdio.h>

int main(){
    int marks;
    char grade;
    printf("Enter the marks obtained by the student ? ");
    scanf("%d", &marks);
    if(marks>=90)
        grade = 'O';
    else if(marks>= 80)
        grade = 'E';
    else if(marks >= 70)
        grade = 'A';
    else if(marks >= 60)
        grade = 'B';
    else if(marks >= 50)
        grade = 'C';
    else if(marks >= 40)
        grade = 'D';
    else
        grade = 'F';
    printf("The grade of the student is %c", grade);
}

--------------------------------------------------------------------------------------------------------------------------

Q7.Write a program to print the sum of the series upto ‘n’ terms:
1 + ½ + ⅓ + ¼ +⅕ +.....upto n terms.

#include <stdio.h>

int main(){
    int n;
    double sum = 0.0;
    printf("Enter the value of n ? ");
    scanf("%d", &n);
    for(double i = 1; i <= n; i++){
        sum += (1/i);
    }
    printf("The sum of the n terms is  %f", sum);
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------

Q8.Write a program to write the Fibonacci Sequence upto n terms.

#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d ", t1);
    }
}

--------------------------------------------------------------------------------------------------------------------------

Q9.Write a program to print the value of x^y without the usage of pow() function.

#include <stdio.h>
int main()
{
    int i, x, y, pdt = 1;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    for (i = 1; i <= y; ++i)
    {
        pdt *= x;
    }
    printf("The value of x raised to y is : %d", pdt);
}

--------------------------------------------------------------------------------------------------------------------------

Q10.Write a program to find the factorial of a given number.
#include <stdio.h>
int main()
{
    int i, x, fact = 1;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    for (i = 1; i <= x; ++i)
    {
        fact *= i;
    }
    printf("The value of factorial of %d is %d", x, fact);
}



--------------------------------------------------------------------------------------------------------------------------

Q11. Write a program to calculate the sum of the series.
Sum = 1 + ⅓! - ⅕! … upto ‘n’ terms.

#include <stdio.h>
int main()
{
    int i, j, n, start = 3;
    double fact = 1;
    double sum = -1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for(j = 1; j <= start; j++){
            fact *= j;
        }
        sum = sum + pow((-1),(i+1))/fact;
        start += 2;
    }
    printf("The value of sum of %d term/s is %f", n, sum);
}

--------------------------------------------------------------------------------------------------------------------------

Q12.Write a program to check whether a number is prime or not.
#include <stdio.h>

int main(){
    int num, count = 0;
    printf("Enter a number to check for prime : ");
    scanf("%d", &num);
    for(int i = 2; i <= num; i++){
        if(num % i == 0)
            count++;
    }
    if(count == 1)
        printf("The number %d is a prime number", num);
    else
        printf("The number %d is not a prime number", num);
}

--------------------------------------------------------------------------------------------------------------------------

Q13.

--------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int n, count = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= i; j++){
            if(i % j == 0)
                count++;
        }
        if(count == 1)
            printf("%d ",i);
        count = 0;
    }
}
--------------------------------------------------------------------------------------------------------------------------

Q15. Write a program to input a number and print the sum of digits in the number.

--------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(){
    int a, d = 0, s = 0;
    printf("Enter the number : ");
    scanf("%d", &a);
    int n = a;
    while(a>0){
        d = a % 10;
        s += d;
        a /= 10;
    }
    printf("The sum of the digits of the number %d is %d", n, s);
}

--------------------------------------------------------------------------------------------------------------------------

Q16. Write a program to print the input number in reverse order.

--------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(){
    int a, d = 0, s = 0;
    printf("Enter the number : ");
    scanf("%d", &a);
    int n = a;
    while(a>0){
        d = a % 10;
        s = s*10 + d;
        a /= 10;
    }
    printf("The reverse of the number %d is %d", n, s);
}

--------------------------------------------------------------------------------------------------------------------------

Q17. I. Write a program to print the following pattern:

                                                          1
                                                         232
                                                        34543

--------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int n, c, d, num = 1, space;
    n = 3;
    space = n - 1;
    for ( d = 1 ; d <= n ; d++ ){
        num = d;
        for ( c = 1 ; c <= space ; c++)
            printf(" ");
        space--;
        for ( c = 1 ; c <= d ; c++ ){
            printf("%d", num);
            num++;
        }
        num--;
        num--;
        for ( c = 1 ; c < d ; c++){
            printf("%d", num);
            num--;
        }
        printf("\n");
    }
}

--------------------------------------------------------------------------------------------------------------------------

Q17. II. Write a program to print the following pattern: 


                                                         *
                                                         * *
                                                         * * *
                                                         * * * *

--------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){
    char a = '*';
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", a);
        }
        printf("\n");
    }
}
--------------------------------------------------------------------------------------------------------------------------
Q17. III. Write a program to print the following pattern:
                                        
                                                              * 
                                                            * * * 
                                                          * * * * * 
                                                        * * * * * * * 
--------------------------------------------------------------------------------------------------------------------------
                                 
                                        
#include <stdio.h>
int main()
{
    int i, space, rows, k=0;
    rows = 4;
    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
            printf("  ");
        while(k != 2*i-1){
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}


--------------------------------------------------------------------------------------------------------------------------


Q19. Write a program to print the maximum element in a 5*5 matrix.

--------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(){
    int a[5][5];
    printf("Enter the elements of the 5*5 matrix : \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(a[i][j] >= max)
                max = a[i][j];
        }
    }
    printf("The maximum element of the 5*5 matrix is %d", max);
}
--------------------------------------------------------------------------------------------------------------------------


Q20.Write a program to input a 4*4 matrix and print it's corresponding transpose.


--------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int a[4][4];
    printf("Enter the elements of the 4*4 matrix : \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int transpose[4][4];
    printf("\n*********************************************\n");
    printf("\n   The corresponding transpose matrix is : \n");
    printf("\n*********************************************\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            transpose[i][j] = a[j][i];
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
--------------------------------------------------------------------------------------------------------------------------
Q21. Write a program while using a single matrix.

            To print the pattern:

                                                    1 0 0 0 0
                                                    0 1 0 0 0
                                                    0 0 1 0 0
                                                    0 0 0 1 0
                                                    0 0 0 0 1
--------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int a[5][5] = {{0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0}};
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j)
                a[i][j] = 1;
        }
    }
    printf("*****************************************\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("*****************************************");
}



Q22.Write a program to print the length of  a string without using the strlen() function.
#include <stdio.h>

int main(){
    int c = 0;
    char string[100];
    gets(string);
    while(string[c] != '\0')
        c++;
    printf("%d",c);
}

--------------------------------------------------------------------------------------------------------------------------

Q23.Write a program to store and print the value of an entered string from the console in a different string without using the strcpy()
    function.

--------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int i = 0;
    char string[100];
    char newstring[100];
    gets(string);
    for(i = 0; string[i] != '\0'; i++){
        newstring[i] = string[i];
    }
    newstring[i] = '\0';
    printf("The new copied string is : %s", newstring);
}

--------------------------------------------------------------------------------------------------------------------------

Q24. Write a program to concatenate two srings without using the strcat() function.

--------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
 
void concatenate_string(char*, char*);
 
int main()
{
    char original[100], add[100];
   
    printf("Enter source string\n");
    gets(original);
   
    printf("Enter string to concatenate\n");
    gets(add);
   
    concatenate_string(original, add);
   
    printf("String after concatenation: \"%s\"\n", original);
       
    return 0;
}
 
void concatenate_string(char *original, char *add)
{
   while(*original)
      original++;
     
   while(*add)
   {
      *original = *add;
      add++;
      original++;
   }
   *original = '\0';
}

---------------------------------------------------------------------------------------------------------------------------------------

Q25. Write a program to join two given strings without using the strcat() function.

#include <stdio.h>

int main(){
    char a[50], b[50];
    printf("Enter the two strings?\n");
    scanf("%s %s", &a, &b);
    int i,j;
    char c[100];
    for(i = 0; a[i] != '\0'; ++i);
    for(j = 0; b[j] != '\0'; ++j, ++i){
        a[i] = b[j];
    }
    a[i] = '\0';
    printf("The combined string is : %s",a);
}

OUTPUT:
Enter the two strings?
hello world
The combined string is : helloworld

-------------------------------------------------------------------------------------------------------------------------------------


Q26. Determine whether a given inputted string is a palindrome.

#include <stdio.h>
#include <string.h>

int main(){
    char a[50], b[50];
    int i, j, k;
    printf("Enter a string?\t");
    scanf("%s", &a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(b, a) == 0)
        printf("The string %s is a palindrome", a);
    else
        printf("The string %s is not a palindrome", a);
}

OUTPUT:
Enter a string?     hello
The string hello is not a palindrome

--------------------------------------------------------------------------------------------------------------------------------------


Q27. Write a program to read a string from the user and reverse it.

#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    printf("Enter a string?\t");
    scanf("%s", &a);
    strrev(a);
    printf("The string in reversed order is %s", a);
}

OUTPUT:
Enter a string?     snakes
The string in reversed order is sekans

---------------------------------------------------------------------------------------------------------------------------------------

Q28. Write a program to count the number of spaces, the number of words, the number of characters in an inputted text.

#include <stdio.h>
#include <string.h>

int main(){
    char a[200];
    int i, cspace = 0;
    printf("Enter a string?\n");
    gets(a);
    for(i = 0; a[i] != '\0'; i++){
        if(a[i] == ' ')
            cspace++;
    }
    printf("The number of spaces in the text is %d\n", cspace);
    printf("The number of words in the text is %d\n", (cspace+1));
    printf("The number of characters in the text is %d", i);
}

OUTPUT:
Enter a string?
Tehran is the capital of Iran
The number of spaces in the text is 5
The number of words in the text is 6
The number of characters in the text is 29

----------------------------------------------------------------------------------------------------------------------------------------


