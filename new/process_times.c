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
int main() {
    
    Ttime theTime;
    int num_times = get_numberof_runners("How many runners do you have?");
    Ttime runnersTime[num_times];
    
    for (int i = 0 ; i< num_times; i ++) {
            printf("Give the time %d (hh:mm) ",i+1);
            runnersTime[i] =  read_time(theTime, "");
        }
    printf("\n");
    print_time_list(runnersTime, num_times);

    return 0;
}