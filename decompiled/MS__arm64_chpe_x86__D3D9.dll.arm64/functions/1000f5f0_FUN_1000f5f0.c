/*
 * FUN_1000f5f0 at 1000f5f0
 * undefined FUN_1000f5f0(void)
 * Address ranges: 1000f5f0-1000f70b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000f5f0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
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
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    if (param_2 != *(int *)(param_1 + 0x6674)) {
      *(int *)(param_1 + 0x6674) = param_2;
      *(undefined4 *)(param_1 + 0x667c) = 0xffff;
      *(undefined4 *)(param_1 + 0x6688) = 0x1f;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4);
    *(int *)(iVar2 + 0xaba4) = param_2;
    *(undefined1 *)(iVar2 + 0xac1f) = 1;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return 0;
}

