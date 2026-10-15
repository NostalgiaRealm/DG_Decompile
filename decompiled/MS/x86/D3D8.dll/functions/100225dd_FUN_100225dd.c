/*
 * FUN_100225dd at 100225dd
 * char __thiscall FUN_100225dd(void * this, int param_1)
 * Address ranges: 100225dd-100227e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100225dd(void *this,int param_1)

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
  piVar14 = &DAT_100ba720 + param_1 * 0x8a;
  piVar1 = &DAT_100ba724 + param_1 * 0x8a;
  LOCK();
  *piVar1 = *piVar1 + 1;
  iVar7 = DAT_100ba2b4;
  UNLOCK();
  if (*piVar14 != 0) {
    return '\x01';
  }
  if (6 < *(uint *)((int)this + 4)) goto LAB_1002268d;
  uVar5 = 0;
  do {
    if (((&DAT_100ba730)[uVar5 * 0x8a] == (&DAT_100ba730)[param_1 * 0x8a]) &&
       (iVar12 = (&DAT_100ba720)[uVar5 * 0x8a], (&DAT_100ba720)[uVar5 * 0x8a] != 0)) break;
    uVar5 = uVar5 + 1;
    iVar12 = 0;
  } while (uVar5 < 0x20);
  uVar6 = *(undefined4 *)(DAT_100ba2b4 + 0x7c0);
  *(undefined4 *)(&DAT_100ba914 + iVar13) = *(undefined4 *)(DAT_100ba2b4 + 0x7c4);
  *(undefined4 *)(&DAT_100ba910 + iVar13) = uVar6;
  if (*(int **)this != (int *)0x0) {
    **(int **)this = iVar7 + 0x9c;
  }
  if (iVar12 != 0) {
    *piVar14 = iVar12;
    uVar6 = FUN_10023841(param_1,(&DAT_100ba734)[param_1 * 0x8a]);
    if ((char)uVar6 != '\0') {
      FUN_10022566((int)piVar14);
      return '\x01';
    }
    goto LAB_1002268d;
  }
  iVar7 = (**(code **)(*DAT_100ba2b0 + 0x24))();
  uVar6 = (&DAT_100ba730)[iVar3 * 0x8a];
  if (iVar7 == 2) {
    iVar7 = FUN_100ad475(0x1d084);
    pvVar11 = (void *)(iVar7 + 0x13U & 0xfffffff0);
    *(int *)((int)pvVar11 + -4) = iVar7;
    piVar8 = FUN_10066333(pvVar11,uVar6);
  }
  else {
    iVar7 = FUN_100ad475(0x1d224);
    pvVar11 = (void *)(iVar7 + 0x13U & 0xfffffff0);
    *(int *)((int)pvVar11 + -4) = iVar7;
    piVar8 = FUN_1005d9d0(pvVar11,uVar6);
  }
  bVar2 = false;
  *piVar14 = (int)piVar8;
  if (piVar8 != (int *)0x0) {
    if (*(int *)(DAT_100ba2b4 + 0x93f) == 0) {
      iVar7 = *(int *)(DAT_100ba2b4 + 0x836);
      if (iVar7 == 0) {
        uVar6 = 0x1c;
      }
      else {
        if ((iVar7 != 2) && (iVar7 = iVar7 + -3, iVar7 != 0)) goto LAB_1002272a;
LAB_10022710:
        uVar6 = 0x16;
      }
    }
    else {
      iVar7 = *(int *)(DAT_100ba2b4 + 0x93f) + -2;
      if (iVar7 == 0) {
        uVar6 = 0x15;
      }
      else {
LAB_1002272a:
        if (iVar7 == 1) goto LAB_10022710;
        uVar6 = 6;
      }
    }
    cVar4 = (**(code **)(*piVar8 + 8))(DAT_100ba2b4 + 0x764,&PTR_PTR_100b7d3c,uVar6);
    if (cVar4 != '\0') {
      uVar6 = FUN_10023841(param_1,(&DAT_100ba734)[iVar3 * 0x8a]);
      if ((char)uVar6 != '\0') {
        FUN_10022566((int)piVar14);
        uVar9 = (**(code **)(*DAT_100ba2b0 + 0x28))((&DAT_100ba730)[iVar3 * 0x8a]);
        piVar8 = DAT_100ba2b0;
        uVar6 = (&DAT_100ba730)[iVar3 * 0x8a];
        *(undefined4 *)(&DAT_100ba8f0 + iVar13) = uVar9;
        puVar10 = (undefined4 *)(**(code **)(*piVar8 + 0x2c))(&param_1,uVar6);
        uVar6 = 0;
        *(undefined4 *)(&DAT_100ba904 + iVar13) = *puVar10;
        if (*(int *)(DAT_100ba2b4 + 0x93b) == 1) {
          uVar6 = 0x18;
        }
        else if (*(int *)(DAT_100ba2b4 + 0x93b) == 2) {
          uVar6 = 0x20;
        }
        (**(code **)(*(int *)*piVar14 + 0x8c))(uVar6);
        bVar2 = true;
        goto LAB_100227ce;
      }
      (**(code **)(*(int *)*piVar14 + 0xc))();
    }
    (**(code **)(*(int *)*piVar14 + 4))();
    bVar2 = false;
  }
LAB_100227ce:
  if (bVar2) {
    return '\x01';
  }
  *piVar14 = 0;
LAB_1002268d:
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return '\0';
}

