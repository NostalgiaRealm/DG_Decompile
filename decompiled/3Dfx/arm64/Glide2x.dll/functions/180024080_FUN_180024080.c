/*
 * FUN_180024080 at 180024080
 * undefined __cdecl FUN_180024080(longlong * param_1, byte param_2)
 * Address ranges: 180024080-1800240df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024080(longlong *param_1,byte param_2)

{
  FUN_1800228b0((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  *(uint *)((longlong)param_1 + 0x2a64) = (uint)param_2;
  *(uint *)(param_1 + 0x583) = -(uint)(param_2 != 0);
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined2 *)(param_1 + 0x57c) = 0x101;
  return;
}

