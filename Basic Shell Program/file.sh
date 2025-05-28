echo "Enter filename to open:"
read filename

if [ -r "$filename" ]; then
  echo "File '$filename' opened successfully."
else
  echo "Failed to open file '$filename'. It may not exist or you don't have permission."
  exit 1
fi
echo "File processing done. File is considered closed."
