/*
 * FUN_10028f00 at 10028f00
 * undefined FUN_10028f00(void)
 * Address ranges: 10028f00-10028f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028f00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = FUN_1001bdf0(*(undefined4 *)(*param_1 + 0x32dc));
  *(bool *)iVar1 = iVar2 != 0;
  return;
}

