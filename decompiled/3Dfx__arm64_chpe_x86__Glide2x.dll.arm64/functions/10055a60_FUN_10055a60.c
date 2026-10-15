/*
 * FUN_10055a60 at 10055a60
 * undefined FUN_10055a60(void)
 * Address ranges: 10055a60-10055ab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_10055a60(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a8) + param_3 * 0x18;
  *param_2 = *(undefined1 *)(iVar1 + 0x530);
  param_2[1] = *(undefined1 *)(iVar1 + 0x531);
  param_2[2] = *(undefined1 *)(iVar1 + 0x532);
  param_2[3] = *(undefined1 *)(iVar1 + 0x533);
  return param_2;
}

