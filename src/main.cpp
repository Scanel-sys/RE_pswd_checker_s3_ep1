#include "Header.h"


int main()
{
	std::string input_password = get_code();
	unsigned int endless_loop_data[] = { 0x90909090, 0x90909090 };
	__asm
	{
		push eax
		lea eax, endless_loop_data
		push 2
		push eax
		push offset lp
		call WriteMe
		add esp, 12
		lp: jmp short lp
		pop eax
	}

	if (!check_password(input_password))
	{
		int is = 0;
		if (CheckHardwareBreakpoints() != 0 || checkSLDT())
			is++;
		JUNK
		if (!check_password2(input_password))
		{
			JUNK
			is = 1;
		}
		if (is != 0 || !hello_Roma(input_password))
		{
			JUNK
			print_line(2, "\n");
			return -1;
		}
		if (is == 1)
		{
			JUNK
			print_line(2, "\n");
			JUNK
			antidebug2();
			return -1;
		}
		if (hello_Roma(input_password))
		{
			putout_serial();
			JUNK
			print_line(1, "\n");
			if (IsDebuggerPresent())
				return 0;
			launch_wagon_wheels();
		}
	}
	else if(check_password(input_password))
	{
		JUNK
		print_line(2, "\n");
	}	
	char out;
	std::cin >> out;
	
	return 0;
}

