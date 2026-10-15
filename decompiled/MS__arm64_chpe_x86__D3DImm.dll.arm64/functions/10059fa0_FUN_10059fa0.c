/*
 * FUN_10059fa0 at 10059fa0
 * undefined FUN_10059fa0(void)
 * Address ranges: 10059fa0-10059fd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10059fa0(int param_1,int param_2,char param_3)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x9d8) == '\0') {
    bVar1 = *(int *)(param_2 + 4) != 0 && param_3 != '\0';
  }
  else {
    bVar1 = *(int *)(param_2 + 4) == 2;
  }
  return bVar1;
}

