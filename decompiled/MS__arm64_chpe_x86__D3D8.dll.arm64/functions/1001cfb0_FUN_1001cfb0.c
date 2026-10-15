/*
 * FUN_1001cfb0 at 1001cfb0
 * undefined FUN_1001cfb0(void)
 * Address ranges: 1001cfb0-1001d01f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1001cfb0(int param_1)

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
  puVar6 = (undefined4 *)(param_1 + 0x88);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar2,*puVar6,*puVar5,*puVar4,*puVar3);
  return uVar1;
}

