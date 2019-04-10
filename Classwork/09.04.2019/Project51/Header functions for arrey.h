#pragma once

void Fill(int *const arrey, const int size);
void Print(int *const arrey, const int size);
void Push(int *&arrey, int size, int value);
void PushInBegin(int *&arrey, int size, int value);
void PushInMiddle(int *&arrey, int size, int value, int after);
void DeleteElementInTheBegin(int *&arrey, int size);
void DeleteElementInTheEnd(int *&arrey, int size);
void DeleteElementOfIndex(int *&arrey, int size, int index);
int ChooseTypeOfOperation(int size);