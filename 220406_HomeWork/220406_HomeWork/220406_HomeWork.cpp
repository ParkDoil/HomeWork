#include <iostream>

using namespace std;

int main()
{
	/*
		오늘의 과제
		1. 자기 자신을 분석해서
		2. 여러가지 타입의 변수로 정의한다.
		(총 20개)
		예) 이름 : ?
		나이 : ?
		키 : ?
		혈액형 : ?
		MBTI : ?
		....
	*/

	string myName = "박도일", myMBTI = "INTP", myHometown = "전주"; //이름 , MBTI, 고향
	string myUniversity = "군산대학교", myHobby = "게임", myFavoriteGame = "로스트아크"; //출신대학, 취미, 좋아하는 게임
	string nowLivedLocation = "대림동", myFavoriteMovie = "빅 쇼트", myBelongTo = "메타버스 1기 수강생"; // 사는곳, 좋아하는 영화, 소속
	string myFavoriteSong = "Gloomy Sunday", myFavoriteSinger = "MC 스나이퍼", myMajor = "컴퓨터정보공학과"; // 가장 좋아하는 노래, 가장 좋아하는 가수, 전공
	string myDream = "게임 개발자"; // 꿈
	int myAge = 27, myTall = 174, myBirth = 960728; // 나이, 키, 생일
	int footSize = 285, commutingTime = 51, gameBestLevel = 1575; // 발크기, 등하교시간(분), 로아 최고레벨
	char myBloodType = 'B'; // 혈액형)

	cout << "이름 : " << myName << "/   생년월일 : " << myBirth << "/   나이 : " << myAge << endl;
	cout << "MBTI : " << myMBTI << "/   고향 : " << myHometown << "/   현재거주지 : " << nowLivedLocation << endl;
	cout << "혈액형 : " << myBloodType << "형/   키 : " << myTall << "cm/   발크기 : " << footSize << "mm" << endl;
	cout << "출신대학교 : " << myUniversity << "/   전공 : " << myMajor << "/   현재소속 : " << myBelongTo << "/   통학시간 : " << commutingTime << "분" << endl;
	cout << "미래의 꿈 : " << myDream << "/   취미 : " << myHobby << "/   제일 좋아하는 게임 : " << myFavoriteGame << "/   로아 게임 레벨 : " << gameBestLevel << endl;
	cout << "제일 좋아하는 영화 : " << myFavoriteMovie << "/   제일 좋아하는 가수 : " << myFavoriteSinger << "/   제일 좋아하는 노래 : " << myFavoriteSong << endl;
}
