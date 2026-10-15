/*
 * FUN_10006438 at 10006438
 * undefined FUN_10006438(void)
 * Address ranges: 10006438-1000654b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006438(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(param_1);
  if (iVar3 == 0) {
    (*pcVar2)();
    uVar4 = (*extraout_w11_00)(param_1);
    if (((uVar4 & 0xff) == 0) && (uVar4 = FUN_100066b8(), (uVar4 & 1) != 0)) {
      iVar3 = (*(code *)PTR_FUN_100ba1f0)();
      uVar4 = FUN_10006740();
      if (iVar3 != (int)uVar4) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x18) == -1) {
          iVar1 = iVar3;
        }
        (*pcVar2)(uVar4,iVar1);
        uVar5 = (*extraout_w11_01)(param_1);
        uVar4 = FUN_100067a0(uVar5,uVar4 & 0xffffffff);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    (*pcVar2)(uVar4,uVar5);
    (*extraout_w11_02)(param_1,extraout_x1 & 0xffffffff);
  }
  return;
}

