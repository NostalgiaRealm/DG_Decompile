/*
 * FUN_10062ba0 at 10062ba0
 * undefined FUN_10062ba0(void)
 * Address ranges: 10062ba0-10062cb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10062ba0(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *extraout_w11;
  uint uVar4;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  uVar2 = *(uint *)(param_1 + 0x5948);
  uVar4 = (uint)param_2;
  *(uint *)(param_1 + 0x5948) = uVar4;
  uVar2 = (uVar2 ^ uVar4) & 4;
  *(ulonglong *)(param_1 + 0x6a0) =
       *(ulonglong *)(param_1 + 0x6a0) & 0xffffffff7fffffff |
       ((param_2 & 0xffffffff) >> 2 & 1) << 0x1f;
  uVar1 = ~(uVar4 >> 1) & 1;
  *(byte *)(param_1 + 0xd978) = *(byte *)(param_1 + 0xd978) | (byte)(uVar2 >> 2);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x410) == 0) {
    uVar3 = 2;
  }
  uVar3 = uVar3 | uVar1;
  *(byte *)(param_1 + 0xd981) =
       *(uint *)(param_1 + 0x520c) != uVar3 | (byte)(uVar2 >> 2) | *(byte *)(param_1 + 0xd981);
  *(uint *)(param_1 + 21000) = uVar4 >> 2 & 1;
  *(uint *)(param_1 + 0x520c) = uVar3;
  uVar2 = *(uint *)(param_1 + 0x524);
  uVar1 = uVar1 ^ 1;
  *(uint *)(param_1 + 0x524) = uVar1;
  *(byte *)(param_1 + 0xd97d) = uVar2 != uVar1 | *(byte *)(param_1 + 0xd97d);
  FUN_1005f298(param_1);
  *(undefined1 *)(param_1 + 0xd97e) = 1;
  return;
}

