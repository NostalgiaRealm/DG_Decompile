/*
 * FUN_180022ae4 at 180022ae4
 * char __fastcall FUN_180022ae4(longlong * param_1, byte param_2)
 * Address ranges: 180022ae4-180022b3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180022ae4(longlong *param_1,byte param_2)

{
  FUN_1800214d4((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(uint *)((longlong)param_1 + 0x2a64) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined2 *)(param_1 + 0x57c) = 0x101;
  *(uint *)(param_1 + 0x583) = -(uint)(param_2 != 0);
  return -param_2;
}

