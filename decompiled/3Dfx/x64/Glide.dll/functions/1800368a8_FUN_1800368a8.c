/*
 * FUN_1800368a8 at 1800368a8
 * undefined __fastcall FUN_1800368a8(longlong * param_1, byte param_2, byte param_3)
 * Address ranges: 1800368a8-180036947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800368a8(longlong *param_1,byte param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = param_3 << 3 | param_2 | param_2 * '\x04' | param_2 * '\x02';
  if (bVar2 != *(byte *)((longlong)param_1 + 0x2abc)) {
    FUN_1800214d4((longlong *)param_1[0x630]);
    (**(code **)(*param_1 + 0x2a0))(param_1);
    uVar1 = 0;
    *(byte *)((longlong)param_1 + 0x2abc) = bVar2;
    *(undefined1 *)((longlong)param_1 + 0x2be1) = 1;
    if (((int)param_1[0x533] == 0) || ((int)param_1[0x54c] != 0)) {
      uVar1 = 0xff0000;
    }
    *(uint *)((longlong)param_1 + 0x2c0c) = *(uint *)((longlong)param_1 + 0x2c0c) & 0xffff;
    *(uint *)((longlong)param_1 + 0x2c0c) = *(uint *)((longlong)param_1 + 0x2c0c) | uVar1;
    *(undefined1 *)(param_1 + 0x62e) = 1;
  }
  *(uint *)((longlong)param_1 + 0x2994) = (uint)param_2;
  *(uint *)(param_1 + 0x533) = (uint)param_3;
  return;
}

