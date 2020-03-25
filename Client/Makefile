BUILD_DIR = build/bin

all:
	${MAKE} qbuild

fbuild:
	[ -d $(BUILD_DIR) ] || mkdir -p $(BUILD_DIR)
	cd build; cmake ..; make

qbuild:
	cd build; make

run:
	./build/bin/MathsApp

clean:
	rm -rf build


.PHONY: all build run clean