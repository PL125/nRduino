/*
 * nRduino 첫번째 예제입니다
 * 작성일 : 2019년 10월 21일
 * 작성자 : S.W. Jeong
 * SDK Version : 15.3.0
 */

#include "arduino.h"

extern _Serial Serial;

void setup(){
	// Setup 함수 시작

	// Serial 통신 시작
	// Baudrate 115200 설정
	// 8-bit, No parrity, No Flow Control
	Serial.begin(115200);

	// 24번핀과 25번핀 OUTPUT 설정
	pinMode(24, OUTPUT);
	pinMode(25, OUTPUT);

	// 24핀, 25번핀 LED OFF
	digitalWrite(24, HIGH);	// HIGH = OFF, LOW = ON
	digitalWrite(25, HIGH);

	// 시퀀스 시작 문구를 Serial로 출력
	Serial.println("Start nRduino First Examples");
}

void loop(){
	// 24번, 25핀에 연결된 LED를 1초에 간격으로 점멸
	// 먼저 LED를 끈다
	digitalWrite(24, HIGH);
	digitalWrite(25, HIGH);
	Serial.println("LED OFF");
	delay(1000);

	// LED를 켠다
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
