/*
 * FUN_100498d8 at 100498d8
 * undefined FUN_100498d8(void)
 * Address ranges: 100498d8-1004996b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100498d8(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2);
    *(undefined4 *)(param_1 + 0xf8) = 0;
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2);
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}

