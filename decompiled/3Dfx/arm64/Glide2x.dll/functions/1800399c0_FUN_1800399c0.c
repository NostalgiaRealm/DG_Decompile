/*
 * FUN_1800399c0 at 1800399c0
 * undefined __cdecl FUN_1800399c0(longlong * param_1, uint param_2)
 * Address ranges: 1800399c0-180039a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800399c0(longlong *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(uint *)(param_1 + 0x532) = param_2 & 0xff;
  *(uint *)((longlong)param_1 + 0x2c3c) = -(uint)((param_2 & 0xff) != 0);
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

