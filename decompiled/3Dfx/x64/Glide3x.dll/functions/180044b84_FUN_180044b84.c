/*
 * FUN_180044b84 at 180044b84
 * longlong * __fastcall FUN_180044b84(longlong param_1, longlong * param_2, int param_3, longlong param_4, undefined8 param_5)
 * Address ranges: 180044b84-180044e7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_180044b84(longlong param_1,longlong *param_2,int param_3,longlong param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    if (lVar3 == 0) {
LAB_180044c00:
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_1800594c4(*(longlong *)(param_1 + 0x48),*(int *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x80),*(ulonglong *)(param_1 + 0x88),
                      *(longlong **)(param_1 + 0x18),*(ulonglong *)(param_1 + 0x20));
      }
      bVar6 = FUN_180059278(*(longlong **)(param_1 + 0x48),*(uint *)(param_1 + 0x30),
                            (longlong *)(param_1 + 0x70));
      if (!bVar6) {
        puVar4 = *(undefined8 **)(param_1 + 0x50);
        bVar6 = false;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,*(undefined4 *)(param_1 + 0x10));
          bVar6 = FUN_180059278(*(longlong **)(param_1 + 0x48),*(uint *)(param_1 + 0x30),
                                (longlong *)(param_1 + 0x70));
        }
      }
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
      if (bVar6 == false) goto LAB_180044e56;
    }
    else {
      if (param_3 == 1) {
        param_2[1] = *(longlong *)(param_1 + 0x70);
        *param_2 = *(longlong *)(param_1 + 0x80);
        param_2[2] = lVar3;
        goto LAB_180044e56;
      }
      if (param_3 != 2) goto LAB_180044e56;
      if (((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
          (uVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))(),
          uVar8 < *(ulonglong *)(param_1 + 0x20))) || (*(longlong *)(param_1 + 0x18) == 0))
      goto LAB_180044c00;
    }
    param_2[1] = *(longlong *)(param_1 + 0x70);
    *param_2 = *(longlong *)(param_1 + 0x80);
    param_2[2] = *(longlong *)(param_1 + 0x78);
    goto LAB_180044e56;
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
LAB_180044cd0:
    if ((*(int *)(param_1 + 0x60) != 0) || (cVar7 = FUN_180044eb4(param_1), cVar7 != '\0')) {
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x58) + 0x20 + (ulonglong)*(uint *)(param_1 + 0x68) * 0x30) =
           *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x58) + 0x28 + (ulonglong)*(uint *)(param_1 + 0x68) * 0x30) =
           *(undefined8 *)(param_1 + 0x20);
      lVar3 = *(longlong *)(param_1 + 0x58);
      uVar10 = *(int *)(param_1 + 0x30) + 0xffU & 0xffffff00;
      if (uVar10 << 10 <
          uVar10 + *(int *)((ulonglong)*(uint *)(param_1 + 0x68) * 0x30 + 0x18 + lVar3)) {
        uVar8 = (ulonglong)(*(uint *)(param_1 + 0x68) + 1) % (ulonglong)*(uint *)(param_1 + 0x60);
        plVar5 = *(longlong **)(lVar3 + 0x20 + uVar8 * 0x30);
        if ((plVar5 == (longlong *)0x0) ||
           (uVar9 = (**(code **)(*plVar5 + 0x40))(),
           uVar9 < *(ulonglong *)(lVar3 + 0x28 + uVar8 * 0x30))) {
          cVar7 = FUN_180044eb4(param_1);
          if (cVar7 == '\0') goto LAB_180044e27;
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        }
        else {
          *(int *)(param_1 + 0x68) = (int)uVar8;
          *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x18 + uVar8 * 0x30) = 0;
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x58);
      lVar13 = (ulonglong)*(uint *)(param_1 + 0x68) * 0x30;
      lVar12 = *(longlong *)(lVar13 + 0x10 + lVar3);
      *(longlong *)(param_1 + 0x80) = lVar12;
      lVar11 = (ulonglong)*(uint *)(lVar13 + 0x18 + lVar3) + *(longlong *)(lVar13 + lVar3);
      param_2[2] = lVar12;
      iVar2 = *(int *)(param_1 + 0x30);
      *(longlong *)(param_1 + 0x70) = lVar11;
      *param_2 = lVar11;
      lVar12 = (ulonglong)*(uint *)(lVar13 + 0x18 + lVar3) + *(longlong *)(lVar13 + 8 + lVar3);
      *(longlong *)(param_1 + 0x78) = lVar12;
      piVar1 = (int *)(lVar13 + 0x18 + lVar3);
      *piVar1 = *piVar1 + (iVar2 + 0xffU & 0xffffff00);
      param_2[1] = lVar12;
    }
  }
  else if (param_3 == 1) {
    *(undefined8 *)
     (*(longlong *)(param_1 + 0x58) + 0x20 + (ulonglong)*(uint *)(param_1 + 0x68) * 0x30) =
         *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)
     (*(longlong *)(param_1 + 0x58) + 0x28 + (ulonglong)*(uint *)(param_1 + 0x68) * 0x30) =
         *(undefined8 *)(param_1 + 0x20);
    param_2[1] = *(longlong *)(param_1 + 0x78);
    *param_2 = *(longlong *)(param_1 + 0x70);
    param_2[2] = *(longlong *)(param_1 + 0x80);
  }
  else if (param_3 == 2) goto LAB_180044cd0;
LAB_180044e27:
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(longlong *)
     (*(longlong *)(param_1 + 0x58) + 0x20 + (ulonglong)*(uint *)(param_1 + 0x68) * 0x30) = param_4;
    *(undefined8 *)
     (*(longlong *)(param_1 + 0x58) + 0x28 + (ulonglong)*(uint *)(param_1 + 0x68) * 0x30) = param_5;
  }
LAB_180044e56:
  if (param_4 != 0) {
    *(longlong *)(param_1 + 0x18) = param_4;
    *(undefined8 *)(param_1 + 0x20) = param_5;
  }
  if (param_2[2] != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return param_2;
}

