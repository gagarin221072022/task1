#include <gtest/gtest.h>

#include<errno.h>
#include<unistd.h>

extern "C"{
#include "solution.h"
float x1, x2;
int fl;
}
 
TEST(negative, num1){
    solution(0, 0, 1, &fl, &x1, &x2);
    ASSERT_EQ(fl, 0);
}

TEST(negative, num2){
    solution(0, 0, 0, &fl, &x1, &x2);
    ASSERT_EQ(fl, 0);
}

TEST(greather_0root, num1){
    solution(1, 0, 8, &fl, &x1, &x2);
    ASSERT_EQ(fl, 0);
}

TEST(greather_0root, num2){
    solution(1, 6, 67, &fl, &x1, &x2);
    ASSERT_EQ(fl, -1);
}

TEST(greather_1root, num1){
    solution(1, 2, 1, &fl, &x1, &x2);
    ASSERT_EQ(fl, 1);
	ASSERT_EQ(x1, -1);
}

TEST(greather_1root, num2){                                                         solution(1, 0, 0, &fl, &x1, &x2);                                           
    ASSERT_EQ(fl, 1);                                                           
    ASSERT_EQ(x1, 0);                                                           
}   
 
TEST(greather_2root, num1){
    solution(1, 5, -41, &fl, &x1, &x2);
    ASSERT_EQ(fl, 2);
    ASSERT_FLOAT_EQ(x1, -9.373863);
    ASSERT_FLOAT_EQ(x2, 4.373864);
}

TEST(greather_2root, num2){
    solution(1, -4, 3, &fl, &x1, &x2);
    ASSERT_EQ(fl, 2);
    ASSERT_EQ(x1, 1);
    ASSERT_EQ(x2, 3);
}

TEST(greather_2root, num3){                                                     
    solution(1, 4, 0, &fl, &x1, &x2);                                           
    ASSERT_EQ(fl, 2);                                                           
    ASSERT_EQ(x1, -4);                                                          
    ASSERT_EQ(x2, 0);                                                           
} 

TEST(greather_2root, num4){
    solution(2, 0, -8, &fl, &x1, &x2);
    ASSERT_EQ(fl, 2);
    ASSERT_EQ(x1, 2);
    ASSERT_EQ(x2, -2);
}

