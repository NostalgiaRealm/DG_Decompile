/*
 * FUN_1009dbc0 at 1009dbc0
 * undefined4 __stdcall FUN_1009dbc0(int param_1, undefined4 * param_2)
 * Address ranges: 1009dbc0-1009dc47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009dbc0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = *(undefined4 *)(param_1 + 0x58);
  param_2[2] = *(undefined4 *)(param_1 + 0x9c);
  param_2[3] = *(undefined4 *)(param_1 + 0x90);
  param_2[4] = *(undefined4 *)(param_1 + 0xa4);
  param_2[5] = 0;
  param_2[6] = *(undefined4 *)(param_1 + 0x88);
  param_2[7] = *(undefined4 *)(param_1 + 0x50);
  param_2[8] = (uint)(*(char *)(param_1 + 0xbd) != '\0');
  param_2[9] = (uint)(*(int *)(param_1 + 0xa0) != 0);
  param_2[10] = *(undefined4 *)(param_1 + 0xa0);
  param_2[0xb] = *(undefined4 *)(param_1 + 0xb8);
  param_2[0xc] = *(undefined4 *)(param_1 + 100);
  param_2[0xd] = *(undefined4 *)(param_1 + 0x8c);
  return 0;
}

