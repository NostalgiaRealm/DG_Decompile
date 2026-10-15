/*
 * FUN_1003c0c3 at 1003c0c3
 * undefined __thiscall FUN_1003c0c3(void * this, int * param_1)
 * Address ranges: 1003c0c3-1003c189
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003c0c3(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_20 [6];
  void *local_8;
  
  iVar4 = *(int *)((int)this + 0xd9b8);
  piVar5 = local_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  piVar5 = (int *)(iVar4 + 0x11c0);
  local_8 = this;
  FUN_100abd50(piVar5);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_100abc70(piVar5,0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x1c;
      puVar1[2] = local_8;
      piVar6 = local_20;
      piVar8 = puVar1 + 3;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar1 + 0x27U & 0xfffffffc);
      *puVar3 = 0;
      *puVar1 = FUN_1003c18a;
      piVar5[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *piVar5 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1003c17d;
    }
    FUN_1002f90d(piVar5);
  }
  piVar6 = *(int **)(iVar4 + 0x12d0);
  *piVar6 = (int)local_8;
  piVar7 = local_20;
  piVar8 = piVar6;
  for (iVar4 = 6; piVar8 = piVar8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
  }
  FUN_1003c18a(piVar6);
LAB_1003c17d:
  *piVar5 = 0;
  return;
}

