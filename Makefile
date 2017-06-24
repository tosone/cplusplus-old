all:
	for dir in *; do if [[ $${dir} =~ Learning ]]; then echo; echo $${dir} is building......; make -C $${dir}; fi done
