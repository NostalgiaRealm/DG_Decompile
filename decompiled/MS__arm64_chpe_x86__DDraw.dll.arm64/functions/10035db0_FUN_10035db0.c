/*
 * FUN_10035db0 at 10035db0
 * undefined FUN_10035db0(void)
 * Address ranges: 10035db0-10035e9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035db0(int param_1,undefined1 param_2)

{
  code *pcVar1;
  int iVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auVar3 [16];
  
  iVar2 = FUN_10038010(param_1 + -0x10,0);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar2 != 0) {
    auVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(auVar3._0_8_ & 0xffffffff,auVar3._8_8_ & 0xffffffff,0,0,4,2,2,0,0);
    if (iVar2 != 0) {
      (*pcVar1)();
      (*extraout_w11_00)(iVar2,param_2);
      (*pcVar1)();
      (*extraout_w11_01)(iVar2);
    }
  }
  return;
}

