/*
 * FUN_100dd4d0 at 100dd4d0
 * undefined FUN_100dd4d0(void)
 * Address ranges: 100dd4d0-100dd61f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100dd4d0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  
  iVar4 = 0;
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
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar3 = (*extraout_w11)(uVar3);
  switch(uVar3) {
  case 1:
  case 4:
    iVar4 = -0x7789f78c;
    break;
  case 2:
    iVar4 = -0x7789f790;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  if (-1 < iVar4) {
    iVar4 = FUN_1000f710(param_1 + -0x66b4,param_2,0);
    if (iVar4 < 0) {
      iVar4 = -0x7789f798;
    }
  }
  return iVar4;
}

