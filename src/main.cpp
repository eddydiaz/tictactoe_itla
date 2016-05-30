#include <iostream>
#include <stdlib.h>

using namespace std;

char tabla[10] = {'o','1','2','3','4','5','6','7','8','9'};

int ganador();
void tablero();

int main()
{
	int jugador = 1,i,eleccion;

	char casilla;
	do
	{
		tablero();
		jugador=(jugador%2)?1:2;

		cout << "Jugador " << jugador << ", introduzca un numero:  ";
		cin >> eleccion;

		casilla=(jugador == 1) ? 'X' : '0';

		if (eleccion == 1 && tabla[1] == '1')

			tabla[1] = casilla;
		else if (eleccion == 2 && tabla[2] == '2')

			tabla[2] = casilla;
		else if (eleccion == 3 && tabla[3] == '3')

			tabla[3] = casilla;
		else if (eleccion == 4 && tabla[4] == '4')

			tabla[4] = casilla;
		else if (eleccion == 5 && tabla[5] == '5')

			tabla[5] = casilla;
		else if (eleccion == 6 && tabla[6] == '6')

			tabla[6] = casilla;
		else if (eleccion == 7 && tabla[7] == '7')

			tabla[7] = casilla;
		else if (eleccion == 8 && tabla[8] == '8')

			tabla[8] = casilla;
		else if (eleccion == 9 && tabla[9] == '9')

			tabla[9] = casilla;
		else
		{
			cout<<"elija otra casilla ";

			jugador--;
			cin.ignore();
			cin.get();
		}
		i=ganador();

		jugador++;
	}while(i==-1);
	tablero();
	if(i==1)

		cout<<"==>\aEl jugador "<<--jugador<<" a ganado!!! :D ";
	else
		cout<<"==>\aEl juego termino en empate. :'(";

	cin.ignore();
	cin.get();
	return 0;
}

//estatus del juego

int ganador()
{
	if (tabla[1] == tabla[2] && tabla[2] == tabla[3])

		return 1;
	else if (tabla[4] == tabla[5] && tabla[5] == tabla[6])

		return 1;
	else if (tabla[7] == tabla[8] && tabla[8] == tabla[9])

		return 1;
	else if (tabla[1] == tabla[4] && tabla[4] == tabla[7])

		return 1;
	else if (tabla[2] == tabla[5] && tabla[5] == tabla[8])

		return 1;
	else if (tabla[3] == tabla[6] && tabla[6] == tabla[9])

		return 1;
	else if (tabla[1] == tabla[5] && tabla[5] == tabla[9])

		return 1;
	else if (tabla[3] == tabla[5] && tabla[5] == tabla[7])

		return 1;
	else if (tabla[1] != '1' && tabla[2] != '2' && tabla[3] != '3'
                    && tabla[4] != '4' && tabla[5] != '5' && tabla[6] != '6'
                  && tabla[7] != '7' && tabla[8] != '8' && tabla[9] != '9')

		return 0;
	else
		return -1;
}


//Diceño del Tablero.

void tablero()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Jugador 1 (X)  -  Jugador 2 (0)" << endl << endl;
	cout << "Que empiece el juego!" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << tabla[1] << "  |  " << tabla[2] << "  |  " << tabla[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << tabla[4] << "  |  " << tabla[5] << "  |  " << tabla[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << tabla[7] << "  |  " << tabla[8] << "  |  " << tabla[9] << endl;

	cout << "     |     |     " << endl << endl;

	cout << "Eddy Manuel Diaz Garcia.....2014-2226..............\n\n";
}
