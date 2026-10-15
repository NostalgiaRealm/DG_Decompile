/*
 * FUN_1004b046 at 1004b046
 * undefined __stdcall FUN_1004b046(int param_1, undefined4 * param_2)
 * Address ranges: 1004b046-1004b0e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b046(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d2a0)[iVar1]) {
      iVar1 = 0;
      goto LAB_1004b078;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f870;
  goto LAB_1004b0db;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1004b078:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d1f0)[iVar1]) {
      iVar1 = 0;
      goto LAB_1004b09c;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f84c;
  goto LAB_1004b0db;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1004b09c:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d200)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d210)[iVar1]) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = &PTR_FUN_1005f81c;
      goto LAB_1004b0db;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f834;
LAB_1004b0db:
  FUN_1005c76c(param_2);
  return;
}

