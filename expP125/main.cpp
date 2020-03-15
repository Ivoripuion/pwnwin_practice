void encoder (char* input, unsigned char key, int display_flag)// bool display flag
{
	int i=0,len=0;
	FILE * fp;
	unsigned char * output;
	len = strlen(input);
	output=(unsigned char *)malloc(len+1);
	if(!output)
	{
		printf("memory erro!\n");
		exit(0);
	}
	//encode the shellcode
	for(i=0;i<len;i++)
	{
		output[i] = input[i]^key;
	}
	if(!(fp=fopen("encode.txt","w+")))
	{
		printf("output file create erro");
		exit(0);
	}
	fprintf(fp,"\"");
	for(i=0;i<len;i++)
	{
		fprintf(fp,"\\x%0.2x", output[i]);
		if((i+1)%16==0)
		{
			fprintf(fp,"\"\n\"");
		}
	}
	fprintf(fp,"\";");
	fclose(fp);
	printf("dump the encoded shellcode to encode.txt OK!\n");
	if(display_flag)//print to screen
	{
		for(i=0;i<len;i++)
		{
			printf("%0.2x ",output[i]);
			if((i+1)%16==0)
			{
				printf("\n");
			}	
		}
	}
	free(output);
}