/*
 * FUN_180039978 at 180039978
 * undefined __cdecl FUN_180039978(longlong * param_1, int param_2)
 * Address ranges: 180039978-1800399bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039978(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(uint *)(param_1 + 0x592) = (uint)(param_2 != 0);
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

