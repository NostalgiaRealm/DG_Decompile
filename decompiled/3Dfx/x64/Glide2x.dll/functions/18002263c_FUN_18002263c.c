/*
 * FUN_18002263c at 18002263c
 * char __fastcall FUN_18002263c(longlong * param_1, byte param_2)
 * Address ranges: 18002263c-180022692
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18002263c(longlong *param_1,byte param_2)

{
  FUN_18002102c((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(uint *)((longlong)param_1 + 0x2a64) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined2 *)(param_1 + 0x57c) = 0x101;
  *(uint *)(param_1 + 0x583) = -(uint)(param_2 != 0);
  return -param_2;
}

