#include <iostream>
using namespace std; 


int main() {

	
char palavra[10], saidaPrincipal='\0', saidaSobre;
int x, a, b, c, menu, y = 0; 

		// MENU PRINCIPAL 
	do { // DO PRINCIPAL 
	
		system("cls");
		cout << "  ______________________ \n";
		cout << " | Menu do codificador: |\n";
		cout << " |1- Codificador........|\n";
		cout << " |2- Sobre..............|\n";
		cout << " |3- Sair...............|\n";
		cout << " |______________________|\n";

		cin >> menu;

		//SELECIONA O MENU
		switch (menu) {

				case 1:
					system("cls"); // LIMPA A TELA 
				
					do{ //LOOP DO COODIFICADOR
						
						// LIMPA AS VARIAVEIS 
						
						palavra[0] = '\0';
						palavra[1] = '\0';
						palavra[2] = '\0';
						palavra[3] = '\0';
						palavra[4] = '\0';
						palavra[5] = '\0';
						palavra[6] = '\0';
						palavra[7] = '\0';
						palavra[8] = '\0';
						palavra[9] = '\0';


					//CABECARIO
					cout << "Digite R para volar ao menu.\n";
					cout << "Digite a palavra para codificar: \n";
					cin >> palavra;
					cout << "\n";

					
					// LIMPA A TELA 
					system("cls");
					cout << ("Sua palavra foi:\n");

					//ESCREVE A PALAVRA 
					for (x = 0; x < 10; x++) {
						cout << palavra[x];
					}

					// CODIFICA A PALAVRA TROCANDO AS LETRASS DE LUGAR 
					a = palavra[0];
					c = palavra[1];
					b = palavra[1];
					palavra[0] = b;
					palavra[1] = a;
					a = palavra[2];
					c = palavra[3];
					b = palavra[3];
					palavra[2] = b;
					palavra[3] = a;
					a = palavra[4];
					c = palavra[5];
					b = palavra[5];
					palavra[4] = b;
					palavra[5] = a;
					a = palavra[6];
					c = palavra[7];
					b = palavra[7];
					palavra[6] = b;
					palavra[7] = a;
					a = palavra[8];
					c = palavra[9];
					b = palavra[9];
					palavra[8] = b;
					palavra[9] = a;

					
					cout << "\nCodificado:\n ";
					
					//ESCREVE A PALAVRA CODIFICADA
					for (x = 0; x < 10; x++) {
						cout << palavra[x];
					}

					cout << "\n__________________________________________\n";
		
					// FAZ VOLTAR O LOOP 
					} while (palavra[0] != '\0' && palavra[1] != 'R');

				break; //FINAL CODIFICADOR, RETORNA AO MENU PRINCIPAL







		
				case 2:// INFORMAÇOES CODIFICADOR: 
					// LIMPA A TELA E MOSTRA INFORMACOES 
					do {
						system("cls");
						cout << "\n Informácoes:\n\n";
						cout << "  Esse e um projeto criado para crescimento pessoal\n";
						cout << " na area da programação,tirado do tempo de escola\n";
						cout << " em que manda bilhetes \"codificado\" na hora de aula com amigo.\n\n";
						cout << "  Um desses estilos era trocar duas letras de lugar, que foi de onde\n";
						cout << " veio a inspiracao para esse programa:\n\n";
						cout << " Criador: Gustavo Franzen Elicker / Gtvinho\n";
						cout << "Prescione R para retornar ao menu.";
						cin >> saidaSobre;
						

					} while (saidaSobre != 'R' && saidaSobre != 'r');
				break; 
		




		
		
			case 3: // SAIDA DO PROGRAMA


				do {

					system("cls");
					cout << ( "Certeza que deseja fechar o programa?\n") ;
					cout << ( " S- Sim\n ") ;
					cout<< ("N- Nao\n ") ;
					cin>>saidaPrincipal;

				} while (saidaPrincipal != 'S' && saidaPrincipal != 'N');
				break; 
		
		
		
		}	
	} while ( saidaPrincipal != 'S');// FINAL DO PRINCIPAL

		system("cls"); 
		cout << " Fim do programa. "; 
			
	return 0; 
}