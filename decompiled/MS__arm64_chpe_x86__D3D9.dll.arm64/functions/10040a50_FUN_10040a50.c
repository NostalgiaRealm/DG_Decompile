/*
 * FUN_10040a50 at 10040a50
 * undefined FUN_10040a50(void)
 * Address ranges: 10040a50-10040abb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10040a50(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *extraout_w11;
  
  puVar4 = (undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined4 *)(param_1 + 0x20);
  puVar5 = (undefined4 *)(param_1 + 0x70);
  puVar6 = (undefined4 *)(param_1 + 0x6c);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar2,*puVar6,*puVar5,*puVar3,*puVar4);
  return uVar1;
}

