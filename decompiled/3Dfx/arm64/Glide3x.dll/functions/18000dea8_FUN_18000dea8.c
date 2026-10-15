/*
 * FUN_18000dea8 at 18000dea8
 * bool __cdecl FUN_18000dea8(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 18000dea8-18000e297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000dea8(longlong param_1,byte param_2,byte param_3)

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
  
  cVar4 = *(char *)(param_1 + 0x32f0);
  bVar5 = *(byte *)(param_1 + 0x345b) | param_2;
  *(byte *)(param_1 + 0x345b) = bVar5;
  if ((cVar4 != '\0') || (bVar1 = true, bVar5 != 0)) {
    lVar12 = *(longlong *)(param_1 + 0x3358);
    iVar11 = 1;
    if (cVar4 != '\0') {
      iVar11 = 2;
    }
    FUN_180048c80(lVar12 + 0x40,&local_70,iVar11,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500) + 0x18),
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb78));
    if (local_68 == (undefined8 *)0x0) {
      lVar8 = 0;
LAB_18000df5c:
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
      uVar13 = *(ulonglong *)(lVar9 + 0xb80);
      if (uVar13 < *(ulonglong *)(lVar9 + 0xb78)) {
        FUN_180047910(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500),uVar13);
        FUN_180048c80(lVar12 + 0x40,&local_70,iVar11,
                      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500) + 0x18),
                      *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb78));
        if (local_68 == (undefined8 *)0x0) {
          lVar8 = 0;
        }
        else {
          if (cVar4 != '\0') {
            thunk_FUN_1800010d8(local_68,(undefined8 *)(param_1 + 0x2c90),0x660);
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
        thunk_FUN_1800010d8(local_68,(undefined8 *)(param_1 + 0x2c90),0x660);
      }
      if (*(int *)(lVar12 + 0x34) != 0) {
        *(undefined4 *)(lVar12 + 0x34) = 0;
      }
      lVar8 = local_70;
      if (local_70 == 0) goto LAB_18000df5c;
    }
    bVar6 = lVar8 == 0;
    bVar1 = !bVar6;
    *(byte *)(param_1 + 0x32f0) = *(byte *)(param_1 + 0x32f0) & bVar6;
    *(byte *)(param_1 + 0x345b) = *(byte *)(param_1 + 0x345b) & bVar6;
    if (lVar8 != 0) {
      FUN_18004f3b0(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),0,lVar8);
    }
  }
  if ((param_2 & 1) != 0) {
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x58))();
    FUN_18004f3b0(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),1,lVar12);
  }
  if (((param_3 & 1) == 0) && (bVar6 = true, (param_2 & 1) == 0)) goto LAB_18000e270;
  bVar5 = *(byte *)(param_1 + 0x345c) | param_2;
  *(byte *)(param_1 + 0x345c) = bVar5;
  if (*(char *)(param_1 + 0x32f2) == '\0') {
    bVar6 = true;
    if (bVar5 != 0) goto LAB_18000e0c4;
  }
  else {
    uVar13 = 0;
    uVar10 = 0;
    if (*(int *)(param_1 + 0xe8) != 0) {
      do {
        *(float *)(param_1 + 0x3460 + uVar13 * 4) =
             (float)*(byte *)(param_1 + 0x2a68 + uVar13) / 255.0;
        uVar10 = *(uint *)(param_1 + 0xe8);
        uVar2 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar2;
      } while (uVar2 < uVar10);
    }
    *(float *)(param_1 + (ulonglong)uVar10 * 4 + 0x3460) =
         (float)*(byte *)(param_1 + (ulonglong)(uVar10 - 1) + 0x2a68) / 255.0;
LAB_18000e0c4:
    cVar4 = *(char *)(param_1 + 0x32f2);
    lVar12 = *(longlong *)(param_1 + 0x3378);
    uVar13 = (ulonglong)(*(int *)(param_1 + 0xe8) * 4 + 4);
    iVar11 = 1;
    if (cVar4 != '\0') {
      iVar11 = 2;
    }
    FUN_180048c80(lVar12 + 0x40,&local_70,iVar11,
                  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500) + 0x18),
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb78));
    if (local_68 == (undefined8 *)0x0) {
      lVar8 = 0;
LAB_18000e138:
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
      uVar3 = *(ulonglong *)(lVar9 + 0xb80);
      if (uVar3 < *(ulonglong *)(lVar9 + 0xb78)) {
        FUN_180047910(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500),uVar3);
        FUN_180048c80(lVar12 + 0x40,&local_70,iVar11,
                      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500) + 0x18),
                      *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb78));
        if (local_68 == (undefined8 *)0x0) {
          lVar8 = 0;
        }
        else {
          if (cVar4 != '\0') {
            thunk_FUN_1800010d8(local_68,(undefined8 *)(param_1 + 0x3460),uVar13);
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
        thunk_FUN_1800010d8(local_68,(undefined8 *)(param_1 + 0x3460),uVar13);
      }
      if (*(int *)(lVar12 + 0x34) != 0) {
        *(undefined4 *)(lVar12 + 0x34) = 0;
      }
      lVar8 = local_70;
      if (local_70 == 0) goto LAB_18000e138;
    }
    bVar7 = lVar8 == 0;
    bVar6 = !bVar7;
    *(byte *)(param_1 + 0x32f2) = *(byte *)(param_1 + 0x32f2) & bVar7;
    *(byte *)(param_1 + 0x345c) = *(byte *)(param_1 + 0x345c) & bVar7;
    if (lVar8 == 0) goto LAB_18000e270;
    FUN_18004f478(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),5,lVar8);
  }
  FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                *(ulonglong *)(param_1 + 0x3368),0,1,0x80);
  FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                *(ulonglong *)(param_1 + 0x3370),0,1,0x80);
  lVar12 = (**(code **)(**(longlong **)(param_1 + 0x3368) + 0x58))();
  FUN_18004f478(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),3,lVar12);
  lVar12 = (**(code **)(**(longlong **)(param_1 + 0x3370) + 0x58))();
  FUN_18004f478(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),4,lVar12);
LAB_18000e270:
  return bVar1 && bVar6;
}

