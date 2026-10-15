/*
 * FUN_10008390 at 10008390
 * undefined FUN_10008390(void)
 * Address ranges: 10008390-100083e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10008390(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  
  puVar3 = (undefined4 *)(param_1 + 0x70);
  puVar4 = (undefined4 *)(param_1 + 0x6c);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar2,*puVar4,*puVar3);
  return uVar1;
}

