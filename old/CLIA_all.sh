for file in benchmark/CLIA_Track/*

do
  name=$(echo $file| cut -d'/' -f 3)
  ./cvc4-1.6 "$file" >> output/CLIA_all/"result_$name".out
done
