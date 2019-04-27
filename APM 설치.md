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

참고 사이트: <https://blog.lael.be/post/73>


