/*
 * FUN_10018a60 at 10018a60
 * undefined4 __stdcall FUN_10018a60(int * param_1, int param_2)
 * Address ranges: 10018a60-10018ab1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10018a60(int *param_1,int param_2)

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
    if ((char)param_2 == '\0') goto LAB_10018aa4;
  }
  if (piVar2 != (int *)0x0) {
    param_2 = (**(code **)(*piVar2 + 0x78))();
    if ((char)param_2 == '\0') {
LAB_10018aa4:
      return param_2 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}

