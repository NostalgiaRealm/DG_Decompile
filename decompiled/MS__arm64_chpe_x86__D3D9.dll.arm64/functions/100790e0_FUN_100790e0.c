/*
 * FUN_100790e0 at 100790e0
 * undefined FUN_100790e0(void)
 * Address ranges: 100790e0-100791f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100790e0(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *extraout_w11;
  uint uVar4;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  uVar2 = *(uint *)(param_1 + 0x7634);
  uVar4 = (uint)param_2;
  *(uint *)(param_1 + 0x7634) = uVar4;
  uVar2 = (uVar2 ^ uVar4) & 4;
  *(ulonglong *)(param_1 + 0xfc0) =
       *(ulonglong *)(param_1 + 0xfc0) & 0xfeffffffffffffff |
       ((param_2 & 0xffffffff) >> 2 & 1) << 0x38;
  uVar1 = ~(uVar4 >> 1) & 1;
  *(byte *)(param_1 + 0xf668) = *(byte *)(param_1 + 0xf668) | (byte)(uVar2 >> 2);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x790) == 0) {
    uVar3 = 2;
  }
  uVar3 = uVar3 | uVar1;
  *(byte *)(param_1 + 0xf671) =
       *(uint *)(param_1 + 0x6e7c) != uVar3 | (byte)(uVar2 >> 2) | *(byte *)(param_1 + 0xf671);
  *(uint *)(param_1 + 0x6e78) = uVar4 >> 2 & 1;
  *(uint *)(param_1 + 0x6e7c) = uVar3;
  uVar2 = *(uint *)(param_1 + 0xe00);
  uVar1 = uVar1 ^ 1;
  *(uint *)(param_1 + 0xe00) = uVar1;
  *(byte *)(param_1 + 0xf66d) = uVar2 != uVar1 | *(byte *)(param_1 + 0xf66d);
  FUN_10074c68(param_1);
  *(undefined1 *)(param_1 + 0xf66e) = 1;
  return;
}

