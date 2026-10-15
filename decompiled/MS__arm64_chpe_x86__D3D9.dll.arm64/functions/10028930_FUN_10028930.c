/*
 * FUN_10028930 at 10028930
 * undefined FUN_10028930(void)
 * Address ranges: 10028930-100289bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10028930(int param_1,uint param_2,ulonglong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  code *extraout_w11;
  
  uVar2 = param_3 & 0xffffffff;
  *(undefined4 *)param_3 = 0;
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0x77c + uVar3 * 0x84) == 1) break;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  if (uVar3 <= param_2) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    param_4 = (*extraout_w11)(uVar1,uVar2 & 0xffffffff);
  }
  return param_4;
}

