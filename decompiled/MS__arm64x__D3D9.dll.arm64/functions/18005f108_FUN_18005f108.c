/*
 * FUN_18005f108 at 18005f108
 * undefined FUN_18005f108(void)
 * Address ranges: 18005f108-18005f153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_18005f108(undefined8 param_1,int *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x220);
  if (iVar1 == 0) {
    iVar1 = FUN_1800f42d0(param_3,4,1);
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

