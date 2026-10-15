/*
 * FUN_1800bedc0 at 1800bedc0
 * undefined __fastcall FUN_1800bedc0(longlong * param_1, ulonglong * param_2)
 * Address ranges: 1800bedc0-1800bef77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800bedc0(longlong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  longlong *local_res8 [4];
  ulonglong uVar12;
  
  uVar11 = *(uint *)(param_1 + 2);
  puVar1 = param_2 + 0x110;
  if (uVar11 == 0) {
LAB_1800bee37:
    plVar8 = (longlong *)FUN_1800fbccc(0x10);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      uVar13 = 0;
      plVar8[1] = 0;
      uVar11 = *(uint *)(param_1 + 2);
      uVar3 = *puVar1;
      local_res8[0] = plVar8;
      if (uVar11 != 0) {
        lVar4 = param_1[1];
        uVar10 = 0;
        uVar7 = uVar11;
        do {
          uVar13 = uVar7 + uVar10 >> 1;
          uVar5 = *(ulonglong *)(lVar4 + (ulonglong)uVar13 * 0x18);
          uVar6 = uVar13;
          if (uVar5 <= uVar3) {
            if (uVar3 <= uVar5) break;
            uVar10 = uVar13 + 1;
            uVar6 = uVar7;
            uVar13 = uVar10;
          }
          uVar7 = uVar6;
        } while (uVar7 != uVar10);
        if ((uVar13 != uVar11) && (*(ulonglong *)(lVar4 + (ulonglong)uVar13 * 0x18) == uVar3)) {
          *(longlong **)(lVar4 + 0x10 + (ulonglong)uVar13 * 0x18) = plVar8;
          goto LAB_1800beed5;
        }
      }
      FUN_1800bfa0c(param_1,uVar13,uVar3,puVar1,local_res8);
      plVar8 = local_res8[0];
      goto LAB_1800beed5;
    }
  }
  else {
    uVar3 = *puVar1;
    uVar10 = 0;
    lVar4 = param_1[1];
    uVar13 = uVar11;
    do {
      uVar7 = uVar13 + uVar10 >> 1;
      uVar5 = *(ulonglong *)(lVar4 + (ulonglong)uVar7 * 0x18);
      uVar6 = uVar7;
      if (uVar5 <= uVar3) {
        if (uVar3 <= uVar5) break;
        uVar7 = uVar7 + 1;
        uVar6 = uVar13;
        uVar10 = uVar7;
      }
      uVar13 = uVar6;
    } while (uVar13 != uVar10);
    if (((uVar7 == uVar11) || (*(ulonglong *)(lVar4 + (ulonglong)uVar7 * 0x18) != uVar3)) ||
       (puVar2 = (undefined8 *)(lVar4 + ((ulonglong)uVar7 * 3 + 2) * 8), puVar2 == (undefined8 *)0x0
       )) goto LAB_1800bee37;
    plVar8 = (longlong *)*puVar2;
LAB_1800beed5:
    if ((plVar8 != (longlong *)0x0) && (uVar9 = FUN_1800bf860(plVar8,param_2), (char)uVar9 != '\0'))
    goto LAB_1800beeee;
  }
  FUN_1800be658(plVar8,(longlong)param_2);
LAB_1800beeee:
  uVar11 = *(uint *)(param_1 + 6);
  if (uVar11 != 0) {
    uVar3 = *param_2;
    uVar13 = 0;
    do {
      uVar10 = uVar11 + uVar13 >> 1;
      uVar12 = (ulonglong)uVar10;
      uVar5 = *(ulonglong *)(param_1[5] + uVar12 * 0x898);
      if (uVar5 <= uVar3) {
        if (uVar3 <= uVar5) break;
        uVar13 = uVar10 + 1;
        uVar12 = (ulonglong)uVar13;
        uVar10 = uVar11;
      }
      uVar11 = uVar10;
    } while (uVar11 != uVar13);
    uVar11 = (uint)uVar12;
    if ((uVar11 != *(uint *)(param_1 + 6)) && (*(ulonglong *)(uVar12 * 0x898 + param_1[5]) == uVar3)
       ) {
      while (uVar13 = uVar11 + 1, uVar13 < *(uint *)(param_1 + 6)) {
        FUN_1800fbec0((undefined8 *)((ulonglong)uVar11 * 0x898 + param_1[5]),
                      (undefined8 *)((ulonglong)uVar13 * 0x898 + param_1[5]),0x898);
        uVar11 = uVar13;
      }
      *(int *)(param_1 + 6) = (int)param_1[6] + -1;
    }
  }
  return;
}

