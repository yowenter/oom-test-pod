FROM alpine:3.7

RUN apk add --no-cache gcc musl-dev

ADD mem-hog.c /mem-hog.c
ADD run.sh /run.sh

WORKDIR /
RUN gcc mem-hog.c -o mem-hog
RUN cp mem-hog /bin/
ENV MEMORY=1

CMD ["sh","/run.sh"]
