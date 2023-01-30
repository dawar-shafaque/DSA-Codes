#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

#include"Lab1smallest.c" 
#include"Lab1largest.c" 
#include"Lab1swap.c" 
#include"Lab1even.c" 
#include"Lab1permutation.c" 
#include"Lab1array.c"
#include"Lab2emp.c"
#include"Lab2add.c"
#include"Lab2complex.c"
#include"Lab2details.c"
#include"Lab2dist.c"
#include"Lab2dma.c"
#include"Lab2matrix.c"
#include"Lab2poly.c"
#include"Lab2zones.c"
#include"Lab3det.c"
#include"Lab3eq.c"
#include"Lab3func.c"
#include"Lab3matrixes.c"
#include"Lab3transpose.c" 
#include"Lab4ll.c"
#include"Lab4main_llrev.c"
#include"Lab4main_print.c"
#include"Lab5main_circular.c"
#include"Lab6main_dll.c"
#include"Lab6main_double.c"
#include"Lab6main_duplicates.c"
#include"Lab6main_imp.c"
#include"Lab6main_rev.c" 
#include"Lab7main_convert.c"
#include"Lab7main_pre.c"
#include"Lab7main_stack.c"
#include"Lab7main_stackll.c"
#include"Lab8operations.c"
#include"Lab8deques.c"
#include"Lab8qstatic.c"
#include"Lab8queue.c"
#include"Lab8static.c"
#include"Lab9binary.c"
#include"Lab9hunt.c"
#include"Lab9linear.c"
#include"Lab10bst.c" 

int main()
{ 
printf("Enter your choice: "); 
int n; 
scanf("%d", &n);
switch(n)
{
    case 1:
        smallest(); 
        break;
    case 2:
        largest(); 
        break;
    case 3:
        swap(); 
        break;
    case 4:
        even(); 
        break; 
    case 5:
        permutation(); 
        break; 
    case 6:
        array(); 
        break;
    case 7:
        emp(); 
        break;
    case 8:
        add453(); 
        break; 
    case 9:
        complex(); 
        break; 
    case 10:
        details(); 
        break;
    case 11:
        details(); 
        break; 
    case 12:
        dist(); 
        break; 
    case 13:
        dma(); 
        break; 
    case 14:
        matrix(); 
        break; 
    case 15:
        zones(); 
        break;
    case 16:
        det(); 
        break;
    case 17:
        eq(); 
        break; 
    case 18:
        func(); 
        break; 
    case 19:
        matrixes();
        break;
    case 20:
        transpose(); 
        break;
    case 21:
        ll(); 
        break;
    case 22:
        main_llrev(); 
        break;
    case 23:
        main_print(); 
        break; 
    case 24:
        main_circular(); 
        break;
    case 25:
        main_dll(); 
        break;
    case 26:
        main_double(); 
        break;
    case 27:
        main_duplicates(); 
        break;
    case 28:
        main_imp(); 
        break;
    case 29:
        main_rev(); 
        break; 
    case 30:
        main_convert(); 
        break;
    case 31:
        main_pre(); 
        break;
    case 32:
        main_stack(); 
        break;
    case 33:
        main_stackll(); 
        break;
    case 34:
        main_operations(); 
        break;
    case 35:
        main_deques(); 
        break;
    case 36:
        main_qstatic(); 
        break;
    case 37:
        main_static(); 
        break;
    case 38:
        main_queue(); 
        break;
    case 39:
        main_binary(); 
        break;
    case 40:
        main_hunt(); 
        break;
    case 41:
        main_linear(); 
        break;
    case 42:
        main_bst(); 
        break;
    case 43:
        main_dll(); 
        break;
    case 44:
        main_double(); 
        break;
    case 45:
        main_pre(); 
        break;
    case 46:
        main_rev(); 
        break;
    case 47:
        main_print(); 
        break;
    }
}