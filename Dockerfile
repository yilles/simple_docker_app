# The executable file a.out is depand on libc.so.6 version 'GLIBC_2.35'.
# Please use the current container to include the package.
# Minimize the size of container.
FROM gliderlabs/alpine:3.7
# FROM ubuntu:22.04

COPY a.out /

ENTRYPOINT [ "./a.out" ]