#include <stdio.h>
#include <windows.h>
DWORD GetHash(char *fun_name)
{
	DWORD digest=0;
	while(*fun_name)
	{
		digest=((digest<<25)|(digest>>7)); //ѭ������7 λ
		digest+= *fun_name ; //�ۼ�
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