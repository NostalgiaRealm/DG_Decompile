/*
 * FUN_1800160e4 at 1800160e4
 * undefined __fastcall FUN_1800160e4(longlong * param_1, ushort param_2)
 * Address ranges: 1800160e4-18001618d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800160e4(longlong *param_1,ushort param_2)

{
  FUN_1800144d0((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  *(int *)(param_1 + 0x5a4) = (int)(short)param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(float *)(param_1 + 0x5a5) = (float)param_2 / 65535.0;
  *(float *)((longlong)param_1 + 0x2d2c) =
       1.0000153 -
       1.0000153 /
       ((float)(1 << (byte)(param_2 >> 0xc)) * (float)(param_2 & 0xfff | 0x1000) * 0.00024414062);
  return;
}

