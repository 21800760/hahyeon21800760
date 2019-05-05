# CMS란

~~~
CMS란 인터넷을 통해 제공하는 각종 정보나 그 내용물들을 관리하느 시스템이다. 
예) WordPress, drupal, joomla
~~~

### WordPress 설치 및 기본설정 방법

~~~
WordPress는 일반적으로 Apache 서버 상에서 동작하기 때문에 웹 서버를 세팅한 사용자가 직접 설치하여 사용하거나,
외부 웹 호스팅 업체의 서비스르 통해 사용할 수 있다. 여기에서는 얖에서 이미 구축해 놓은 리눅스 APM 환경 위에
직접 설치해보고자 한다. 즉, 각자의 리눅스 서버에 APM이 구축되어 있다느 가정하에 다음과 같은 절차를 따라 시작!
~~~

### WordPress 웹 서비스르 위한 웹 호스티 설정

~~~
WordPress 웹 서비스를 운영할 별도의 계정생성
~~~

<img width="600" alt="스크린샷 2019-05-04 오후 11 54 16" src="https://user-images.githubusercontent.com/48082631/57195041-ea616e80-6f88-11e9-84b3-a36860753e29.png">

[가상호스트설정(클릭하기해서 보기)](https://github.com/21800760/21800760/blob/master/가상호스트%20설정.md)에서 세팅한 것고 동일한 방법으로 virtual hosting을 진행한다.

### MySQL Database 추가 및 설정하기 - root 권한에서 수행

~~~
mysql -uroot -p 명령으로 mysqldp에 접속한다.
~~~
<img width="600" alt="스크린샷 2019-05-05 오전 12 12 54" src="https://user-images.githubusercontent.com/48082631/57195059-0bc25a80-6f89-11e9-9b50-a03ac018a5e9.png">
~~~
데이터 베이스를 생성한다. 
> create database choidb;
~~~

데이터 베이스 확인
<img width="300" alt="스크린샷 2019-05-05 오전 12 36 08" src="https://user-images.githubusercontent.com/48082631/57195067-25fc3880-6f89-11e9-972b-b7bf4209e13d.png">

~~~
생성한 데이터 베이스의 사용자 계정을 만든다.(리눅스 사용자 계정과는 별개)

> create user '사용자이름'@'localhost' identified by '비밀번호';
~~~

~~~
생성한 사용자 계정에게 데이터베이스 사용권한을 부여해준다.
> grant all on choidb.* to choiwp@localhost;
~~~

<img width="600" alt="스크린샷 2019-05-05 오전 12 37 04" src="https://user-images.githubusercontent.com/48082631/57195080-4e843280-6f89-11e9-8405-39910637a187.png">

### WordPress 설치하기 - 사용자 권한에서 수행

~~~
mywp 계정으로 전환한 후 /home/mywp/html 디렉토리 안에 WordPress를 설치하자. 
다운로드 명령어 : wget http://wordpress.org/latest.tar.gz
~~~
<img width="600" alt="스크린샷 2019-05-05 오전 12 41 26" src="https://user-images.githubusercontent.com/48082631/57195081-593ec780-6f89-11e9-8ca1-96d00437f540.png">

~~~
다운로드 후 생성된 압축파일을 풀어준다.
$ tar -xvzf latest.tar.gz
압축을 풀면 wordpress 디렉토리가 자동 생성된다.
웹 서비스의 경로는 /home/wpuser/html/wordpress가 된다. WordPress 서비스를 위한 가상 호스팅(mywp)을 설정할 때,
/etc/apache2/sites-available 디렉토리에서 config 파일내의 DocumentRoot 경로를 다음과 같이 설정해주어야 한다.
~~~

<img width="600" alt="스크린샷 2019-05-05 오전 12 50 12" src="https://user-images.githubusercontent.com/48082631/57195087-6e1b5b00-6f89-11e9-82d9-873b9f23e68c.png">

### WordPress 설정파일 수정하기

~~~
wordpress 디렉토리로 들어간 후, wp-config-sample.php 파일을 복사한다.
$ cp wp-config-sample.php wp-config.php

앞으로, 이 wp-config.php 파일이 주요 설정내용이 저장되는 곳임을 명심!
~~~

사진

~~~
wp-config.php 내용 수정
생성했던 데이터베이스 이름과 계정 정보를 적어준다
~~~
사진

### 웹 브라우저에서 WordPress 웹 사이트 접속하여 설치하기

~~~
웹 브라우저에 자신이 세팅하 도메인 주소(mywp.com)를 입력해주면, 다음과 같은 창이 띄워지고, 홈페이지 절차에 따라 웹서비스를 세팅하면 된다.
~~~






