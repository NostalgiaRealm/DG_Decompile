/*
 * FUN_1800be6bc at 1800be6bc
 * int __fastcall FUN_1800be6bc(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800be6bc-1800bea22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800be6bc(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *local_res8;
  ulonglong local_res10;
  uint local_298 [152];
  
  lVar22 = 4;
  lVar13 = 4;
  puVar11 = param_2;
  puVar12 = local_298;
  do {
    puVar20 = puVar12;
    puVar9 = puVar11;
    uVar10 = puVar9[1];
    uVar3 = puVar9[2];
    uVar4 = puVar9[3];
    *(undefined8 *)puVar20 = *puVar9;
    *(undefined8 *)(puVar20 + 2) = uVar10;
    uVar10 = puVar9[4];
    uVar5 = puVar9[5];
    *(undefined8 *)(puVar20 + 4) = uVar3;
    *(undefined8 *)(puVar20 + 6) = uVar4;
    uVar3 = puVar9[6];
    uVar4 = puVar9[7];
    *(undefined8 *)(puVar20 + 8) = uVar10;
    *(undefined8 *)(puVar20 + 10) = uVar5;
    uVar10 = puVar9[8];
    uVar5 = puVar9[9];
    *(undefined8 *)(puVar20 + 0xc) = uVar3;
    *(undefined8 *)(puVar20 + 0xe) = uVar4;
    uVar3 = puVar9[10];
    uVar4 = puVar9[0xb];
    *(undefined8 *)(puVar20 + 0x10) = uVar10;
    *(undefined8 *)(puVar20 + 0x12) = uVar5;
    uVar10 = puVar9[0xc];
    uVar5 = puVar9[0xd];
    *(undefined8 *)(puVar20 + 0x14) = uVar3;
    *(undefined8 *)(puVar20 + 0x16) = uVar4;
    uVar3 = puVar9[0xe];
    uVar4 = puVar9[0xf];
    *(undefined8 *)(puVar20 + 0x18) = uVar10;
    *(undefined8 *)(puVar20 + 0x1a) = uVar5;
    *(undefined8 *)(puVar20 + 0x1c) = uVar3;
    *(undefined8 *)(puVar20 + 0x1e) = uVar4;
    lVar13 = lVar13 + -1;
    puVar11 = puVar9 + 0x10;
    puVar12 = puVar20 + 0x20;
  } while (lVar13 != 0);
  uVar10 = puVar9[0x11];
  uVar16 = 0;
  uVar3 = puVar9[0x12];
  uVar4 = puVar9[0x13];
  *(undefined8 *)(puVar20 + 0x20) = puVar9[0x10];
  *(undefined8 *)(puVar20 + 0x22) = uVar10;
  uVar10 = puVar9[0x14];
  uVar5 = puVar9[0x15];
  *(undefined8 *)(puVar20 + 0x24) = uVar3;
  *(undefined8 *)(puVar20 + 0x26) = uVar4;
  uVar3 = puVar9[0x16];
  uVar4 = puVar9[0x17];
  *(undefined8 *)(puVar20 + 0x28) = uVar10;
  *(undefined8 *)(puVar20 + 0x2a) = uVar5;
  uVar10 = puVar9[0x18];
  uVar5 = puVar9[0x19];
  uVar15 = *(uint *)(puVar9 + 0x1a);
  *(undefined8 *)(puVar20 + 0x2c) = uVar3;
  *(undefined8 *)(puVar20 + 0x2e) = uVar4;
  *(undefined8 *)(puVar20 + 0x30) = uVar10;
  *(undefined8 *)(puVar20 + 0x32) = uVar5;
  puVar20[0x34] = uVar15;
  uVar21 = 0;
  do {
    puVar12 = local_298 + uVar21;
    uVar15 = (uint)uVar21;
    uVar18 = uVar15 + 1;
    uVar21 = (ulonglong)uVar18;
    uVar16 = uVar16 + ((ulonglong)*puVar12 << (sbyte)((uVar15 & 1) << 5));
  } while (uVar18 < 0x95);
  uVar15 = *(uint *)(param_1 + 0x48);
  uVar21 = 0x10;
  local_res10 = uVar16;
  if (uVar15 == 0) {
LAB_1800be852:
    local_res8 = (longlong *)FUN_1800fbccc(0x10);
    if (local_res8 == (longlong *)0x0) {
      local_res8 = (longlong *)0x0;
    }
    else {
      *local_res8 = 0;
      local_res8[1] = 0;
    }
    uVar15 = *(uint *)(param_1 + 0x48);
    uVar18 = 0;
    if (uVar15 != 0) {
      lVar13 = *(longlong *)(param_1 + 0x40);
      uVar19 = 0;
      uVar7 = uVar15;
      do {
        uVar18 = uVar7 + uVar19 >> 1;
        uVar1 = *(ulonglong *)(lVar13 + (ulonglong)uVar18 * 0x18);
        uVar6 = uVar18;
        if (uVar1 <= uVar16) {
          if (uVar16 <= uVar1) break;
          uVar19 = uVar18 + 1;
          uVar6 = uVar7;
          uVar18 = uVar19;
        }
        uVar7 = uVar6;
      } while (uVar7 != uVar19);
      if ((uVar18 != uVar15) && (*(ulonglong *)(lVar13 + (ulonglong)uVar18 * 0x18) == uVar16)) {
        *(longlong **)(lVar13 + 0x10 + (ulonglong)uVar18 * 0x18) = local_res8;
        plVar14 = local_res8;
        goto LAB_1800be8f6;
      }
    }
    FUN_1800bfa0c((longlong *)(param_1 + 0x38),uVar18,uVar16,&local_res10,&local_res8);
    plVar14 = local_res8;
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x40);
    uVar19 = 0;
    uVar18 = uVar15;
    do {
      uVar7 = uVar18 + uVar19 >> 1;
      uVar1 = *(ulonglong *)(lVar13 + (ulonglong)uVar7 * 0x18);
      uVar6 = uVar7;
      if (uVar1 <= uVar16) {
        if (uVar16 <= uVar1) break;
        uVar7 = uVar7 + 1;
        uVar6 = uVar18;
        uVar19 = uVar7;
      }
      uVar18 = uVar6;
    } while (uVar18 != uVar19);
    if ((((uVar7 == uVar15) || (*(ulonglong *)(lVar13 + (ulonglong)uVar7 * 0x18) != uVar16)) ||
        (puVar11 = (undefined8 *)(lVar13 + 0x10 + (ulonglong)uVar7 * 0x18),
        puVar11 == (undefined8 *)0x0)) ||
       (plVar14 = (longlong *)*puVar11, plVar14 == (longlong *)0x0)) goto LAB_1800be852;
    if ((int)plVar14[1] != 0) {
      lVar13 = *plVar14;
      uVar16 = 0;
      do {
        puVar12 = (uint *)(uVar16 * 0x254 + lVar13);
        uVar15 = *puVar12;
        local_298[0] = uVar15;
        iVar8 = FUN_1800fbe7c((byte *)puVar12,(byte *)local_298,0x254);
        if (iVar8 == 0) {
          return uVar15;
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while (uVar15 < *(uint *)(plVar14 + 1));
    }
  }
LAB_1800be8f6:
  if (plVar14 == (longlong *)0x0) {
LAB_1800bea06:
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((longlong)plVar14 + 0xc);
    if ((int)plVar14[1] == iVar8) {
      if (iVar8 != 0) {
        uVar21 = (ulonglong)(uint)(iVar8 * 2);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar21;
      uVar10 = SUB168(ZEXT816(0x254) * auVar2,0);
      if (SUB168(ZEXT816(0x254) * auVar2,8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      puVar11 = (undefined8 *)thunk_FUN_1800fbccc(uVar10);
      if (puVar11 == (undefined8 *)0x0) goto LAB_1800bea06;
      FUN_1800fbec0(puVar11,(undefined8 *)*plVar14,
                    (ulonglong)*(uint *)((longlong)plVar14 + 0xc) * 0x254);
      FUN_1800fbcf0((LPVOID)*plVar14);
      *plVar14 = (longlong)puVar11;
      *(int *)((longlong)plVar14 + 0xc) = (int)uVar21;
    }
    puVar11 = (undefined8 *)((ulonglong)*(uint *)(plVar14 + 1) * 0x254 + *plVar14);
    do {
      puVar17 = param_2;
      puVar9 = puVar11;
      uVar10 = puVar17[1];
      *puVar9 = *puVar17;
      puVar9[1] = uVar10;
      uVar10 = puVar17[3];
      puVar9[2] = puVar17[2];
      puVar9[3] = uVar10;
      uVar10 = puVar17[5];
      puVar9[4] = puVar17[4];
      puVar9[5] = uVar10;
      uVar10 = puVar17[7];
      puVar9[6] = puVar17[6];
      puVar9[7] = uVar10;
      uVar10 = puVar17[9];
      puVar9[8] = puVar17[8];
      puVar9[9] = uVar10;
      uVar10 = puVar17[0xb];
      puVar9[10] = puVar17[10];
      puVar9[0xb] = uVar10;
      uVar10 = puVar17[0xd];
      puVar9[0xc] = puVar17[0xc];
      puVar9[0xd] = uVar10;
      uVar10 = puVar17[0xf];
      puVar9[0xe] = puVar17[0xe];
      puVar9[0xf] = uVar10;
      lVar22 = lVar22 + -1;
      puVar11 = puVar9 + 0x10;
      param_2 = puVar17 + 0x10;
    } while (lVar22 != 0);
    uVar10 = puVar17[0x11];
    puVar9[0x10] = puVar17[0x10];
    puVar9[0x11] = uVar10;
    uVar10 = puVar17[0x13];
    puVar9[0x12] = puVar17[0x12];
    puVar9[0x13] = uVar10;
    uVar10 = puVar17[0x15];
    puVar9[0x14] = puVar17[0x14];
    puVar9[0x15] = uVar10;
    uVar10 = puVar17[0x17];
    puVar9[0x16] = puVar17[0x16];
    puVar9[0x17] = uVar10;
    uVar10 = puVar17[0x19];
    puVar9[0x18] = puVar17[0x18];
    puVar9[0x19] = uVar10;
    *(undefined4 *)(puVar9 + 0x1a) = *(undefined4 *)(puVar17 + 0x1a);
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    *(undefined4 *)((ulonglong)((int)plVar14[1] - 1) * 0x254 + *plVar14) =
         *(undefined4 *)(param_1 + 0x50);
    iVar8 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar8 + 2;
  }
  return iVar8;
}

