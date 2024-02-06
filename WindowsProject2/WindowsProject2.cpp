// WindowsProject2.cpp : Defines the entry point for the application.
//

#include <windows.h>
#include <tchar.h>
#include <ctime> 

INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	//1
	/*int id1 = MessageBox(0, TEXT("Меня зовут Александр Сергеевич Шевцов"), TEXT("Резюме"), MB_OK);
	if(id1 == IDOK) {	
		int id2 = MessageBox(0, TEXT("я родился 23.07.2005"), TEXT("Резюме"), MB_OK);
		if (id2 == IDOK) {
			int id3 = MessageBox(0, TEXT("Я студент Компьютерной академии Шаг"), TEXT("Резюме"), MB_OK);
			if(id3 == IDOK){
				int id4 = MessageBox(0, TEXT("Учусь по специальночти 'Разработака программного обеспечения'"), TEXT("Резюме"), MB_OK);	
				if(id4 == IDOK){
					MessageBox(0, TEXT("В данный момент делаю дз"), TEXT("Резюме"), MB_OK);	
				}
			}
		}
	}*/

	//2
	/*int counter = 0;
	bool game = true;	
	srand(time(0));	

	while (game == true) {
		int number = rand() % 100 + 1;	

		TCHAR buffer[10];
		_stprintf_s(buffer, TEXT("%d"), number);	

		int id = MessageBox(0, buffer, TEXT("Игра"), MB_OKCANCEL | MB_ICONINFORMATION);
		counter++;

		if (id == IDOK) {	 
			game = false;	
			TCHAR bufferCounter[10];
			_stprintf_s(bufferCounter, TEXT("%d"), counter);
			int id2 = MessageBox(0, TEXT("Количество попыток: "), TEXT("Игра"), MB_OKCANCEL);
			if (id2 == IDOK) {
				int id3 = MessageBox(0, bufferCounter, TEXT("Резюме"), MB_OK);
				if (id3 == IDOK) {
					int id4 = MessageBox(0, TEXT("Желаете продолжить игру?"), TEXT("Игра"), MB_OKCANCEL);
					if(id4 == IDOK){
						counter = 0;
						game = true;	
					}
				}

			}
				

		}
			
		
	}*/


}

