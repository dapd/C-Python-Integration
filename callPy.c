/*
	Diogo Dantas
	GitHub: https://github.com/dapd
*/

#include <stdio.h>
#include <Python.h>

int main()
{
	int i = 0;
	char filename[] = "test.py";
	FILE* fp;

	printf("Hello from C Program\n");

	fp = fopen("file.txt","w");
	while(i<10){
		fprintf(fp,"%d\n",i++);			//Writing ten lines in the file
	}
	fclose(fp);

	Py_Initialize();

	fp = fopen(filename, "r");			//Opening Python file
	PyRun_SimpleFile(fp, filename);		//Executing Python code

	Py_Finalize();
	fclose(fp);
	return 0;
}
