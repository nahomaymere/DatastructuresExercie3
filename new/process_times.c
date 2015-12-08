//
//  process_times.c
//  C datastructure exercise
//
//  Created by Nahom Hailu on 25/11/15.
//  Copyright (c) 2015 Nahom. All rights reserved.
//

#include <stdio.h>
#include "Time.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
   
    Ttime theTime;
   
    int num_times = 0;
    
    char input[2];
    while (1) {
        printf("How many times you have? ");
        input[0]= getchar();
        num_times = atoi(input);
        getchar();
        if (num_times > 0 && num_times < 11) {
            break;
        }
        
      }
    
    Ttime runnersTime[num_times];
    for (int i = 0 ; i< num_times; i ++) {
            printf("Give the time %d (hh:mm) ",i+1);
            runnersTime[i] =  read_time(&theTime, "");
            
        }
        
    



 
    return 0;
}