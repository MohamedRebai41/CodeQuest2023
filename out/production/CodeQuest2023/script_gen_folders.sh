for i in {01..12}
do
  mkdir -p "Problem_$i/tests" ;
  echo "created folder $i";
  cp example.cpp "Problem_$i/AC_solution.cpp";
  cp statement.md "Problem_$i/statement.md";
  cp example.cpp "Problem_$i/TLE_solution.cpp";
  cp example.cpp "Problem_$i/tests/script_gen_tests.cpp";
  cp script_gen_output.sh "Problem_$i/tests/script_gen_output.sh";
  echo "added files to folder $i";
done