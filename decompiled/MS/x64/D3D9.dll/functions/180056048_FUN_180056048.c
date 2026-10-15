/*
 * FUN_180056048 at 180056048
 * longlong * __fastcall FUN_180056048(undefined8 * param_1, longlong * param_2, ulonglong param_3, ulonglong param_4)
 * Address ranges: 180056048-1800561b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180056048(undefined8 *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  
  uVar9 = param_3 & param_1[1];
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar10 = *(uint *)(param_1 + 4);
  if (uVar10 != 0) {
    uVar7 = 0;
    do {
      uVar3 = uVar10 + uVar7 >> 1;
      uVar4 = (ulonglong)uVar3;
      uVar1 = *(ulonglong *)(param_1[3] + 8 + (ulonglong)uVar3 * 0x40);
      bVar11 = uVar1 < param_4;
      if ((bVar11 || uVar1 == param_4) &&
         ((uVar1 != param_4 ||
          (uVar1 = *(ulonglong *)(param_1[3] + (ulonglong)uVar3 * 0x40), bVar11 = uVar1 < uVar9,
          uVar1 <= uVar9)))) {
        if (!bVar11) break;
        uVar7 = uVar3 + 1;
        uVar4 = (ulonglong)uVar7;
        uVar3 = uVar10;
      }
      uVar10 = uVar3;
    } while (uVar10 != uVar7);
  }
  if ((int)uVar4 != *(int *)(param_1 + 4)) {
    lVar5 = param_1[3];
    uVar4 = uVar4 * 0x40;
    if (((*(ulonglong *)(uVar4 + lVar5) == uVar9) && (*(ulonglong *)(uVar4 + 8 + lVar5) == param_4))
       && (plVar8 = (longlong *)(lVar5 + (uVar4 | 0x10)), plVar8 != (longlong *)0x0)) {
      lVar5 = plVar8[1];
      *param_2 = *plVar8;
      param_2[1] = lVar5;
      lVar5 = plVar8[3];
      param_2[2] = plVar8[2];
      param_2[3] = lVar5;
      lVar5 = plVar8[5];
      param_2[4] = plVar8[4];
      param_2[5] = lVar5;
      return param_2;
    }
  }
  lVar5 = (**(code **)*param_1)(param_1,uVar9,param_4,param_2 + 1);
  *param_2 = lVar5;
  if (lVar5 != 0) {
    local_58 = *param_2;
    lStack_50 = param_2[1];
    uVar10 = *(uint *)(param_1 + 4);
    uVar7 = 0;
    local_48 = param_2[2];
    lStack_40 = param_2[3];
    local_38 = param_2[4];
    lStack_30 = param_2[5];
    if (uVar10 != 0) {
      uVar3 = 0;
      do {
        uVar7 = uVar10 + uVar3 >> 1;
        uVar4 = *(ulonglong *)(param_1[3] + 8 + (ulonglong)uVar7 * 0x40);
        bVar11 = uVar4 < param_4;
        uVar2 = uVar7;
        if ((bVar11 || uVar4 == param_4) &&
           ((uVar4 != param_4 ||
            (uVar4 = *(ulonglong *)(param_1[3] + (ulonglong)uVar7 * 0x40), bVar11 = uVar4 < uVar9,
            uVar4 <= uVar9)))) {
          if (!bVar11) break;
          uVar3 = uVar7 + 1;
          uVar2 = uVar10;
          uVar7 = uVar3;
        }
        uVar10 = uVar2;
      } while (uVar10 != uVar3);
    }
    if (uVar7 != *(uint *)(param_1 + 4)) {
      lVar5 = param_1[3];
      lVar6 = (ulonglong)uVar7 * 0x40;
      if ((*(ulonglong *)(lVar6 + lVar5) == uVar9) && (*(ulonglong *)(lVar6 + 8 + lVar5) == param_4)
         ) {
        plVar8 = (longlong *)(lVar6 + 0x10 + lVar5);
        *plVar8 = local_58;
        plVar8[1] = lStack_50;
        plVar8 = (longlong *)(lVar6 + 0x20 + lVar5);
        *plVar8 = local_48;
        plVar8[1] = lStack_40;
        plVar8 = (longlong *)(lVar6 + 0x30 + lVar5);
        *plVar8 = local_38;
        plVar8[1] = lStack_30;
        return param_2;
      }
    }
    local_68 = uVar9;
    local_60 = param_4;
    FUN_1800561b8(param_1 + 2,uVar7,&local_68,&local_58);
  }
  return param_2;
}

