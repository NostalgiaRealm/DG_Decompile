/*
 * FUN_10035540 at 10035540
 * undefined FUN_10035540(void)
 * Address ranges: 10035540-100356a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10035540(int param_1,undefined1 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 local_50;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2,*(undefined4 *)(param_1 + 0x208),0);
  if (-1 < iVar3) {
    uVar2 = (*pcVar1)();
    iVar3 = (*extraout_w11_00)(uVar2,*extraout_w8,0);
    if (-1 < iVar3) {
      FUN_100193e8(param_1,local_50,local_50,param_2,param_3);
      return 1;
    }
    uVar2 = (*pcVar1)();
    (*extraout_w11_01)(uVar2,*(undefined4 *)(param_1 + 0x208),0);
  }
  return 0;
}

