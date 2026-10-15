/*
 * FUN_10048850 at 10048850
 * undefined FUN_10048850(void)
 * Address ranges: 10048850-10048903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048850(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong extraout_x1;
  ulonglong uVar3;
  code *extraout_w11;
  
  puVar1 = (uint *)(param_1 + 0xc);
  puVar2 = (uint *)(param_1 + 0x10);
  uVar3 = (ulonglong)(*puVar2 < param_3);
  if (*puVar1 < param_2 || *puVar2 < param_3) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_1,*puVar1 < param_2,uVar3);
    (*extraout_w11)(param_1,extraout_x1 & 0xffffffff,uVar3 & 0xffffffff);
  }
  *puVar1 = *puVar1 - param_2;
  *puVar2 = *puVar2 - param_3;
  *(int *)(param_1 + 0x2c) = param_2 + *(int *)(param_1 + 0x2c);
  return;
}

