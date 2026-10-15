/*
 * FUN_1002ba30 at 1002ba30
 * undefined4 __stdcall FUN_1002ba30(int * param_1, int param_2)
 * Address ranges: 1002ba30-1002ba81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002ba30(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*param_1 + -0x88);
  if (*param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  piVar2 = (int *)(param_2 + -0x88);
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  if (piVar1 != (int *)0x0) {
    param_2 = (**(code **)(*piVar1 + 0x78))();
    if ((char)param_2 == '\0') goto LAB_1002ba74;
  }
  if (piVar2 != (int *)0x0) {
    param_2 = (**(code **)(*piVar2 + 0x78))();
    if ((char)param_2 == '\0') {
LAB_1002ba74:
      return param_2 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}

