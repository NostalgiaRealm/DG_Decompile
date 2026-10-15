/*
 * FUN_180014f00 at 180014f00
 * undefined __cdecl FUN_180014f00(longlong * param_1, int param_2)
 * Address ranges: 180014f00-180014f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014f00(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(uint *)(param_1 + 0x5a6) = (uint)(param_2 != 0);
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

