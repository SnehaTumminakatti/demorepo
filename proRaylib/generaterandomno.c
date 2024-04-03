#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generateRandomNum();
int generateRandomNum(){
    srand(time(NULL));
    int randNum = rand() % 8;
    return randNum;
}
int main(){
    int randnum = generateRandomNum();
    printf("%d",randnum);
    return 0;
}