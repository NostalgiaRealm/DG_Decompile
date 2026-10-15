/*
 * FUN_180022908 at 180022908
 * undefined __fastcall FUN_180022908(longlong * param_1, ushort param_2)
 * Address ranges: 180022908-1800229b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022908(longlong *param_1,ushort param_2)

{
  FUN_1800214d4((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(int *)(param_1 + 0x590) = (int)(short)param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(float *)(param_1 + 0x591) = (float)param_2 / 65535.0;
  *(float *)((longlong)param_1 + 0x2c8c) =
       1.0000153 -
       1.0000153 /
       ((float)(1 << (byte)(param_2 >> 0xc)) * (float)(param_2 & 0xfff | 0x1000) * 0.00024414062);
  return;
}

