/*
 * FUN_10010e78 at 10010e78
 * undefined FUN_10010e78(void)
 * Address ranges: 10010e78-10010ed3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010e78(int param_1,uint param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0xe2);
  if ((param_2 & 1) == 0) {
    if (*pcVar1 == '\0') {
      (*(code *)PTR_FUN_100a8204)(1);
      *pcVar1 = '\x01';
    }
  }
  else if (*pcVar1 != '\0') {
    (*(code *)PTR_FUN_100a8204)(0);
    *pcVar1 = '\0';
  }
  return;
}

