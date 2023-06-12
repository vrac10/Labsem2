// To run any question's code just uncomment the code directly below the question :) , shorcut : select that part of code and press ctrl (+) /
// on mac : cmd (+) /

/*
1) Write a C program to print a pyramid pattern with numbers increased by 1. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int num = 1;

    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            printf(" ");
        }

        for(int k = 0; k <= i; k++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    
}

*/


/*
2) Write a C program to display the reverse of a number & check if it is palindrome.


#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int x = n;
    int rev = 0;
    while(x != 0){
        int digit = x % 10;
        rev = (rev*10) + digit;
        x /= 10;
    }

    if(rev == n){
        printf("%d is a palindrome.\n",n);
    }
    else{
        printf("%d is not a palindrome.\n",n);
    }
}

*/

/*
3) Write a C program to check whether a given number is a prime and use that to find the next prime number, greater than a given number.

#include<stdio.h>

int check_prime(int n){
    if(n == 2){
        return 1;
    }
    else if(n == 3){
        return 1;
    }
    else{
        for(int i = 2; i<(n/2) + 1; i++){
            if(n % i == 0){
                return 0;
                break;
            }
        }
        return 1;
    }
}

int next(int n){
    if (check_prime(n) == 1){
    n++;
    }
    while(check_prime(n) != 1){
        n++;
    }
    return n;
}

int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);

    if(check_prime(x)){
    printf("%d is a prime number\n",x);
    printf("%d the next prime number\n",next(x));
    }
    else{ 
    printf("%d is not a prime number\n",x);
    printf("%d the next prime number\n",next(x));
    }
    
}

*/

/*
4) Write C functions to reverse the array elements 
a) using index notation 
b) using pointer notation.


#include<stdio.h>

void readArray(int a[], int n){
      for(int i = 0; i < n; i++){
        printf("Enter the %d element: ",i);
        scanf("%d",&a[i]);
    }

}

void printArray(int a[], int n){

    for(int j = 0 ; j<n; j++){
        printf("%d\t",a[j]);
    }

}

int main(){

    // index notation
    int n = 1;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];

    readArray(a,n);
  
    for(int i = 0; i < n/2; i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    
    printArray(a,n);

    printf("\n");

    //pointer notation
    int x = 1; 
    printf("Enter the number of elements: ");
    scanf("%d",&x);
    int b[x];

    readArray(b,x);

    int *p = b;
    int *q = b+x-1;
    while(p != q ){
        int temp = *p;
        *p = *q;
        *q = temp;

        p++;
        q--;
    }
    printArray(b,x);

}

*/

/*
5) Write C functions to print Union and Intersection of array elements.

#inxlude<stdio.h>

void UnionIntersection(int a1[],int a2[],int n1,int n2){
    int a3[n1+n2];  // Union
    int a4[n1];  //Intersection
    int j = 0;
    int z = 0;
    for(int i = 0; i < n1; i++){
        a3[j] = a1[i];
        j+=1;
    }
    int dup = 0;
    for(int i = 0; i < n2; i++){
        for(int k = 0; k <= j; k++){
            if(a3[k] == a2[i]){
                dup = 1;
                a4[z] = a3[k];
                z+=1;
            }
        }
        if(dup == 0){
            a3[j] = a2[i];
            j+=1;
        }
        else{
            dup = 0;
        }
    }
    printf("Union = ");
    for(int i = 0; i < j; i++){
        printf("%d ",a3[i]);
    }
    printf("\n");
    printf("Intersection = ");
    for(int i = 0; i < z; i++){
        printf("%d ",a4[i]);
    }
}

int main(){
    int arr1[6] = {1,10,3,4,5,6};
    int arr2[6] = {23,87,10,5,6};
    UnionIntersection(arr1,arr2,6,5);
}

*/


/*
6) Write a C function to find the Inversion Count in an array. Given an array a[], two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.


#include<stdio.h>

void readArray(int a[], int n){
      for(int i = 0; i < n; i++){
        printf("Enter the %d element: ",i);
        scanf("%d",&a[i]);
    }

}

void printArray(int a[], int n){

    for(int j = 0 ; j<n; j++){
        printf("%d\t",a[j]);
    }
    printf("\n");

}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printArray(a,n);
    int inv_count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < j && a[i] > a[j]){
                inv_count++;
            }
        }
    }

    printf("The inversion count of the array is %d\n",inv_count);
}

*/

/*
7) Write a C function to remove all repeated characters from the given string and display the string without duplicate characters.

#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    printf("Enter the string : ");
    scanf("%[^\n]s",a);

    for(int i = 0; i < strlen(a); i++){
        for(int j = i+1; a[j] != '\0'; j++){
            if(a[i] == a[j]){
               for(int k = j; a[k] != '\0'  ; k++){
                    a[k] = a[k+1];
               }
            
            }
        }
    }
    printf("%s",a);
}

*/

/*
8) Write a C function strend(s, t), which returns 1 if the string t occurs at the end of the string s, and zero otherwise.


#include<stdio.h>
#include<string.h>

int strend(char *s, char *t){
    int x  = strlen(t) - 1;
    if(s[strlen(s) - 1] == t[x]){
    for(int i = strlen(s) - 1 ; x >= 0;i--){
       if(s[i] != t[x]){
            return 0;
            break;
       }
       x--;
    }
    return 1;
    } else{
        return 0;
    }
}

int main(){
    char a[100];
    char b[100];

    printf("Enter the string: ");
    scanf("%s",a);

    printf("Enter the substring: ");
    scanf("%s",b);

    if(strend(a,b)){
    printf("%s contsains %s at the end.\n",a,b);
    }
    else{
    printf("%s does not contain %S at the end.\n",a,b);
    }
}

*/


/*
9) Write a C program to compare 2 dates and print appropriate messages. Use structure to store the date.


#include<stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date d1,d2;
    printf("Enter the first date (d1): ");
    scanf("%d/%d/%d",&d1.day,&d1.month,&d1.year);

    printf("Enter the second date (d2): ");
    scanf("%d/%d/%d",&d2.day,&d2.month,&d2.year);
    
    if(d1.year < d2.year){
        printf("d1 is greater than d2\n");
    }
    else if(d1.year > d2.year){
         printf("d2 is greater than d1\n");
    }
    else{
        if(d1.month < d2.month){
             printf("d1 is greater than d2\n");
        }
        else if(d1.month > d2.month){
             printf("d2 is greater than d1\n");
        }
        else{
            if(d1.day > d2.day){
                 printf("d2 is greater than d1\n");
            }
            else if (d1.day < d2.day){
                 printf("d1 is greater than d2\n");
            }
            else{
                printf("d1 and d2 are equal\n");
            }
        }
    }


}

*/


/*
10) Write a C program to perform the following operations on a Singly Linked List.

i) InsertFront            ii) DeleteLast

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *link;
}node_t;

void deleteEnd(node_t *p){
    node_t *k;
    while(p->link!=NULL){
        k = p;
        p = p->link;
    }
    free(p);
    k->link = NULL;
}

node_t *addStart(node_t *p, int k){
    node_t *head = p;
    node_t *a = malloc(sizeof(node_t));
    a->info = k;
    a->link = head;
    head = a;
    return head;
}

void display(node_t *p){
    while(p!=NULL){
        printf("%d ",p->info);
        p = p->link;
    }
    printf("\n");
}

int main(){
    node_t *s = malloc(sizeof(node_t));
    s->info = 100;
    int x;
    printf("What would you like to add to the start: ");
    scanf("%d",&x);
    s = addStart(s,x);
    display(s);
    deleteEnd(s);
    display(s);
}

*/

/*
11) Write a C program to perform the following operations on a Singly Linked List.

 i) InsertLast             ii) DeleteFront


#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *link;
}node_t;

void addEnd(node_t*s, int n){
    node_t *p = (node_t *) malloc(sizeof(node_t));
    while(s->link != NULL){
        s = s->link;
    }
    p->info = n;
    p->link = NULL;
    s->link = p;
}

node_t *deleteStart(node_t *p){
    node_t *head = p;
    head = p->link;
    free(p);
    return head;
}

void display(node_t *p){
    while(p!=NULL){
        printf("%d ",p->info);
        p = p->link;
    }
    printf("\n");
}

int main(){
    node_t *s = malloc(sizeof(node_t));
    s->info = 100;
    int x;
    printf("What would you like to add to the end: ");
    scanf("%d",&x);
    addEnd(s,x);
    display(s);
    s = deleteStart(s);
    display(s);

}

*/
