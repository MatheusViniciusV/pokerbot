# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

# Diretórios
SRC_DIR = src
INCLUDE_DIR = include
TEST_DIR = tests
BUILD_DIR = build

# Arquivos
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
MAIN = main.c
TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)

# Executável final
TARGET = pokerbot

# Diretiva padrão (compilar o programa principal)
all: $(BUILD_DIR) $(TARGET)

# Compila o programa principal
$(TARGET): $(OBJS) $(MAIN)
	$(CC) $(CFLAGS) $(OBJS) $(MAIN) -o $(TARGET)

# Compilar objetos
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Criar o diretório build (se não existir)
$(BUILD_DIR):
	@if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)

# Executar testes
test: $(OBJS)
	@for %%f in ($(TEST_SRCS)) do ( \
		$(CC) $(CFLAGS) $(OBJS) %%f -o $(BUILD_DIR)\\tests && \
		$(BUILD_DIR)\\tests \
	)

# Limpeza
clean:
	@if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)
	@if exist $(TARGET) del $(TARGET)
	@if exist $(BUILD_DIR)/tests del $(BUILD_DIR)/tests