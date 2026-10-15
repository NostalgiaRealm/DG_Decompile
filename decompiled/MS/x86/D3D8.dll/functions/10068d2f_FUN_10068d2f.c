/*
 * FUN_10068d2f at 10068d2f
 * undefined4 __thiscall FUN_10068d2f(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int * param_7)
 * Address ranges: 10068d2f-10068ec6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10068d2f(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  int local_44 [12];
  float local_14;
  float local_10;
  void *local_c;
  
  piVar6 = (int *)(-(uint)(param_6 != 0) & param_6 - 0xc0U);
  piVar7 = (int *)(param_5 + -0xc0);
  if ((*(int *)(param_5 + 4) == 0) && (param_5 == 0)) {
    piVar7 = (int *)0x0;
  }
  local_c = this;
  cVar1 = (**(code **)(*piVar6 + 0x54))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*piVar7 + 0x54))();
    if (cVar1 != '\0') {
      fVar9 = (float10)(**(code **)(*piVar6 + 0x2c))();
      local_10 = (float)fVar9;
      fVar9 = (float10)(**(code **)(*piVar7 + 0x2c))();
      local_14 = (float)fVar9;
      if (local_10 <= local_14) {
        fVar9 = (float10)(**(code **)(*piVar6 + 0x30))();
        local_14 = (float)fVar9;
        fVar9 = (float10)(**(code **)(*piVar7 + 0x30))();
        local_10 = (float)fVar9;
        if (local_14 <= local_10) goto LAB_10068dbe;
      }
      FUN_10071632(piVar7);
    }
  }
LAB_10068dbe:
  iVar5 = *(int *)((int)this + 0x1cf04);
  piVar6 = (int *)(iVar5 + 0x11c0);
  piVar7 = local_44;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = *param_7;
    param_7 = param_7 + 1;
    piVar7 = piVar7 + 1;
  }
  FUN_100abd50(piVar6);
  if (*(char *)(iVar5 + 0x12ec) == '\0') {
LAB_10068e77:
    puVar2 = *(undefined4 **)(iVar5 + 0x12d0);
    *puVar2 = local_c;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    puVar2[4] = param_4;
    puVar2[5] = param_5;
    puVar2[6] = param_6;
    piVar7 = local_44;
    piVar8 = puVar2 + 7;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    iVar3 = FUN_10068ec7((int)puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_100abc70(piVar6,0x4c);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_1002f90d(piVar6);
      goto LAB_10068e77;
    }
    LOCK();
    *(int *)(iVar5 + 0x12e8) = *(int *)(iVar5 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 0x4c;
    puVar2[2] = local_c;
    puVar2[3] = param_1;
    puVar2[4] = param_2;
    puVar2[5] = param_3;
    puVar2[6] = param_4;
    puVar2[7] = param_5;
    puVar2[8] = param_6;
    piVar7 = local_44;
    piVar8 = puVar2 + 9;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    puVar4 = (undefined4 *)((int)puVar2 + 0x57U & 0xfffffffc);
    *puVar4 = 0;
    *puVar2 = FUN_10068ec7;
    iVar3 = *(int *)(iVar5 + 0x12e4) * 0x14;
    piVar6[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar5 + 0x12ed) != '\0') {
      *piVar6 = 0;
      iVar3 = SetEvent(*(HANDLE *)(iVar5 + 0x1220));
      goto LAB_10068ebe;
    }
  }
  *piVar6 = 0;
LAB_10068ebe:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

