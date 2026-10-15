/*
 * FUN_1002da20 at 1002da20
 * undefined FUN_1002da20(void)
 * Address ranges: 1002da20-1002db5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002da20(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  code *extraout_w11;
  
  FUN_1002bd50(*(undefined4 *)(param_1 + 0x315c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2bf4) = param_2;
  bVar1 = 1 < param_2 - 3U;
  uVar2 = (uint)(param_2 - 1U < 2 || !bVar1);
  *(uint *)(param_1 + 0x2a40) = uVar2;
  puVar4 = (uint *)(param_1 + 0x2b2c);
  if (bVar1) {
    *puVar4 = *puVar4 & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x2a4c) = 0;
    puVar4 = (uint *)(param_1 + 0x2a48);
    uVar3 = *(uint *)(&DAT_10096e50 + *(int *)(param_1 + 0x2b54) * 4);
  }
  else {
    uVar3 = *puVar4 | 2;
  }
  *puVar4 = uVar3;
  *(undefined1 *)(param_1 + 0x2bc0) = 1;
  *(undefined1 *)(param_1 + 0x2bc4) = 1;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x2978) == 0 || uVar2 != 0) {
    uVar3 = 0xff0000;
  }
  *(uint *)(param_1 + 0x2bec) = *(ushort *)(param_1 + 0x2bec) | uVar3;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  *(int *)(param_1 + 0x2980) = param_2;
  return;
}

