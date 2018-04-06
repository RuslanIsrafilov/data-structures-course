DATA_STRUCTURES = \
	basic_binary_tree \
	linked_list       \
	queue             \
	stack

BUILDS := $(addprefix build_,$(DATA_STRUCTURES))
RUNS := $(addprefix run_,$(DATA_STRUCTURES))

build_all: $(BUILDS)
run_all: $(RUNS)

build_%: %
	@cd $< && make

run_%: % build_%
	@cd $< && ./$<.exe
