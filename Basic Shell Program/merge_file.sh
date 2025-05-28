echo "Enter the first filename"
read file1
echo "Enter the second filename"
read file2

cat "$file1" "$file2" > merged.txt
echo "Files merged into merged.txt
