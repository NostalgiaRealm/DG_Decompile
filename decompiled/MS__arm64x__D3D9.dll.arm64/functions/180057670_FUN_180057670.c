/*
 * FUN_180057670 at 180057670
 * undefined FUN_180057670(void)
 * Address ranges: 180057670-180057763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057670(longlong *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  uVar3 = *(uint *)((longlong)param_1 + 0x7654);
  uVar1 = param_2 & 4;
  *(uint *)((longlong)param_1 + 0x7654) = param_2;
  bVar2 = uVar1 != (uVar3 & 4);
  *(byte *)(param_1 + 0x1ed1) = *(byte *)(param_1 + 0x1ed1) | bVar2;
  param_1[0x1fc] = param_1[0x1fc] & 0xfeffffffffffffffU | (ulonglong)(uVar1 != 0) << 0x38;
  uVar3 = (uint)((param_2 & 2) == 0) | (uint)((int)param_1[0xf6] == 0) << 1;
  *(byte *)((longlong)param_1 + 0xf691) =
       *(uint *)((longlong)param_1 + 0x6e9c) != uVar3 |
       *(byte *)((longlong)param_1 + 0xf691) | bVar2;
  *(uint *)(param_1 + 0xdd3) = (uint)(uVar1 != 0);
  *(uint *)((longlong)param_1 + 0x6e9c) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x1c4);
  uVar3 = (uint)((param_2 & 2) != 0);
  *(uint *)(param_1 + 0x1c4) = uVar3;
  *(byte *)((longlong)param_1 + 0xf68d) = uVar1 != uVar3 | *(byte *)((longlong)param_1 + 0xf68d);
  FUN_180054430(param_1);
  *(undefined1 *)((longlong)param_1 + 0xf68e) = 1;
  return;
}

