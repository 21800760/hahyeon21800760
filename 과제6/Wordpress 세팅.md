# #Wordpress 세팅

~~~
Username에는 이 웹사이트에 로그인할 때에 사용할 아이디 입력
데이터베이스 계정을 생성할 때에 사용한 ID/PW와는 완전히 상관 없음
~~~

<img width="600" alt="스크린샷 2019-05-05 오후 11 54 12" src="https://user-images.githubusercontent.com/48082631/57197231-d37a4680-6f9f-11e9-96d8-95b0e393451f.png">

~~~
로그인하기
~~~

<img width="600" alt="스크린샷 2019-05-05 오후 11 56 23" src="https://user-images.githubusercontent.com/48082631/57197235-eee55180-6f9f-11e9-8902-958425e44b35.png">

<img width="600" alt="스크린샷 2019-05-05 오후 11 57 39" src="https://user-images.githubusercontent.com/48082631/57197236-ef7de800-6f9f-11e9-8414-049b4add6459.png">

~~~
아이디와 비밀번호를 입력하고 로그인하면 다음과 같은 관리 화면으로 접속됩니다.
~~~

<img width="600" alt="스크린샷 2019-05-06 오전 12 02 47" src="https://user-images.githubusercontent.com/48082631/57197243-03294e80-6fa0-11e9-82b3-5815b6c72831.png">

### 워드프레스 환경설정

~~~
Settings > General
Timezone을 GTC+9(한국 표준시각)으로 설정합니다.
~~~

<img width="600" alt="스크린샷 2019-05-06 오전 12 07 47" src="https://user-images.githubusercontent.com/48082631/57197258-1c31ff80-6fa0-11e9-96f7-19ca82be4a64.png">

<img width="600" alt="스크린샷 2019-05-06 오전 12 09 47" src="https://user-images.githubusercontent.com/48082631/57197259-1dfbc300-6fa0-11e9-828f-cac007c408a5.png">

### 웹 사이트 들어가보기

~~~
검색창에 mywp.com(자신이 세팅한 웹)을 입력하면 지금까지 세팅한 내용이 보이게 된다.
~~~

<img width="600" alt="스크린샷 2019-05-06 오전 12 12 50" src="https://user-images.githubusercontent.com/48082631/57197270-3966ce00-6fa0-11e9-80d5-dace5400c961.png">

# #다른 계정으로 한국어 버전 Wordpress 다운로드 후 세팅하기

[가상 호스트 설정](https://github.com/21800760/21800760/blob/master/가상호스트%20설정.md)
에서 세팅한 것과 동일한 방법으로 virtual hosting을 진행한다.

~~~
새로운 계정 hha를 많들었다.
계정이 생성된 모습
~~~

<img width="300" alt="스크린샷 2019-05-06 오전 12 32 54" src="https://user-images.githubusercontent.com/48082631/57197360-50f28680-6fa1-11e9-977f-6e58c4248635.png">

~~~
MySQL Database 추가 및 설정 - root 권한에서 수행
~~~

전에 만들었던 것을 참고하여 생성하기!! 상세내용 생략. 자세한 내용은 [이곳을 클릭](https://github.com/21800760/21800760/blob/master/가상호스트%20설정.md)

<img width="300" alt="스크린샷 2019-05-06 오전 12 36 19" src="https://user-images.githubusercontent.com/48082631/57197384-87c89c80-6fa1-11e9-8a20-817279778fdb.png">

~~~
생성한 데이터 베이스의 사용자계정 만들고,(create user '유저이름'@'localhost' identified by '비밀번호';)
생성한 사용자 계정에게 데이터베이스 사용 권한을 부여해준다.
변경사항들을 반영해주고 mysql 종료
~~~

<img width="300" alt="스크린샷 2019-05-06 오전 12 38 43" src="https://user-images.githubusercontent.com/48082631/57197411-f4dc3200-6fa1-11e9-9796-a0741d7dfb1b.png">

### Wordpress 한국어 버전 다운로드

더 자세한 내용은 다음을 클릭! [wordpress 설치 더 자세한 내용 보기](https://github.com/21800760/21800760/blob/master/과제6/CMS%20설치.md)

~~~
/home/hha/html 디렉토리 안에 wordpress 설치(한국어 버전)

명령어 : wget https://ko.wordpress.org/latest-ko_KR.tar.gz
~~~

<img width="300" alt="스크린샷 2019-05-06 오전 12 47 29" src="https://user-images.githubusercontent.com/48082631/57197458-7af87880-6fa2-11e9-871f-ca90004ff88b.png">

~~~
압축 풀기
명령어 : tar -xvzf latest-ko_KR.tar.gz
~~~

<img width="300" alt="스크린샷 2019-05-06 오전 12 49 05" src="https://user-images.githubusercontent.com/48082631/57197461-7f249600-6fa2-11e9-81d7-48d6be71ae37.png">

~~~
wordpress 디렉토리로 들어간 후 wp-config-sample 파이을 wp-config.php파일로 복사
wp-config.php 파일의 내용을 다음과 같이 수정
~~~

<img width="300" alt="스크린샷 2019-05-06 오전 12 52 21" src="https://user-images.githubusercontent.com/48082631/57197474-a4190900-6fa2-11e9-9097-28b3f837efa0.png">

~~~
/etc/apache2/sites-available 디렉토리에서 hha.com.conf 파일내의 DocumentRoot 경로를 다음과 같이 설정
~~~

<img width="300" alt="스크린샷 2019-05-06 오전 12 55 49" src="https://user-images.githubusercontent.com/48082631/57197498-ee9a8580-6fa2-11e9-96c6-7a670c4f5664.png">

~~~
hha.com 접속 후 웹 서비스 세팅하기
~~~

<img width="600" alt="스크린샷 2019-05-06 오전 12 58 06" src="https://user-images.githubusercontent.com/48082631/57197510-12f66200-6fa3-11e9-99b6-da343550b227.png">

<img width="600" alt="스크린샷 2019-05-06 오전 12 59 52" src="https://user-images.githubusercontent.com/48082631/57197513-1984d980-6fa3-11e9-806f-538e9c8a51e3.png">

<img width="600" alt="스크린샷 2019-05-06 오전 12 59 28" src="https://user-images.githubusercontent.com/48082631/57197514-1984d980-6fa3-11e9-9497-6da3add838bb.png">

~~~
참고 사이트 : https://www.popit.kr/워드프레스-설치/
           http://www.nam.or.kr/archives/564        
~~~         
