/*
 * FUN_10022610 at 10022610
 * undefined FUN_10022610(void)
 * Address ranges: 10022610-1002267f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10022610(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *extraout_w11;
  
  puVar3 = (undefined4 *)(param_1 + 0x14);
  puVar4 = (undefined4 *)(param_1 + 0x10);
  puVar5 = (undefined4 *)(param_1 + 0x20);
  puVar6 = (undefined4 *)(param_1 + 0x84);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar2,*puVar6,*puVar5,*puVar4,*puVar3);
  return uVar1;
}

