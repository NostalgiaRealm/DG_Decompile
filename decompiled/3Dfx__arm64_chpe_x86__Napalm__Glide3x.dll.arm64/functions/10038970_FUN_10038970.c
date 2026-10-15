/*
 * FUN_10038970 at 10038970
 * undefined FUN_10038970(void)
 * Address ranges: 10038970-10038a03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038970(int param_1)

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

