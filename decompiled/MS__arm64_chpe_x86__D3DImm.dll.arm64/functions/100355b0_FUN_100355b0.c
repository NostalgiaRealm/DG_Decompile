/*
 * FUN_100355b0 at 100355b0
 * undefined FUN_100355b0(void)
 * Address ranges: 100355b0-100356cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100355b0(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *extraout_w11;
  uint uVar4;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  uVar1 = *(uint *)(param_1 + 0x18f8);
  uVar4 = (uint)param_2;
  *(uint *)(param_1 + 0x18f8) = uVar4;
  uVar1 = (uVar1 ^ uVar4) & 4;
  *(byte *)(param_1 + 0x1d38) = *(byte *)(param_1 + 0x1d38) | (byte)(uVar1 >> 2);
  *(uint *)(param_1 + 0xf18) = uVar4 >> 2 & 1;
  *(ulonglong *)(param_1 + 0x4a8) =
       *(ulonglong *)(param_1 + 0x4a8) & 0xff7fffffffffffff |
       ((param_2 & 0xffffffff) >> 2 & 1) << 0x37;
  uVar4 = ~(uVar4 >> 1) & 1;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x260) == 0) {
    uVar3 = 2;
  }
  uVar3 = uVar3 | uVar4;
  uVar2 = *(uint *)(param_1 + 0xf1c);
  *(uint *)(param_1 + 0xf1c) = uVar3;
  uVar4 = uVar4 ^ 1;
  *(byte *)(param_1 + 0x1d41) = uVar2 != uVar3 | (byte)(uVar1 >> 2) | *(byte *)(param_1 + 0x1d41);
  uVar1 = *(uint *)(param_1 + 0x374);
  *(uint *)(param_1 + 0x374) = uVar4;
  *(byte *)(param_1 + 0x1d3d) = uVar1 != uVar4 | *(byte *)(param_1 + 0x1d3d);
  FUN_10032568(param_1);
  *(undefined1 *)(param_1 + 0x1d3e) = 1;
  return;
}

