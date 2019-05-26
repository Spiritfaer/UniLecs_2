#include <stdio.h>
#include <stdint.h>

/*
������:
		��� ��������������� �� ����������� ������, �� ���������� �������.
������:
		[3, 4, 5, 6, 7, 8, 1, 2]

�������� ��������, ��� ���������� ������� ����������� ������� � ����� �������.
*/

int32_t min(int32_t *arr, uint32_t size)
{
	int32_t *start, *end, *mid;

	if (!arr || size < 2)
		return (0);
	start = arr;
	mid = arr + (size / 2 - 1);
	end = (arr + size - 1);
	while (end - start > 1)
	{
		if (*start < *mid)
			start = mid;
		else
			end = mid;
		mid = start + ((end - start) / 2);
	}
	return ((*start > *end) ? *end : *start);
}

int main(void)
{
	int32_t arr_1[] = {3, 4, 5, 6, 7, 8, 1, 2};
	uint32_t size = sizeof(arr_1) / sizeof(int32_t);

	printf("min = %i!\n", min(arr_1, size));
	return (0);
}
