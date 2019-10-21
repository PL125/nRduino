/*
 * nRduino ù��° �����Դϴ�
 * �ۼ��� : 2019�� 10�� 21��
 * �ۼ��� : S.W. Jeong
 * SDK Version : 15.3.0
 */

#include "arduino.h"

extern _Serial Serial;

void setup(){
	// Setup �Լ� ����

	// Serial ��� ����
	// Baudrate 115200 ����
	// 8-bit, No parrity, No Flow Control
	Serial.begin(115200);

	// 24���ɰ� 25���� OUTPUT ����
	pinMode(24, OUTPUT);
	pinMode(25, OUTPUT);

	// 24��, 25���� LED OFF
	digitalWrite(24, HIGH);	// HIGH = OFF, LOW = ON
	digitalWrite(25, HIGH);

	// ������ ���� ������ Serial�� ���
	Serial.println("Start nRduino First Examples");
}

void loop(){
	// 24��, 25�ɿ� ����� LED�� 1�ʿ� �������� ����
	// ���� LED�� ����
	digitalWrite(24, HIGH);
	digitalWrite(25, HIGH);
	Serial.println("LED OFF");
	delay(1000);

	// LED�� �Ҵ�
	digitalWrite(24, LOW);
	digitalWrite(25, LOW);
	Serial.println("LED ON");
	delay(1000);
}

int main(){
	setup();

	while(1){
		loop();
	}
	return 0;
}
