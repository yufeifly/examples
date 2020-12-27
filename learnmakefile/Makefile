bar =
foo = $(bar)
ifdef foo
    frobozz = yes
else
    frobozz = no
endif

comma:=,
empty:=
space:=$(empty) $(empty)
foo2:=a b c
bar2:=$(subst $(space),$(comma),$(foo2))

files:=$(shell pwd)
all:
	echo $(files)
