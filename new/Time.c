//
//  Time.c
//  C datastructure exercise
//
//  Created by Nahom Hailu on 25/11/15.
//  Copyright (c) 2015 Nahom. All rights reserved.
//

#include "Time.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int read_time(Ttime *mytime,const char *prompt){
    int hours,minutes;
    char str[10];
   
    char *token2;
    char token[6];
    char *ptr;
    char *strOcuur;
   
    int size_token;
    enum boo {y, n};
    enum boo allowlooping= y;
    hours = minutes = 0;
    
  
    while (allowlooping == y) {
        printf("%s",prompt);
        fgets(str, 10, stdin);
        int str_size = sizeof(str)/sizeof(char);
        
        //printf("%d bytes is a size of an char\n",tester );
        for (int i = 0; i<str_size; i++) {
            if (i>4 && (int)str[i] > 31 && (int)str[i] < 127) {
                printf("Incorrect Format\n");
                token[0]='\0';
                allowlooping = y;
                break;
            }
            if(str[2]!=':'){
                printf("Incorrect Format\n");
                token[0]='\0';
                allowlooping = y;
                break;
            }
            if (i<5) {
                token[i] = str[i];
                if ( i!=2 &&( (int)str[i]< 48|| (int)str[i] > 57)) {
                    printf("Incorrect input type \n");
                    token[0]='\0';
                    allowlooping = y;
                    break;
                }
            }
            else
                allowlooping=n;
        }
        token[5]='\0';
        size_token= sizeof(token)/sizeof(char);
        strOcuur = strchr(token, ':');
        
        
        if( strOcuur !=NULL ){
            
            token2 = strtok(token,":");
            hours = atoi(token2);
            token2 = strtok(NULL, " ");
            minutes = atoi(token2);
        }
        if ((hours >23 || minutes >59) && allowlooping == n) {
            printf("Invalid time\n");
            allowlooping = y;
        }
    
    }
       *mytime = (hours * 60) + minutes;

    return 1;
}
// string can be parsed using strtol and atoi function

   

void print_time(Ttime myTime){
    int hours,minutes;
    hours = myTime / 60;
    minutes = myTime % 60;
    printf("Your time is %d:%d\n",hours,minutes);
}
