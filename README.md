# simple_docker_app
# How to use?
##Step1: Build the docker images with dockerfile.
###docker build -t copy .
##Step2: Run the docker container from image.
###docker run --rm -v $(File_Dir):/mnt copy /mnt/$(File) /mnt/$(New_File)
