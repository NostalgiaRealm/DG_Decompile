/*
 * FUN_1001ed30 at 1001ed30
 * undefined FUN_1001ed30(void)
 * Address ranges: 1001ed30-1001edfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ed30(int param_1)

{
  bool bVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xd5) = 0;
  if (*(char *)(DAT_10170ad0 + 0x7e6) != '\0') {
    if (((*(uint *)(*(int *)(param_1 + 0x2c) + 0xdd0) >> 2 & 1) == 0) &&
       (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar2 == 0) {
        FUN_100071d0(0);
      }
    }
    FUN_1000e230(*(int *)(param_1 + 0x2c));
    if (bVar1) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return;
}

