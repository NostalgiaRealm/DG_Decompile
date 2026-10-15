/*
 * FUN_180002178 at 180002178
 * undefined FUN_180002178(void)
 * Address ranges: 180002178-1800021c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180002178(longlong param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (*(int *)(&DAT_180248d30 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0) == 1) {
    bVar1 = 1 < param_2 - 1U;
    bVar2 = param_2 - 1U == 2;
  }
  else {
    if (*(int *)(&DAT_180248d30 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0) != 3) {
      return false;
    }
    bVar1 = param_2 != 2;
    bVar2 = param_2 == 3;
  }
  return !bVar1 || bVar2;
}

