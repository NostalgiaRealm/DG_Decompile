/*
 * FUN_10048aac at 10048aac
 * undefined __stdcall FUN_10048aac(int param_1, undefined4 * param_2)
 * Address ranges: 10048aac-10048b7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048aac(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d2a0)[iVar1]) {
      iVar1 = 0;
      goto LAB_10048ae8;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f55c;
  goto LAB_10048b6b;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_10048ae8:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d0f0)[iVar1]) {
      iVar1 = 0;
      goto LAB_10048b0b;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f538;
  goto LAB_10048b6b;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_10048b0b:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d100)[iVar1]) {
      iVar1 = 0;
      goto LAB_10048b2e;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f514;
  goto LAB_10048b6b;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_10048b2e:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d110)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d120)[iVar1]) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = &PTR_FUN_1005f4c4;
      goto LAB_10048b6b;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f4e4;
LAB_10048b6b:
  FUN_1005c76c(param_2);
  return;
}

