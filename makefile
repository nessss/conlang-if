CC=inform

MAIN = main.inf
TARGET = gostak2.z5

make:
	$(CC) +/usr/local/share/inform/include/,/usr/local/share/inform/lib/,./ +language_name=language $(MAIN) $(TARGET)

clean:
	rm $(TARGET)

run: make
	frotz $(TARGET)
