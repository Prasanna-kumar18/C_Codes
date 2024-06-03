//hello.c

int main()
{
    return 0;
}




hello: hello.c
	gcc hello.c -o hello


hello:
    echo "Hello, World"
    echo "This is make command example"



hello: hello.o
	gcc hello.o -o hello //Runs third

hello.o: hello.c
	gcc -c hello.c -o hello.o //Runs second

//Typically blah.c would already exist, but I want to limit any additional required files

hello.c:
	echo "int main() { return 0; }" > hello.c //Runs first


some_file:
    touch some_file

clean:
    rm -f some_file

files := file1 file2
some_file: $(files)
	echo "Look at this variable: " $(files)
	touch some_file

file1:
	touch file1
file2:
	touch file2

clean:
	rm -f file1 file2 some_file



a := one two // a is assigned to the string "one two"
b := 'one two' // Not recommended. b is assigned to the string "'one two'"
all:
	printf '$a'
	printf $b   



x := dude

all:
	echo $(x)
	echo ${x}

	// Bad practice, but works
	echo $x 


all: one two three

one:
	touch one
two:
	touch two
three:
	touch three

clean:
	rm -f one two three


all: f1.o f2.o

f1.o f2.o:
	echo $@

// Equivalent to:
// f1.o:
//	 echo f1.o
// f2.o:
//	 echo f2.o



all: one.c two.c three.c
	gcc one.c two.c three.c -o
	@gcc one.c two.c three.c -o make -I.



all: 
	cd ..
	// The cd above does not affect this line, because each command is effectively run in a new shell
	echo `pwd`

	// This cd command affects the next because they are on the same line
	cd ..;echo `pwd`

	// Same as above
	cd ..; \
	echo `pwd`


make_var = I am a make variable
all:
	// Same as running "sh_var='I am a shell variable'; echo $sh_var" in the shell
	sh_var='I am a shell variable'; echo $$sh_var

	// Same as running "echo I am a amke variable" in the shell
	echo $(make_var)


one:
	// This error will be printed but ignored, and make will continue to run
	-false
	touch one


new_contents = "hello:\n\ttouch inside_file"
all:
	mkdir -p subdir
	printf $(new_contents)
	cd subdir && $(MAKE)

clean:
	rm -rf subdir


foo = ok

all:
ifeq ($(foo), ok)
	echo "foo equals ok"
else
	echo "nope"
endif


nullstring =
foo = $(nullstring) // end of line; there is a space here

all:
ifeq ($(strip $(foo)),)
	echo "foo is empty after being stripped"
endif
ifeq ($(nullstring),)
	echo "nullstring doesn't even have spaces"
endif

bar =
foo = $(bar)

all:
ifdef foo
	echo "foo is defined"
endif
ifndef bar
	echo "but bar is not"
endif


bar := ${subst not, totally, "I am learning make file"}
all: 
	@echo $(bar)


comma := ,
empty:=
space := $(empty) $(empty)
foo := a b c
bar := $(subst $(space),$(comma),$(foo))

all: 
	@echo $(bar)


comma := ,
empty:=
space := $(empty) $(empty)
foo := a b c
bar := $(subst $(space), $(comma) , $(foo))

all: 
	// Output is ", a , b , c". Notice the spaces introduced
	@echo $(bar)


foo := $(if this-is-not-empty,then!,else!)
empty :=
bar := $(if $(empty),then!,else!)

all:
	@echo $(foo)
	@echo $(bar)


