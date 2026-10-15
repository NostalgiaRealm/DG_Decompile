/*
 * FUN_1009aa80 at 1009aa80
 * undefined FUN_1009aa80(void)
 * Address ranges: 1009aa80-1009ab13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1009aa80(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  code *extraout_w11;
  
  uVar3 = 1;
  if (*(char *)(*(int *)(param_1 + 0x14) + param_2 * 0x20 + 0xc) == '\0') {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(uVar1,param_2,0,0);
    uVar3 = ~uVar2 >> 0x1f;
    *(byte *)(*(int *)(param_1 + 0x14) + param_2 * 0x20 + 0xc) = (byte)(~uVar2 >> 0x1f);
  }
  return uVar3;
}

