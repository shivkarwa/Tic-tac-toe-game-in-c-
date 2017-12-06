/*******************************************************************
		 
		 ===============================================
				TIC-TAC-TOE GAME V1.0 -- SHIV KARWA
		 ===============================================
	 
				1. AGAINST 2 PLAYER .
				2. AGAINST COMPUTER/AI/CPU PLAYER
				
  AND CHECK WHO WILL WIN THE GAME OR THE MATCH IS DRAW OR PLAYER'S 
		MOVE ARE IN-VALID WITH DIFFERENT SOUND FREQUENCIES.
		
	USES MINIMAX ALGORITHIM IN TIC-TAC-TOE GAME TO SEE WHO WIN 
				BETWEEN PLAYER & COMPUTER PLAYER. 

********************************************************************/


#include <iostream.h>
#include <stdlib.h>
#include<dos.h>
#include <conio.h>

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();

int main()
{
	int player = 1,i,choice;
	char mark;
	int play;
	clrscr();
		cout << endl<<endl;
		cout <<"\t\t ===============================================";
		cout <<"\n\t\t\t Tic Tac Toe Game V1.0 -- SHIV KARWA \n";
		cout <<"\t\t ===============================================";
		cout <<"\n\t\t\t Player 1 (X)  -  Player 2 (O)" << endl << endl;
		cout << endl;
		cout<<"\n\t\t Choose with whom you want to play Tic Tac Toe.";
		cout << endl<<endl;
		cout<<"\n\t\t 1.Play with Player.";
		cout<<"\n\n\t\t 2.Play with Computer.";
		cout<<"\n\n\n\t\t Your choice in Tic Tac Toe : ";
		cin>> play;
		
		/*******************************************************************
		 2 players moves after one-another and check who wins or game draw or move is invalid . 
		********************************************************************/

	if(play==1)
	{
	do
		{	board();

		player=(player%2)?1:2;
			cout<<"\n\t\t\t Player "<<player<<" enter a number : ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
			{
			cout<<"\n\t\t\t Invalid move. ";
			sound(300);
			delay(100);
			nosound();
			sound(320);
			delay(110);
			nosound();
			sound(300);
			delay(100);
			nosound();
			sound(320);
			delay(110);
			nosound();	
			sound(300);
			delay(100);
			nosound();
			sound(320);
			delay(110);
			nosound();
			sound(300);
			delay(100);
			nosound();
			sound(320);
			delay(110);
			nosound();		
			sound(300);
		    delay(100);
		    nosound();
		    sound(320);
		    delay(110);
		    nosound();
		    sound(300);
		    delay(100);
		    nosound();
		    sound(320);
		    delay(110);
		    nosound();
		    sound(300);
		    delay(100);
		    nosound();
		    sound(320);
		    delay(110);
		    nosound();
			player--;
			getch();
			}
		i=checkwin();
		player++;
		}while(i==-1);
	board();
	if(i==1)
	{
		cout<<"\n\t\t\t Congratulation Player "<<--player<<" win. ";
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
	}
	else
	{
		cout<<"\n\t\t\t Oops!!! Game draw. ";
			  sound(300);
			  delay(200);
			  nosound();
			  sound(320);
			  delay(220);
			  nosound();
			  sound(340);
			  delay(240);
			  nosound();
			  sound(360);
			  delay(260);
			  nosound();
			  sound(380);
			  delay(280);
			  nosound();
			  sound(400);
			  delay(200);
			  nosound();
			  sound(420);
			  delay(220);
			  nosound();
			  sound(440);
			  delay(240);
			  nosound();
			  sound(460);
			  delay(260);
			  nosound();
			  sound(480);
			  delay(280);
			  nosound();
			  sound(500);
			  delay(200);
			  nosound();  
			  sound(300);
			  delay(200);
			  nosound();
			  sound(320);
			  delay(220);
			  nosound();
			  sound(340);
			  delay(240);
			  nosound();
			  sound(360);
			  delay(260);
			  nosound();
			  sound(380);
			  delay(280);
			  nosound();
			  sound(400);
			  delay(200);
			  nosound();
			  sound(420);
			  delay(220);
			  nosound();
			  sound(440);
			  delay(240);
			  nosound();
			  sound(460);
			  delay(260);
			  nosound();
			  sound(480);
			  delay(280);
			  nosound();
			  sound(500);
			  delay(200);
			  nosound();
			  sound(300);
			  delay(200);
			  nosound();
			  sound(320);
			  delay(220);
			  nosound();
			  sound(340);
			  delay(240);
			  nosound();
			  sound(360);
			  delay(260);
			  nosound();
			  sound(380);
			  delay(280);
			  nosound();
			  sound(400);
			  delay(200);
			  nosound();
			  sound(420);
			  delay(220);
			  nosound();
			  sound(440);
			  delay(240);
			  nosound();
			  sound(460);
			  delay(260);
			  nosound();
			  sound(480);
			  delay(280);
			  nosound();
			  sound(500);
			  delay(200);
			  nosound();
	}
getch();
	return 0;
	}
	else if(play==2)
	{
		do
	{
		board();

		if(player%2==1)
		player=1;
		else
		player=2;
		
		/*******************************************************************
			Against computer player CPU/AI move.
		********************************************************************/
		
		if(player==2)
		{
		cout << "\n\t\t\t Player " << player<<endl;
		cout<<"\n\t\t\t Press Enter for CPU. "<<endl;
		choice=rand()%9;
		mark='O';
		int placed=0;
		while(placed==0)
			{

				if (choice == 1 && square[1] == '1'){
				square[1] = mark;
				placed=1;
			}
				else if
				(choice == 2 && square[2] == '2')
			{

				square[2] = mark;
				placed=1;
			}
				else if (choice == 3 && square[3] == '3')
			{

				square[3] = mark;
				placed=1;
			}
				else if (choice == 4 && square[4] == '4')
			{

				placed=1;
				square[4] = mark;
			}
				else if (choice == 5 && square[5] == '5')
			{

				square[5] = mark;
				placed=1;
			}
				else if (choice == 6 && square[6] == '6')
			{

				square[6] = mark;
				placed=1;
			}
				else if (choice == 7 && square[7] == '7')
			{

				square[7] = mark;
				placed=1;
			}
				else if (choice == 8 && square[8] == '8')
			{

				square[8] = mark;
				placed=1;
			}
				else if (choice == 9 && square[9] == '9')
			{

				square[9] = mark;
				placed=1;
			}

				else
			{
				choice=rand()%9;
			}
		}
			i=checkwin();
			player++;
			getch();
			board();
	}

		/*******************************************************************
						Against computer player 1 moves.
		********************************************************************/
		else if(player==1)
	{
	cout << "\n\t\t\t Player " << player << ", enter a number: ";
	cin >> choice;
	mark='X';

	if (choice == 1 && square[1] == '1')

	square[1] = mark;
	else if (choice == 2 && square[2] == '2')

	square[2] = mark;
	else if (choice == 3 && square[3] == '3')

	square[3] = mark;
	else if (choice == 4 && square[4] == '4')

	square[4] = mark;
	else if (choice == 5 && square[5] == '5')

	square[5] = mark;
	else if (choice == 6 && square[6] == '6')

	square[6] = mark;
	else if (choice == 7 && square[7] == '7')

	square[7] = mark;
	else if (choice == 8 && square[8] == '8')

	square[8] = mark;
	else if (choice == 9 && square[9] == '9')

	square[9] = mark;
	else
		{
		cout<<"\n\t\t\t Invalid move. ";
		  sound(300);
		  delay(100);
		  nosound();
		  sound(320);
		  delay(110);
		  nosound();
		  sound(300);
		  delay(100);
		  nosound();
		  sound(320);
		  delay(110);
		  nosound();
		  sound(300);
		  delay(100);
		  nosound();
		  sound(320);
		  delay(110);
		  nosound();
		  sound(300);
		  delay(100);
		  nosound();
		  sound(320);
		  delay(110);
		  nosound();
		  sound(300);
		  delay(100);
		  nosound();
		  sound(320);
		  delay(110);
		  nosound();
		  sound(300);
		  delay(100);
		  nosound();
		  sound(320);
		  delay(110);
		  nosound();
		  sound(300);
		  delay(100);
		  nosound();
		  sound(320);
		  delay(110);
		  nosound();
		player--;
		getch();
		}
	i=checkwin();

	player++;
	}
}
while(i==-1);
board();
if(i==1)
	{
	cout<<"\n\t\t\t Congratulation Player "<<--player<<" win. "; /*when player win */
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
		  sound(523);
		  delay(200);
		  nosound();
		  sound(587);
		  delay(220);
		  nosound();
		  sound(659);
		  delay(240);
		  nosound();
		  sound(698);
		  delay(260);
		  nosound();
		  sound(784);
		  delay(280);
		  nosound();
	}
else
	{
	cout<<"\n\t\t\t Oops!!! Game draw. "; /* when game draw between two players after that sound frequency startc*/
			  sound(300);
			  delay(200);
			  nosound();
			  sound(320);
			  delay(220);
			  nosound();
			  sound(340);
			  delay(240);
			  nosound();
			  sound(360);
			  delay(260);
			  nosound();
			  sound(380);
			  delay(280);
			  nosound();
			  sound(400);
			  delay(200);
			  nosound();
			  sound(420);
			  delay(220);
			  nosound();
			  sound(440);
			  delay(240);
			  nosound();
			  sound(460);
			  delay(260);
			  nosound();
			  sound(480);
			  delay(280);
			  nosound();
			  sound(500);
			  delay(200);
			  nosound();  
			  sound(300);
			  delay(200);
			  nosound();
			  sound(320);
			  delay(220);
			  nosound();
			  sound(340);
			  delay(240);
			  nosound();
			  sound(360);
			  delay(260);
			  nosound();
			  sound(380);
			  delay(280);
			  nosound();
			  sound(400);
			  delay(200);
			  nosound();
			  sound(420);
			  delay(220);
			  nosound();
			  sound(440);
			  delay(240);
			  nosound();
			  sound(460);
			  delay(260);
			  nosound();
			  sound(480);
			  delay(280);
			  nosound();
			  sound(500);
			  delay(200);
			  nosound();
			  sound(300);
			  delay(200);
			  nosound();
			  sound(320);
			  delay(220);
			  nosound();
			  sound(340);
			  delay(240);
			  nosound();
			  sound(360);
			  delay(260);
			  nosound();
			  sound(380);
			  delay(280);
			  nosound();
			  sound(400);
			  delay(200);
			  nosound();
			  sound(420);
			  delay(220);
			  nosound();
			  sound(440);
			  delay(240);
			  nosound();
			  sound(460);
			  delay(260);
			  nosound();
			  sound(480);
			  delay(280);
			  nosound();
			  sound(500);
			  delay(200);
			  nosound();	
	}
	}
	else{
		cout<<"\n\t\t\t Invalid choice. "; /*if choice is invalid its show invalid choice and sound frequency start */
			  sound(300);
			  delay(100);
			  nosound();
			  sound(320);
			  delay(110);
			  nosound();
			  sound(300);
			  delay(100);
			  nosound();
			  sound(320);
			  delay(110);
			  nosound();
			  sound(300);
			  delay(100);
			  nosound();
			  sound(320);
			  delay(110);
			  nosound();
			  sound(300);
			  delay(100);
			  nosound();
			  sound(320);
			  delay(110);
			  nosound();
			  sound(300);
			  delay(100);
			  nosound();
			  sound(320);
			  delay(110);
			  nosound();
			  sound(300);
			  delay(100);
			  nosound();
			  sound(320);
			  delay(110);
			  nosound();
			  sound(300);
			  delay(100);
			  nosound();
			  sound(320);
			  delay(110);
			  nosound();
	}
	getch();
	return(0);
}
/*********************************************
	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
	         square[4] != '4' && square[5] != '5' && square[6] != '6' &&
            square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
	clrscr();
	cout << endl<<endl;
	cout <<"\t\t===============================================";
	cout <<"\n\t\t\tTic Tac Toe Game V1.0 -- SHIV KARWA \n";
	cout <<"\t\t===============================================";
	cout <<"\n\t\t\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "\t\t\t\t     |     |     " << endl << endl;
}
