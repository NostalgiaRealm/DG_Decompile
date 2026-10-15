/*
 * FUN_100cdac0 at 100cdac0
 * undefined FUN_100cdac0(void)
 * Address ranges: 100cdac0-100cdbab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cdac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  code *extraout_w11;
  longlong local_40 [2];
  
  iVar4 = FUN_100ccac8(param_1,param_2);
  if (iVar4 != 0) {
    FUN_100ccf08(param_1,iVar4);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar3 = (*extraout_w11)(param_1,param_3,param_4,param_5);
    if ((cVar3 == '\0') && (iVar5 = (*(code *)PTR_FUN_1016c0e8)(local_40), iVar5 != 0)) {
      if (local_40[0] == 0) {
                    /* WARNING: Does not return */
        uVar2 = SoftwareBreakpoint(0xf004,0x100cdb84);
        (*(code *)uVar2)();
      }
      uVar1 = 0;
      if (local_40[0] != 0) {
        uVar1 = (*(longlong *)(param_1 + *(int *)(iVar4 + 0x14) * 0xc18 + 0x10ca8) * 1000) /
                local_40[0];
      }
      (*(code *)PTR_FUN_1016c114)(uVar1 & 0xffffffff);
    }
  }
  return;
}

