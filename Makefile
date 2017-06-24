all: clean
	for dir in *; do if [[ $${dir} =~ Learning ]]; then echo; echo $${dir} is building......; make -C $${dir}; fi done

clean:
	-rm */*.txt */*.test */*.o */*.html

submodule:
	git submodule update --init

tools:
	# brew install automake
	# brew install libtool
