./test.out | awk -F' ' '{print $2}' > test_1.out
cat ressources/19920104_091532.log | awk -F' ' '{print $2}' > test_2.out
diff test_1.out test_2.out || true
