/*
 * FUN_1800bf394 at 1800bf394
 * undefined __fastcall FUN_1800bf394(longlong * param_1, ulonglong * param_2)
 * Address ranges: 1800bf394-1800bf5f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800bf394(longlong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *local_res8 [4];
  ulonglong uVar14;
  
  uVar17 = *(uint *)(param_1 + 2);
  puVar1 = param_2 + 0x46;
  if (uVar17 == 0) {
LAB_1800bf40b:
    plVar8 = (longlong *)FUN_1800fbccc(0x10);
    plVar11 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      uVar15 = 0;
      plVar8[1] = 0;
      uVar17 = *(uint *)(param_1 + 2);
      uVar3 = *puVar1;
      local_res8[0] = plVar8;
      if (uVar17 != 0) {
        lVar12 = param_1[1];
        uVar13 = 0;
        uVar7 = uVar17;
        do {
          uVar15 = uVar7 + uVar13 >> 1;
          uVar4 = *(ulonglong *)(lVar12 + (ulonglong)uVar15 * 0x18);
          uVar6 = uVar15;
          if (uVar4 <= uVar3) {
            if (uVar3 <= uVar4) break;
            uVar13 = uVar15 + 1;
            uVar6 = uVar7;
            uVar15 = uVar13;
          }
          uVar7 = uVar6;
        } while (uVar7 != uVar13);
        if ((uVar15 != uVar17) && (*(ulonglong *)(lVar12 + (ulonglong)uVar15 * 0x18) == uVar3)) {
          *(longlong **)(lVar12 + 0x10 + (ulonglong)uVar15 * 0x18) = plVar8;
          goto LAB_1800bf4a9;
        }
      }
      FUN_1800bfa0c(param_1,uVar15,uVar3,puVar1,local_res8);
      plVar8 = local_res8[0];
      goto LAB_1800bf4a9;
    }
  }
  else {
    uVar3 = *puVar1;
    uVar13 = 0;
    lVar12 = param_1[1];
    uVar15 = uVar17;
    do {
      uVar7 = uVar15 + uVar13 >> 1;
      uVar4 = *(ulonglong *)(lVar12 + (ulonglong)uVar7 * 0x18);
      uVar6 = uVar7;
      if (uVar4 <= uVar3) {
        if (uVar3 <= uVar4) break;
        uVar7 = uVar7 + 1;
        uVar6 = uVar15;
        uVar13 = uVar7;
      }
      uVar15 = uVar6;
    } while (uVar15 != uVar13);
    if (((uVar7 == uVar17) || (*(ulonglong *)(lVar12 + (ulonglong)uVar7 * 0x18) != uVar3)) ||
       (puVar2 = (undefined8 *)(lVar12 + ((ulonglong)uVar7 * 3 + 2) * 8),
       puVar2 == (undefined8 *)0x0)) goto LAB_1800bf40b;
    plVar8 = (longlong *)*puVar2;
LAB_1800bf4a9:
    plVar11 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      uVar9 = FUN_1800bf5f4(plVar8,param_2);
      plVar11 = (longlong *)param_2[1];
      (**(code **)(*plVar11 + 8))(plVar11,0);
      if ((char)uVar9 != '\0') goto LAB_1800bf4d1;
    }
  }
  FUN_1800bef78(plVar11,(longlong)param_2);
LAB_1800bf4d1:
  uVar17 = *(uint *)(param_1 + 6);
  if (uVar17 != 0) {
    uVar3 = *param_2;
    uVar15 = 0;
    do {
      uVar13 = uVar17 + uVar15 >> 1;
      uVar14 = (ulonglong)uVar13;
      uVar4 = *(ulonglong *)(param_1[5] + uVar14 * 0x248);
      if (uVar4 <= uVar3) {
        if (uVar3 <= uVar4) break;
        uVar15 = uVar13 + 1;
        uVar14 = (ulonglong)uVar15;
        uVar13 = uVar17;
      }
      uVar17 = uVar13;
    } while (uVar17 != uVar15);
    if (((int)uVar14 != (int)param_1[6]) && (*(ulonglong *)(uVar14 * 0x248 + param_1[5]) == uVar3))
    {
      uVar17 = (int)uVar14 + 1;
      if (uVar17 < *(uint *)(param_1 + 6)) {
        do {
          lVar12 = 4;
          puVar2 = (undefined8 *)((ulonglong)uVar17 * 0x248 + param_1[5]);
          puVar5 = (undefined8 *)((ulonglong)(uVar17 - 1) * 0x248 + param_1[5]);
          do {
            puVar16 = puVar5;
            puVar10 = puVar2;
            uVar9 = puVar10[1];
            *puVar16 = *puVar10;
            puVar16[1] = uVar9;
            uVar9 = puVar10[3];
            puVar16[2] = puVar10[2];
            puVar16[3] = uVar9;
            uVar9 = puVar10[5];
            puVar16[4] = puVar10[4];
            puVar16[5] = uVar9;
            uVar9 = puVar10[7];
            puVar16[6] = puVar10[6];
            puVar16[7] = uVar9;
            uVar9 = puVar10[9];
            puVar16[8] = puVar10[8];
            puVar16[9] = uVar9;
            uVar9 = puVar10[0xb];
            puVar16[10] = puVar10[10];
            puVar16[0xb] = uVar9;
            uVar9 = puVar10[0xd];
            puVar16[0xc] = puVar10[0xc];
            puVar16[0xd] = uVar9;
            uVar9 = puVar10[0xf];
            puVar16[0xe] = puVar10[0xe];
            puVar16[0xf] = uVar9;
            lVar12 = lVar12 + -1;
            puVar2 = puVar10 + 0x10;
            puVar5 = puVar16 + 0x10;
          } while (lVar12 != 0);
          uVar9 = puVar10[0x11];
          uVar17 = uVar17 + 1;
          puVar16[0x10] = puVar10[0x10];
          puVar16[0x11] = uVar9;
          uVar9 = puVar10[0x13];
          puVar16[0x12] = puVar10[0x12];
          puVar16[0x13] = uVar9;
          uVar9 = puVar10[0x15];
          puVar16[0x14] = puVar10[0x14];
          puVar16[0x15] = uVar9;
          uVar9 = puVar10[0x17];
          puVar16[0x16] = puVar10[0x16];
          puVar16[0x17] = uVar9;
          puVar16[0x18] = puVar10[0x18];
        } while (uVar17 < *(uint *)(param_1 + 6));
      }
      *(int *)(param_1 + 6) = (int)param_1[6] + -1;
    }
  }
  return;
}

