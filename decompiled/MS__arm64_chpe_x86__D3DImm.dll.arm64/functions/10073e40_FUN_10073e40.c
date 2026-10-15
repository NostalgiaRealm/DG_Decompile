/*
 * FUN_10073e40 at 10073e40
 * undefined FUN_10073e40(void)
 * Address ranges: 10073e40-10073faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10073e40(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 auVar4 [16];
  int local_40;
  int local_3c;
  undefined4 local_38;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_38 = 0;
  local_40 = 0;
  local_3c = 0;
  auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_4,param_3);
  (*extraout_w11)(auVar4._0_8_,auVar4._8_8_,&local_3c,&local_40);
  if (param_5 == (int *)0x0) {
    if (local_40 != 0) {
      uVar3 = (*pcVar1)();
      (*extraout_w11_00)(uVar3);
    }
  }
  else {
    *param_5 = local_40;
  }
  iVar2 = local_3c;
  if (local_3c != 0) {
    (*pcVar1)();
    (*extraout_w11_01)(iVar2);
    (*pcVar1)();
    auVar4 = (*extraout_w11_02)(iVar2);
    uVar3 = (*pcVar1)(*(undefined4 *)(param_1 + param_2 * 0x18 + 0x14),auVar4._8_8_,
                      auVar4._0_8_ & 0xffffffff);
    (*extraout_w11_03)(uVar3,0);
    (*pcVar1)();
    (*extraout_w11_04)(iVar2);
  }
  return local_38;
}

