/*
 * FUN_1003dea0 at 1003dea0
 * undefined FUN_1003dea0(void)
 * Address ranges: 1003dea0-1003dfbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003dea0(int param_1)

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
    if (((uVar4 & 0xff) == 0) && (uVar4 = FUN_1003e140(param_1), (uVar4 & 1) != 0)) {
      iVar3 = (*(code *)PTR_FUN_1016c1bc)();
      uVar4 = FUN_1003e1e0(param_1);
      if (iVar3 != (int)uVar4) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x18) == -1) {
          iVar1 = iVar3;
        }
        (*pcVar2)(uVar4,iVar1);
        (*extraout_w11_01)(param_1);
        uVar4 = FUN_1003e250(param_1,uVar4 & 0xffffffff);
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

