#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: cpp <filename>"
    exit 1
fi

if [[ "$1" == *.cpp ]]; then
    file="$1"
else
    file="$1.cpp"
fi

if [ -e "$file" ]; then
    echo "$file already exists. Opening it..."
else
    echo '/**' >> "$file"
    echo ' *    author: skarbonp' >> "$file"
    echo '**/' >> "$file"
    echo '#include <bits/stdc++.h>' >> "$file"
    echo 'typedef long long ll;' >> "$file"
    echo 'using namespace std;' >> "$file"
    echo '' >> "$file"
    echo 'int main() {' >> "$file"
    echo '    ios::sync_with_stdio(0);' >> "$file"
    echo '    cin.tie(0);' >> "$file"
    echo '    ' >> "$file"
    echo '    ' >> "$file"
    echo '    ' >> "$file"
    echo '    return 0;' >> "$file"
    echo '}' >> "$file"

    echo "Created $file"
fi

# Open in VS Code
code "$file"
