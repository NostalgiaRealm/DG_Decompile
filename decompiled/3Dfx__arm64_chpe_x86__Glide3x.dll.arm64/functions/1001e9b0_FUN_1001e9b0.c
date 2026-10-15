/*
 * FUN_1001e9b0 at 1001e9b0
 * undefined FUN_1001e9b0(void)
 * Address ranges: 1001e9b0-1001eaef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e9b0(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  code *extraout_w11;
  
  FUN_1001bfa8(*(undefined4 *)(param_1 + 0x32dc));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2c94) = param_2;
  bVar1 = 1 < param_2 - 3U;
  uVar2 = (uint)(param_2 - 1U < 2 || !bVar1);
  *(uint *)(param_1 + 0x2ae0) = uVar2;
  puVar4 = (uint *)(param_1 + 0x2bcc);
  if (bVar1) {
    *puVar4 = *puVar4 & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x2aec) = 0;
    puVar4 = (uint *)(param_1 + 0x2ae8);
    uVar3 = *(uint *)(&DAT_10099ae8 + *(int *)(param_1 + 0x2bf4) * 4);
  }
  else {
    uVar3 = *puVar4 | 2;
  }
  *puVar4 = uVar3;
  *(undefined1 *)(param_1 + 0x2c60) = 1;
  *(undefined1 *)(param_1 + 0x2c64) = 1;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x29f4) == 0 || uVar2 != 0) {
    uVar3 = 0xff0000;
  }
  *(uint *)(param_1 + 0x2c8c) = *(ushort *)(param_1 + 0x2c8c) | uVar3;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  *(int *)(param_1 + 0x29fc) = param_2;
  return;
}

