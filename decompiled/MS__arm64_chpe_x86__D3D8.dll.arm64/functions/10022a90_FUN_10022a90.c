/*
 * FUN_10022a90 at 10022a90
 * undefined FUN_10022a90(void)
 * Address ranges: 10022a90-10022b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10022a90(int param_1,uint param_2,ulonglong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  code *extraout_w11;
  
  uVar2 = param_3 & 0xffffffff;
  *(undefined4 *)param_3 = 0;
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0x548 + uVar3 * 0x74) == 1) break;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  if (uVar3 <= param_2) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    param_4 = (*extraout_w11)(uVar1,uVar2 & 0xffffffff);
  }
  return param_4;
}

