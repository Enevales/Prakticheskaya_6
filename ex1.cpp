/*Написать функцию с одним целым параметром, возвращающую номер
вызова этой функции (первый вызов возвращает 1, второй — 2, третий
— 3, и т. д.)*/

#include <iostream>
#include <cstdlib>

using namespace std;

int num()
{
  static int x = 0;
  x += 1;
  return x;
}
int main()
{
  for(int i = 0; i<=10; i++)
  {
  cout << num() << endl;
  }
  return 0;
}
