/*
 * FUN_1801701b8 at 1801701b8
 * undefined FUN_1801701b8(void)
 * Address ranges: 1801701b8-180170203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1801701b8(undefined8 param_1,int *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x220);
  if (iVar1 == 0) {
    iVar1 = FUN_180213760(param_3,4,1);
    *(int *)(param_3 + 0x220) = iVar1;
  }
  *param_2 = iVar1;
  *(undefined1 *)(param_2 + 1) = 0xe4;
  param_2[6] = -1;
  param_2[7] = -1;
  param_2[4] = -1;
  param_2[5] = -1;
  return param_2;
}

