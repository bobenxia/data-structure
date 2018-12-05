#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H

#include <stdio.h>
#include <stdlib.h>

/* 宏定义 */
#define LIST_INIT_SIZE 100           //顺序表存储空间的初始化分配量
#define LISTINCREMENT  10            //顺序表存储空间的分配增量

/* 顺序表类型定义 */
#ifndef LELEMTYPE_SQ
#define LELEMTYPE_SQ
typedef int LElenmType_Sq
#endif

typedef struct{                       
  LElemType_Sq *elem;                 //存储空间基址（指向第一个结点的指针）
  int length;                         //当前顺序表的长度
  int listsize;                       //当前分配的存储容量
}SqList;                            

status InitList_Sq(SqList *L);
