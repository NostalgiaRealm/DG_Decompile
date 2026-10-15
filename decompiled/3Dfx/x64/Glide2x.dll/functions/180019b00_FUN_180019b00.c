/*
 * FUN_180019b00 at 180019b00
 * undefined8 __fastcall FUN_180019b00(longlong param_1, byte param_2, char param_3)
 * Address ranges: 180019b00-180019d75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180019b00(longlong param_1,byte param_2,char param_3)

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
  
  *(byte *)(param_1 + 0x32db) = *(byte *)(param_1 + 0x32db) | param_2;
  bVar1 = *(byte *)(param_1 + 0x3170);
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  uVar6 = 1;
  if ((bVar1 != 0) || (bVar9 = true, *(char *)(param_1 + 0x32db) != '\0')) {
    lVar2 = FUN_18001935c(param_1,*(longlong *)(param_1 + 0x31d8),(undefined8 *)(param_1 + 0x2bf0),
                          0x580,bVar1);
    bVar9 = lVar2 != 0;
    bVar10 = lVar2 == 0;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar10);
    *(byte *)(param_1 + 0x3170) = *(byte *)(param_1 + 0x3170) & bVar10;
    *(byte *)(param_1 + 0x32db) = *(byte *)(param_1 + 0x32db) & bVar10;
    if (lVar2 != 0) {
      uVar3 = FUN_180048198(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),0,lVar2);
    }
  }
  if (param_2 != 0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x31e0) + 0x58))();
    uVar3 = FUN_180048198(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),1,lVar2);
  }
  if ((param_3 == '\0') && (bVar10 = true, param_2 == 0)) goto LAB_180019d5b;
  *(byte *)(param_1 + 0x32dc) = *(byte *)(param_1 + 0x32dc) | param_2;
  if (*(char *)(param_1 + 0x3172) == '\0') {
    bVar10 = true;
    if (*(char *)(param_1 + 0x32dc) != '\0') goto LAB_180019c44;
  }
  else {
    uVar8 = 0;
    uVar5 = 0;
    if (*(int *)(param_1 + 0xe8) != 0) {
      do {
        *(float *)(param_1 + 0x32e0 + uVar8 * 4) =
             (float)*(byte *)(param_1 + 0x29d0 + uVar8) / 255.0;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar5 = *(uint *)(param_1 + 0xe8);
      } while (uVar7 < uVar5);
    }
    *(float *)(param_1 + 0x32e0 + (ulonglong)uVar5 * 4) =
         (float)*(byte *)((ulonglong)(uVar5 - 1) + 0x29d0 + param_1) / 255.0;
LAB_180019c44:
    lVar2 = FUN_18001935c(param_1,*(longlong *)(param_1 + 0x31f8),(undefined8 *)(param_1 + 0x32e0),
                          *(int *)(param_1 + 0xe8) * 4 + 4,*(byte *)(param_1 + 0x3172));
    bVar10 = lVar2 != 0;
    *(byte *)(param_1 + 0x3172) = *(byte *)(param_1 + 0x3172) & lVar2 == 0;
    *(byte *)(param_1 + 0x32dc) = *(byte *)(param_1 + 0x32dc) & lVar2 == 0;
    uVar3 = 0;
    if (lVar2 == 0) goto LAB_180019d5b;
    FUN_180048220(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),5,lVar2);
  }
  FUN_180047a5c(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                *(ulonglong *)(param_1 + 0x31e8),0,1,0x80);
  FUN_180047a5c(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                *(ulonglong *)(param_1 + 0x31f0),0,1,0x80);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x31e8) + 0x58))();
  FUN_180048220(lVar2,3,lVar4);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x31f0) + 0x58))();
  uVar3 = FUN_180048220(lVar2,4,lVar4);
LAB_180019d5b:
  if ((!bVar9) || (!bVar10)) {
    uVar6 = 0;
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),uVar6);
}

