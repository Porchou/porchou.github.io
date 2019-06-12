#include<stdio.h>
main()
{
/*
	// (A) 

	int   a = 300, b, c ;  
	if ( a >= 400 )
	b = 300 ;   
	c = 200 ; 
	printf ( "\n%d %d", b, c ) ; 
	//output is : 0 200
	//because false condition if a>=400 but a=300 only. so b!=300 it mean b=0;  
*/

/*
	//(B)
 	int   a = 500, b, c ;  
	if ( a >= 400 ) 
	b = 300 ;   
	c = 200 ;   
	printf ( "\n%d %d", b, c ) ; 
	//Output is : 300 400
	// because true condition: if a>=400 so b=300;
*/
/*	
	//(C)
	int   x = 10, y = 20 ;  
	if ( x == y ) ;   
	printf ( "\n%d %d", x, y ) ; 
	//output is : 10 20 because "if condition" is false so x!=y; if it true so x=y; 
*/
/*
	//(D)
	int   x = 3, 
	y = 5 ;  
	if ( x == 3 )   
	printf ( "\n%d", x ) ;  
	else ;   
	printf ( "\n%d", y ) ; 
	//Output is : 3 5 because bout condition are true bcz x=3. if x!=3 so it print only Y value; 
	//NOTE : NO matter what the value of X, Y will be print its value. 
*/
/*
	//(E)
	int   x = 3 ;  
	float   y = 3.0 ;  
 	if ( x == y )   
	printf ( "\nx and y are equal" ) ;  
	else   
	printf ( "\nx and y are not equal" ) ; 
	//Output is : X and Y are equal -> "if condition" 
	//This Program is up on : 1/value of X and Y ; 2/ If/else condition. 
*/
/*
	//(F)
	int   x = 3, y, z ;  //x=10
	y = x = 10 ;  //x=y=10
	z = x < 10  ;  //x<10 , z<10
	printf ( "\nx = %d y = %d z = %d", x, y, z ) ; 
	//Output is : x=y=10 z=0(false), value z=0/1 is because condition between x and Z; 
*/
/*
	//(G)
	int  k = 35 ;  
	printf ( "\n%d %d %d", k == 35, k = 50, k > 40 ) ; 
	//output is : 0 50 0;
	//first
*/

/*
	//(H)
	int i = 65 ;  
	char j = 'A' ;  
	if ( i == j )   
	printf ( "C is WOW" ) ;  
	else   
	printf( "C is a headache" ) ; 
	//Output is : C is WOW.
	// This condition is mean it up on Ascii table of char to convert from char to number. 
*/
/*	
	//(I)
	int   a = 5, b, c ;  
	b = a = 15 ;  
	c = a < 15 ;  
	printf ( "\na = %d b = %d c = %d", a, b, c ) ; 
	//output is : a=15 b=15 c=0
	// a=b=15 and value C is for condition(0 is false 1 is true).
*/
/*
	//(J)
	int  x = 15 ;  
	printf ( "\n%d %d %d", x != 15, x = 20, x < 30 ) ; 
	//output is : 1 20 1
	// x=20 	
*/

// PartII : Point out the errors, if any, in the following programs:  

/*		
	//(1)
	float   a = 12.25, b = 12.52 ;  
	if ( a = b )  // missing one more "=" . 
	printf ( "\na and b are equal" ) ; 
*/
/*
	//(2) ***
	int j = 10, 
	k = 12 ;  
	if ( k >= j ) //k>j ; k=j 
	{   //don have
	{    
	k = j ;    
	j = k ;	// don have
	}
	}	//don have
*/
/*
	//(3)	
	if ( 'X' < 'x' ) //x is bigger then X;  
	printf ( "\n ascii value of X is smaller than that of x" ) ; 
	//true
*/	
/*	
	//(4)
	int  x = 10 ;  
	if ( x >= 2 ) 
	then   // Don have this "Word" ;
	printf ( "\n%d", x ) ; 
*/
/*	
	//(5)	
	int  x = 10 ;  
	if x >= 2   //missing "()"  
	printf ( "\n%d", x ) ; 
*/
/*	
	//(6)
	int  x = 10, y = 15 ;  
	if ( x % 2 = y % 3 ) // missing one more "=" 
	printf ( "\nCarpathians" ) ; 
*/
/*	
	//(7)
	int x = 30 , y = 40 ;  
	if ( x == y )   
	printf( "x is equal to y" ) ;  
	elseif ( x > y )  //miss "space"  
	printf( "x is greater than y" ) ;  
	elseif ( x < y )  //miss "space" 
	printf( "x is less than y" ) ; 
*/
/*	
	//(8)
	int  x = 10 ;  
	if ( x >= 2 ) then // NO word "then"  
	printf ( "\n%d", x ) ; 
*/
/*	
	//(9)
	int a, b ;  
	scanf ( "%d %d",a, b ) ;  
	if ( a > b ) ; //don have ";"  
	printf ( "This is a game" ) ;  
	else   
	printf ( "You have to play it" ) ; 
*/
	//What would be the output of the following program:
/*
	//(a)
	int   i = 4, z = 12 ;  
	if ( i = 5 || z > 50 )   
	printf ( "\nDean of students affairs" ) ;  
	else   
	printf ( "\nDosa" ) ; 
	//output is : Dean of student affairs 
	//it up on condition.
*/
/*
	//(b)
	int   i = 4, z = 12 ;  
	if ( i = 5 && z > 5 )   
	printf ( "\nC Programming" ) ;  
	else   printf ( "\nWish C was Easy !" ) ; 
	//Output is :  C programming
*/
/*
	//(c)
	int   i = 4, //is ";" not ","
	j = -1, k = 0, w, x, y, z ; //missing data type; 
	w = i || j || k ; 
	x = i && j && k ;  
	y = i || j && k ;  
	z = i && j || k ;  
	printf ( "\nw = %d x = %d y = %d z = %d", w, x, y, z ) ; 
	//output is : w=1, x=0, y=1, z=1
*/

/*
	//(d)
	int   i = 4, j = -1, k = 0, y, z ;  
	y = i + 5 && j + 1 || k + 2 ;  
	z = i + 5 || j + 1 && k + 2 ;  
	printf ( "\ny = %d z = %d", y, z ) ; 
	//output is : y=1, z=1 bcz it is true=1
*/	
/*	
	//(e)
	int   i = -3, j = 3 ;  
	if ( !i + !j * 1 )  //0+0*1= -> 0+0=0 
	printf ( "\n Massaro" ) ;  
	else   
	printf ( "\n Bennarivo" ) ;
	//output is : Bennarvo 
	//when meet false condition it will not show next statement.
*/
/*	
	//(f)
	int  a = 40 ;  
	if ( a > 40 && a < 45 )  //0&&1 
	printf ( "a is greater than 40 and less than 45" ) ;
	else   printf ( "%d", a ) ; 
	//output is : a=40 (else)
*/
/*	
	//(g)
	int  p = 8, q = 20 ;  
	if ( p == 5 && q > 5 )  //0&&1=0 
	printf ( "\n Why not C" ) ;  
	else   
	printf ( "\n Definitely C !" ) ; 
	//output is : Definitely C !
*/
/*
	//(h)
	int i = -1, j = 1, k ,l ;  
	k = i && j ;  l = i || j ;  
	printf ( "%d %d", i, j ) ; 
	//output is : -1 , 1	
*/
/*
	//(i)
	int x = 20 , y = 40 , z = 45 ;  
	if ( x > y && x > z )   
	printf( "x is big" ) ;  
	else if ( y > x && y > z )    
	printf( "y is big" ) ;  
	else if ( z > x && z > y )    
	printf( "z is big" ) ; 
	//output is : z is big
*/
/*
	//(j)
	int i = -1, j = 1, k ,l ;  
	k = !i && j ;  l = !i  ||  j ;  
	printf ( "%d %d", i, j ) ;
	//output is : -1 , 1
*/
/*
	//(k)
	int   j = 4, k ;  
	k = !5 && j ;  //0&&1=0
	printf ( "\nk = %d", k ) ; 
	//output is : k=0
*/
	// [D] Point out the errors, if any, in the following programs:
/*
	//(a)  
	int   i = 2, j = 5 ;  
	if ( i == 2 && j == 5 ) //1&&1=1 true  
	printf ( "\nSatisfied at last" ) ; 
	//output is : Satisfied at lest
*/
/*
	//(b)
	int   code, flag ;  
	if ( code == 1 & flag == 0 )  //missing one more "&" 
	printf ( "\nThe eagle has landed" ) ; 
	//output is nothing because it false condition
*/
/*
	//(c)
	char   spy = 'a', password = 'z' ;  
	if ( spy == 'a' or password == 'z' ) //no "or" is "||"  
	printf ( "\nAll the birds are safe in the nest" ) ; 
	//output is : All the brids are safe in the nest
*/
/*
	//(d)
	int   i = 10, j = 20 ;  
	if ( i = 5 ) && if ( j = 10 )    //correct: if(i==5 && j==10) 
	printf ( "\nHave a nice day" ) ; 
	//output is : nothing because it false condition
*/
/*
	//(a)
	int  x = 10 , y = 20;  
	if ( x >= 2 and y <=50 )   // no "and" is "&&"  
	printf ( "\n%d", x ) ; 
	//ouput is : 10
*/
/*
	//(b)
	int   a, b ;  
	if ( a == 1 & b == 0 )  // add more "&" 
	printf ( "\nGod is Great" ) ; 
	//output is : nothing because it false condition.
*/
/*
	//(c)
	int x = 2;  
	if ( x == 2 && x != 0 ) ; //no ";" 
	{   
	printf ( "\nHi" ) ;   
	printf( "\nHello" ) ;  
	}  
	else   
	printf( "Bye" ) ; 
	//output is : hi hello (because it ture condition)
*/
/*
	//(d)
	int   i = 10, j = 10 ;  
	if ( i && j == 10)   
	printf ( "\nHave a nice day" ) ;           
	//output is : have a nice day>> true condition
*/

	// [E] What would be the output of the following programs:  
/*
	//(a) 
	int   i = -4, j, num ;  
	j = ( num < 0 ? 0 : num * num ) ; //  j= if (num<0) is true so j=0, false j=num*num;but num=0; 
	printf ( "\n%d", j ) ; 
	//output is : j=1
*/
/*
	//(b) 
	int   k, 
	num = 30 ;  
	k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ;  //num=200
	printf ( "\n%d", num ) ; 
	//output is : num=30;
*/

/*
	//(c) 
	int   j = 4 ; 
	( !j != 1 ? printf ( "\nWelcome") : printf ( "\nGood Bye") ) ;   // (//j=0 !=1) is true so it printf"wellcome" 
	//output is : wellcome.
*/
	
//	[F] Point out the errors, if any, in the following programs

/*	
	//(a)
	int   tag = 0, code = 1 ;  
	if ( tag == 0 )  
	( code > 1 ) ? printf ( "\nHello" ) ? printf ( "\nHi" ) ;
	//no "?" is ":" in the second one  
	else   printf ( "\nHello Hi !!" ) ; 
*/
/*
	//(b)
	int   ji = 65 ;  
	printf ( "\nji >= 65 ? %d : %c", ji ) ; // no "%c" is "%d"
	//output is : ji >= 65 ? 65:65
*/
/*	
	//(c) : ?
	int   i = 10, j ;  i >= 5 ? ( j = 10 ) : ( j = 15 ) ;  
	printf ( "\n%d %d", i, j ) ; 
	//no error
*/
/*
	//(d) *****************
	int a = 5 , b = 6 ; 
	if( a == b) ? printf( "%d",a)  ; 
*/

/*
	//(e)	
	//int n = 9 ;  ( n == 9) ? printf( "You are correct" )  : printf( "You are wrong" ) ; correct one
	int n = 9 ;  ( n == 9 ? printf( "You are correct" ) ; : printf( "You are wrong" ) ;) ; 
	//add ")" -> No ";" -> clear ");"
*/	
/*	
	//(f)	
	int   kk = 65 ,ll ;  
	ll = ( kk == 65 : printf ( "\n kk is equal to 65" ) : printf ( "\n kk is not equal to 65" )  );
	//change kk==65 ":" to kk==65 "?"  
	printf( "%d", ll ) ; 
	//output is : kk is equal to 6519
*/

/*
	//(g)	
	int   x = 10, y = 20 ;  
	(x == 20 && y != 100) ? printf( "True" ) : printf( "False" ) ; 
	// add "()" between x==20 && y!=100
	//output is : false
*/

// [F] Rewrite the following programs using conditional operators

	//(a)
/*	
	int   x, min, max ;  							
	scanf ( "\n%d %d", &max, &x ) ;  				
	if ( x > max )   								
	max = x ;  
	else  
	min = x ; 
*/	
/*
			int x,min,max;
			scanf("\n %d %d", &max, &min);
			(x>max)? (max=x) : (min=x) ;
*/

//
//	//(b)
//	int   code ; 
//	scanf ( "%d", &code ) ;  
//	if ( code > 1 )   
//	printf ( "\nJerusalem" ) ;  
//	else if ( code < 1 )  
//	printf ( "\nEddie" ) ;   
//	else   
//	printf ( "\nC Brain" ) ; 

	//convert to condition operator form
/*
	int code;
	scanf("&d",&code);
	code>1 ? {(printf("Jerusalem")):(code<1)?printf("Eddie"):printf("Brain")};
//	(code>1 ? printf("\nJerusalem"):(code<1)?printf("\nEddie"):printf("\nC Brain"));
//	(code>1? printf("Jerusalem"):)
*/
/*
	//(c)
	float sal ;  
	printf ("Enter the salary" ) ;  
	scanf ( "%f", &sal ) ;  
	if ( sal < 40000 && sal > 25000 )  
	printf ( "Manager" ) ;  
	else if ( sal < 25000 && sal > 15000 )    
	printf ( "Accountant" ) ;   
	else   
	printf ( "Clerk" ) ; 
*/
	}  	












	
	
	
	
	



	
	
	
	
	
	
	
	



