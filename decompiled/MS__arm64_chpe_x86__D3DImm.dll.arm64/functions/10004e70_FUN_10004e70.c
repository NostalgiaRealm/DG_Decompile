/*
 * FUN_10004e70 at 10004e70
 * undefined FUN_10004e70(void)
 * Address ranges: 10004e70-10004efb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004e70(int param_1,uint param_2,ulonglong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  code *extraout_w11;
  
  uVar2 = param_3 & 0xffffffff;
  *(undefined4 *)param_3 = 0;
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0x4f8 + uVar3 * 100) == 1) break;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  if (uVar3 <= param_2) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    param_4 = (*extraout_w11)(uVar1,uVar2 & 0xffffffff);
  }
  return param_4;
}

