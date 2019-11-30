FROM ubuntu:18.04
RUN builddeps='gcc make'\
	&& apt-get update\
	&& apt-get install -y $builddeps
COPY . /home
RUN	cd /home&&gcc helloworld.c -o helloworld.out&&echo ./helloworld.out>run_helloworld.sh
ENV	PATH /home/:$PATH
ENTRYPOINT ["helloworld.out"]
