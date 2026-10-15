/*
 * FUN_100266f8 at 100266f8
 * undefined FUN_100266f8(void)
 * Address ranges: 100266f8-100267e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100266f8(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar6;
  int local_30 [4];
  
  uVar6 = 0;
  do {
    piVar1 = (int *)(*(int *)(param_1 + 0x318) + uVar6 * 4);
    local_30[0] = param_2;
    if (*piVar1 == -1) {
      *piVar1 = param_2;
      uVar4 = FUN_10012e10(param_1 + 0x2ec,local_30);
      pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar5 = uVar4 & 0xffffffff;
      if ((int)uVar4 != 0) {
        uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar3,uVar6,uVar5 & 0xffffffff);
      }
      uVar3 = (*pcVar2)();
      (*extraout_w11_00)(uVar3,uVar6,1);
      return;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  if (uVar6 == 8) {
    FUN_10007100(param_1 + 0x318,local_30);
  }
  return;
}

