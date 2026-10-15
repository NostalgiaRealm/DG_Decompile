/*
 * FUN_10027558 at 10027558
 * undefined FUN_10027558(void)
 * Address ranges: 10027558-100275b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027558(int param_1,uint param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0xde);
  if ((param_2 & 1) == 0) {
    if (*pcVar1 == '\0') {
      (*(code *)PTR_FUN_1009d200)(1);
      *pcVar1 = '\x01';
    }
  }
  else if (*pcVar1 != '\0') {
    (*(code *)PTR_FUN_1009d200)(0);
    *pcVar1 = '\0';
  }
  return;
}

