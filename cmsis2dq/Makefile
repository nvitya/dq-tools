PREFIX ?= /usr/local
BINDIR ?= $(PREFIX)/bin
DQ_COMP ?= dq-comp
DQ_RUN ?= dq-run

.PHONY: all test install clean

all:
	$(DQ_COMP) cmsis2dq.dqproj

test: all
	$(DQ_RUN) tests/test_cmsis2dq.dq

install: all
	install -d $(DESTDIR)$(BINDIR)
	install -m 755 cmsis2dq $(DESTDIR)$(BINDIR)/cmsis2dq

clean:
	rm -rf cmsis2dq tests/test_cmsis2dq .dqbuild tests/.dqbuild
