/*
 * FUN_100090b0 at 100090b0
 * undefined FUN_100090b0(void)
 * Address ranges: 100090b0-100091a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100090b0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((param_2 == 0) || (uVar4 = 0x8876086c, *(int *)(param_2 + 0x3c) != 3)) {
    if (*(char *)(param_1 + 0x220) == '\0') {
      cVar3 = FUN_1000b6c0(param_1,param_2,0);
      uVar4 = 0;
      if (cVar3 == '\0') {
        uVar4 = 0x8876086c;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c) * 4);
      if (param_2 != 0) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(param_2);
      }
      if (*(int *)(iVar1 + 0x926c) != 0) {
        uVar4 = (*pcVar2)();
        (*extraout_w11_00)(uVar4);
      }
      *(int *)(iVar1 + 0x926c) = param_2;
      *(undefined1 *)(iVar1 + 0x93a2) = 1;
      uVar4 = 0;
    }
  }
  return uVar4;
}

