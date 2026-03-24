#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2




//≥ı ºªØ∆Â≈Ã
void Initboard(char board[ROWS][COLS],int r,int c,char set);
//¥Ú”°∆Â≈Ã
void DisplayBoard(char board[ROWS][COLS], int r, int c);