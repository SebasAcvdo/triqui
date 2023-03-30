#include<iostream>
#include<time.h>
using namespace std;



int main()
{
    int dadoh, dadoc, casillah, cont, casillac, fin, jugadac, contempate, repetir;
    char nuevo;

cout<< endl;
cout<< endl;
cout<< endl;
cout<< endl;

cout<<"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠴⠤⠤⠴⠄⡄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⣠⠄⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠁⠃⠆⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⢀⡜⠁⠀⠀⠀⢠⡄⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠑⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⢈⠁⠀⠀⠠⣿⠿⡟⣀⡹⠆⡿⣃⣰⣆⣤⣀⠀⠀⠹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⣼⠀⠀⢀⣀⣀⣀⣀⡈⠁⠙⠁⠘⠃⠡⠽⡵⢚⠱⠂⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⢐⣢⣤⣵⡄⢀⠀⢀⢈⣉⠉⠉⠒⠤⠀⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠘⡇⠀⠀⠀⠀⠀⠉⠉⠁⠁⠈⠀⠸⢖⣿⣿⣷⠀⠀⢰⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⢀⠃⠀⡄⠀⠈⠉⠀⠀⠀⢴⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀BIENVENIDO AL TRIQUI⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⢈⣇⠀⠀⠀⠀⠀⠀⠀⢰⠉⠀⠀⠱⠀⠀⠀⠀⠀⢠⡄⠀⠀⠀⠀⠀⣀⠔⠒⢒⡩⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⣴⣿⣤⢀⠀⠀⠀⠀⠀⠈⠓⠒⠢⠔⠀⠀⠀⠀⠀⣶⠤⠄⠒⠒⠉⠁⠀⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⡄⠤⠒⠈⠈⣿⣿⣽⣦⠀⢀⢀⠰⢰⣀⣲⣿⡐⣤⠀⠀⢠⡾⠃⠀⠀⠀⠀⠀⠀⠀⣀⡄⣠⣵⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠘⠏⢿⣿⡁⢐⠶⠈⣰⣿⣿⣿⣿⣷⢈⣣⢰⡞⠀⠀⠀⠀⠀⠀⢀⡴⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠈⢿⣿⣍⠀⠀⠸⣿⣿⣿⣿⠃⢈⣿⡎⠁⠀⠀⠀⠀⣠⠞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠈⢙⣿⣆⠀⠀⠈⠛⠛⢋⢰⡼⠁⠁⠀⠀⠀⢀⠔⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠚⣷⣧⣷⣤⡶⠎⠛⠁⠀⠀⠀⢀⡤⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠈⠁⠀⠀⠀⠀⠀⠠⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;

cout<< endl;
cout<< endl;
cout<< endl;
cout<< endl;
cout<< endl;

    do
    {
        fin = 0;
        contempate = 0;
        char tq [3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++ )
            {
                tq[i][j] = ' ';
            }
        }


        srand(time(NULL));

        dadoh = 1 + rand() % 6;

        dadoc = 1 + rand() % 6;

        cout << "Humano tira los dados y obtiene: " << dadoh  << endl;
        cout << "Computador tira los dados y obtiene: " << dadoc << endl;
        cout << endl;
        if (dadoc == dadoh)
        {
            do
            {
                cout << "Se ha presentado un EMPATE, se vuelven a lanzar los dados" << endl;
                dadoh = 1 + rand() % 6;
                dadoc = 1 + rand() % 6;
                cout << "Humano tira los dados y obtiene: " << dadoh  << endl;
                cout << "Computador tira los dados y obtiene: " << dadoc << endl;
            }while(dadoc == dadoh);
        }


        if (dadoh > dadoc)
        {
            cout << "Humano obtuvo mayor numero en los dados, por lo tanto empieza en el triqui" << endl;
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "          |           |        " <<endl;
            cout << "          |           |        " <<endl;
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "          |           |        " <<endl;
            cout << "          |           |        " <<endl;
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "          |           |        " <<endl;
            cout << "          |           |        " <<endl;

            do
            {
            cout << "Ingrese el numero de la casilla del triqui que desea llenar: " ;
            
            do
            {
                cin >> casillah;
                repetir = 0;
                cont = 1;
                for (int i = 0; i<3; i++)
                {
                     for (int j = 0; j<3; j++)
                       {
                            if(cont==casillah)
                            {
                                if(tq[i][j] == ' ')
                                    {
                                        tq[i][j]='H';
                                    }
                                    else
                                    {
                                       repetir  = 1;
                                       cout << "La casilla que quiere ingresar ya esta ocupada, por favor ingrese una nueva: ";
                                    }
                            } 
                            cont = cont + 1;
                        }
                }
            }while(repetir == 1);
            
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "     "<<tq[0][0] <<"    |      "<<tq[0][1]<<"    |  "<<tq[0][2]<<"    " <<endl;
            cout << "          |           |        " <<endl;
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "     "<<tq[1][0] <<"    |      "<<tq[1][1]<<"    |  "<<tq[1][2]<<"    " <<endl;
            cout << "          |           |        " <<endl;
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "     "<<tq[2][0] <<"    |      "<<tq[2][1]<<"    |  "<<tq[2][2]<<"    " <<endl;
            cout << "          |           |        " <<endl;

            if (tq[0][0] == 'H')
            {
                if (tq[1][0] == 'H')
                {
                    if (tq[2][0] == 'H')
                    {
                        fin = 1;
                        cout << endl;
                        cout << "FELICIDADES HA GANADO :D " << endl;
                    }
                }
                if (tq[0][1] == 'H')
                {
                    if(tq[0][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
                if (tq[1][1] == 'H')
                {
                    if(tq[2][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            if (tq[0][2] == 'H')
            {
                if(tq[1][2] == 'H')
                {
                    if(tq[2][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
                if(tq[1][1] == 'H')
                {
                    if(tq[2][0] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            if (tq[0][1] == 'H')
            {
                if(tq[1][1] == 'H')
                {
                    if(tq[2][1] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            if (tq[1][0] == 'H')
            {
                if(tq[1][1] == 'H')
                {
                    if(tq[1][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            if (tq[2][0] == 'H')
            {
                if(tq[2][1] == 'H')
                {
                    if(tq[2][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            for(int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if(tq[i][j] == 'H' || tq[i][j] == 'C')
                    {
                        contempate = contempate + 1;
                    }
                    else
                    {
                        contempate = 0;
                    }
                    if(contempate == 9)
                    {
                        fin = 1;
                        cout << "ES UN EMPATE " << endl;
                    }
                    
                } 
            }

            if (fin != 1)
            {
                jugadac = 0;
                cout << "TURNO DE COMPUTADOR " << endl;

                if( tq[0][0] == 'H' && jugadac == 0 && tq[1][0] == ' ')
                {
                    if(tq[2][0] == 'H')
                    {
                        tq[1][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H' && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[1][0] == 'H')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'H' && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[2][0] == 'H')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'H' && jugadac == 0 && tq[2][1] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[2][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'H' && jugadac == 0 && tq[0][1] == ' ')
                {
                    if(tq[2][1] == 'H')
                    {
                        tq[0][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'H' && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][1] == 'H')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'H'  && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[1][2] == 'H')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][2] == 'H' && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[2][2] == 'H' )
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'H' && jugadac == 0 && tq[1][2] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[1][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H'  && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[0][1] == 'H')
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'H'  && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[0][2] == 'H')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H'  && jugadac == 0 && tq[0][1] == ' ')
                {
                    if(tq[0][2] == 'H')
                    {
                        tq[0][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'H' && jugadac == 0 && tq[1][2] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[1][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'H' && jugadac == 0 && tq[1][0] == ' ')
                {
                    if(tq[1][2] == 'H')
                    {
                        tq[1][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'H'  && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[1][2] == 'H')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'H' && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[2][1] == 'H')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][1] == 'H'  && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'H' && jugadac == 0 && tq[2][1] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[2][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'H' && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][0] == 'H')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'H'  && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'H' && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H' && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'H'  && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H'  && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }





                /*Jugada ofensiva*/




                if( tq[0][0] == 'C' && jugadac == 0 && tq[1][0] == ' ')
                {
                    if(tq[2][0] == 'C')
                    {
                        tq[1][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'C' && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[1][0] == 'C')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'C' && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[2][0] == 'C')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'C' && jugadac == 0 && tq[2][1] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[2][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'C' && jugadac == 0 && tq[0][1] == ' ')
                {
                    if(tq[2][1] == 'C')
                    {
                        tq[0][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'C' && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][1] == 'C')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'C'  && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[1][2] == 'C')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][2] == 'C' && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[2][2] == 'C' )
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'C' && jugadac == 0 && tq[1][2] == ' ')
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[1][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'C'  && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[0][1] == 'C')
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'C'  && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[0][2] == 'C')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'C'  && jugadac == 0 && tq[0][1] == ' ')
                {
                    if(tq[0][2] == 'C')
                    {
                        tq[0][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'C' && jugadac == 0 && tq[1][2] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[1][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'C' && jugadac == 0 && tq[1][0] == ' ')
                {
                    if(tq[1][2] == 'C')
                    {
                        tq[1][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'C'  && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[1][2] == 'C')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'C' && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[2][1] == 'C')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][1] == 'C'  && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'C' && jugadac == 0 && tq[2][1] == ' ')
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[2][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'C' && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][0] == 'C')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'C'  && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'C' && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'C' && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'C'  && jugadac == 0 && tq[0][0] == ' ' )
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'C'  && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                

                /*Jugada al azar*/


                if(jugadac == 0)
                {
                    casillac =  1 + rand() % 9;

                    cont = 1;

                    for (int i = 0; i<3; i++)
                    {
                        for (int j = 0; j<3; j++)
                        {
                            if(cont==casillac)
                            {
                                if(tq[i][j] == ' ')
                                {
                                    tq[i][j]='C';
                                }
                                else
                                {
                                    casillac = casillac + 1;
                                }
                            } 
                            cont = cont + 1;
                        }
                    }
                }
                cout << "-------------------------------" <<endl;
                cout << "          |           |        " <<endl;
                cout << "     "<<tq[0][0] <<"    |      "<<tq[0][1]<<"    |  "<<tq[0][2]<<"    " <<endl;
                cout << "          |           |        " <<endl;
                cout << "-------------------------------" <<endl;
                cout << "          |           |        " <<endl;
                cout << "     "<<tq[1][0] <<"    |      "<<tq[1][1]<<"    |  "<<tq[1][2]<<"    " <<endl;
                cout << "          |           |        " <<endl;
                cout << "-------------------------------" <<endl;
                cout << "          |           |        " <<endl;
                cout << "     "<<tq[2][0] <<"    |      "<<tq[2][1]<<"    |  "<<tq[2][2]<<"    " <<endl;
                cout << "          |           |        " <<endl;


            if (tq[0][0] == 'C')
            {
                if (tq[1][0] == 'C')
                {
                    if (tq[2][0] == 'C')
                    {
                        fin = 1;
                        cout << endl;
                        cout << "USTED HA PERDIDO :( " << endl;
                    }
                }
                if (tq[0][1] == 'C')
                {
                    if(tq[0][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
                if (tq[1][1] == 'C')
                {
                    if(tq[2][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }
            if (tq[0][2] == 'C')
            {
                if(tq[1][2] == 'C')
                {
                    if(tq[2][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
                if(tq[1][1] == 'C')
                {
                    if(tq[2][0] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }
            if (tq[0][1] == 'C')
            {
                if(tq[1][1] == 'C')
                {
                    if(tq[2][1] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }
            if (tq[1][0] == 'C')
            {
                if(tq[1][1] == 'C')
                {
                    if(tq[1][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }
            if (tq[2][0] == 'C')
            {
                if(tq[2][1] == 'C')
                {
                    if(tq[2][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }

            for(int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if(tq[i][j] == 'H' || tq[i][j] == 'C')
                    {
                        contempate = contempate + 1;
                    }
                    else
                    {
                        contempate = 0;
                    }
                    if(contempate == 9)
                    {
                        fin = 1;
                        cout << "ES UN EMPATE " << endl;
                    }
                    
                }
            }

            }
            }while(fin != 1);


            cout << "¿Desea volver a jugar? s/n ";
            cin >> nuevo;
            cout << endl;



        }
        else
        {
            cout << "Computador obtuvo mayor numero en los dados, por lo tanto empieza en el triqui" << endl;
            casillac =  1 + rand() % 9;

            cont = 1;

            for (int i = 0; i<3; i++)
            {
                for (int j = 0; j<3; j++)
                {
                    if(cont==casillac)
                    {
                        tq[i][j]='C';
                    } 
                    cont = cont + 1;
                }
            }
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "     "<<tq[0][0] <<"    |      "<<tq[0][1]<<"    |  "<<tq[0][2]<<"    " <<endl;
            cout << "          |           |        " <<endl;
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "     "<<tq[1][0] <<"    |      "<<tq[1][1]<<"    |  "<<tq[1][2]<<"    " <<endl;
            cout << "          |           |        " <<endl;
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "     "<<tq[2][0] <<"    |      "<<tq[2][1]<<"    |  "<<tq[2][2]<<"    " <<endl;
            cout << "          |           |        " <<endl;

            do
            {
            cout << "Ingrese el numero de la casilla del triqui que desea llenar: " ;

            
            do
            {
                cin >> casillah;
                repetir = 0;
                cont = 1;
                for (int i = 0; i<3; i++)
                {
                     for (int j = 0; j<3; j++)
                       {
                            if(cont==casillah)
                            {
                                if(tq[i][j] == ' ')
                                    {
                                        tq[i][j]='H';
                                    }
                                    else
                                    {
                                       repetir  = 1;
                                       cout << "La casilla que quiere ingresar ya esta ocupada, por favor ingrese una nueva: ";
                                    }
                            } 
                            cont = cont + 1;
                        }
                }
            }while(repetir == 1);
            
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "     "<<tq[0][0] <<"    |      "<<tq[0][1]<<"    |  "<<tq[0][2]<<"    " <<endl;
            cout << "          |           |        " <<endl;
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "     "<<tq[1][0] <<"    |      "<<tq[1][1]<<"    |  "<<tq[1][2]<<"    " <<endl;
            cout << "          |           |        " <<endl;
            cout << "-------------------------------" <<endl;
            cout << "          |           |        " <<endl;
            cout << "     "<<tq[2][0] <<"    |      "<<tq[2][1]<<"    |  "<<tq[2][2]<<"    " <<endl;
            cout << "          |           |        " <<endl;

            if (tq[0][0] == 'H')
            {
                if (tq[1][0] == 'H')
                {
                    if (tq[2][0] == 'H')
                    {
                        fin = 1;
                        cout << endl;
                        cout << "FELICIDADES HA GANADO :D " << endl;
                    }
                }
                if (tq[0][1] == 'H')
                {
                    if(tq[0][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
                if (tq[1][1] == 'H')
                {
                    if(tq[2][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            if (tq[0][2] == 'H')
            {
                if(tq[1][2] == 'H')
                {
                    if(tq[2][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
                if(tq[1][1] == 'H')
                {
                    if(tq[2][0] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            if (tq[0][1] == 'H')
            {
                if(tq[1][1] == 'H')
                {
                    if(tq[2][1] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            if (tq[1][0] == 'H')
            {
                if(tq[1][1] == 'H')
                {
                    if(tq[1][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            if (tq[2][0] == 'H')
            {
                if(tq[2][1] == 'H')
                {
                    if(tq[2][2] == 'H')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "FELICIDADES HA GANADO :D" << endl;
                    }
                }
            }
            for(int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if(tq[i][j] == 'H' || tq[i][j] == 'C')
                    {
                        contempate = contempate + 1;
                    }
                    else
                    {
                        contempate = 0;
                    }
                    if(contempate == 9)
                    {
                        fin = 1;
                        cout << "ES UN EMPATE " << endl;
                    }
                    
                }
            }

            if (fin != 1)
            {
                jugadac = 0;
                cout << "TURNO DE COMPUTADOR " << endl;
                /*Jugada ofensiva*/




                if( tq[0][0] == 'C' && jugadac == 0 && tq[1][0] == ' ')
                {
                    if(tq[2][0] == 'C'|| tq[2][0] == 'C')
                    {
                        tq[1][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'C' && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[1][0] == 'C')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'C' && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[2][0] == 'C')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'C' && jugadac == 0 && tq[2][1] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[2][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'C' && jugadac == 0 && tq[0][1] == ' ')
                {
                    if(tq[2][1] == 'C')
                    {
                        tq[0][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'C' && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][1] == 'C')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'C'  && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[1][2] == 'C')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][2] == 'C' && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[2][2] == 'C' )
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'C' && jugadac == 0 && tq[1][2] == ' ')
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[1][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H'  && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[0][1] == 'H')
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'C'  && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[0][2] == 'C')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'C'  && jugadac == 0 && tq[0][1] == ' ')
                {
                    if(tq[0][2] == 'C')
                    {
                        tq[0][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'C' && jugadac == 0 && tq[1][2] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[1][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'C' && jugadac == 0 && tq[1][0] == ' ')
                {
                    if(tq[1][2] == 'C')
                    {
                        tq[1][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'C'  && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[1][2] == 'C')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'C' && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[2][1] == 'C')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][1] == 'C'  && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'C' && jugadac == 0 && tq[2][1] == ' ')
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[2][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'C' && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][0] == 'C')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'C'  && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'C' && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'C' && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[1][1] == 'C')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'C'  && jugadac == 0 && tq[0][0] == ' ' )
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'C'  && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][2] == 'C')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }




                
                /* Jugada defensiva */






                if( tq[0][0] == 'H' && jugadac == 0 && tq[1][0] == ' ')
                {
                    if(tq[2][0] == 'H')
                    {
                        tq[1][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H' && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[1][0] == 'H')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'H' && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[2][0] == 'H')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'H' && jugadac == 0 && tq[2][1] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[2][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'H' && jugadac == 0 && tq[0][1] == ' ')
                {
                    if(tq[2][1] == 'H')
                    {
                        tq[0][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'H' && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][1] == 'H')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'H'  && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[1][2] == 'H')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][2] == 'H' && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[2][2] == 'H' )
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'H' && jugadac == 0 && tq[1][2] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[1][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H'  && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[0][1] == 'H')
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][1] == 'H'  && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[0][2] == 'H')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H'  && jugadac == 0 && tq[0][1] == ' ')
                {
                    if(tq[0][2] == 'H')
                    {
                        tq[0][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'H' && jugadac == 0 && tq[1][2] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[1][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'H' && jugadac == 0 && tq[1][0] == ' ')
                {
                    if(tq[1][2] == 'H')
                    {
                        tq[1][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][0] == 'H'  && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[1][2] == 'H')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'H' && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[2][1] == 'H')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][1] == 'H'  && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'H' && jugadac == 0 && tq[2][1] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[2][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'H' && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][0] == 'H')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][2] == 'H'  && jugadac == 0 && tq[2][0] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[2][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[2][0] == 'H' && jugadac == 0 && tq[0][2] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[0][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H' && jugadac == 0 && tq[2][2] == ' ')
                {
                    if(tq[1][1] == 'H')
                    {
                        tq[2][2] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[1][1] == 'H'  && jugadac == 0 && tq[0][0] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[0][0] = 'C';
                        jugadac = 1;
                    }
                }
                if( tq[0][0] == 'H'  && jugadac == 0 && tq[1][1] == ' ')
                {
                    if(tq[2][2] == 'H')
                    {
                        tq[1][1] = 'C';
                        jugadac = 1;
                    }
                }


                if(jugadac == 0)
                {
                    casillac =  1 + rand() % 9;

                    cont = 1;

                    for (int i = 0; i<3; i++)
                    {
                        for (int j = 0; j<3; j++)
                        {
                            if(cont==casillac)
                            {
                                if(tq[i][j] == ' ')
                                {
                                    tq[i][j]='C';
                                }
                                else
                                {
                                    casillac = casillac + 1;
                                }
                            } 
                            cont = cont + 1;
                        }
                    }
                }
                cout << "-------------------------------" <<endl;
                cout << "          |           |        " <<endl;
                cout << "     "<<tq[0][0] <<"    |      "<<tq[0][1]<<"    |  "<<tq[0][2]<<"    " <<endl;
                cout << "          |           |        " <<endl;
                cout << "-------------------------------" <<endl;
                cout << "          |           |        " <<endl;
                cout << "     "<<tq[1][0] <<"    |      "<<tq[1][1]<<"    |  "<<tq[1][2]<<"    " <<endl;
                cout << "          |           |        " <<endl;
                cout << "-------------------------------" <<endl;
                cout << "          |           |        " <<endl;
                cout << "     "<<tq[2][0] <<"    |      "<<tq[2][1]<<"    |  "<<tq[2][2]<<"    " <<endl;
                cout << "          |           |        " <<endl;
            if (tq[0][0] == 'C')
            {
                if (tq[1][0] == 'C')
                {
                    if (tq[2][0] == 'C')
                    {
                        fin = 1;
                        cout << endl;
                        cout << "USTED HA PERDIDO :( " << endl;
                    }
                }
                if (tq[0][1] == 'C')
                {
                    if(tq[0][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
                if (tq[1][1] == 'C')
                {
                    if(tq[2][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }
            if (tq[0][2] == 'C')
            {
                if(tq[1][2] == 'C')
                {
                    if(tq[2][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
                if(tq[1][1] == 'C')
                {
                    if(tq[2][0] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }
            if (tq[0][1] == 'C')
            {
                if(tq[1][1] == 'C')
                {
                    if(tq[2][1] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }
            if (tq[1][0] == 'C')
            {
                if(tq[1][1] == 'C')
                {
                    if(tq[1][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }
            if (tq[2][0] == 'C')
            {
                if(tq[2][1] == 'C')
                {
                    if(tq[2][2] == 'C')
                    {
                        fin = 1;
                        cout << endl; 
                        cout << "USTED HA PERDIDO :(" << endl;
                    }
                }
            }

             for(int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if(tq[i][j] == 'H' || tq[i][j] == 'C')
                    {
                        contempate = contempate + 1;
                    }
                    else
                    {
                        contempate = 0;
                    }
                    if(contempate == 9)
                    {
                        fin = 1;
                        cout << "ES UN EMPATE " << endl;
                    }
                    
                }
            }

            }
            }while(fin != 1);


            cout << "¿Desea volver a jugar? s/n ";
            cin >> nuevo;
            cout << endl;
        }
    }while(nuevo == 's');

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

cout<<"    ⣐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣶⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⣿⣅⡠⠃⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀GRACIAS POR JUGAR, HASTA PRONTO⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
cout<<"⢹⣿⣇⡀⠀⠀⠀⢀⣤⣤⣤⣾⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀"<<endl;
cout<<"⢸⣿⣿⣷⡀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣶"<<endl;
cout<<"⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⡀⠀⠀⠀⣀⣀⣤⣾"<<endl;
cout<<"⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇"<<endl;
cout<<"⠀⠀⠉⠙⠉⠉⠁⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣿⣿⣿⠟⠋⠁⠀⠀"<<endl;

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

    return 0;
}