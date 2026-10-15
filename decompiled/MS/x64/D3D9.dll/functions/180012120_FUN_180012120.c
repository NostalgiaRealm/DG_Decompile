/*
 * FUN_180012120 at 180012120
 * longlong __fastcall FUN_180012120(longlong * param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 180012120-18001231a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180012120(longlong *param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar7 = *(uint *)(param_1 + 2);
  uVar3 = 0;
  uVar8 = (ulonglong)*param_2;
  if (uVar7 != 0) {
    uVar5 = 0;
    do {
      uVar3 = uVar7 + uVar5 >> 1;
      uVar10 = *(ulonglong *)(param_1[1] + (ulonglong)uVar3 * 0x28);
      uVar9 = uVar3;
      if (uVar10 <= uVar8) {
        if (uVar8 <= uVar10) break;
        uVar5 = uVar3 + 1;
        uVar9 = uVar7;
        uVar3 = uVar5;
      }
      uVar7 = uVar9;
    } while (uVar7 != uVar5);
  }
  uVar10 = (ulonglong)uVar3;
  if ((uVar3 == *(uint *)(param_1 + 2)) || (*(ulonglong *)(param_1[1] + uVar10 * 0x28) != uVar8)) {
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    if (iVar1 == (int)param_1[2]) {
      if (iVar1 == 0) {
        uVar7 = 0x10;
      }
      else {
        uVar7 = iVar1 * 2;
      }
      lVar4 = thunk_FUN_1800fbccc((ulonglong)uVar7 * 0x28);
      if (lVar4 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        if ((int)param_1[2] != 0) {
          do {
            *(undefined8 *)(lVar4 + 0x18 + uVar6 * 0x28) = 0;
            *(undefined8 *)(lVar4 + 0x20 + uVar6 * 0x28) = 0;
            lVar2 = param_1[1];
            *(undefined8 *)(lVar4 + uVar6 * 0x28) = *(undefined8 *)(lVar2 + uVar6 * 0x28);
            *(undefined4 *)(lVar4 + 8 + uVar6 * 0x28) = *(undefined4 *)(lVar2 + 8 + uVar6 * 0x28);
            FUN_18001231c((undefined4 *)(lVar4 + (uVar6 * 5 + 2) * 8),
                          (undefined4 *)(lVar2 + 0x10 + uVar6 * 0x28));
            FUN_1800fbcf0(*(LPVOID *)(param_1[1] + 0x18 + uVar6 * 0x28));
            uVar5 = *(uint *)(param_1 + 2);
            uVar9 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar9;
          } while (uVar9 < uVar5);
        }
        for (; uVar5 < uVar7; uVar5 = uVar5 + 1) {
          *(undefined8 *)(lVar4 + 0x18 + (ulonglong)uVar5 * 0x28) = 0;
          *(undefined8 *)(lVar4 + 0x20 + (ulonglong)uVar5 * 0x28) = 0;
        }
        FUN_1800fbcf0((LPVOID)*param_1);
        *param_1 = lVar4;
        param_1[1] = lVar4;
        *(uint *)((longlong)param_1 + 0x14) = uVar7;
      }
    }
    uVar7 = *(uint *)(param_1 + 2);
    if (*(uint *)((longlong)param_1 + 0x14) != uVar7) {
      while (uVar3 < uVar7) {
        lVar2 = param_1[1];
        uVar6 = (ulonglong)(uVar7 - 1);
        *(undefined8 *)(lVar2 + (ulonglong)uVar7 * 0x28) = *(undefined8 *)(lVar2 + uVar6 * 0x28);
        lVar4 = (ulonglong)uVar7 * 5 + 2;
        *(undefined4 *)(lVar2 + -8 + lVar4 * 8) = *(undefined4 *)(lVar2 + 8 + uVar6 * 0x28);
        FUN_18001231c((undefined4 *)(lVar2 + lVar4 * 8),(undefined4 *)(lVar2 + (uVar6 * 5 + 2) * 8))
        ;
        uVar7 = uVar7 - 1;
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      *(uint *)(param_1[1] + 8 + uVar10 * 0x28) = *param_2;
      FUN_18001231c((undefined4 *)(param_1[1] + 0x10 + uVar10 * 0x28),param_3);
      *(ulonglong *)(param_1[1] + uVar10 * 0x28) = uVar8;
    }
  }
  else {
    FUN_18001231c((undefined4 *)(param_1[1] + uVar10 * 0x28 + 0x10),param_3);
  }
  return param_1[1] + uVar10 * 0x28 + 8;
}

