/*
 * FUN_1006b568 at 1006b568
 * undefined FUN_1006b568(void)
 * Address ranges: 1006b568-1006b643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b568(int param_1,int param_2,int param_3,undefined8 param_4,int *param_5,int *param_6,
                 int *param_7)

{
  int iVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  iVar1 = param_1 + param_2 * 0x1510 + 0x510 + param_3 * 4;
  if (((*(int *)(iVar1 + 500) != *param_5) || (*(int *)(iVar1 + 0x234) != *param_6)) ||
     (*(int *)(iVar1 + 0x274) != *param_7)) {
    *(int *)(iVar1 + 500) = *param_5;
    *(int *)(iVar1 + 0x234) = *param_6;
    *(int *)(iVar1 + 0x274) = *param_7;
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,1);
  }
  return;
}

