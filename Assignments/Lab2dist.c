//#include <stdio.h>
typedef struct distance
{
  int km;
  int mn;
} distance;

distance add (distance n1, distance n2)
{
  distance d;
  d.km = n1.km + n2.km;
  d.mn = n1.mn + n2.mn;
  
  if(d.mn>1000)
  {
      d.km= d.km + 1;
      d.mn= d.mn-1000;
  }
  return (d);
}

int dist () //main
{
  distance n1, n2, result;

  printf ("For 1st distance: \n");
  printf ("Enter the kilometers and meters covered: ");
  scanf ("%d %d", &n1.km, &n1.mn);
  printf ("\nFor 2nd distance: \n");
  printf ("Enter the kilometers and meters covered: ");
  scanf ("%d %d", &n2.km, &n2.mn);

  result = add (n1,n2);

  printf ("\nThe total distance is: %d Kilometers and %d Meters", result.km, result.mn);
  return 0;
}

