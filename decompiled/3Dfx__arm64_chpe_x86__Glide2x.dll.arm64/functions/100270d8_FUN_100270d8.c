/*
 * FUN_100270d8 at 100270d8
 * undefined FUN_100270d8(void)
 * Address ranges: 100270d8-10027133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100270d8(int param_1,uint param_2)

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

