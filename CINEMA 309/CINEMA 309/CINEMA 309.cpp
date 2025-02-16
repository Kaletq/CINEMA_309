#include "cinema.h"
#include <stdlib.h>


int archiveOptions = 0, maintenanceOptions = 0, reserveOptions = 0, sellOptions = 0, subMaintenanceOptions = 0;
string systemOption;
int main() {
	Cinema cinema309;
	cinema309.prechargeMovies();
	cinema309.prechargeCinemaSchedules();
	cinema309.assignSeatsStates();
	
	bool command = true;
	while (command)
	{

		cout << "\nBienvenido al sistema de administracion cinematografico del Cinema 309\n\n\n";
		cout << "a. Informacion del sistema \n";
		cout << "   1. Acerca de \n   2. Salir del sistema  \n\n";
		cout << "b. Mantenimiento del sistema \n";
		cout << "   1. Peliculas \n   2. Salas\n   3. Horarios \n\n";
		cout << "c. Gestion de reservas \n";
		cout << "   1. Peliculas\n\n";
		cout << "d. Gestion de ventas \n";
		cout << "   1. Venta de peliculas\n\n";

		cout << "\nDigite la letra del apartado del sistema que desea utilizar: \n"; cin >> systemOption;
		
		if (systemOption == "a") {
			cout << "Ha ingresado al apartado de informacion del sistema. \n   1. Acerca de\n   2. Salir del sistema ";
			cout << "\nIngrese el numero de la opcion que desea ejecutar: "; cin >> archiveOptions;
			if (archiveOptions != 1 && archiveOptions != 2) {
				cout << "\nLa opcion ingresada no es valida. Por favor, digite su respuesta nuevamente: "; cin >> archiveOptions;
			}
			if (archiveOptions == 1) {
				cout << "\n\nBueeenaaaaaaaas, mi nombre es Kalet Quesada, mejor conocido como Nilo. Soy estudiante de primer annio de ingenieria en sistemas.\n";
				cout << "Soy estudiante de la UNA, en el Campus Coto, y todos los dias me inspiro para poder terminar el semestre (el semestre esta acabando conmigo)";
				cout << "(Las clases de calculo me tienen harto KSJAJSJASKJAJ)\n\n";
				cout << "Bueno, el proposito de este sistema, es el de ayudarme a pasar el curso (porfa profe, pongame aunque sea un 8 que me esta costando jsjsjs), ademas de ";
				cout << "poder mejorar mis habilidades como programador. Espero les guste mi propuesta, que Dios los bendiga <3 \n\n";
			}
			if (archiveOptions == 2) {
				cout << "Tenga buen dia joven. Dios lo bendiga, vuelva pronto.";
				command = false;
			}
		}
		if (systemOption == "b") {
			cout << "Ha ingresado al apartado de mantenimiento del sistema. \n   1. Peliculas\n   2. Salas\n   3. Horarios";
			cout << "\n\nIngrese el numero de la opcion a la cual desea darle mantenimiento: "; cin >> maintenanceOptions;
			if (maintenanceOptions != 1 && maintenanceOptions != 2 && maintenanceOptions != 3) {
				cout << "\nLa opcion ingresada no es valida. Por favor, digite su respuesta nuevamente: "; cin >> maintenanceOptions;
			}
			if (maintenanceOptions == 1) {
				cout << "\n\nPELICULAS. \n   1. Mostrar peliculas en cartelera\n   2. Agregar una pelicula a cartelera\n\n ";
				cout << "Introduzca el numero de la opcion que desea realizar: "; cin >> subMaintenanceOptions;
				if (subMaintenanceOptions == 1) { cinema309.showCinemaMovies(); }
				if (subMaintenanceOptions == 2) { cinema309.addMovie(); }
			}
			if (maintenanceOptions == 2){
				cout << "\n\nSALAS. \n   1. Consultar la informacion de la sala\n\n ";
				cout << "Introduzca el numero de la opcion que desea realizar: "; cin >> subMaintenanceOptions;
				if (subMaintenanceOptions == 1){
					int roomNumber;
					cout << "Ingrese el numero de la sala que desea consultar. (Hay 3 salas): ";
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); cin >> roomNumber;
					if (roomNumber != 1 && roomNumber != 2 && roomNumber != 3) {
						cout << "El numero ingresado no es valido, por favor intentelo de nuevo: ";
						cin.ignore(numeric_limits<streamsize>::max(), '\n'); cin >> roomNumber;
					}
					cinema309.showSeatStates(roomNumber);
				}
			}
			if (maintenanceOptions == 3) {
				cout << "\n\nHORARIOS. \n   1. Crear un horario\n   2. Mostrar los horarios existentes\n\n";
				cout << "Introduzca el numero de la opcion que desea realizar: "; cin >> subMaintenanceOptions;
				if (subMaintenanceOptions == 1) {
					cinema309.createSchedule();
				}
				if (subMaintenanceOptions == 2) {
					cinema309.showCinemaSchedulesInfo();
				}
			}

		}


		if (systemOption == "c") {
			int subReserveOption = 0;
			cout << "Ha ingresado al apartado de reservas. \n   1.Hacer una reserva";
			cout << "\n\nIngrese el numero de la opcion que desea ejecutar: "; cin >> reserveOptions;
			if (reserveOptions == 1) {
				cinema309.createReservation(cinema309);
			}



		 }
		
		if (systemOption == "d") {}
	}
	
}
