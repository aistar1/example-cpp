# HOW TO RUN

## create docker image
```
cd docker/
docker build -t test .
docker-compose run --rm mydocker
```

## build
```
mkdir build
cd build
cmake ..
make -j4
./test_fmt
```

reference
https://github.com/fmtlib/fmt
