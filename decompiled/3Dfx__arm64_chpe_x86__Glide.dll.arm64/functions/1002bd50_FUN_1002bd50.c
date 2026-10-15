/*
 * FUN_1002bd50 at 1002bd50
 * undefined FUN_1002bd50(void)
 * Address ranges: 1002bd50-1002bdfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002bd50(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  iVar2 = FUN_1002c2c0(param_1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x2964));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar2 != -1) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(param_1,uVar3);
    if (((*(byte *)(iVar2 + 0x82) & 1) != 0) && (*(char *)(iVar2 + 0x7d) != '\0')) {
      (*pcVar1)();
      (*extraout_w11_00)(param_1,0,0);
    }
  }
  return;
}

