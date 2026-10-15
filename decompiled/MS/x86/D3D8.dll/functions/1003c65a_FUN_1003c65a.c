/*
 * FUN_1003c65a at 1003c65a
 * undefined __thiscall FUN_1003c65a(void * this, int param_1, int * param_2)
 * Address ranges: 1003c65a-1003c734
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003c65a(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_48 [16];
  void *local_8;
  
  iVar4 = *(int *)((int)this + 0xd9b8);
  piVar5 = local_48;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_2;
    param_2 = param_2 + 1;
    piVar5 = piVar5 + 1;
  }
  piVar5 = (int *)(iVar4 + 0x11c0);
  local_8 = this;
  FUN_100abd50(piVar5);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_100abc70(piVar5,0x48);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x48;
      puVar1[2] = local_8;
      puVar1[3] = param_1;
      piVar6 = local_48;
      piVar7 = puVar1 + 4;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar1 + 0x53U & 0xfffffffc);
      *puVar3 = 0;
      *puVar1 = FUN_1003c735;
      piVar5[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *piVar5 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1003c728;
    }
    FUN_1002f90d(piVar5);
  }
  puVar1 = *(undefined4 **)(iVar4 + 0x12d0);
  *puVar1 = local_8;
  puVar1[1] = param_1;
  piVar6 = local_48;
  piVar7 = puVar1 + 2;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  FUN_1003c735(puVar1);
LAB_1003c728:
  *piVar5 = 0;
  return;
}

