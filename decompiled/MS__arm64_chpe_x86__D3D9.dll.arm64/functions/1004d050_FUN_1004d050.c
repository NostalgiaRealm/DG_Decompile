/*
 * FUN_1004d050 at 1004d050
 * undefined FUN_1004d050(void)
 * Address ranges: 1004d050-1004d183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d050(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar4;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  do {
    if (*(int *)(param_1 + 0xf830 + uVar4 * 4) != 0) {
      iVar3 = param_1 + uVar4 * 4 + 0xc000;
      uVar2 = (*pcVar1)();
      (*extraout_w11)(uVar2,*(undefined4 *)(iVar3 + 0x3844),*(undefined4 *)(iVar3 + 0x3854),0);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  if (*(int *)(param_1 + 0xf840) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*(undefined4 *)(param_1 + 0xf864),*(undefined4 *)(param_1 + 0xf868),0);
  }
  FUN_1007ab40(param_1,param_2,param_3,1,0,param_4,0,param_5,1);
  return;
}

