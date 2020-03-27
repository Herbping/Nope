#! /bin/sh
benchmark_plus_2=(
	#mpg_plane1
)

currenttime=`date +"%d%H%M"`
path="benchmarks/CLIA_Track_PLUS_Pos/"

> "result.txt"
> "error_log.txt"
echo "Category: limitedPlus" >> "result.txt"

for s in "${benchmark_plus_2[@]}"; do
	echo "processing $s in $path"
	count=0
	sumEx=0
	sumT=0.0
	for ((i=1; i<2; i++)); do
		python run.py $path$s"/grammar.sl" $path$s"/example"$i".txt"  
	done 

done

benchmark_if=(
#fg_max2
#fg_max3
#fg_sum_2_5
#fg_sum_2_15
#fg_sum_3_5
#fg_sum_3_15
#search_2
#fg_mpg_example1
#fg_guard1
#fg_guard2
#fg_guard3
#fg_guard4
#fg_mpg_ite1
)

path="benchmarks/CLIA_Track_IF/"

echo "" >> "result.txt"
echo "Category: limitedIf" >> "result.txt"

for s in "${benchmark_if[@]}"; do
	echo "processing $s in $path"
	count=0
	sumEx=0
	sumT=0.0
	for ((i=1; i<2; i++)); do
		python run.py $path$s"/grammar.sl" $path$s"/example"$i".txt"  
	done 

done


benchmark_const=(
example1
example2
example3
example4
example5
fg_search_2
fg_search_3
fg_search_4
fg_search_5
fg_search_6
fg_search_7
fg_search_8
fg_search_9
fg_search_10
fg_search_11
fg_search_12
fg_search_13
fg_search_14
fg_search_15
guard1
guard2
guard3
guard4
ite1
ite2
plane2
plane3
sum_2_5
sum_2_15
sum_3_5
sum_3_15
sum_4_5
sum_4_15
sum_5_5
sum_5_15
sum_6_5
sum_6_15
sum_7_5
sum_7_15
sum_8_5
sum_8_15
sum_9_5
sum_9_15
sum_10_5
sum_10_15
)

path="benchmarks/CLIA_Track_Const/"

echo "" >> "result.txt"
echo "Category: limitedConst" >> "result.txt"

for s in "${benchmark_const[@]}"; do
	echo "processing $s in $path"
	count=0
	sumEx=0
	sumT=0.0
	for ((i=1; i<2; i++)); do
		python run.py $path$s"/grammar.sl" $path$s"/example"$i".txt"  
	done 
done
