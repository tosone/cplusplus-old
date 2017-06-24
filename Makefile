all: clean
	git submodule init
	git submodule update
	for dir in *; do if [[ $${dir} =~ Learning ]]; then echo; echo $${dir} is building......; make -C $${dir}; fi done

clean:
	-rm */*.txt */*.test
