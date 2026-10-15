/*
 * FUN_1800bfe04 at 1800bfe04
 * undefined __fastcall FUN_1800bfe04(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4, undefined8 * param_5)
 * Address ranges: 1800bfe04-1800bffd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800bfe04(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  if (iVar2 == (int)param_1[2]) {
    if (iVar2 == 0) {
      uVar7 = 0x10;
    }
    else {
      uVar7 = iVar2 * 2;
    }
    lVar3 = thunk_FUN_1800fbccc((ulonglong)uVar7 * 0x898 + 0x7f);
    uVar6 = 0;
    if (lVar3 != 0) {
      uVar8 = lVar3 + 0x7fU & 0xffffffffffffff80;
      uVar5 = 0;
      if ((int)param_1[2] != 0) {
        do {
          puVar1 = (undefined8 *)(uVar8 + uVar6 * 0x898);
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          *(undefined4 *)((longlong)puVar1 + 0x874) = 0;
          puVar1[0x10f] = 0;
          puVar1[0x110] = 0;
          puVar1[0x111] = 0;
          puVar1[0x112] = 0;
          *(undefined2 *)(puVar1 + 5) = 0xffff;
          FUN_1800fbec0(puVar1,(undefined8 *)(uVar6 * 0x898 + param_1[1]),0x898);
          uVar5 = *(uint *)(param_1 + 2);
          uVar9 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
        } while (uVar9 < uVar5);
      }
      if (uVar5 < uVar7) {
        uVar6 = (ulonglong)uVar5;
        do {
          lVar4 = uVar6 * 0x898;
          uVar5 = uVar5 + 1;
          uVar6 = uVar6 + 1;
          *(undefined8 *)(uVar8 + 0x10 + lVar4) = 0;
          *(undefined8 *)(uVar8 + 0x18 + lVar4) = 0;
          *(undefined8 *)(uVar8 + 0x20 + lVar4) = 0;
          *(undefined4 *)(uVar8 + 0x874 + lVar4) = 0;
          *(undefined8 *)(uVar8 + 0x878 + lVar4) = 0;
          *(undefined8 *)(uVar8 + 0x880 + lVar4) = 0;
          *(undefined8 *)(uVar8 + 0x888 + lVar4) = 0;
          *(undefined8 *)(uVar8 + 0x890 + lVar4) = 0;
          *(undefined2 *)(uVar8 + 0x28 + lVar4) = 0xffff;
        } while (uVar5 < uVar7);
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *param_1 = lVar3;
      param_1[1] = uVar8;
      *(uint *)((longlong)param_1 + 0x14) = uVar7;
    }
  }
  uVar7 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar7) {
    while (param_2 < uVar7) {
      uVar6 = (ulonglong)uVar7;
      uVar7 = uVar7 - 1;
      FUN_1800fbec0((undefined8 *)(uVar6 * 0x898 + param_1[1]),
                    (undefined8 *)((ulonglong)uVar7 * 0x898 + param_1[1]),0x898);
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    lVar3 = (ulonglong)param_2 * 0x898;
    *(undefined8 *)(lVar3 + 8 + param_1[1]) = *param_4;
    FUN_1800fbec0((undefined8 *)(param_1[1] + 0x10 + lVar3),param_5,0x888);
    *(undefined8 *)(lVar3 + param_1[1]) = param_3;
  }
  return;
}

