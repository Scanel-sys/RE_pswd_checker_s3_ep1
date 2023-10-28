#include "Header.h"


int main()
{

	std::string input_password = get_code();
	if (!check_password(input_password))
	{
		int is = 0;
		if (!check_password2(input_password))
		{
			is = 1;
		}
		if (is == 1)
		{
			print_line(2, "\n");
			return -1;
		}
		if (is != 0 || !hello_Roma(input_password))
		{
			print_line(2, "\n");
			return -1;
		}
		putout_serial();
		print_line(1, "\n");
		launch_wagon_wheels();
	}
	else if(check_password(input_password))
	{
		print_line(2, "\n");
	}
	return 0;
}
