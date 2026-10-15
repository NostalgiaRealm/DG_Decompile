/*
 * FUN_10072d29 at 10072d29
 * undefined __thiscall FUN_10072d29(void * this, int param_1, int * param_2, int * param_3)
 * Address ranges: 10072d29-10072e14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10072d29(void *this,int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *this_00;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_44 [10];
  int local_1c [6];
  
  iVar4 = *(int *)((int)this + 4);
  this_00 = (int *)(iVar4 + 0x11c0);
  piVar5 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_3;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
  }
  piVar5 = local_44;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_2;
    param_2 = param_2 + 1;
    piVar5 = piVar5 + 1;
  }
  iVar2 = *(int *)this;
  FUN_100abd50(this_00);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_100abc70(this_00,0x48);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x48;
      puVar1[2] = iVar2;
      puVar1[3] = param_1;
      piVar5 = local_44;
      piVar6 = puVar1 + 4;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      piVar5 = local_1c;
      piVar6 = puVar1 + 0xe;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar1 + 0x53U & 0xfffffffc);
      *puVar3 = 0;
      *puVar1 = FUN_10072e15;
      this_00[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_10072e08;
    }
    FUN_1002f90d(this_00);
  }
  piVar5 = *(int **)(iVar4 + 0x12d0);
  *piVar5 = iVar2;
  piVar5[1] = param_1;
  piVar6 = local_44;
  piVar7 = piVar5 + 2;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  piVar6 = local_1c;
  piVar7 = piVar5 + 0xc;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  FUN_10072e15(piVar5);
LAB_10072e08:
  *this_00 = 0;
  return;
}

