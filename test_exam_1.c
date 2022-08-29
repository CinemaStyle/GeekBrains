#include <stdio.h>

//Функция копирования массива

char	ft_copy_str(char *str1, char *str2)
{
	int i;
	
	i = 0;
	while(str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return(str2);
}

//Проверка копии на соответсвие

char	ft_test_copy_str(char *str1, char *str2)
{
	int i;
	
	i = 0;
	while(str1[i])
	{
		if (str2[i] == str1[i])
		{
    		i++;
		}
		else
		{
    		printf("Тест не пройден\n");
    		return(0);
		}
	}
	printf("Тест пройден\n");
}

//Исходные данные поддающиеся изменению для проверки работоспособности программы

int	main(void) 
{
	char str1[11] = "3, 3, 5, 7";
	char str2[11] = "";
	
	ft_copy_str(str1, str2);
	ft_test_copy_str(str1, str2);
	return 0;
}
