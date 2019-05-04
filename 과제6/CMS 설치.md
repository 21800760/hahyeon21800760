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

[사진1]

~~~
다음으로 su wp 명령으로 wp계정으로 로그인한 뒤 html폴더와 index.html파일을 만들어준다. 
index.html에는 도메인에 띄울 내용을 간단하게 작성한다.
~~~

[사진]

~~~
root 권한으로 돌아간 후 cd /etc/apache2/sites-available 디렉토리로 이동 후 000-default.conf 파일을
wp.com.conf 파일로 복하해준다.
~~~

[사진]

~~~
wp.conf 파일을 열어 내용을 다음과 같이 수정해준다
~~~

[사진]

~~~
hosts 파일을 다음과 같이 수정해주기 위해 vim /etc/hosts 명령어 입력.
~~~

[사진]

~~~
홈 디렉 토리 권한을 세팅하기 위해 vim /etc/apache2/apache2.conf 파일을 다음과 같이 수정해 준다.
~~~

[사진]

~~~
site 활성화 : a2ensite wp.com
~~~
[사진]

~~~
아파치 재시작 : service apache2 restart
~~~


