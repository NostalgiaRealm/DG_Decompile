/*
 * FUN_10016a40 at 10016a40
 * undefined __thiscall FUN_10016a40(void * this, int * param_1)
 * Address ranges: 10016a40-10016b1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016a40(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_78 [28];
  void *local_8;
  
  iVar4 = *(int *)((int)this + 0x3308);
  piVar5 = param_1;
  piVar6 = local_78;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  piVar5 = (int *)(iVar4 + 0x11c0);
  local_8 = this;
  FUN_1002acc0(piVar5);
  if (*(char *)(iVar4 + 0x12ec) == '\0') {
LAB_10016add:
    piVar6 = *(int **)(iVar4 + 0x12d0);
    *piVar6 = (int)local_8;
    piVar7 = local_78;
    piVar8 = piVar6;
    for (iVar4 = 0x1c; piVar8 = piVar8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
    }
    FUN_10016b1f(piVar6);
  }
  else {
    puVar1 = (undefined4 *)FUN_1002abe0(piVar5,0x74);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_10014f4d(piVar5);
      goto LAB_10016add;
    }
    LOCK();
    *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
    UNLOCK();
    puVar1[1] = 0x74;
    puVar1[2] = local_8;
    piVar6 = local_78;
    piVar8 = puVar1 + 3;
    for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    puVar3 = (undefined4 *)((int)puVar1 + 0x7fU & 0xfffffffc);
    *puVar3 = 0;
    *puVar1 = FUN_10016b1f;
    piVar5[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar4 + 0x12ed) != '\0') {
      *piVar5 = 0;
      SetEvent(*(HANDLE *)(iVar4 + 0x1220));
      goto LAB_10016b00;
    }
  }
  *piVar5 = 0;
LAB_10016b00:
  FUN_10007678((void *)((int)local_8 + 0x3f50),(int *)((int)local_8 + 0x4194),(int)param_1);
  return;
}

