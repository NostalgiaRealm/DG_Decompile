/*
 * FUN_10034410 at 10034410
 * undefined4 __stdcall FUN_10034410(int * param_1, int param_2)
 * Address ranges: 10034410-100344d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10034410(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = (int *)(*param_1 + -0x88);
  if (*param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  piVar2 = (int *)(param_1[1] + -0x88);
  if (param_1[1] == 0) {
    piVar2 = (int *)0x0;
  }
  piVar3 = (int *)(param_1[2] + -0x88);
  if (param_1[2] == 0) {
    piVar3 = (int *)0x0;
  }
  piVar5 = (int *)(param_1[3] + -0x88);
  if (param_1[3] == 0) {
    piVar5 = (int *)0x0;
  }
  piVar4 = (int *)(param_2 + -0x88);
  if (param_2 == 0) {
    piVar4 = (int *)0x0;
  }
  if ((((((piVar1 == (int *)0x0) ||
         (param_2 = (**(code **)(*piVar1 + 0x78))(), (char)param_2 != '\0')) &&
        ((piVar2 == (int *)0x0 || (param_2 = (**(code **)(*piVar2 + 0x78))(), (char)param_2 != '\0')
         ))) && ((piVar3 == (int *)0x0 ||
                 (param_2 = (**(code **)(*piVar3 + 0x78))(), (char)param_2 != '\0')))) &&
      ((piVar5 == (int *)0x0 || (param_2 = (**(code **)(*piVar5 + 0x78))(), (char)param_2 != '\0')))
      ) && ((piVar4 == (int *)0x0 ||
            (param_2 = (**(code **)(*piVar4 + 0x78))(), (char)param_2 != '\0')))) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return param_2 & 0xffffff00;
}

