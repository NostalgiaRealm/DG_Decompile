/*
 * FUN_100e5090 at 100e5090
 * undefined FUN_100e5090(void)
 * Address ranges: 100e5090-100e51af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100e5090(int param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
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
  if (param_2 < 0x10) {
    if (0x10 < param_2 + param_4) {
      param_4 = 0x10 - param_2;
    }
  }
  else {
    param_4 = 0;
  }
  puVar3 = (undefined8 *)(param_1 + (param_2 + 0x3d) * 4);
  uVar4 = 0;
  if (param_4 >> 1 != 0) {
    do {
      uVar5 = *puVar3;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
      *param_3 = uVar5;
      param_3 = param_3 + 1;
    } while (uVar4 < param_4 >> 1);
  }
  if ((param_4 & 1) != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)puVar3;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return 0;
}

