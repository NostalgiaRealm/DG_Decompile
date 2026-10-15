/*
 * FUN_180049b30 at 180049b30
 * ulonglong __fastcall FUN_180049b30(longlong param_1, byte param_2, byte param_3, int param_4)
 * Address ranges: 180049b30-180049f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180049b30(longlong param_1,byte param_2,byte param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar13;
  undefined4 *puVar14;
  ulonglong uVar12;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    if (*(int *)(param_1 + 0x74) == 0) {
      if ((param_2 != 0 || param_3 != 0) ||
         ((uVar8 = 0, param_4 != 0 && (param_4 != *(int *)(param_1 + 0x80))))) {
        if (*(int *)(*(longlong *)(param_1 + 0xf710) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xf710) + 0x34) = 0;
        }
        if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
        }
        uVar8 = FUN_1800499d0(param_1,param_2,param_3,param_4);
      }
      return uVar8 & 0xffffffffffffff00;
    }
    uVar8 = 0;
    if (*(int *)(*(longlong *)(param_1 + 0xf710) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf710) + 0x34) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
    }
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xf718) + 0x38);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(byte *)(param_1 + 0xf68f) =
         *(byte *)(param_1 + 0xf68f) | *(int *)(*(longlong *)(param_1 + 0xf718) + 0x6c) != 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x6c) = 0;
    bVar7 = FUN_180047a50(param_1);
    if (bVar7 == 0) goto LAB_180049eea;
    uVar2 = *(undefined4 *)(param_1 + 0x74);
    lVar9 = 0x70;
    if (*(longlong *)(param_1 + 0xff38) != *(longlong *)(param_1 + 0xf718)) {
      lVar9 = 0x98;
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    uVar3 = *(undefined4 *)(param_1 + lVar9);
    iVar13 = *(int *)(lVar10 + 0xb28);
    if (iVar13 != 0) {
      iVar5 = *(int *)(lVar10 + 0x67c);
      uVar6 = *(undefined8 *)(lVar10 + 0xb20);
      *(int *)(lVar10 + 0x67c) = iVar5 + 1;
      if (((iVar5 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
         (uVar12 = uVar8, *(int *)(lVar10 + 0xba8) != 0)) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar12 * 8))();
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(lVar10 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar10 + 0x688) + 0xd0))
                (*(longlong **)(lVar10 + 0x688),iVar13,uVar6);
      *(undefined4 *)(lVar10 + 0xb28) = 0;
    }
    iVar13 = *(int *)(lVar10 + 0x67c);
    *(int *)(lVar10 + 0x67c) = iVar13 + 1;
    if (((iVar13 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) && (*(int *)(lVar10 + 0xba8) != 0))
    {
      do {
        (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar8 * 8))();
        uVar11 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(lVar10 + 0xba8));
    }
    (**(code **)(**(longlong **)(lVar10 + 0x688) + 0x60))
              (*(longlong **)(lVar10 + 0x688),uVar2,1,uVar3,0);
  }
  else {
    uVar8 = 0;
    if (*(int *)(*(longlong *)(param_1 + 0xf710) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf710) + 0x34) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0xf718) + 0x38);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      *(byte *)(param_1 + 0xf68f) =
           *(byte *)(param_1 + 0xf68f) | *(int *)(*(longlong *)(param_1 + 0xf718) + 0x6c) != 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x6c) = 0;
    }
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xf710) + 0x38);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar7 = FUN_180047a50(param_1);
    if (bVar7 == 0) goto LAB_180049eea;
    uVar2 = *(undefined4 *)(param_1 + 0x94);
    lVar9 = 0x70;
    if (*(longlong *)(param_1 + 0xff38) != *(longlong *)(param_1 + 0xf718)) {
      lVar9 = 0x98;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x90);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    uVar4 = *(undefined4 *)(lVar9 + param_1);
    iVar13 = *(int *)(lVar10 + 0xb28);
    if (iVar13 != 0) {
      iVar5 = *(int *)(lVar10 + 0x67c);
      uVar6 = *(undefined8 *)(lVar10 + 0xb20);
      *(int *)(lVar10 + 0x67c) = iVar5 + 1;
      if (((iVar5 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) &&
         (uVar12 = uVar8, *(int *)(lVar10 + 0xba8) != 0)) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar12 * 8))();
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(lVar10 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar10 + 0x688) + 0xd0))
                (*(longlong **)(lVar10 + 0x688),iVar13,uVar6);
      *(undefined4 *)(lVar10 + 0xb28) = 0;
    }
    iVar13 = *(int *)(lVar10 + 0x67c);
    *(int *)(lVar10 + 0x67c) = iVar13 + 1;
    if (((iVar13 == 0) && (*(longlong *)(lVar10 + 0xb10) != 0)) && (*(int *)(lVar10 + 0xba8) != 0))
    {
      do {
        (**(code **)**(undefined8 **)(*(longlong *)(lVar10 + 0xba0) + uVar8 * 8))();
        uVar11 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(lVar10 + 0xba8));
    }
    (**(code **)(**(longlong **)(lVar10 + 0x688) + 0x68))
              (*(longlong **)(lVar10 + 0x688),uVar2,1,uVar3,uVar4,0);
  }
  iVar13 = 1;
  if (*(char *)(lVar10 + 0x674) != '\0') {
    iVar13 = 8;
  }
  *(int *)(lVar10 + 0x678) = *(int *)(lVar10 + 0x678) + iVar13;
  *(undefined1 *)(lVar10 + 0x674) = 0;
  if (((*(int *)(lVar10 + 0x680) <= *(int *)(lVar10 + 0x678)) &&
      (*(longlong *)(lVar10 + 0xb10) != 0)) && (*(int *)(lVar10 + 0x684) == 0)) {
    FUN_1800e2ae8(lVar10 + 8,'\0');
  }
LAB_180049eea:
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  piVar1 = (int *)(lVar9 + 0x684);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(lVar9 + 0x680) <= *(int *)(lVar9 + 0x678))) {
    FUN_1800e2ae8(lVar9 + 8,'\0');
  }
  FUN_1800499d0(param_1,param_2,param_3,param_4);
  puVar14 = (undefined4 *)(param_1 + 0x30);
  for (lVar9 = 8; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  return 0;
}

