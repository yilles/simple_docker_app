# The executable file a.out is depand on libc.so.6 version 'GLIBC_2.35'.
# Please use the current container to include the package.
# Minimize the size of container.
FROM jeanblanchard/alpine-glibc:3.15
# FROM ubuntu:22.04

COPY a.out /

ENTRYPOINT [ "./a.out" ]
