/*������ ���̰� 1~100 ������ �ﰢ�� �߿��� ���� �ﰢ���� 
������ ���� (xyz) ����ϱ�*/



#include <stdio.h>





int main(void) {



	int x, y, z, tot = 0, ctot = 0; //ctot = ��Ƚ��

	for (x = 1; x <= 100; x++) {
		for (y = x; y <= 100; y++) {
			for (z = y + 1; z <= 100; z++) {  //�ٸ� ������ ���ߵǼ� +1 ����
				ctot++;
				if (x*x + y * y - z * z == 0) {
					tot++;
					printf("[%3d] : ( %2d , %2d , %2d )\n", tot, x, y, z);
				}
			}
		}
	}

	printf("\n\t ��ü �� Ƚ�� : %d", ctot);


	system("PAUSE");

}