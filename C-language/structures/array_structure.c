#include<stdio.h>
struct employee {
	char employee_name[15];
	int employee_id;
	char employee_role[15];
	int employee_salary;
};
int main() {
	struct employee s[2];
	int i;
	for(i = 0 ; i< 2 ; i++){
		printf("enter employee name %d \n", i + 1);
		scanf("%s", s[i].employee_name);
		printf("enter employee id %d\n ", i + 1);
		scanf("%d", &s[i].employee_id);
		printf("enter employee role %d\n ", i + 1);
		scanf("%s", s[i].employee_role);
		printf("enter employee salary %d\n ", i + 1);
		scanf("%d", &s[i].employee_salary);
	}
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=0; i<2; i++) {
		printf("emloyees %d details:\n",i+1);
		printf("employee name %s \n",&s[i].employee_name);
		printf("employee id %d\n", s[i].employee_id);
		printf("employee role %s\n",&s[i]. employee_role);
		printf("employee salary %d\n", s[i].employee_salary); 
	}
	printf("\n");
	return 0;
}