/*
 * FUN_18005ecc0 at 18005ecc0
 * undefined __fastcall FUN_18005ecc0(longlong * param_1, uint param_2)
 * Address ranges: 18005ecc0-18005eda4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ecc0(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  uVar1 = *(uint *)((longlong)param_1 + 0x7654);
  *(uint *)((longlong)param_1 + 0x7654) = param_2;
  uVar2 = param_2 & 4;
  bVar3 = uVar2 != (uVar1 & 4);
  *(byte *)(param_1 + 0x1ed1) = *(byte *)(param_1 + 0x1ed1) | bVar3;
  *(uint *)(param_1 + 0xdd3) = (uint)(uVar2 != 0);
  param_1[0x1fc] = param_1[0x1fc] & 0xfeffffffffffffff;
  param_1[0x1fc] = param_1[0x1fc] | -(ulonglong)(uVar2 != 0) & 0x100000000000000;
  uVar1 = 2;
  if ((int)param_1[0xf6] != 0) {
    uVar1 = 0;
  }
  uVar1 = uVar1 | (param_2 >> 1 & 1) == 0;
  uVar2 = *(uint *)((longlong)param_1 + 0x6e9c);
  *(uint *)((longlong)param_1 + 0x6e9c) = uVar1;
  *(byte *)((longlong)param_1 + 0xf691) =
       *(byte *)((longlong)param_1 + 0xf691) | (uVar2 != uVar1 || bVar3);
  uVar1 = *(uint *)(param_1 + 0x1c4);
  uVar2 = (uint)((param_2 >> 1 & 1) != 0);
  *(uint *)(param_1 + 0x1c4) = uVar2;
  *(byte *)((longlong)param_1 + 0xf68d) = *(byte *)((longlong)param_1 + 0xf68d) | uVar1 != uVar2;
  FUN_18005a5c0((longlong)param_1);
  *(undefined1 *)((longlong)param_1 + 0xf68e) = 1;
  return;
}

