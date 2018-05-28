#include "Lab7_Array.h"

void main()

{

int data = 0;

cout << "Size: ";
cin >> data;

QueueOnArray<double> que(data);

for (double i = 0.5; i < 6; i++)
que.Push((double)(i + 4));
cout << que << "\n";
cout << que.Pop() << "\n";

for (int i = 0.5; i < 6; i++)
que.Push((double)(i + 1));
cout << que << "\n";
system("pause");
}