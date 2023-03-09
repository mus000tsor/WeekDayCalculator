#include <iostream>


int main(){

int today;


// Promting user to enter which day today is and finishing the program right away
// if the day is incorrect
std::cout << "Which day is today? [1:Monday, 2:Tuesday, ...]" << std::endl;
std::cin >> today;

if ((today < 1) || (today > 7)) {
    std::cout << today << " is not a valid day. Bye!" << std::endl;
}

int passed_days;
std::cout << "How many days have passed up to today [starting from 1]?" << std::endl;
std::cin >> passed_days;
passed_days %=7;

int day_in_the_past = today - passed_days;
// Targeting the situation when the result
// of the day difference is 0

if (day_in_the_past == 0){
    switch (today)
    {
    case 1:{
    std::cout << "Today is Monday\nIf we went " << passed_days << " days in the past" << " we would hit a Sunday." << std::endl;
    }
    break;
    case 2:{
    std::cout << "Today is Tuesday\nIf we went " << passed_days << " days in the past" << " we would hit a Sunday." << std::endl;
    }
    break;
    case 3:{
    std::cout << "Today is Wednesday\nIf we went " << passed_days << " days in the past" << " we would hit a Sunday." << std::endl;
    }
    break;
    case 4:{
    std::cout << "Today is Thursday\nIf we went " << passed_days << " days in the past" << " we would hit a Sunday." << std::endl;
    }
    break;
    case 5:{
    std::cout << "Today is Friday\nIf we went " << passed_days << " days in the past" << " we would hit a Sunday." << std::endl;
    }
    break;
    case 6:{
    std::cout << "Today is Saturday\nIf we went " << passed_days << " days in the past" << " we would hit a Sunday." << std::endl;
    }
    break;
    
    default: {
    std::cout << "Today is Saturday\nIf we went " << passed_days << " days in the past" << " we would hit a Sunday." << std::endl;
    }
    }
 
}

// Targeting the situation when the result of the day difference is within the
// range of 1 to 6


switch (day_in_the_past){
case 1: { 
    if (today == 2) {
        std::cout << "Today is Tuesday.\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
    }  
    if (today == 3) {
        std::cout << "Today is Wednesday.\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
    }
    if (today == 4) {
        std::cout << "Today is Thursday.\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
    }
    if (today == 5) {
        std::cout << "Today is Friday.\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
    }
    if (today == 6) {
        std::cout << "Today is Saturday.\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
    }
    if (today == 7) {
        std::cout << "Today is Sunday.\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
    }
}
    break;

case 2: {   
    if (today == 3) {
        std::cout << "Today is Wednesday.\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
    }
    if (today == 4) {
        std::cout << "Today is Thursday.\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
    }
    if (today == 5) {
        std::cout << "Today is Friday.\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
    }
    if (today == 6) {
        std::cout << "Today is Saturday.\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
    }
    if (today == 7) {
        std::cout << "Today is Sunday.\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
    }
}
    break;
    
case 3: {
    if (today == 4) {
        std::cout << "Today is Thursday.\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
    }
    if (today == 5) {
        std::cout << "Today is Friday.\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
    }
    if (today == 6) {
        std::cout << "Today is Saturday.\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
    }
    if (today == 7) {
        std::cout << "Today is Sunday.\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
    }
}
    break;

case 4: {
    if (today == 5) {
        std::cout << "Today is Friday.\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
    }
    if (today == 6) {
        std::cout << "Today is Saturday.\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
    }
    if (today == 7) {
        std::cout << "Today is Sunday.\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
    }
}
    break;

case 5: {
    if (today == 6) {
        std::cout << "Today is Saturday.\nIf we went " << passed_days << " days in the past we would hit a Friday" << std::endl;
    }
    if (today == 7) {
        std::cout << "Today is Sunday.\nIf we went " << passed_days << " days in the past we would hit a Friday" << std::endl;
    }
}
    break; 
case 6: {
    std::cout << "Today is Sunday.\nIf we went 1 day in the past we would hit Saturday" << std::endl;
}
    break;  
      
default:
    break;
}

// Targeting the situation when the result of the day difference is negative

if (day_in_the_past < 0) {
    day_in_the_past +7;
    if (today == 1){
        switch (day_in_the_past)
        {
        case 1 : {
            std::cout << "Today is Monday\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
        }
            break;
        case 2 : {
            std::cout << "Today is Monday\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
        }
            break;
        case 3 : {
            std::cout << "Today is Monday\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
        }
            break;
        case 4 : {
            std::cout << "Today is Monday\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
        }
            break;
        case 5 : {
            std::cout << "Today is Monday\nIf we went " << passed_days << " days in the past we would hit a Friday" << std::endl;
        }
            break; 
        case 6 : {
            std::cout << "Today is Monday\nIf we went " << passed_days << " days in the past we would hit a Saturday" << std::endl;
        }
            break;           
        
        default:{
            std::cout << "Today is Monday\nIf we went " << passed_days << " days in the past we would hit a Sunday" << std::endl;
        }
            break;
        }
    } else if (today == 2) {
        switch (day_in_the_past)
        {
        case 1 : {
            std::cout << "Today is Tuesday\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
        }
            break;
        case 2 : {
            std::cout << "Today is Tuesday\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
        }
            break;
        case 3 : {
            std::cout << "Today is Tuesday\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
        }
            break;
        case 4 : {
            std::cout << "Today is Tuesday\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
        }
            break;
        case 5 : {
            std::cout << "Today is Tuesday\nIf we went " << passed_days << " days in the past we would hit a Friday" << std::endl;
        }
            break; 
        case 6 : {
            std::cout << "Today is Tuesday\nIf we went " << passed_days << " days in the past we would hit a Saturday" << std::endl;
        }
            break;           
        
        default:{
            std::cout << "Today is Tuesday\nIf we went " << passed_days << " days in the past we would hit a Sunday" << std::endl;
        }
            break;
        }
    } else if (today == 3) {
        switch (day_in_the_past)
        {
        case 1 : {
            std::cout << "Today is Wednesday\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
        }
            break;
        case 2 : {
            std::cout << "Today is Wednesday\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
        }
            break;
        case 3 : {
            std::cout << "Today is Wednesday\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
        }
            break;
        case 4 : {
            std::cout << "Today is Wednesday\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
        }
            break;
        case 5 : {
            std::cout << "Today is Wednesday\nIf we went " << passed_days << " days in the past we would hit a Friday" << std::endl;
        }
            break; 
        case 6 : {
            std::cout << "Today is Wednesday\nIf we went " << passed_days << " days in the past we would hit a Saturday" << std::endl;
        }
            break;           
        
        default:{
            std::cout << "Today is Wednesday\nIf we went " << passed_days << " days in the past we would hit a Sunday" << std::endl;
        }
            break;
        }
    } else if (today == 4){
        switch (day_in_the_past)
        {
        case 1 : {
            std::cout << "Today is Thursday\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
        }
            break;
        case 2 : {
            std::cout << "Today is Thursday\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
        }
            break;
        case 3 : {
            std::cout << "Today is Thursday\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
        }
            break;
        case 4 : {
            std::cout << "Today is Thursday\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
        }
            break;
        case 5 : {
            std::cout << "Today is Thursday\nIf we went " << passed_days << " days in the past we would hit a Friday" << std::endl;
        }
            break; 
        case 6 : {
            std::cout << "Today is Thursday\nIf we went " << passed_days << " days in the past we would hit a Saturday" << std::endl;
        }
            break;           
        
        default:{
            std::cout << "Today is Thursday\nIf we went " << passed_days << " days in the past we would hit a Sunday" << std::endl;
        }
            break;
        }        
    } else if (today == 5){
        switch (day_in_the_past)
        {
        case 1 : {
            std::cout << "Today is Friday\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
        }
            break;
        case 2 : {
            std::cout << "Today is Friday\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
        }
            break;
        case 3 : {
            std::cout << "Today is Friday\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
        }
            break;
        case 4 : {
            std::cout << "Today is Friday\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
        }
            break;
        case 5 : {
            std::cout << "Today is Friday\nIf we went " << passed_days << " days in the past we would hit a Friday" << std::endl;
        }
            break; 
        case 6 : {
            std::cout << "Today is Friday\nIf we went " << passed_days << " days in the past we would hit a Saturday" << std::endl;
        }
            break;           
        
        default:{
            std::cout << "Today is Friday\nIf we went " << passed_days << " days in the past we would hit a Sunday" << std::endl;
        }
            break;
        }                
    } else if (today == 6){
        switch (day_in_the_past)
        {
        case 1 : {
            std::cout << "Today is Saturday\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
        }
            break;
        case 2 : {
            std::cout << "Today is Saturday\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
        }
            break;
        case 3 : {
            std::cout << "Today is Saturday\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
        }
            break;
        case 4 : {
            std::cout << "Today is Saturday\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
        }
            break;
        case 5 : {
            std::cout << "Today is Saturday\nIf we went " << passed_days << " days in the past we would hit a Friday" << std::endl;
        }
            break; 
        case 6 : {
            std::cout << "Today is Saturday\nIf we went " << passed_days << " days in the past we would hit a Saturday" << std::endl;
        }
            break;           
        
        default:{
            std::cout << "Today is Saturday\nIf we went " << passed_days << " days in the past we would hit a Sunday" << std::endl;
        }
            break;
        }         
    } else if (today == 7){
        switch (day_in_the_past)
        {
        case 1 : {
            std::cout << "Today is Sunday\nIf we went " << passed_days << " days in the past we would hit a Monday" << std::endl;
        }
            break;
        case 2 : {
            std::cout << "Today is Sunday\nIf we went " << passed_days << " days in the past we would hit a Tuesday" << std::endl;
        }
            break;
        case 3 : {
            std::cout << "Today is Sunday\nIf we went " << passed_days << " days in the past we would hit a Wednesday" << std::endl;
        }
            break;
        case 4 : {
            std::cout << "Today is Sunday\nIf we went " << passed_days << " days in the past we would hit a Thursday" << std::endl;
        }
            break;
        case 5 : {
            std::cout << "Today is Sunday\nIf we went " << passed_days << " days in the past we would hit a Friday" << std::endl;
        }
            break; 
        case 6 : {
            std::cout << "Today is Sunday\nIf we went " << passed_days << " days in the past we would hit a Saturday" << std::endl;
        }
            break;           
        
        default:{
            std::cout << "Today is Sunday\nIf we went " << passed_days << " days in the past we would hit a Sunday" << std::endl;
        }
            break;
        }          
    }
}





    
}