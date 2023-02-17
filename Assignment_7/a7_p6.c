/*
CH-230-A
a7 p6.c
Jon Lumi
jlumi@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>

//Declare struct person
struct person{
    char name[30];
    int age;
};

//Declare functions
int compareages(struct person *person1, struct person *person2);
int comparenames(struct person *person1, struct person *person2);   

//Declaer bubble sort that takes as arguments an array of struct person,
//the size of the array, and a function pointer that takes two pointers
void bubble_sort(
    struct person array[], 
    int size, 
    int (*compare)(struct person *, struct person *)
    ){
    int swapped = 0;
    do { 
        swapped = 0;
        for (int i = 1; i < size; i++){
            //Check if compare function result is 1
            if (compare(&array[i - 1], &array[i]) >= 1){
                //If so, swap elements by using a temporay variable
                struct person temp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
    
}

//Function that compares names
int comparenames(struct person *person1, struct person *person2){
    //Result will be the value returned by strcmp
    int result = strcmp(person1 -> name, person2 -> name);
    if (result == 0){
        //If they're identical, call function compareages
        return compareages(person1, person2);
    }
    return result;
}

//Function that compares ages
int compareages(struct person *person1, struct person *person2){
    //Compare the ages
    int result = person1->age - person2->age;
    return result == 0 ? comparenames(person1, person2) : result;
}

int main(){
    //Declare number of people variable and ask for it's value
    int numpeople;
    scanf("%d", &numpeople);

    //Declare an array of people with that size
    struct person arrpeople[numpeople];

    //Loop that asks for each person's name and age and stores them
    for (int i = 0; i < numpeople; i++){
        scanf("%s", arrpeople[i].name);
        getchar();

        scanf("%d", &arrpeople[i].age);
    }

    //Call bubble sort to compare my name and print array
    bubble_sort(arrpeople, numpeople, comparenames);
    for(int i = 0; i < numpeople; i++){
        printf("{%s, %d}; ", arrpeople[i].name, arrpeople[i].age);
    }
    printf("\n");

    //Call bubble sort to compare by age and print array
    bubble_sort(arrpeople, numpeople, compareages);
    for(int i = 0; i < numpeople; i++){
        printf("{%s, %d}; ", arrpeople[i].name, arrpeople[i].age );
    }
    printf("\n");
    return 0;
}