#include <stdio.h>
#include <windows.h>
DWORD GetHash(char *fun_name)
{
	DWORD digest=0;
	while(*fun_name)
	{
		digest=((digest<<25)|(digest>>7)); //—≠ª∑”““∆7 Œª
		digest+= *fun_name ; //¿€º”
		fun_name++;
	}
	return digest;
}
void main()
{
	DWORD hash;
	hash= GetHash("MessageBoxA");
	printf("result of hash is 0x%.8x\n",hash);
}