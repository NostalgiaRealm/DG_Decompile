/*
 * FUN_1000eef0 at 1000eef0
 * undefined FUN_1000eef0(void)
 * Address ranges: 1000eef0-1000ef4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000eef0(int param_1,uint param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0xde);
  if ((param_2 & 1) == 0) {
    if (*pcVar1 == '\0') {
      (*(code *)PTR_FUN_100a0204)(1);
      *pcVar1 = '\x01';
    }
  }
  else if (*pcVar1 != '\0') {
    (*(code *)PTR_FUN_100a0204)(0);
    *pcVar1 = '\0';
  }
  return;
}

