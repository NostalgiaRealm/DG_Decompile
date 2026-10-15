/*
 * FUN_10002110 at 10002110
 * undefined FUN_10002110(void)
 * Address ranges: 10002110-100021cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002110(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar4;
  
  uVar2 = FUN_10001cd0(param_1,param_3,param_4);
  uVar2 = uVar2 & 0xffffffff;
  if (param_3 + -0xc < (undefined *)0xa) {
    ppuVar3 = &PTR_FUN_1009d160 + (int)param_3;
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    param_3 = *ppuVar3;
    pcVar4 = extraout_w11;
  }
  else {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar4 = extraout_w11_00;
  }
  (*pcVar4)(uVar1,param_2,param_3,uVar2 & 0xffffffff);
  return;
}

