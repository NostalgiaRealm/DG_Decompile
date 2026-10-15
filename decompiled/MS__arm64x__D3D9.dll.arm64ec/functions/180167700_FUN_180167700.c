/*
 * FUN_180167700 at 180167700
 * undefined FUN_180167700(void)
 * Address ranges: 180167700-180167807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180167700(longlong param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  code *extraout_x11;
  
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar4,0);
  uVar1 = *(uint *)(param_1 + 0x7654);
  *(uint *)(param_1 + 0x7654) = param_2;
  bVar2 = (param_2 & 4) != (uVar1 & 4);
  bVar3 = (param_2 & 4) != 0;
  *(byte *)(param_1 + 0xf688) = *(byte *)(param_1 + 0xf688) | bVar2;
  *(ulonglong *)(param_1 + 0xfe0) =
       *(ulonglong *)(param_1 + 0xfe0) & 0xfeffffffffffffff | (ulonglong)bVar3 << 0x38;
  uVar1 = (uint)((param_2 & 2) == 0) | (uint)(*(int *)(param_1 + 0x7b0) == 0) << 1;
  *(byte *)(param_1 + 0xf691) =
       *(uint *)(param_1 + 0x6e9c) != uVar1 | *(byte *)(param_1 + 0xf691) | bVar2;
  *(uint *)(param_1 + 0x6e98) = (uint)bVar3;
  *(uint *)(param_1 + 0x6e9c) = uVar1;
  uVar1 = *(uint *)(param_1 + 0xe20);
  uVar5 = (uint)((param_2 & 2) != 0);
  *(uint *)(param_1 + 0xe20) = uVar5;
  *(byte *)(param_1 + 0xf68d) = uVar1 != uVar5 | *(byte *)(param_1 + 0xf68d);
  FUN_180164290(param_1);
  *(undefined1 *)(param_1 + 0xf68e) = 1;
  return;
}

