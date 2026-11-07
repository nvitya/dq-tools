PREFIX ?= /usr/local
BINDIR ?= $(PREFIX)/bin

.PHONY: all install clean

all:
	dq-comp dq-fromc.dqproj

install: all
	install -m 755 dq-fromc $(DESTDIR)$(BINDIR)/dq-fromc

clean:
	rm -rf dq-fromc .dqcache
