/*
 * FUN_10029c75 at 10029c75
 * char __thiscall FUN_10029c75(void * this, int param_1)
 * Address ranges: 10029c75-10029e78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10029c75(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  
  iVar3 = param_1;
  iVar13 = param_1 * 0x228;
  piVar14 = &DAT_100df2e8 + param_1 * 0x8a;
  piVar1 = &DAT_100df2ec + param_1 * 0x8a;
  LOCK();
  *piVar1 = *piVar1 + 1;
  iVar7 = DAT_100dea74;
  UNLOCK();
  if (*piVar14 != 0) {
    return '\x01';
  }
  if (6 < *(uint *)((int)this + 4)) goto LAB_10029d25;
  uVar5 = 0;
  do {
    if (((&DAT_100df2f8)[uVar5 * 0x8a] == (&DAT_100df2f8)[param_1 * 0x8a]) &&
       (iVar12 = (&DAT_100df2e8)[uVar5 * 0x8a], (&DAT_100df2e8)[uVar5 * 0x8a] != 0)) break;
    uVar5 = uVar5 + 1;
    iVar12 = 0;
  } while (uVar5 < 0x20);
  uVar6 = *(undefined4 *)(DAT_100dea74 + 0x7c0);
  *(undefined4 *)(&DAT_100df4dc + iVar13) = *(undefined4 *)(DAT_100dea74 + 0x7c4);
  *(undefined4 *)(&DAT_100df4d8 + iVar13) = uVar6;
  if (*(int **)this != (int *)0x0) {
    **(int **)this = iVar7 + 0x9c;
  }
  if (iVar12 != 0) {
    *piVar14 = iVar12;
    uVar6 = FUN_1002ae75(param_1,(&DAT_100df2fc)[param_1 * 0x8a]);
    if ((char)uVar6 != '\0') {
      FUN_10029bfe((int)piVar14);
      return '\x01';
    }
    goto LAB_10029d25;
  }
  iVar7 = (**(code **)(*DAT_100dea70 + 0x24))();
  uVar6 = (&DAT_100df2f8)[iVar3 * 0x8a];
  if (iVar7 == 2) {
    iVar7 = FUN_100cfd55(0x1d084);
    pvVar11 = (void *)(iVar7 + 0x13U & 0xfffffff0);
    *(int *)((int)pvVar11 + -4) = iVar7;
    piVar8 = FUN_1007c24b(pvVar11,uVar6);
  }
  else {
    iVar7 = FUN_100cfd55(0x1d224);
    pvVar11 = (void *)(iVar7 + 0x13U & 0xfffffff0);
    *(int *)((int)pvVar11 + -4) = iVar7;
    piVar8 = FUN_10073748(pvVar11,uVar6);
  }
  bVar2 = false;
  *piVar14 = (int)piVar8;
  if (piVar8 != (int *)0x0) {
    if (*(int *)(DAT_100dea74 + 0x93f) == 0) {
      iVar7 = *(int *)(DAT_100dea74 + 0x836);
      if (iVar7 == 0) {
        uVar6 = 0x2a;
      }
      else {
        if ((iVar7 != 2) && (iVar7 = iVar7 + -3, iVar7 != 0)) goto LAB_10029dc2;
LAB_10029da8:
        uVar6 = 0x16;
      }
    }
    else {
      iVar7 = *(int *)(DAT_100dea74 + 0x93f) + -2;
      if (iVar7 == 0) {
        uVar6 = 0x15;
      }
      else {
LAB_10029dc2:
        if (iVar7 == 1) goto LAB_10029da8;
        uVar6 = 6;
      }
    }
    cVar4 = (**(code **)(*piVar8 + 8))(DAT_100dea74 + 0x764,&PTR_PTR_100dc064,uVar6);
    if (cVar4 != '\0') {
      uVar6 = FUN_1002ae75(param_1,(&DAT_100df2fc)[iVar3 * 0x8a]);
      if ((char)uVar6 != '\0') {
        FUN_10029bfe((int)piVar14);
        uVar9 = (**(code **)(*DAT_100dea70 + 0x28))((&DAT_100df2f8)[iVar3 * 0x8a]);
        piVar8 = DAT_100dea70;
        uVar6 = (&DAT_100df2f8)[iVar3 * 0x8a];
        *(undefined4 *)(&DAT_100df4b8 + iVar13) = uVar9;
        puVar10 = (undefined4 *)(**(code **)(*piVar8 + 0x2c))(&param_1,uVar6);
        uVar6 = 0;
        *(undefined4 *)(&DAT_100df4cc + iVar13) = *puVar10;
        if (*(int *)(DAT_100dea74 + 0x93b) == 1) {
          uVar6 = 0x18;
        }
        else if (*(int *)(DAT_100dea74 + 0x93b) == 2) {
          uVar6 = 0x20;
        }
        (**(code **)(*(int *)*piVar14 + 0x8c))(uVar6);
        bVar2 = true;
        goto LAB_10029e66;
      }
      (**(code **)(*(int *)*piVar14 + 0xc))();
    }
    (**(code **)(*(int *)*piVar14 + 4))();
    bVar2 = false;
  }
LAB_10029e66:
  if (bVar2) {
    return '\x01';
  }
  *piVar14 = 0;
LAB_10029d25:
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return '\0';
}

