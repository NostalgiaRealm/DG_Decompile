/*
 * FUN_18001d1ec at 18001d1ec
 * undefined __fastcall FUN_18001d1ec(longlong param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 18001d1ec-18001d337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d1ec(longlong param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  uint uVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint local_res10 [2];
  float local_88 [32];
  
  local_res10[0] = param_2;
  if (*(char *)(param_1 + 0x40c) == '\0') {
    plVar9 = (longlong *)(param_1 + 0x318);
    FUN_18001d790(plVar9,local_res10,param_3);
    pfVar7 = FUN_18001e730(plVar9,local_88,(longlong)param_3);
    FUN_18001d6a0((longlong *)(param_1 + 0x330),local_res10,(undefined8 *)pfVar7);
    if (*(uint *)(param_1 + 0x360) == 0) {
      return;
    }
    uVar12 = 0;
    while (iVar11 = (int)uVar12, *(uint *)(*(longlong *)(param_1 + 0x358) + uVar12 * 4) != param_2)
    {
      uVar12 = (ulonglong)(iVar11 + 1U);
      if (*(uint *)(param_1 + 0x360) <= iVar11 + 1U) {
        return;
      }
    }
    if (iVar11 == -1) {
      return;
    }
    if (7 < iVar11) {
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xc0))
              (*(longlong **)(param_1 + 0x28),uVar12,param_3);
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)*(uint *)(param_1 + 0x408) * 8);
  *(undefined1 *)((longlong)param_3 + 0x6d) = 1;
  uVar1 = *(uint *)(lVar2 + 0x4ac8);
  if (uVar1 != 0) {
    uVar12 = (ulonglong)param_2;
    uVar10 = 0;
    lVar3 = *(longlong *)(lVar2 + 0x4ac0);
    uVar13 = uVar1;
    do {
      uVar6 = uVar13 + uVar10 >> 1;
      uVar8 = (ulonglong)uVar6;
      uVar4 = *(ulonglong *)(lVar3 + (ulonglong)uVar6 * 0x80);
      if (uVar4 <= uVar12) {
        if (uVar12 <= uVar4) break;
        uVar10 = uVar6 + 1;
        uVar8 = (ulonglong)uVar10;
        uVar6 = uVar13;
      }
      uVar13 = uVar6;
    } while (uVar13 != uVar10);
    if ((((uint)uVar8 != uVar1) && (uVar8 = uVar8 * 0x80, *(ulonglong *)(uVar8 + lVar3) == uVar12))
       && ((uVar8 | 0xc) + lVar3 != 0)) {
      uVar5 = *(undefined1 *)((uVar8 | 0x78) + lVar3);
      goto LAB_18001d292;
    }
  }
  uVar5 = 0;
LAB_18001d292:
  *(undefined1 *)((longlong)param_3 + 0x6c) = uVar5;
  FUN_18001d9f4((longlong *)(lVar2 + 0x4ab8),local_res10,param_3);
  return;
}

