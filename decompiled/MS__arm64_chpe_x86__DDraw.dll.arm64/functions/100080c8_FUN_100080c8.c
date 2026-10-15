/*
 * FUN_100080c8 at 100080c8
 * undefined FUN_100080c8(void)
 * Address ranges: 100080c8-1000816f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100080c8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(uVar2);
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    uVar2 = (*pcVar1)();
    iVar3 = (*extraout_w11_00)(uVar2);
    if (iVar3 == *(int *)(param_1 + 0x1c)) {
      return 0;
    }
  }
  return 1;
}

