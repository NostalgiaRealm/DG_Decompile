/*
 * FUN_100033f0 at 100033f0
 * undefined FUN_100033f0(void)
 * Address ranges: 100033f0-10003443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100033f0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (*(int *)(&DAT_101352c0 + *(int *)(param_1 + 8) * 0x134) == 1) {
    bVar1 = 1 < param_2 - 1U;
    bVar2 = param_2 - 1U == 2;
  }
  else {
    if (*(int *)(&DAT_101352c0 + *(int *)(param_1 + 8) * 0x134) != 3) {
      return false;
    }
    bVar1 = param_2 != 2;
    bVar2 = param_2 == 3;
  }
  return !bVar1 || bVar2;
}

