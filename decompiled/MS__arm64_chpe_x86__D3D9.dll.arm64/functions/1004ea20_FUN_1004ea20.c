/*
 * FUN_1004ea20 at 1004ea20
 * undefined FUN_1004ea20(void)
 * Address ranges: 1004ea20-1004eb0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004ea20(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *pcVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  FUN_10047f98(param_1,0,0,0);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_3 == 0xc) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,uVar1);
    uVar2 = (*pcVar3)();
    pcVar3 = extraout_w11_00;
  }
  else {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar3 = extraout_w11_01;
  }
  (*pcVar3)(uVar2,uVar1);
  return 0;
}

