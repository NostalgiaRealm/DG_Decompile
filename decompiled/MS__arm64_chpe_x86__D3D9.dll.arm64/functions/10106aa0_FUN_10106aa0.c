/*
 * FUN_10106aa0 at 10106aa0
 * undefined FUN_10106aa0(void)
 * Address ranges: 10106aa0-10106af7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_10106aa0(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a8) + param_3 * 0x18;
  *param_2 = *(undefined1 *)(iVar1 + 0x530);
  param_2[1] = *(undefined1 *)(iVar1 + 0x531);
  param_2[2] = *(undefined1 *)(iVar1 + 0x532);
  param_2[3] = *(undefined1 *)(iVar1 + 0x533);
  return param_2;
}

