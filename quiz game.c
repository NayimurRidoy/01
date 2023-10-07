#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
    printf("\t\t\tQUIZ GAME...\n\n");
    printf("\t\t\tnayimur rahman ridoy\n\n");
    printf("\t\t\tID:12 32 10 17\n\n\n\n\n");
    printf("\t\tPress Enter To Start The Quiz GAME.\n");
    getch();
    system("cls");

    int n;
    float mark = 0;

    // Question 1:
    printf("\tA. What does CSE stand for?\n\n\n");
    printf("1. Computer Science and Environment\n2. Computer Software Engineering\n3. Civil and Structural Engineering\n4. Computer Science and Engineering\n");
    printf("\nEnter The Correct Answer in Number\n");
    scanf("%d", &n);

    if (n == 4)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '4'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getch();
    system("cls");

    // Question 2:
   printf("B. Which of the following is not a programming language?\n\n\n");
    printf("1. C++\n2. HTML\n3. Python\n4. Java\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 2)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '2'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 3:
    printf("C. Which programming language is commonly taught in CSE programs?\n\n\n");
    printf("1. Spanish\n2. Java\n3. French\n4. Russian\n");
    printf("\nEnter The Correct Answer in Number\n");
    scanf("%d", &n);

    if (n == 2)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '2'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getch();
    system("cls");

    // Question 4:
    printf("D. Which area of CSE is concerned with designing and optimizing computer hardware?\n\n\n");
    printf("1. Software Engineering\n2. Artificial Intelligence\n3. Computer Networks\n4. Computer Architecture\n");
    printf("\nEnter The Correct Answer in Number\n");
    scanf("%d", &n);

    if (n == 4)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '4'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getch();
    system("cls");

    // Question 5:
    printf("E. What is the main focus of the field of cybersecurity in CSsE?\n\n\n");
    printf("1. Studying plant species\n2. Protecting computer systems from attacks\n3. Designing new fashion trends\n4. Developing sustainable energy solutions\n");
    printf("\nEnter The Correct Answer in Number\n");
    scanf("%d", &n);

    if (n == 2)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '2'\n");
        mark = mark - 0.25;
    }
     printf("Press Enter for the next question\n");
    getch();
    system("cls");

    // Question 6:
    printf("F. What is the basic unit of information in a computer?\n\n\n");
    printf("1. Byte\n2. Bit\n3. Pixel\n4. Megabyte\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 2)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '2'n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 7:
    printf("G. What is the process of converting high-level programming code into machine code called?\n\n\n");
    printf("1. Translation\n2. Interpretation\n3. Compilation\n4. Encryption\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 3)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '3'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 8:
    printf("H. Which data structure follows the Last In First Out (LIFO) principle?\n\n\n");
    printf("1. Queue\n2. Linked List\n3. Stack\n4. Array\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 3)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '3'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 9:
    printf("I. Which sorting algorithm has an average and worst-case time complexity of O(n*log(n))?\n\n\n");
    printf("1. Bubble Sort\n2. Insertion Sort\n3. Quick Sort\n4. Selection Sort\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 3)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '3'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 10:
    printf("J. Which programming language is often used for web development and can be run on the client-side?\n\n\n");
    printf("1. Java\n2. C++\n3. Python\n4. JavaScript\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 4)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '4'\n");
        mark = mark - 0.25;
    }
     printf("Press Enter for the next question\n");
    getch();
    system("cls");
    // Question 11:
    printf("K. Which term refers to a set of rules for creating consistent and readable code?\n\n\n");
    printf("1. Syntax\n2. Protocol\n3. Algorithm\n4. Coding Standards\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 4)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '4'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 12:
    printf("L. What is a DDoS attack in the context of computer security?\n\n\n");
    printf("1. A virus that spreads via email\n2. A type of encryption algorithm\n3. A technique for secure communication\n4. A network attack that floods a server with traffic\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 4)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '4'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 13:
    printf("M. What does the acronym 'URL' stand for?\n\n\n");
    printf("1. Universal Resource Locator\n2. Uniform Resource Locator\n3. United Resource Locator\n4. Unique Resource Locator\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 2)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '2'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 14:
    printf("N. What does the 'C' stand for in 'HTTP'?\n\n\n");
    printf("1. Computer\n2. Communication\n3. Central\n4. Control\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 2)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '2'\n");
        mark = mark - 0.25;
    }
     printf("Press Enter for the next question\n");
    getch();
    system("cls");
     // Question 15:
    printf("O. What does CPU stand for in computer terminology?\n\n\n");
    printf("1. Central Processing Unit\n2. Computer Peripheral Unit\n3. Control Processing Unit\n4. Central Power Unit\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '1'\n");
        mark = mark - 0.25;
    }
   //Question 16
    printf("P. What is the process of finding and fixing errors or bugs in a program?\n\n\n");
    printf("1. Debugging\n2. Compiling\n3. Testing\n4. Optimizing\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '1'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 17:
    printf("Q. What is an algorithm?\n\n\n");
    printf("1. A type of computer virus\n2. A set of computer hardware components\n3. A step-by-step procedure or formula for solving a problem\n4. A type of programming language\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 3)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '3'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 18:
    printf("R. Which data structure stores elements in a key-value pair?\n\n\n");
    printf("1. Array\n2. Queue\n3. Linked List\n4. Hash Table\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 4)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '4'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 19:
    printf("S. Which concept allows a subclass to inherit properties and behaviors from a superclass?\n\n\n");
    printf("1. Overloading\n2. Polymorphism\n3. Inheritance\n4. Encapsulation\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 3)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '3'\n");
        mark = mark - 0.25;
    }

    printf("Press Enter for the next question\n");
    getchar();
    system("clear");

    // Question 20:
    printf("T. What is the purpose of version control systems (e.g., Git) in software development?\n\n\n");
    printf("1. To generate random numbers\n2. To write code in multiple programming languages\n3. To manage and track changes to source code\n4. To create graphical user interfaces\n");
    printf("Enter The Correct Answer in Number: ");
    scanf("%d", &n);

    if (n == 3)
    {
        printf("\nCorrect Answer!!!\n");
        mark++;
    }
    else
    {
        printf("\nWrong Answer!!!\n");
        printf("Correct Answer Is '3'\n");
        mark = mark - 0.25;
    }

    system("clear");
    printf("\tPress Enter To See Your Score\n");
    getchar();
    system("clear");

    printf("\nYou Got %.2f Out Of 20\n", mark);
    if (mark==20)
    {
        printf("Excellent!!!\n");
    }
    else if (mark>=15)
    {
        printf("Good Try!!\n");
    }
    else if (mark>=10)
    {
        printf("Needs Improvement!\n");
    }
    else
    {
        printf("Poor Performance\n");
    }
    return 0;
}
