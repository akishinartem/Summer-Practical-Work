// =====================================================
// 	Created by Artem Akishin on 12/08/2018.
//  Copyright © 2018 Artem Akishin. All rights reserved.
// =====================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 1000

char massive[LEN]
int count;
int strings;

char cmp_by_name(const void * a, const void * b) {
	return strcmp(((struct travi*)a)->name_r, ((struct travi*)b)->name_r);
}

int main() {
	char str1[LEN];
	FILE *file1;
	file1 = fopen("C:\\Program Files\\text.txt", "r+");
	
	if (file1 != NULL) {
		while (feof(file1) == 0 || count > 10) {
			fscanf(file1, "%s", str1);
			strcpy(strings[count++], str1);
		}
		fclose(file1);
		struct travi *p;
		qsort(p, str1, sizeof(struct travi), cmp_by_name);
	}
	else {
		fprintf(stderr, "ERROR: file wasn't opened!\n");
		return 1;
	}

	for (i = 0; i < n; i++) {
		printf("%s\n", &p[i].FIO);
		fprintf(file1, "%s\n", &p[i].FIO);
	}
	fclose(file1);
	free(p);
	return 0;
}
