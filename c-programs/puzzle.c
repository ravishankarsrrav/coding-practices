// Written on : in 2015 November
// Author : Ravishankar S R

#include<stdio.h>
#define PUZZLE n[21][21]        //defining array
#define x_max 20                //defining maximum row size
#define y_max 20                //defining maximum column size


int i,j,x=19,y=5,a=0,b=18;
char n[21][21]={
	{"################## #"},
	{"#       #       #  #"},
	{"#       #       #  #"},
	{"####  #######   #  #"},
	{"#     #   #   ###  #"},
	{"#   ##### #        #"},
	{"#    #    #  #  ## #"},
	{"#    #    #  #   # #"},
	{"######    #  #   ###"},
	{"#         #  ###   #"},
	{"#         #    #   #"},
	{"#   #######    #   #"},
	{"#   #          #   #"},
	{"#   #   #########  #"},
	{"#   #     #      ###"},
	{"#   #     #      # #"},
	{"#   #  #  #  #   # #"},
	{"#   #  #######   # #"},
	{"#           ###### #"},
	{"##### ##############"}
};
//main program
//-------
main()
{ 
	while(1)
	{
  fun_print();       //function to print the array  
  if(n[0][18]=='*')
  {
  	printf("\ngame completed\n");
  }
  //fun_check();       // function to check the end of the puzzle
  fun_move();        // function to move the character
}
}
//--end of main

//function to move '*'
fun_move()
{
	char q;
	int i=x,j=y;;

	q=getchar();   
 if(q==65)            //up function
 {
 	if(x==0)
 	{
 		printf("res");
 	}
 	else if(n[--i][y]==' ')
 	{
 		x--;
 	}
 	else 
 	{
 		x;
 	}
 }

 if(q==66)              //down function
 {
 	if(n[++i][y]=='#')
 	{
 		x;
 	}
 	else 
 	{
 		x++;
 	}
 }

  if(q==68)             //left function
  {
  	if(n[i][--j]=='#')
  	{
  		y;
  	}
  	else 
  	{
  		y--;
  	}
  }

  if(q==67)            //right function
  {
  	if(n[i][++j]=='#')
  	{
  		y;
  	}
  	else
  	{
  		y++;
  	}
  }
}

//end of move function


//function to print
fun_print()
{
	int i,j,a=0,b=18;
	char m='*',r;
	for(i=0;i<x_max;i++)
	{
		for(j=0;j<y_max;j++)
		{
			if(n[a][b]==m)
				{printf("game completed\n");}

			if((i==x) & (j==y))
			{
				printf("%c",m);
			}
			else
			{
				printf("%c",n[i][j]);
			} 
		}
		printf("\n");
	}
//end of print function
}


fun_check()
{
	int i,j;
	char r;
	for(i=0;i<x_max;i++)
	{
		for(j=0;j<y_max;j++)
		{
			if((i==0) & (j==18))
			{
				r= n[i][j];
				if(r=='*')
					{printf("game completed\n");}
			} 
		}
  //printf("\n");
	}

}
