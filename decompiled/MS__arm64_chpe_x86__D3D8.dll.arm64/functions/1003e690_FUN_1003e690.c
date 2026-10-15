/*
 * FUN_1003e690 at 1003e690
 * undefined FUN_1003e690(void)
 * Address ranges: 1003e690-1003e74b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003e690(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *param_2 + -0x88;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = param_3 + -0x88;
  }
  if (iVar1 != 0) {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(uVar5);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  if (iVar2 != 0) {
    (*pcVar3)();
    cVar4 = (*extraout_w11_00)(iVar2);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  return 1;
}

