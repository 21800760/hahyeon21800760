# APM 설치

#### 추가정보
~~~
su(substitute user)
* 로그아웃 없이 다른 사용자로 로그인을 가능하게 하는 명령어
* 파라미터가 없는 su는 su root 와 동일(=root 계정으로 로그인)
* 로그인 하려는 계정으 패스워드가 필요
~~~

~~~
sudo(substitute user do)
* 로그아웃 없이 다른 사용자의 권한으로 명령을 실행 가능하게하는 리눅스 명령어
* 파라미터가 없는 sudo는 sudo -u root와 동일(=root 권한으로 실행)
* 현재 로그인된 계정의 패스워드 필요
* sudo -l : sudo 사용 시 권한을 확인하는 명령어
~~~

~~~
su와 sudo su의 차이
* su : root 계정의 패스워드가 필요
* sudo su : 현재 로그이 된 계정으 패스워드가 필요
~~~

출처: https://infosecguide.tistory.com/88 [정보보안 지침서]

## 1. Apache2 설치하기

root 권한으로 변경
~~~
sudo su
~~~

Apache2 설치
~~~
#apt-get install apache2
~~~

버전 체크
~~~
apache2 -v
~~~

## 2. PHP 7.0 설치

~~~
#apt-get install php
~~~

아파치 재시작
~~~
#service apache2 restart
~~~

버전체크
~~~
#php -v
~~~

* PHP Test
  php가 정상적으로 설치되었는지 확인하기 위해 /var/www/html 경로에 info.php 파일을 생성해 준다.
  
<img width="600" alt="스크린샷 2019-04-29 오전 1 31 54" src="https://user-images.githubusercontent.com/48082631/56900468-e0df8e80-6ad0-11e9-8b46-aef69f64e0b2.png">

위와 같은 명령어를 입력해 준 후 웹 브라우저에 localhost/info.php 입력

<img width="600" alt="스크린샷 2019-04-29 오전 1 30 55" src="https://user-images.githubusercontent.com/48082631/56900600-2b610b00-6ad1-11e9-804b-a273aea077df.png">

다음과 같은 창이 뜬다면 성공!

## 3. mysql 설치

mysqlr과 mariadb는 완전 API 호환된다.

~~~
#apt-get install mariadb-server

또는

#apt install mysql-client-core-5.7
~~~

DB 연동모듈 설치. 완전 호환되기 때문에 mysql 이라고 해도 mariadb 사용가능

~~~
#apt-get install php-mysql
~~~

~~~
mysql에 접속해보기(root로 변경 후 접속)
명령어 : mysql -uroot -p
~~~

<img width="600" alt="스크린샷 2019-05-06 오후 10 32 59" src="https://user-images.githubusercontent.com/48082631/57228557-03345780-704f-11e9-9138-8a5b7bf1967f.png">


참고 사이트: <https://blog.lael.be/post/73>

## 4.PhpMyAdmin 설치

phpmyadmin이란 웹상에서 mysql을 관리하기 위해 php로 작성된 툴이다. 데이터베이스를 생성 및 수정, 관리 등 많은 일들을 할 수 있다.

~~~
$sudo apt-get install phpmyadmin
~~~

계속 하시겠습니까? [Y/n] : y
phpmyadmin 설정 : apache2 선택 후 <예> 선택 -> 암호 설정

localhost/phpmyadmin으로 접속하여 설치 여부를 확인

<img width="600" alt="스크린샷 2019-04-29 오전 1 40 51" src="https://user-images.githubusercontent.com/48082631/56900986-0de07100-6ad2-11e9-8bd9-30ad7d4efc5c.png">

phpmyadmin이 정상적으로 설치된 상태

* 안들어가지는 경우
~~~
$sudo vi /etc/apache2/apache2.conf

그 다음으로, apache2.conf 파일의 맨 아랫 부분에 다음과 같은 내용 추가

# Enable PhpMyAdmin
Include /etc/phpmyadmin/apache.conf

마지막으로 $service apache2 restart 명령을 입력해 준 뒤 다시 웹 브라우저에서 접속 해보면 위 그림과 같은 창을 볼 수 있다.
~~~


