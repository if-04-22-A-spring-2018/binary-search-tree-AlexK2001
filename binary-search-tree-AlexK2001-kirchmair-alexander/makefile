CC					= g++
CCLINK			= g++
LIBS				=
CCOPTIONS		= -Wall -pedantic -g
LDOPTIONS		=
HDRS				= bst.h test_bst.h general.h shortcut.h

TEST = test_bst
PROGRAM =

TESTOBJECT = bst_test_driver.o
MAINOBJECT =
OBJS = general.o shortcut.o bst.o test_bst.o

DOXY            = /Applications/Doxygen/Doxygen.app/Contents/Resources/doxygen

all: $(PROGRAM)
	./$(PROGRAM)

$(TEST): $(OBJS) $(TESTOBJECT)
	$(CCLINK) -o $@ $(LDOPTIONS) $(OBJS) $(TESTOBJECT)

$(PROGRAM): $(OBJS) $(MAINOBJECT)
	$(CCLINK) -o $@ $(LDOPTIONS) $(OBJS) $(MAINOBJECT)

.PHONY: clean cleanall doxy test setsample setassignment definesample defineassignment assignmentfolder

clean:
	rm -f $(PROGRAM) $(TEST) $(TESTOBJECT) $(MAINOBJECT) $(OBJS)

cleanall:
	rm -f $(PROGRAM) $(TEST) $(TESTOBJECT) $(MAINOBJECT) $(OBJS) index.html
	rm -R html

doxy:
	$(DOXY)
	ln -s html/index.html index.html

test: $(TEST)
	./$(TEST)

#sets project as sample solution
setsample:
	cp bst.cpp.sample bst.cpp
	cp bst.h.sample bst.h

#sets project as assignment
setassignment:
	cp bst.cpp.assignment bst.cpp
	cp bst.h.assignment bst.h

# defines current state of project as sample solution
definesample:
	cp bst.cpp bst.cpp.sample
	cp bst.h bst.h.sample

# defines current sate of project as assignment
defineassignment:
	cp bst.cpp bst.cpp.assignment
	cp bst.h bst.h.assignment

# creates a folder which can serve as a publishable assignment
assignmentfolder:
	make setassignment
	make doxy
	mkdir ../assignment
	cp -R * ../assignment
	rm ../assignment/*.sample
	rm ../assignment/*.assignment
	make cleanall

%.o: %.cpp $(HDRS)
	$(CC) $(CCOPTIONS) -c $<
