#include <stdio.h>
#include <string.h>
typedef struct
{
	char Ten[30];
	struct
	{
		int T, L, H, Sum;
	} Diem;
} SinhVien;
int main()
{
	SinhVien DS[100], TK, SV;
	int N, i, j, k;
	float C;
	N = 0;
	do
	{
		printf("\n Nhap DL cho sv thu : %d\n", N + 1);
		printf("Ten SV : ");
		gets(DS[N].Ten);
		if (strlen(DS[N].Ten) == 0)
		{
			break;
		}
		else
		{
			printf("Diem thi T,L,H cua SV %s : ", DS[N].Ten);
			scanf("%d%d%d", &DS[N].Diem.T, &DS[N].Diem.L, &DS[N].Diem.H);
			fflush(stdin);
			DS[N].Diem.Sum = DS[N].Diem.T + DS[N].Diem.L + DS[N].Diem.H;
			N++;
		}
	} while (1);
		printf("\n\n DANH SACH SINH VIEN\n\n ");
		printf("Ten SV Toan Ly Hoa Tong \n");
	for (i = 0; i < N; i++)
	{
		printf("%-20s%5d%5d%5d%6d \n",DS[i].Ten, DS[i].Diem.T, DS[i].Diem.L, DS[i].Diem.H, DS[i].Diem.Sum);
	}
	printf("\n\n Diem Chuan : ");
	scanf("%f", &C);
	printf("\n\n DANH SACH SINH VIEN TRUNG TUYEN \n\n");
	for (i = 0; i < N; i++)

		if (DS[i].Diem.Sum >= C && (DS[i].Diem.T * DS[i].Diem.L * DS[i].Diem.H > 0))
		{
			printf("%s\n", DS[i].Ten);
		}
	TK = DS[0];
	for (i = 0; i < N; i++)
		if (DS[i].Diem.Sum > TK.Diem.Sum)
			TK = DS[i];
	for (i = 0; i < N; i++)
		if (DS[i].Diem.Sum == TK.Diem.Sum)
			printf("\n\n THU KHOA : %s \n\n" ,TK.Ten);
	printf("\n So nguoi trung tuyen : ");
	scanf("%d", &k);
	for (i = 0; i < N - 1; i++)
		for (j = i + 1; j < N; j++)
			if (DS[i].Diem.Sum < DS[j].Diem.Sum)
			{
				SV = DS[i];
				DS[i] = DS[j];
				DS[j] = SV;
			}
	while ((k > 0) && (DS[k - 1].Diem.Sum == DS[k].Diem.Sum))
		k--;
	if (k > 0)
	{
		printf("Diem chuan la : %4d", DS[k - 1].Diem.Sum);
		printf("\n\n Danh sach sinh vien trung tuyen\n ");
		for (i = 0; i < k; i++)
			printf("%s\n", DS[i].Ten);
	}
}
