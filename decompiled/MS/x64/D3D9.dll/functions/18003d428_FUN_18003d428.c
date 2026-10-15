/*
 * FUN_18003d428 at 18003d428
 * longlong __fastcall FUN_18003d428(undefined8 * param_1, ulonglong param_2, ulonglong param_3, longlong param_4)
 * Address ranges: 18003d428-18003d598
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18003d428(undefined8 *param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  longlong local_res20;
  ulonglong local_38;
  ulonglong local_30;
  
  uVar12 = param_2 & param_1[1];
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 != 0) {
    lVar8 = param_1[3];
    uVar13 = 0;
    uVar7 = uVar2;
    do {
      uVar6 = uVar7 + uVar13 >> 1;
      uVar11 = (ulonglong)uVar6;
      uVar9 = *(ulonglong *)(lVar8 + 8 + (ulonglong)uVar6 * 0x18);
      bVar14 = uVar9 < param_3;
      if ((bVar14 || uVar9 == param_3) &&
         ((uVar9 != param_3 ||
          (uVar9 = *(ulonglong *)(lVar8 + (ulonglong)uVar6 * 0x18), bVar14 = uVar9 < uVar12,
          uVar9 <= uVar12)))) {
        if (!bVar14) break;
        uVar13 = uVar6 + 1;
        uVar11 = (ulonglong)uVar13;
        uVar6 = uVar7;
      }
      uVar7 = uVar6;
    } while (uVar7 != uVar13);
    if (((((uint)uVar11 != uVar2) && (*(ulonglong *)(lVar8 + uVar11 * 0x18) == uVar12)) &&
        (*(ulonglong *)(lVar8 + 8 + uVar11 * 0x18) == param_3)) &&
       (plVar1 = (longlong *)(lVar8 + 0x10 + uVar11 * 0x18), plVar1 != (longlong *)0x0)) {
      return *plVar1;
    }
  }
  iVar3 = *(int *)((ulonglong)*(uint *)(param_1 + 6) * 0x18c0 + 0x6cc + param_1[5]);
  if (iVar3 < 0xb000) {
    cVar10 = (0xa0ff < iVar3) + '@';
  }
  else {
    cVar10 = 'P';
  }
  local_res20 = param_4;
  lVar8 = (**(code **)*param_1)
                    (param_1,param_1[5],(ulonglong)*(uint *)(param_1 + 6),uVar12,param_3,cVar10);
  if (lVar8 != 0) {
    uVar2 = *(uint *)(param_1 + 4);
    uVar7 = 0;
    if (uVar2 != 0) {
      lVar4 = param_1[3];
      uVar6 = 0;
      uVar13 = uVar2;
      do {
        uVar7 = uVar13 + uVar6 >> 1;
        uVar9 = *(ulonglong *)(lVar4 + 8 + (ulonglong)uVar7 * 0x18);
        bVar14 = uVar9 < param_3;
        uVar5 = uVar7;
        if ((bVar14 || uVar9 == param_3) &&
           ((uVar9 != param_3 ||
            (uVar9 = *(ulonglong *)(lVar4 + (ulonglong)uVar7 * 0x18), bVar14 = uVar9 < uVar12,
            uVar9 <= uVar12)))) {
          if (!bVar14) break;
          uVar6 = uVar7 + 1;
          uVar5 = uVar13;
          uVar7 = uVar6;
        }
        uVar13 = uVar5;
      } while (uVar13 != uVar6);
      if (((uVar7 != uVar2) &&
          (uVar9 = (ulonglong)uVar7, *(ulonglong *)(lVar4 + uVar9 * 0x18) == uVar12)) &&
         (*(ulonglong *)(lVar4 + 8 + uVar9 * 0x18) == param_3)) {
        *(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) = lVar8;
        return lVar8;
      }
    }
    local_res20 = lVar8;
    local_38 = uVar12;
    local_30 = param_3;
    FUN_18003d59c(param_1 + 2,uVar7,&local_38,&local_res20);
  }
  return lVar8;
}

