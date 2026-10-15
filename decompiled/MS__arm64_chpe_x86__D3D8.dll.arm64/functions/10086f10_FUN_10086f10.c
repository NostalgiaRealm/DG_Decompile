/*
 * FUN_10086f10 at 10086f10
 * undefined FUN_10086f10(void)
 * Address ranges: 10086f10-10086fbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10086f10(undefined8 param_1,int param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = (ulonglong)param_3;
  if ((*(int *)(param_3 + 0x1c) == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar2 = (*extraout_w11)(uVar4 & 0xffffffff);
    if (cVar2 == '\0') {
      (*pcVar1)();
      cVar2 = (*extraout_w11_00)(param_2);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

