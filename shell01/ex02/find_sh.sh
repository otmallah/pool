find . -type f -name "*.sh" | rev | cut -f 1 -d '/' | rev | cut -d '.' -f 1
