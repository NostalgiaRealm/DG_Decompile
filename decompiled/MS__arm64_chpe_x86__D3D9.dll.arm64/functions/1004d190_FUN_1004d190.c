/*
 * FUN_1004d190 at 1004d190
 * undefined FUN_1004d190(void)
 * Address ranges: 1004d190-1004d31b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                 char param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_w8;
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
    (*extraout_w11_00)(uVar2,*(undefined4 *)(extraout_w8 + 0x3864),
                       *(undefined4 *)(extraout_w8 + 0x3868),0);
  }
  if (param_9 == '\0') {
    FUN_1007bd20(param_1,param_2,param_3,1,0,param_4,0,param_5,param_6);
  }
  else {
    FUN_1007bd20(param_1,param_2,param_3,1,0,param_4,0,param_5,param_6);
  }
  return;
}

