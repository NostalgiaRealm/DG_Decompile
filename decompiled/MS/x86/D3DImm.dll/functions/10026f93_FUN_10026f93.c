/*
 * FUN_10026f93 at 10026f93
 * undefined __thiscall FUN_10026f93(void * this, int * param_1)
 * Address ranges: 10026f93-10027059
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10026f93(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_50 [18];
  void *local_8;
  
  iVar4 = *(int *)((int)this + 0x1d54);
  piVar5 = local_50;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  piVar5 = (int *)(iVar4 + 0x11c0);
  local_8 = this;
  FUN_1005c1d0(piVar5);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_1005c0f0(piVar5,0x4c);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x4c;
      puVar1[2] = local_8;
      piVar6 = local_50;
      piVar8 = puVar1 + 3;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar1 + 0x57U & 0xfffffffc);
      *puVar3 = 0;
      *puVar1 = FUN_1002705a;
      piVar5[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *piVar5 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1002704d;
    }
    FUN_1001b0b6(piVar5);
  }
  piVar6 = *(int **)(iVar4 + 0x12d0);
  *piVar6 = (int)local_8;
  piVar7 = local_50;
  piVar8 = piVar6;
  for (iVar4 = 0x12; piVar8 = piVar8 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
  }
  FUN_1002705a(piVar6);
LAB_1002704d:
  *piVar5 = 0;
  return;
}

