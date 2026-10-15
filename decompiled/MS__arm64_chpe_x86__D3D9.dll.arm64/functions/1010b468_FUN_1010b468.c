/*
 * FUN_1010b468 at 1010b468
 * undefined FUN_1010b468(void)
 * Address ranges: 1010b468-1010b55b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1010b468(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  piVar1 = (int *)(param_1 + param_2 * 0x28 + 0x24);
  iVar2 = *piVar1 + -1;
  *piVar1 = iVar2;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar2 == 0) {
    param_1 = param_1 + param_2 * 0x1510;
    if (*(int *)(param_1 + 0x518) != 0) {
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar4);
      *(int *)(param_1 + 0x518) = 0;
    }
    if (*(int *)(param_1 + 0x514) != 0) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_00)(uVar4);
      *(int *)(param_1 + 0x514) = 0;
    }
    if (*(int *)(param_1 + 0x510) != 0) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_01)(uVar4);
      *(int *)(param_1 + 0x510) = 0;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

