/*
 * FUN_10003770 at 10003770
 * undefined FUN_10003770(void)
 * Address ranges: 10003770-100037c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10003770(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (*(int *)(&DAT_1016d310 + *(int *)(param_1 + 8) * 400) == 1) {
    bVar1 = 1 < param_2 - 1U;
    bVar2 = param_2 - 1U == 2;
  }
  else {
    if (*(int *)(&DAT_1016d310 + *(int *)(param_1 + 8) * 400) != 3) {
      return false;
    }
    bVar1 = param_2 != 2;
    bVar2 = param_2 == 3;
  }
  return !bVar1 || bVar2;
}

