/*
 * FUN_18001a780 at 18001a780
 * bool __cdecl FUN_18001a780(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 18001a780-18001ab6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18001a780(longlong param_1,byte param_2,byte param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong local_70;
  undefined8 *local_68;
  
  cVar4 = *(char *)(param_1 + 0x3170);
  bVar5 = *(byte *)(param_1 + 0x32db) | param_2;
  *(byte *)(param_1 + 0x32db) = bVar5;
  if ((cVar4 != '\0') || (bVar1 = true, bVar5 != 0)) {
    lVar12 = *(longlong *)(param_1 + 0x31d8);
    iVar11 = 1;
    if (cVar4 != '\0') {
      iVar11 = 2;
    }
    FUN_180045f40(lVar12 + 0x40,&local_70,iVar11,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500) + 0x18),
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0xb78));
    if (local_68 == (undefined8 *)0x0) {
      lVar8 = 0;
LAB_18001a834:
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
      uVar13 = *(ulonglong *)(lVar9 + 0xb80);
      if (uVar13 < *(ulonglong *)(lVar9 + 0xb78)) {
        FUN_180044bd0(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500),uVar13);
        FUN_180045f40(lVar12 + 0x40,&local_70,iVar11,
                      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500) + 0x18),
                      *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0xb78));
        if (local_68 == (undefined8 *)0x0) {
          lVar8 = 0;
        }
        else {
          if (cVar4 != '\0') {
            thunk_FUN_180001218(local_68,(undefined8 *)(param_1 + 0x2bf0),0x580);
          }
          lVar8 = local_70;
          if (*(int *)(lVar12 + 0x34) != 0) {
            *(int *)(lVar12 + 0x34) = 0;
          }
        }
      }
    }
    else {
      if (cVar4 != '\0') {
        thunk_FUN_180001218(local_68,(undefined8 *)(param_1 + 0x2bf0),0x580);
      }
      if (*(int *)(lVar12 + 0x34) != 0) {
        *(undefined4 *)(lVar12 + 0x34) = 0;
      }
      lVar8 = local_70;
      if (local_70 == 0) goto LAB_18001a834;
    }
    bVar6 = lVar8 == 0;
    bVar1 = !bVar6;
    *(byte *)(param_1 + 0x3170) = *(byte *)(param_1 + 0x3170) & bVar6;
    *(byte *)(param_1 + 0x32db) = *(byte *)(param_1 + 0x32db) & bVar6;
    if (lVar8 != 0) {
      FUN_18004c670(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),0,lVar8);
    }
  }
  if ((param_2 & 1) != 0) {
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x31e0) + 0x58))();
    FUN_18004c670(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),1,lVar12);
  }
  if (((param_3 & 1) == 0) && (bVar6 = true, (param_2 & 1) == 0)) goto LAB_18001ab48;
  bVar5 = *(byte *)(param_1 + 0x32dc) | param_2;
  *(byte *)(param_1 + 0x32dc) = bVar5;
  if (*(char *)(param_1 + 0x3172) == '\0') {
    bVar6 = true;
    if (bVar5 != 0) goto LAB_18001a99c;
  }
  else {
    uVar13 = 0;
    uVar10 = 0;
    if (*(int *)(param_1 + 0xe8) != 0) {
      do {
        *(float *)(param_1 + 0x32e0 + uVar13 * 4) =
             (float)*(byte *)(param_1 + 0x29d0 + uVar13) / 255.0;
        uVar10 = *(uint *)(param_1 + 0xe8);
        uVar2 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar2;
      } while (uVar2 < uVar10);
    }
    *(float *)(param_1 + (ulonglong)uVar10 * 4 + 0x32e0) =
         (float)*(byte *)(param_1 + (ulonglong)(uVar10 - 1) + 0x29d0) / 255.0;
LAB_18001a99c:
    cVar4 = *(char *)(param_1 + 0x3172);
    lVar12 = *(longlong *)(param_1 + 0x31f8);
    uVar13 = (ulonglong)(*(int *)(param_1 + 0xe8) * 4 + 4);
    iVar11 = 1;
    if (cVar4 != '\0') {
      iVar11 = 2;
    }
    FUN_180045f40(lVar12 + 0x40,&local_70,iVar11,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500) + 0x18),
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0xb78));
    if (local_68 == (undefined8 *)0x0) {
      lVar8 = 0;
LAB_18001aa10:
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
      uVar3 = *(ulonglong *)(lVar9 + 0xb80);
      if (uVar3 < *(ulonglong *)(lVar9 + 0xb78)) {
        FUN_180044bd0(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500),uVar3);
        FUN_180045f40(lVar12 + 0x40,&local_70,iVar11,
                      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500) + 0x18),
                      *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0xb78));
        if (local_68 == (undefined8 *)0x0) {
          lVar8 = 0;
        }
        else {
          if (cVar4 != '\0') {
            thunk_FUN_180001218(local_68,(undefined8 *)(param_1 + 0x32e0),uVar13);
          }
          lVar8 = local_70;
          if (*(int *)(lVar12 + 0x34) != 0) {
            *(int *)(lVar12 + 0x34) = 0;
          }
        }
      }
    }
    else {
      if (cVar4 != '\0') {
        thunk_FUN_180001218(local_68,(undefined8 *)(param_1 + 0x32e0),uVar13);
      }
      if (*(int *)(lVar12 + 0x34) != 0) {
        *(undefined4 *)(lVar12 + 0x34) = 0;
      }
      lVar8 = local_70;
      if (local_70 == 0) goto LAB_18001aa10;
    }
    bVar7 = lVar8 == 0;
    bVar6 = !bVar7;
    *(byte *)(param_1 + 0x3172) = *(byte *)(param_1 + 0x3172) & bVar7;
    *(byte *)(param_1 + 0x32dc) = *(byte *)(param_1 + 0x32dc) & bVar7;
    if (lVar8 == 0) goto LAB_18001ab48;
    FUN_18004c738(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),5,lVar8);
  }
  FUN_18004bee8(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                *(ulonglong *)(param_1 + 0x31e8),0,1,0x80);
  FUN_18004bee8(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                *(ulonglong *)(param_1 + 0x31f0),0,1,0x80);
  lVar12 = (**(code **)(**(longlong **)(param_1 + 0x31e8) + 0x58))();
  FUN_18004c738(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),3,lVar12);
  lVar12 = (**(code **)(**(longlong **)(param_1 + 0x31f0) + 0x58))();
  FUN_18004c738(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),4,lVar12);
LAB_18001ab48:
  return bVar1 && bVar6;
}

