#include "cinema.h"
#include <stdlib.h>

int archiveOptions = 0, maintenanceOptions = 0, reserveOptions = 0, sellOptions = 0;
string systemOption;
int main() {
	
	Cinema cinema309;
	
	cout << "Bienvenido al sistema de administracion cinematografico del Cinema 309\n\n\n";
	cout << "a. Informacion del sistema \n";
	cout << "   1. Acerca de \n   2. Salir \n\n";
	cout << "b. Mantenimiento del sistema \n";
	cout << "   1. Peliculas \n   2. Salas\n   3. Horarios \n\n";
	cout << "c. Gestion de reservas \n";
	cout << "   1. Peliculas\n\n";
	cout << "d. Gestion de ventas \n";
	cout << "   1. Venta de peliculas\n\n";

	cout << "\nDigite la letra del apartado del sistema que desea utilizar: "; cin >> systemOption;
	/*if (systemOption != "a" or systemOption != "b" or systemOption != "c" or systemOption != "d") {
		cout << "\nLa opcion ingresada no es valida. Por favor, digite su respuesta nuevamente: "; cin >> systemOption;
	}*/
	if (systemOption == "a") {
		cout << "\nIngrese el numero de la opcion que desea ejecutar: "; cin >> archiveOptions;
		if (archiveOptions != 1 && archiveOptions != 2) {
			cout << "\nLa opcion ingresada no es valida. Por favor, digite su respuesta nuevamente: "; cin >> archiveOptions;
		}
		if (archiveOptions == 1) {
			cout << "Bueeenaaaaaaaas, mi nombre es Kalet Quesada, mejor conocido como Nilo. Soy estudiante de primer annio de ingenieria en sistemas.\n";
			cout << "Soy estudiante de la UNA, en el Campus Coto, y todos los dias me inspiro para poder terminar el semestre (el semestre esta acabando conmigo)";
			cout << "(Las clases de calculo me tienen harto KSJAJSJASKJAJ)\n\n";
			cout << "Bueno, el proposito de este sistema, es el de ayudarme a pasar el curso (porfa profe, pongame aunque sea un 8 que me esta costando jsjsjs), ademas de ";
			cout << "poder mejorar mis habilidades como programador. Espero les guste mi propuesta, que Dios los bendiga ";
		}
		if (archiveOptions == 2) {
			cout << "Tenga buen dia joven. Dios lo bendiga, vuelva pronto.";
			exit; }
	}


	if (systemOption == "b") {}
	if (systemOption == "c") {}
	if (systemOption == "d") {}
	return 0;
}
