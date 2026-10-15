/*
 * FUN_18000ca68 at 18000ca68
 * undefined8 __fastcall FUN_18000ca68(longlong param_1, byte param_2, char param_3)
 * Address ranges: 18000ca68-18000ccdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000ca68(longlong param_1,byte param_2,char param_3)

{
  byte bVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  
  *(byte *)(param_1 + 0x345b) = *(byte *)(param_1 + 0x345b) | param_2;
  bVar1 = *(byte *)(param_1 + 0x32f0);
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  uVar6 = 1;
  if ((bVar1 != 0) || (bVar9 = true, *(char *)(param_1 + 0x345b) != '\0')) {
    lVar2 = FUN_18000c2c4(param_1,*(longlong *)(param_1 + 0x3358),(undefined8 *)(param_1 + 0x2c90),
                          0x660,bVar1);
    bVar9 = lVar2 != 0;
    bVar10 = lVar2 == 0;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar10);
    *(byte *)(param_1 + 0x32f0) = *(byte *)(param_1 + 0x32f0) & bVar10;
    *(byte *)(param_1 + 0x345b) = *(byte *)(param_1 + 0x345b) & bVar10;
    if (lVar2 != 0) {
      uVar3 = FUN_18004a7a4(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),0,lVar2);
    }
  }
  if (param_2 != 0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x58))();
    uVar3 = FUN_18004a7a4(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),1,lVar2);
  }
  if ((param_3 == '\0') && (bVar10 = true, param_2 == 0)) goto LAB_18000ccc3;
  *(byte *)(param_1 + 0x345c) = *(byte *)(param_1 + 0x345c) | param_2;
  if (*(char *)(param_1 + 0x32f2) == '\0') {
    bVar10 = true;
    if (*(char *)(param_1 + 0x345c) != '\0') goto LAB_18000cbac;
  }
  else {
    uVar8 = 0;
    uVar5 = 0;
    if (*(int *)(param_1 + 0xe8) != 0) {
      do {
        *(float *)(param_1 + 0x3460 + uVar8 * 4) =
             (float)*(byte *)(param_1 + 0x2a68 + uVar8) / 255.0;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar5 = *(uint *)(param_1 + 0xe8);
      } while (uVar7 < uVar5);
    }
    *(float *)(param_1 + 0x3460 + (ulonglong)uVar5 * 4) =
         (float)*(byte *)((ulonglong)(uVar5 - 1) + 0x2a68 + param_1) / 255.0;
LAB_18000cbac:
    lVar2 = FUN_18000c2c4(param_1,*(longlong *)(param_1 + 0x3378),(undefined8 *)(param_1 + 0x3460),
                          *(int *)(param_1 + 0xe8) * 4 + 4,*(byte *)(param_1 + 0x32f2));
    bVar10 = lVar2 != 0;
    *(byte *)(param_1 + 0x32f2) = *(byte *)(param_1 + 0x32f2) & lVar2 == 0;
    *(byte *)(param_1 + 0x345c) = *(byte *)(param_1 + 0x345c) & lVar2 == 0;
    uVar3 = 0;
    if (lVar2 == 0) goto LAB_18000ccc3;
    FUN_18004a82c(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),5,lVar2);
  }
  FUN_18004a068(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                *(ulonglong *)(param_1 + 0x3368),0,1,0x80);
  FUN_18004a068(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                *(ulonglong *)(param_1 + 0x3370),0,1,0x80);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x3368) + 0x58))();
  FUN_18004a82c(lVar2,3,lVar4);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x3370) + 0x58))();
  uVar3 = FUN_18004a82c(lVar2,4,lVar4);
LAB_18000ccc3:
  if ((!bVar9) || (!bVar10)) {
    uVar6 = 0;
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),uVar6);
}

