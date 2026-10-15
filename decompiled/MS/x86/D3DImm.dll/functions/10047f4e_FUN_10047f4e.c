/*
 * FUN_10047f4e at 10047f4e
 * undefined __stdcall FUN_10047f4e(int param_1, undefined4 * param_2)
 * Address ranges: 10047f4e-10047fa9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047f4e(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d2a0)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d220)[iVar1]) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = &PTR_FUN_1005f7e8;
      goto LAB_10047f9b;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f810;
LAB_10047f9b:
  FUN_1005c76c(param_2);
  return;
}

