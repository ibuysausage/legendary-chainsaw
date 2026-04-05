# lolllll i use arch btw

FROM archlinux:latest

RUN pacman -Syu --noconfirm && pacman -S \
    base-devel cmake make fzf ninja gcc --noconfirm

COPY . /hello

WORKDIR /hello/build

# RUN chmod a+x ../setup.sh && ../setup.sh

RUN cmake ..

RUN make

ENTRYPOINT ["bash", "/hello/docker.sh"]

# CMD ["./bin/hello"]
