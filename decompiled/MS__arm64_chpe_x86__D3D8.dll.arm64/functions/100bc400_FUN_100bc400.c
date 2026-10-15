/*
 * FUN_100bc400 at 100bc400
 * undefined FUN_100bc400(void)
 * Address ranges: 100bc400-100bc547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bc400(int param_1,undefined4 *param_2)

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
  if (param_2 != (undefined4 *)0x0) {
    FUN_10121020(auStack_40);
    uVar3 = 0;
    *param_2 = *(undefined4 *)(param_1 + -0x58b4);
    param_2[1] = *(undefined4 *)(param_1 + -0x58b0);
    param_2[2] = *(undefined4 *)(param_1 + -0x58ac);
    param_2[3] = *(undefined4 *)(param_1 + -0x58a8);
    param_2[4] = *(undefined4 *)(param_1 + -0x58a4);
    param_2[5] = *(undefined4 *)(param_1 + -0x58a0);
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

