#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TASK1 
//#define TASK2
//#define TASK3
//#define TASK4 

int main() {
	setlocale(LC_ALL, "Russian");
#if defined TASK1
	cout << "\t\t\tЗадача 1\n\n";
	cout << "Преобразование числа в денежный формат\n";
	double broken_number, money_unit1, money_unit2;
	cout << "Введите дробное число и нажмите клавишу \"ENTER\": \n";
	cin >> broken_number;
	money_unit1 = int(broken_number);
	money_unit2 = (broken_number - money_unit1) * 100;
	cout << broken_number << " грн. - это " << money_unit1 << " грн. " << money_unit2 << " коп. ";
	cout << endl;
#endif 
#if defined TASK2
	cout << "\t\t\tЗадача 2\n\n";
	cout << "Вычисление стоимости покупки.\n";

	double copybook_price, qty_of_copybook, pencil_price, qty_of_pencil, total_price;
	cout << "Введите исходные данные и нажмите клавишу \"ENTER\": \n";
	cout << "Введите цену тетради (грн.) и нажмите клавишу \"ENTER\": \n";
	cin >> copybook_price;
	cout << "Ведите количество тетрадей и нажмите клавишу \"ENTER\": \n";
	cin >> qty_of_copybook;

	cout << "Введите цену карандаша (грн.) и нажмите клавишу \"ENTER\": \n";
	cin >> pencil_price;
	cout << "Ведите количество карандашей и нажмите клавишу \"ENTER\": \n";
	cin >> qty_of_pencil;
	total_price = (copybook_price * qty_of_copybook) + (pencil_price * qty_of_pencil);
	cout << "Общая стоимость Вашей покупки составляет: " << total_price << " грн.";
	cout << endl;
#endif
#if defined TASK3 
	cout << "\t\t\tЗадача 3\n\n";
	cout << "Вычисление стоимости покупки.\n";
	double copybook_price_set, envelop_price, total_price_of_set;
	int set_qty;

	cout << "Введите исходные данные и нажмите клавишу \"ENTER\": \n";
	cout << "Введите цену тетради (грн.) и нажмите клавишу \"ENTER\": \n";
	cin >> copybook_price_set;
	cout << "Введите цену обложки для тетради (грн.) и нажмите клавишу \"ENTER\": \n";
	cin >> envelop_price;
	cout << "Введите количество комплектов (тетрадь + обложка) и нажмите клавишу \"ENTER\": \n";
	cin >> set_qty;
	total_price_of_set = (copybook_price_set + envelop_price) * set_qty;
	cout << "Общая стоимость Вашей покупки составляет: " << total_price_of_set << " грн.";
	cout << endl;
#endif 
#if defined TASK4
	cout << "\t\t\tЗадача 4\n\n";
	cout << "Вычисление стоимости поездки на дачу и обратно.\n";
	double distance_of_rout_to, rate_of_petrol, price_of_petrol1, whole_distance_of_rout, qty_of_fuel, total_expenditures;

	cout << "Введите расстояние до дачи (км) и нажмите клавишу \"ENTER\": \n";
	cin >> distance_of_rout_to;
	cout << "Укажите расход бензина вашего автомобиля (из расчета кол-во литров на 100 км. пробега) и нажмите клавишу \"ENTER\": \n";
	cin >> rate_of_petrol;
	cout << "Укажите стоимость одного литра бензина (грн.): \n";
	cin >> price_of_petrol1;
	whole_distance_of_rout = distance_of_rout_to * 2;
	qty_of_fuel = (rate_of_petrol * whole_distance_of_rout) / 100;
	total_expenditures = qty_of_fuel * price_of_petrol1;
	cout << "Ваша покздка на дачу и обратна обойдется в: " << total_expenditures << " грн. ";
	cout << endl;

#endif 
}
