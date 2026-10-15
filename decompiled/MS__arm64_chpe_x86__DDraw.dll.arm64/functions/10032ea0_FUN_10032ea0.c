/*
 * FUN_10032ea0 at 10032ea0
 * undefined FUN_10032ea0(void)
 * Address ranges: 10032ea0-10032f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032ea0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  code *extraout_w11;
  longlong local_40 [2];
  
  iVar4 = FUN_10031ee0(param_1,param_2);
  if (iVar4 != 0) {
    FUN_10032308(param_1,iVar4);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar3 = (*extraout_w11)(param_1,param_3,param_4,param_5);
    if ((cVar3 == '\0') && (iVar5 = (*(code *)PTR_FUN_100ba118)(local_40), iVar5 != 0)) {
      if (local_40[0] == 0) {
                    /* WARNING: Does not return */
        uVar2 = SoftwareBreakpoint(0xf004,0x10032f60);
        (*(code *)uVar2)();
      }
      uVar1 = 0;
      if (local_40[0] != 0) {
        uVar1 = (*(longlong *)(param_1 + *(int *)(iVar4 + 0x14) * 0xc18 + 0xca8) * 1000) /
                local_40[0];
      }
      (*(code *)PTR_FUN_100ba144)(uVar1 & 0xffffffff);
    }
  }
  return;
}

