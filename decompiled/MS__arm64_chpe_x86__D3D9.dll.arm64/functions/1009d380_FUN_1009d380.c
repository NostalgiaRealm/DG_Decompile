/*
 * FUN_1009d380 at 1009d380
 * undefined FUN_1009d380(void)
 * Address ranges: 1009d380-1009d3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009d380(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  
  piVar1 = (int *)((int)param_3 + 0x198);
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)((int)param_3 + 0x1ae);
    auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,param_3 & 0xffffffff
                            ,6,*puVar3);
    *piVar1 = iVar2;
  }
  return iVar2;
}

