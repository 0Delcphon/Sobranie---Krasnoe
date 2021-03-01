#include <stdio.h>
#include <stdlib.h>
#include <iostream>
 
using namespace std;


 typedef struct list_elem {	// структура - элемент списка
 
      int index;			// поле данных
 
      struct list_elem *next;
 
  } LEL;			// пользовательский тип структурной переменной
 
  LEL* AddElem (LEL *last);	// функция присоединения нового элемента списка	
 
  void PrintList(void);		//функция вывода на печать данных списка
 
  void  PoiskEl(void);		//функция поиска одинаковых элементов
 
  LEL  *list;			// адрес начала списка
 
 
 int main()
 
{
 
  int N;
 
  printf("\nВведите размерность списка: ");
 
  scanf("%d",&N);		// ввод размера списка
 
  LEL *end=NULL;		// указатель на последний элемент
 
  printf("\nВведенные данные:");
 
  do{			// цикл формирования списка
     end=AddElem(end);
 
     if(end==NULL)		//  выход из цикла
 
       break;
 
    N--;			// счетчик введенных элементов
 
   } while(N > 0); 		// пока необходимо вводить элементы                      
 
   printf("\n\n\nВаш список:");
 
   PrintList();			// вывод на печать сформированного списка
 
   PoiskEl();
 
   cout << "\n\n\nВ списке нету одинаковых элементов";
 
 
 return 0;
 
}
 
   LEL* AddElem (LEL *last)
 
   {
    LEL *pel;				// указатель на новый элемент		
 
    static int num=1;			// номер вводимого элемента
 
    pel=(LEL*)malloc(sizeof(LEL));		// выделение памяти для элемента
 
    printf("\n\t%d элемент: ",num);
 
    scanf("%d",&pel->index);		// ввод данных
 
    fflush(stdin);			// очищение буфера ввода
 
    pel->next=NULL;			// элемент становится последним в списке
 
    if(list==NULL)			// если список пуст, то введенный элемент становится первым  
 
       list=pel;
 
    else				// иначе присоединяется к последнему в списке
 
       last->next=pel;
 
    num++;				// счетчик элементов
 
    return pel;
 }
 
   void PrintList(void)
 
   {
    LEL *pel=list;		      //  printf("\n\nlist po adresy %p = %d\n\n",list,list);
 
    while(pel!=NULL)			// пока не найден последний элемент
 
	{
	 printf("%5d",pel->index);	// выводим содержимое поля index
 
	 pel=pel->next;
 
	}
    }
 
 
 void PoiskEl(void)
 
   {
    LEL *pel=list;
 
     while(pel->next!=NULL)		//цикл сравнения элементов
 
   {
     while(pel->next!=NULL)
 
      {
	 pel=pel->next;		
 
	 if(list->index==pel->index)		//если есть одинаковые элементы - выходим из цикла 
 
	 {
	   printf("\n\nДа, в списке есть одинаковые элементы\n\n");
 
	   exit(0);
	 }
 
	}
 
        pel=list->next;
 
       list=list->next;
    }
  }