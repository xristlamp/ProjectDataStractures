#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int fix_date(char* date);//arguments: takes a date formated : YEAR/MO/DA (year/month/day)
						 //and returns the time in days sins 2000/01/01
void list_append(struct day_value* tail,int date,float open,float high,float low,float close,int volume,int openint);
					//appends the struct day_value to the end of the list 
					
struct day_value* get_data(char* path);//argument: path to txt file
										//returns the head to a list of structures with the data of the txt file
struct day_value{
    int date;
    float open;
    float high;
    float low;
    float close;
    int volume;
    int openint;
    struct day_value* next;
    struct day_value* prev;
};
#endif