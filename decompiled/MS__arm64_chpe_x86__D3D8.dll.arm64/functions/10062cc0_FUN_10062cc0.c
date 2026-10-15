/*
 * FUN_10062cc0 at 10062cc0
 * undefined FUN_10062cc0(void)
 * Address ranges: 10062cc0-10062d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10062cc0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2,0);
  uVar1 = param_2 & 0xff ^ 1;
  *(uint *)(param_1 + 0x486c) = uVar1;
  *(uint *)(param_1 + 0x4d14) = uVar1;
  *(undefined1 *)(param_1 + 0xd9a8) = 1;
  *(undefined1 *)(param_1 + 0xd981) = 1;
  return;
}

