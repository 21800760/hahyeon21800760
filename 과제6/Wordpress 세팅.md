# Wordpress 세팅

~~~
Username에는 이 웹사이트에 로그인할 때에 사용할 아이디 입력
데이터베이스 계정을 생성할 때에 사용한 ID/PW와는 완전히 상관 없음
~~~

[사진]

~~~
로그인하기
~~~

[사진]

~~~
아이디와 비밀번호를 입력하고 로그인하면 다음과 같은 관리 화면으로 접속됩니다.
~~~

[사진]

### 워드프레스 환경설정

~~~
Settings > General
Timezone을 GTC+9(한국 표준시각)으로 설정합니다.
~~~

[사진]

### 웹 사이트 들어가보기

~~~
검색창에 mywp.com(자신이 세팅한 웹)을 입력하면 지금까지 세팅한 내용이 보이게 된다.
~~~

[사진]

# 다른 계정으로 한국어 버전 Wordpress 다운로드 후 세팅하기

[가상 호스트 설정](https://github.com/21800760/21800760/blob/master/가상호스트%20설정.md)
에서 세팅한 것과 동일한 방법으로 virtual hosting을 진행한다.

계정이 생성된 모습

[사진]

~~~
MySQL Database 추가 및 설정 - root 권한에서 수행
~~~
전에 만들었던 것을 참고하여 생성하기!![주소 넣기]

[사진]-> hhadb 만듦

[사진]-> 생성한 데이터 베이스의 사용자계정 만듥

### Wordpress 한국어 버전 다운로드

두번째 계정을 생성해서 wordpress 설치하는 과정에서는 몇 가지 단계 설명을 생략 하였다. 
더 자세한 내용은 다음을 클릭! [wordpress 설치 더 자세한 내용 보기]주소

~~~
/home/hha/html 디렉토리 안에 wordpress 설치(한국어 버전)

명령어 : wget https://ko.wordpress.org/latest-ko_KR.tar.gz
~~~

[사진]-> 설치 확인

~~~
압축 풀기
명령어 : tar -xvzf latest-ko_KR.tar.gz
~~~

[사진]->압축 푼 파일 확인

~~~
wordpress 디렉토리로 들어간 후 wp-config-sample 파이을 wp-config.php파일로 복사
wp-config.php 파일의 내용을 다음과 같이 수정
~~~




참고 사이트 : https://www.popit.kr/워드프레스-설치/

           http://www.nam.or.kr/archives/564
           
         
