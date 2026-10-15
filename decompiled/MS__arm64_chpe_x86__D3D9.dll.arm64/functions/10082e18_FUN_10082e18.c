/*
 * FUN_10082e18 at 10082e18
 * undefined FUN_10082e18(void)
 * Address ranges: 10082e18-10082e7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10082e18(undefined8 param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_3 + 0x210);
  iVar1 = *piVar2;
  param_2 = param_2 & 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = FUN_10121590(param_3,4,1);
    *piVar2 = iVar1;
  }
  piVar2 = (int *)param_2;
  *piVar2 = iVar1;
  *(undefined1 *)(piVar2 + 1) = 0xe4;
  piVar2[6] = -1;
  piVar2[7] = -1;
  piVar2[4] = -1;
  piVar2[5] = -1;
  return param_2 & 0xffffffff;
}

