names := yufei feifei dafei

files := $(foreach n,$(names),$(n).cpp)

do:
	@echo $(files)
	$(if $(files)==yufei feifei dafei,@echo haha,@echo wuwu)
