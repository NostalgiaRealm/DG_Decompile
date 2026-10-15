/*
 * FUN_1009d298 at 1009d298
 * undefined FUN_1009d298(void)
 * Address ranges: 1009d298-1009d307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009d298(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  int iVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  
  piVar1 = (int *)((int)param_3 + 400);
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    auVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(auVar3._0_8_ & 0xffffffff,auVar3._8_8_ & 0xffffffff,param_3 & 0xffffffff
                            ,3,0xf);
    *piVar1 = iVar2;
  }
  return iVar2;
}

