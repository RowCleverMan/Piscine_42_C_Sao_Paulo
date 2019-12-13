find . -type f -name '*.sh' -print | sed 's:\.sh::g' | sed 's:.*/::g'
