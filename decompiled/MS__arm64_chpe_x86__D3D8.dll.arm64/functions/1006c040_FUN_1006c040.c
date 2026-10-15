/*
 * FUN_1006c040 at 1006c040
 * undefined FUN_1006c040(void)
 * Address ranges: 1006c040-1006c0a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1006c040(undefined8 param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_3 + 0x200);
  iVar1 = *piVar2;
  param_2 = param_2 & 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = FUN_100ee580(param_3,4,1);
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

