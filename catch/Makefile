
CXXFLAGS=-Iinclude/

test/test_runner: test/test_runner.o test/MaClasse.o src/MaClasse.o
	$(CXX) -o $@ $^

tests: test/test_runner
	test/test_runner -s

.PHONY: clean
clean:
	rm -f src/*.o test/*.o test/test_runner
