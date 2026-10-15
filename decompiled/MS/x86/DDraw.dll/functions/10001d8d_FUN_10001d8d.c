/*
 * FUN_10001d8d at 10001d8d
 * char __thiscall FUN_10001d8d(void * this, int param_1)
 * Address ranges: 10001d8d-10001f59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10001d8d(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  void *pvVar11;
  int iVar12;
  int *extraout_EDX;
  int iVar13;
  int *piVar14;
  
  iVar4 = param_1;
  iVar13 = param_1 * 0x228;
  piVar14 = &DAT_1006c2b0 + param_1 * 0x8a;
  piVar1 = &DAT_1006c2b4 + param_1 * 0x8a;
  LOCK();
  *piVar1 = *piVar1 + 1;
  iVar8 = DAT_1006c210;
  UNLOCK();
  if (*piVar14 != 0) {
    return '\x01';
  }
  if (6 < *(uint *)((int)this + 4)) goto LAB_10001e3e;
  uVar6 = 0;
  do {
    if (((&DAT_1006c2c0)[uVar6 * 0x8a] == (&DAT_1006c2c0)[param_1 * 0x8a]) &&
       (iVar12 = (&DAT_1006c2b0)[uVar6 * 0x8a], (&DAT_1006c2b0)[uVar6 * 0x8a] != 0)) break;
    uVar6 = uVar6 + 1;
    iVar12 = 0;
  } while (uVar6 < 0x20);
  uVar7 = *(undefined4 *)(DAT_1006c210 + 0x7c0);
  *(undefined4 *)(&DAT_1006c4a4 + iVar13) = *(undefined4 *)(DAT_1006c210 + 0x7c4);
  *(undefined4 *)(&DAT_1006c4a0 + iVar13) = uVar7;
  if (*(int **)this != (int *)0x0) {
    **(int **)this = iVar8 + 0x9c;
  }
  if (iVar12 != 0) {
    *piVar14 = iVar12;
    uVar7 = FUN_10002ffb(param_1,(&DAT_1006c2c4)[param_1 * 0x8a]);
    if ((char)uVar7 != '\0') {
      FUN_10001d16((int)piVar14);
      return '\x01';
    }
    goto LAB_10001e3e;
  }
  iVar8 = (**(code **)(*DAT_1006c21c + 0x24))();
  uVar7 = (&DAT_1006c2c0)[iVar4 * 0x8a];
  if (iVar8 == 2) {
    iVar8 = FUN_10060bca(0xd094);
    pvVar11 = (void *)(iVar8 + 0x13U & 0xfffffff0);
    *(int *)((int)pvVar11 + -4) = iVar8;
    puVar9 = FUN_1000f428(pvVar11,uVar7);
  }
  else {
    iVar8 = FUN_10060bca(0xd224);
    pvVar11 = (void *)(iVar8 + 0x13U & 0xfffffff0);
    *(int *)((int)pvVar11 + -4) = iVar8;
    puVar9 = FUN_10006bf4(pvVar11,uVar7);
  }
  bVar2 = false;
  *piVar14 = (int)puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    uVar7 = FUN_100029cf();
    cVar5 = (**(code **)(*extraout_EDX + 8))(DAT_1006c210 + 0x764,&PTR_PTR_1006928c,uVar7);
    if (cVar5 != '\0') {
      uVar7 = FUN_10002ffb(param_1,(&DAT_1006c2c4)[iVar4 * 0x8a]);
      if ((char)uVar7 != '\0') {
        FUN_10001d16((int)piVar14);
        uVar10 = (**(code **)(*DAT_1006c21c + 0x28))((&DAT_1006c2c0)[iVar4 * 0x8a]);
        piVar3 = DAT_1006c21c;
        uVar7 = (&DAT_1006c2c0)[iVar4 * 0x8a];
        *(undefined4 *)(&DAT_1006c480 + iVar13) = uVar10;
        puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))(&param_1,uVar7);
        uVar7 = 0;
        *(undefined4 *)(&DAT_1006c494 + iVar13) = *puVar9;
        if (*(int *)(DAT_1006c210 + 0x93b) == 1) {
          uVar7 = 0x18;
        }
        else if (*(int *)(DAT_1006c210 + 0x93b) == 2) {
          uVar7 = 0x20;
        }
        (**(code **)(*(int *)*piVar14 + 0x8c))(uVar7);
        bVar2 = true;
        goto LAB_10001f47;
      }
      (**(code **)(*(int *)*piVar14 + 0xc))();
    }
    (**(code **)(*(int *)*piVar14 + 4))();
    bVar2 = false;
  }
LAB_10001f47:
  if (bVar2) {
    return '\x01';
  }
  *piVar14 = 0;
LAB_10001e3e:
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return '\0';
}

