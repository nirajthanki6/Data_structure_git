#ifndef STACK_H
#define STACK_H

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *link;
}*top = NULL;

#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

#endif
