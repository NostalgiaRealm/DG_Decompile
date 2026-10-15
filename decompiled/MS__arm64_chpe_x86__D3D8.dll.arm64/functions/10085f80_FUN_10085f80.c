/*
 * FUN_10085f80 at 10085f80
 * undefined FUN_10085f80(void)
 * Address ranges: 10085f80-10085f9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10085f80(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + -0x88;
  }
  iVar2 = param_2 + -0x88;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

