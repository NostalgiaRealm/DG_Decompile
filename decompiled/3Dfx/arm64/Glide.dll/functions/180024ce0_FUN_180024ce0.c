/*
 * FUN_180024ce0 at 180024ce0
 * undefined __cdecl FUN_180024ce0(longlong * param_1, ushort param_2)
 * Address ranges: 180024ce0-180024d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024ce0(longlong *param_1,ushort param_2)

{
  FUN_180023700((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(int *)(param_1 + 0x590) = (int)(short)param_2;
  *(float *)(param_1 + 0x591) = (float)param_2 / 65535.0;
  *(float *)((longlong)param_1 + 0x2c8c) =
       1.0000153 -
       1.0000153 /
       ((float)(1 << (ulonglong)(param_2 >> 0xc)) *
       (float)(param_2 & 0xfff | 0x1000) * 0.00024414062);
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

