/*
 * FUN_10036c30 at 10036c30
 * undefined FUN_10036c30(void)
 * Address ranges: 10036c30-10036ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10036c30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  
  puVar3 = (undefined4 *)(param_1 + 0x6c);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(uVar1,*puVar3,*(undefined4 *)(param_1 + 0x70),0,1);
  return iVar2 == 0;
}

