/**
 * @file dataread.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>
int readData(){
    FILE* f = fopen("data.csv", "r");
    char *token;
    if(f != NULL){
        char line[200];
        int i=1, j=0;
        while(fgets(line, sizeof line, f) != NULL) {
            token = strtok(line, ",");
            printf("\nName : %s", token);
            token = strtok(NULL, ",");
            printf("\nEmail-id : %s", token);
            token = strtok(NULL, ",");
            printf("\nGithub id : %s\n", token);   
    }
    fclose(f);
    }
    else {
        perror("data.csv");
    }    
}