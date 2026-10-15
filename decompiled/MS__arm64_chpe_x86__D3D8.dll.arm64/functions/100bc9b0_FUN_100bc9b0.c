/*
 * FUN_100bc9b0 at 100bc9b0
 * undefined FUN_100bc9b0(void)
 * Address ranges: 100bc9b0-100bcadf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bc9b0(int param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [16];
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar2 == 0) {
      FUN_10006560(0);
    }
  }
  uVar3 = 0x8876086c;
  if (param_2 < 6 && param_3 != (undefined4 *)0x0) {
    FUN_10121020(auStack_40);
    iVar2 = param_1 + param_2 * 0x10;
    uVar3 = 0;
    *param_3 = *(undefined4 *)(iVar2 + -0x56b4);
    param_3[1] = *(undefined4 *)(param_1 + (param_2 - 0x56b) * 0x10);
    param_3[2] = *(undefined4 *)(iVar2 + -0x56ac);
    param_3[3] = *(undefined4 *)(iVar2 + -0x56a8);
    FUN_10120f70(auStack_40);
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar3;
}

