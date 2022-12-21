# **c_Journey**
This Project is mainly to showcase my journey in learning the C programin language.
## **1.Variables**
In the file [variables.c](https://github.com/) we see how varibles are made in C and how they can be used.
The function below is shows how to use variables.
```c
int main()
{
    char name[] = "John";
    int age = 70;
    printf("There once was a man named %s \n", name);
    printf(" he was %d years old \n", age);

    return 0;
}
```

## **2.Data Types**
The file [data_types.c]() shows the data typesthat can be found in the C language.The following code block shows some data types in C.
```c
int main()
{

    int age = 40;/*integer*/
    double gpa = 3.7; /* also float time = 0.5; decimal number */
    char grade = 'A';/*character*/
    char name[] = "Ryan"; /*string (an array)*/

    return 0;
}
```
## **3.Printf**
The [printf.c]() shows how the printf function is used in the c language.
```c
int main()
{
    printf("Hello World!\n");

    return 0;
}
```
## **4.Working with numbers**
This covers the complex mathematical functions in c.
```c
int main()
{
    /*
    printf("%f",8.9);
     *OPERATORS
     *+ addition
     *- subtraction
     *division
     *multiplication
     */

    printf("%d \n", 5 / 4);
    printf("%f \n", 5 / 4.0);

    /*COMPLEX FUNCTIONS
    *floor
    *ceil
    *sqrt
    *pow*/

    printf("%f \n", pow(2, 3));

    return 0;
}
```
## **5.Comments**
The file [comments.c]() shows how comments can be create and used.The code below shows comments being used.
```c
int main()
{
    /* This prints out HELLO WORLD*/
    printf("HELLO WORLD\n");
}
```
## **6.Constants**

