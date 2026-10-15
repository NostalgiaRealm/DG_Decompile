/*
 * FUN_100dcf70 at 100dcf70
 * undefined FUN_100dcf70(void)
 * Address ranges: 100dcf70-100dd0cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100dcf70(int param_1,int param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  uVar3 = 0x8876086c;
  if (param_2 + 7U < 0xf) {
    if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar4 == 0) {
        FUN_100071d0(0);
      }
    }
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar4 = (*extraout_w11)(uVar3);
    if (iVar4 == 2) {
      uVar3 = 0x88760870;
    }
    else {
      uVar3 = (*pcVar2)();
      (*extraout_w11_00)(uVar3,param_2);
      uVar3 = 0;
    }
    if (bVar1) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar3;
}

