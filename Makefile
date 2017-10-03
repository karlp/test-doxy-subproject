CPPFLAGS+=-Iinclude

all: aaa bbb ccc

aaa: src/main.c src/common.c src/aaa/periph.c
	$(CC) $(CPPFLAGS) -DPROJECT_AAA=1 $^ -o $@
	
bbb: src/main.c src/common.c src/bbb/periph.c
	$(CC) $(CPPFLAGS) -DPROJECT_BBB=1 $^ -o $@

ccc: src/main.c src/common.c
	$(CC) $(CPPFLAGS) -DPROJECT_CCC=1 $^ -o $@

clean:
	$(RM) aaa bbb
