#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));

	int answerDoor; //자동차
	int yourChoise; // 사용자 문
	int opendDoor=0; //개방될 문
	int limit; //반복회수 
	int notChangingWin = 0; //미변경후 승
	int changingWin = 0; //변경후 승
	double notChangingPercent = 0.0; //미변경후 승률
	double ChangingPercent = 0.0; // 변경시 승률

	printf("1번 문, 2번 문, 3번 문이 있습니다.\n");
	printf("이 중 랜덤으로 자동차가 하나의 문 뒤에 들어있습니다.\n");
	printf("지금부터 입력되는 회수로 시도하여 승률을 검토하겠습니다.\n");
	scanf("%d", &limit);
	for (int i = 0; i < limit; i++) {
	answerDoor = (rand() % 3) + 1;//1~3번 문 중 하나에 자동차가 들어있도록 설정
	yourChoise = (rand() % 3) + 1;

	if (answerDoor == yourChoise) notChangingWin++;
	}
	notChangingPercent = (double)notChangingWin / limit * 100;

	printf("바꾸지 않는 경우 확률 = %5.2lf\n", notChangingPercent);

	for (int i = 0; i < limit; i++) {
		answerDoor = (rand() % 3) + 1;//1~3번 문 중 하나에 자동차가 들어있도록 설정
		yourChoise = (rand() % 3) + 1;
		
		if(answerDoor == yourChoise) {
			do{
			opendDoor = (rand() % 3) + 1;
			}while(opendDoor == yourChoise);
		}
		else {
			if((opendDoor != 1) && (yourChoise != 1))
				opendDoor = 1;
			else if((opendDoor != 1) && (yourChoise != 1))
				opendDoor = 2;
			else
				opendDoor = 3;			
		}

		switch (yourChoise) {//내가 고른 문을 변경하도록 함.
			case 1: {//1번 문인 경우 2번 혹은 3번이 되도록 함
				if (opendDoor == 2) yourChoise = 3;
				else yourChoise = 2;
			}
			case 2: {
				if (opendDoor == 3) yourChoise = 1;
				else yourChoise = 3;
			}
			case 3: {
				if (opendDoor == 1) yourChoise = 2;
				else yourChoise = 1;
			}
		}
		if (answerDoor == yourChoise) changingWin++;
	}

	ChangingPercent = (double)changingWin / limit * 100;

	printf("바꾸는 경우 확률 = %5.2lf\n", ChangingPercent);

}

