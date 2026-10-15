/*
 * FUN_100e3ff0 at 100e3ff0
 * undefined FUN_100e3ff0(void)
 * Address ranges: 100e3ff0-100e4127
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e3ff0(int param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  
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
  uVar3 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    FUN_10157b40(auStack_40);
    uVar4 = *(undefined8 *)(param_1 + -0x640c);
    param_2[1] = *(undefined8 *)(param_1 + -0x6404);
    *param_2 = uVar4;
    uVar4 = *(undefined8 *)(param_1 + -0x63fc);
    uVar3 = 0;
    param_2[3] = *(undefined8 *)(param_1 + -0x63f4);
    param_2[2] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + -0x63ec);
    param_2[5] = *(undefined8 *)(param_1 + -0x63e4);
    param_2[4] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + -0x63dc);
    param_2[7] = *(undefined8 *)(param_1 + -0x63d4);
    param_2[6] = uVar4;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + -0x63cc);
    FUN_10157a90(auStack_40);
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar3;
}

