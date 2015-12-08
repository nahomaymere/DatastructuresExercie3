//
//  Time.h
//  C datastructure exercise
//
//  Created by Nahom Hailu on 25/11/15.
//  Copyright (c) 2015 Nahom. All rights reserved.
//

#ifndef __C_datastructure_exercise__Time__
#define __C_datastructure_exercise__Time__

#include <stdio.h>

typedef int Ttime;//the time in minutes


int read_time(Ttime *mytime, const char *prompt);
void print_time(Ttime myTime);

#endif /* defined(__C_datastructure_exercise__Time__) */
