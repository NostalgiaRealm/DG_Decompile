/*
 * FUN_10026dd0 at 10026dd0
 * undefined FUN_10026dd0(void)
 * Address ranges: 10026dd0-10026e37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026dd0(int param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  code *extraout_w11;
  undefined1 auStack_20 [16];
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  puVar2 = (undefined2 *)(*extraout_w11)(uVar1,auStack_20);
  *(undefined2 *)(param_1 + 0x10) = *puVar2;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(puVar2 + 1);
  return;
}

