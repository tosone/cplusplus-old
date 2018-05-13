SHELL = /bin/bash

all: clean
	for dir in *; do \
		if [[ $${dir} =~ Learning ]]; then \
			echo; \
			echo $${dir} is building......; \
			make -C $${dir}; \
		fi \
	done

clean:
	${RM} */*.txt */*.test */*.o */*.html

submodule:
	git submodule update --init --recursive

depend:
	cd 3rdParty/boost && ./bootstrap.sh && ./b2
	mkdir 3rdParty/jsoncpp/build && cd 3rdParty/jsoncpp/build && cmake -DCMAKE_BUILD_TYPE=release -DBUILD_STATIC_LIBS=ON -DBUILD_SHARED_LIBS=OFF -DARCHIVE_INSTALL_DIR=. -G "Unix Makefiles" .. && make
	cd 3rdParty/json-parser && ./configure && make
	cd 3rdParty/openldap && ./configure && make depend && make
	cd 3rdParty/libuv && ./autogen.sh && ./configure && make
	cd 3rdParty/curl && ./buildconf && ./configure && make
	cd 3rdParty/zlib && ./configure && make
	cd 3rdParty/mbedTLS && make
	cd 3rdParty/openssl && ./config && make depend && make
