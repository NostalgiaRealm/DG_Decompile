/*
 * FUN_180087cac at 180087cac
 * undefined __fastcall FUN_180087cac(undefined8 param_1, longlong param_2, longlong * param_3)
 * Address ranges: 180087cac-180087fe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180087cac(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar4;
  
  uVar6 = 0;
  lVar1 = param_2 + 0x20;
  uVar7 = uVar6;
  do {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x140 + uVar7 * 4));
    *(undefined4 *)(param_2 + 0x140 + uVar7 * 4) = 0;
    uVar7 = uVar7 + 1;
    uVar8 = uVar6;
  } while (uVar7 != 0x20);
  do {
    uVar3 = *(uint *)(param_2 + 0x100 + uVar8 * 4);
    if ((uVar3 & 0x3f00) == 0) {
      FUN_1800ec960(lVar1,uVar3);
      *(undefined4 *)(param_2 + 0x100 + uVar8 * 4) = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x10);
  uVar7 = uVar6;
  if ((*(uint *)(param_2 + 0x238) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x238));
    *(undefined4 *)(param_2 + 0x238) = 0;
  }
  do {
    uVar3 = *(uint *)(param_2 + 0x2b4 + uVar7 * 4);
    if ((uVar3 & 0x3f00) == 0) {
      FUN_1800ec960(lVar1,uVar3);
      *(undefined4 *)(param_2 + 0x2b4 + uVar7 * 4) = 0;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 4);
  if ((*(uint *)(param_2 + 0x2c4) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x2c4));
    *(undefined4 *)(param_2 + 0x2c4) = 0;
  }
  uVar3 = (uint)*(byte *)(*(longlong *)(param_2 + 0x10) + 0x4a6c);
  if (uVar3 == 1) {
    FUN_180087bc4(0,param_2,param_3);
    lVar5 = *(longlong *)(param_2 + 0x10);
    FUN_18007affc(lVar5,param_2,param_3,4,
                  ~-(*(char *)(lVar5 + 0x443) != '\0') & 0xeU | *(char *)(lVar5 + 0x442) == '\0');
    bVar2 = ~*(byte *)(*(longlong *)(param_2 + 0x10) + 0x444);
    uVar4 = CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar2);
    FUN_18007affc(uVar4,param_2,param_3,2,bVar2);
    bVar2 = ~*(byte *)(*(longlong *)(param_2 + 0x10) + 0x445);
    lVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar2);
    FUN_18007affc(lVar5,param_2,param_3,3,bVar2);
    do {
      bVar2 = ~*(byte *)(uVar6 + 0x446 + *(longlong *)(param_2 + 0x10));
      lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar2);
      FUN_18007affc(lVar5,param_2,param_3,(int)uVar6 + 5,bVar2);
      uVar3 = *(uint *)(param_2 + 0x210 + uVar6 * 4);
      if ((uVar3 & 0x3f00) == 0) {
        lVar5 = lVar1;
        FUN_1800ec960(lVar1,uVar3);
        *(undefined4 *)(param_2 + 0x210 + uVar6 * 4) = 0;
      }
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar3;
    } while (uVar3 < 8);
  }
  else {
    uVar3 = uVar3 - 2;
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      if (uVar3 != 1) {
        return;
      }
      FUN_18007b668(1,param_2,param_3);
      return;
    }
    FUN_180087bc4(0,param_2,param_3);
    bVar2 = ~*(byte *)(*(longlong *)(param_2 + 0x10) + 0x444);
    uVar4 = CONCAT71((int7)(uVar7 >> 8),bVar2);
    FUN_18007b56c(uVar4,param_2,param_3,*(uint *)(param_2 + 0x208),bVar2,2);
    bVar2 = ~*(byte *)(*(longlong *)(param_2 + 0x10) + 0x445);
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar2);
    FUN_18007b56c(uVar4,param_2,param_3,*(uint *)(param_2 + 0x20c),bVar2,3);
    uVar7 = CONCAT71((int7)((ulonglong)uVar4 >> 8),
                     ~-(*(char *)(*(longlong *)(param_2 + 0x10) + 0x443) != '\0')) &
            0xffffffffffffff0e;
    bVar2 = (byte)uVar7 | *(char *)(*(longlong *)(param_2 + 0x10) + 0x442) == '\0';
    lVar5 = CONCAT71((int7)(uVar7 >> 8),bVar2);
    FUN_18007b56c(lVar5,param_2,param_3,*(uint *)(param_2 + 0x200),bVar2,4);
    do {
      bVar2 = ~*(byte *)(uVar6 + 0x446 + *(longlong *)(param_2 + 0x10));
      lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar2);
      FUN_18007b56c(lVar5,param_2,param_3,*(uint *)(param_2 + 0x210 + uVar6 * 4),bVar2,
                    (int)uVar6 + 5);
      uVar3 = *(uint *)(param_2 + 0x210 + uVar6 * 4);
      if ((uVar3 & 0x3f00) == 0) {
        lVar5 = lVar1;
        FUN_1800ec960(lVar1,uVar3);
        *(undefined4 *)(param_2 + 0x210 + uVar6 * 4) = 0;
      }
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar3;
    } while (uVar3 < 8);
  }
  if ((*(uint *)(param_2 + 0x200) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x200));
    *(undefined4 *)(param_2 + 0x200) = 0;
  }
  if ((*(uint *)(param_2 + 0x204) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x204));
    *(undefined4 *)(param_2 + 0x204) = 0;
  }
  if ((*(uint *)(param_2 + 0x208) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x208));
    *(undefined4 *)(param_2 + 0x208) = 0;
  }
  if ((*(uint *)(param_2 + 0x20c) & 0x3f00) == 0) {
    FUN_1800ec960(lVar1,*(uint *)(param_2 + 0x20c));
    *(undefined4 *)(param_2 + 0x20c) = 0;
  }
  return;
}

