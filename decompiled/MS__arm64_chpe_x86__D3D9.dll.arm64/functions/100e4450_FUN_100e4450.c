/*
 * FUN_100e4450 at 100e4450
 * undefined FUN_100e4450(void)
 * Address ranges: 100e4450-100e4583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4450(int param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
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
  if (param_2 < 6 && param_3 != (undefined4 *)0x0) {
    FUN_10157b40(auStack_40);
    iVar2 = param_1 + param_2 * 0x10;
    uVar3 = 0;
    *param_3 = *(undefined4 *)(param_1 + param_2 * 0x10 + -0x62e4);
    param_3[1] = *(undefined4 *)(iVar2 + -0x62e0);
    param_3[2] = *(undefined4 *)(iVar2 + -0x62dc);
    param_3[3] = *(undefined4 *)(iVar2 + -0x62d8);
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

