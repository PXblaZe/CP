compile:
    @echo -e "\033[F"; \
    read -p "Filename: " name; \
    (g++ -o $$name $$name".cpp" && (echo "File "$$name".cpp is successfully compiled."))  \
    || (echo "Compilation failed!") 
