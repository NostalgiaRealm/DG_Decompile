/*
 * FUN_180039a68 at 180039a68
 * undefined __cdecl FUN_180039a68(longlong * param_1, uint param_2)
 * Address ranges: 180039a68-180039acf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039a68(longlong *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(float *)(param_1 + 0x588) = (float)(param_2 >> 0x18);
  *(float *)((longlong)param_1 + 0x2c44) = (float)(param_2 >> 0x10 & 0xff);
  *(float *)(param_1 + 0x589) = (float)(param_2 >> 8 & 0xff);
  *(float *)((longlong)param_1 + 0x2c4c) = (float)(param_2 & 0xff);
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

