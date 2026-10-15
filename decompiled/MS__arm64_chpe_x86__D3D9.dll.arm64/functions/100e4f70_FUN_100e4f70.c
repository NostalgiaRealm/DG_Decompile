/*
 * FUN_100e4f70 at 100e4f70
 * undefined FUN_100e4f70(void)
 * Address ranges: 100e4f70-100e5083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100e4f70(int param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar3 == 0) {
      FUN_100071d0(0);
    }
  }
  if (param_2 < 0x10) {
    if (0x10 < param_2 + param_4) {
      param_4 = 0x10 - param_2;
    }
  }
  else {
    param_4 = 0;
  }
  puVar1 = (undefined8 *)(param_1 + param_2 * 0x10 + 0x134);
  uVar4 = 0;
  if ((param_4 & 0x3fffffff) != 0) {
    do {
      uVar5 = *puVar1;
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
      *param_3 = uVar5;
      param_3 = param_3 + 1;
    } while (uVar4 < (param_4 & 0x3fffffff) << 1);
  }
  if (bVar2) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return 0;
}

