FROM alpine:3.7

RUN apk add --no-cache gcc musl-dev

ADD mem-hog.c /mem-hog.c

WORKDIR /
RUN gcc mem-hoc.c -o mem-hog
