/*
 * FUN_18005816c at 18005816c
 * bool __fastcall FUN_18005816c(longlong param_1, uint * param_2, byte * param_3, undefined4 param_4)
 * Address ranges: 18005816c-180058627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18005816c(longlong param_1,uint *param_2,byte *param_3,undefined4 param_4)

{
  int *piVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  uint *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  longlong lVar22;
  undefined4 local_res8 [2];
  LPCRITICAL_SECTION local_res10;
  longlong lStack_360;
  longlong local_358;
  undefined4 uStack_34c;
  longlong local_348;
  longlong lStack_340;
  longlong local_338;
  longlong lStack_330;
  longlong local_328;
  longlong lStack_320;
  longlong local_318;
  longlong lStack_310;
  undefined8 *local_308;
  longlong local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_80;
  uint local_7c;
  undefined1 local_78 [64];
  ulonglong uVar10;
  
  local_res10 = (LPCRITICAL_SECTION)(param_1 + 0xc0);
  EnterCriticalSection(local_res10);
  uVar21 = *(uint *)(param_1 + 0xa8);
  if (uVar21 == 0) {
LAB_18005820b:
    plVar15 = (longlong *)0x0;
  }
  else {
    uVar16 = (ulonglong)*param_2;
    uVar13 = 0;
    lVar14 = *(longlong *)(param_1 + 0xa0);
    uVar18 = uVar21;
    do {
      uVar9 = uVar18 + (int)uVar13 >> 1;
      uVar10 = (ulonglong)uVar9;
      uVar2 = *(ulonglong *)(lVar14 + uVar10 * 0x2e0);
      if (uVar2 <= uVar16) {
        if (uVar16 <= uVar2) break;
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar13 = uVar10;
        uVar9 = uVar18;
      }
      uVar18 = uVar9;
    } while (uVar18 != (uint)uVar13);
    if (((uint)uVar10 == uVar21) || (*(ulonglong *)(uVar10 * 0x2e0 + lVar14) != uVar16))
    goto LAB_18005820b;
    plVar15 = (longlong *)((uVar10 * 0x2e0 | 0x10) + lVar14);
  }
  if (plVar15 == (longlong *)0x0) {
    FUN_1800fbea0((undefined1 *)&local_308,0,0x2d0);
    puVar7 = (undefined8 *)FUN_1800fbccc(0x270);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      lVar14 = 4;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar5 = param_2;
      puVar20 = puVar7 + 3;
      do {
        puVar11 = puVar20;
        puVar8 = puVar5;
        uVar4 = *(undefined8 *)(puVar8 + 2);
        *puVar11 = *(undefined8 *)puVar8;
        puVar11[1] = uVar4;
        uVar4 = *(undefined8 *)(puVar8 + 6);
        puVar11[2] = *(undefined8 *)(puVar8 + 4);
        puVar11[3] = uVar4;
        uVar4 = *(undefined8 *)(puVar8 + 10);
        puVar11[4] = *(undefined8 *)(puVar8 + 8);
        puVar11[5] = uVar4;
        uVar4 = *(undefined8 *)(puVar8 + 0xe);
        puVar11[6] = *(undefined8 *)(puVar8 + 0xc);
        puVar11[7] = uVar4;
        uVar4 = *(undefined8 *)(puVar8 + 0x12);
        puVar11[8] = *(undefined8 *)(puVar8 + 0x10);
        puVar11[9] = uVar4;
        uVar4 = *(undefined8 *)(puVar8 + 0x16);
        puVar11[10] = *(undefined8 *)(puVar8 + 0x14);
        puVar11[0xb] = uVar4;
        uVar4 = *(undefined8 *)(puVar8 + 0x1a);
        puVar11[0xc] = *(undefined8 *)(puVar8 + 0x18);
        puVar11[0xd] = uVar4;
        uVar4 = *(undefined8 *)(puVar8 + 0x1e);
        puVar11[0xe] = *(undefined8 *)(puVar8 + 0x1c);
        puVar11[0xf] = uVar4;
        lVar14 = lVar14 + -1;
        puVar5 = puVar8 + 0x20;
        puVar20 = puVar11 + 0x10;
      } while (lVar14 != 0);
      uVar4 = *(undefined8 *)(puVar8 + 0x22);
      puVar11[0x10] = *(undefined8 *)(puVar8 + 0x20);
      puVar11[0x11] = uVar4;
      uVar4 = *(undefined8 *)(puVar8 + 0x26);
      puVar11[0x12] = *(undefined8 *)(puVar8 + 0x24);
      puVar11[0x13] = uVar4;
      uVar4 = *(undefined8 *)(puVar8 + 0x2a);
      puVar11[0x14] = *(undefined8 *)(puVar8 + 0x28);
      puVar11[0x15] = uVar4;
      uVar4 = *(undefined8 *)(puVar8 + 0x2e);
      puVar11[0x16] = *(undefined8 *)(puVar8 + 0x2c);
      puVar11[0x17] = uVar4;
      uVar4 = *(undefined8 *)(puVar8 + 0x32);
      puVar11[0x18] = *(undefined8 *)(puVar8 + 0x30);
      puVar11[0x19] = uVar4;
      *(uint *)(puVar11 + 0x1a) = puVar8[0x34];
    }
    local_308 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      local_300 = FUN_180057ccc(param_1 + -0x30,(longlong)param_2,(longlong)param_3);
      if ((local_300 == 0) ||
         (local_2f8 = FUN_180057ccc(param_1 + -0x30,(longlong)(param_2 + 0x95),(longlong)param_3),
         local_2f8 == 0)) {
        if (puVar7 != (undefined8 *)0x0) {
          FUN_18003eb90(puVar7);
          FUN_1800fbcf0(puVar7);
          goto LAB_1800585fa;
        }
      }
      else {
        local_2f0 = *(undefined8 *)param_3;
        uStack_2e8 = *(undefined8 *)(param_3 + 8);
        local_7c = param_2[0x12a];
        local_2e0 = *(undefined8 *)(param_3 + 0x10);
        uStack_2d8 = *(undefined8 *)(param_3 + 0x18);
        local_2d0 = *(undefined8 *)(param_3 + 0x20);
        uStack_2c8 = *(undefined8 *)(param_3 + 0x28);
        local_2c0 = *(undefined8 *)(param_3 + 0x30);
        uStack_2b8 = *(undefined8 *)(param_3 + 0x38);
        FUN_1800fbea0(local_78,0,0x40);
        local_80 = 1;
        plVar15 = (longlong *)FUN_180057e60((longlong *)(param_1 + 0x98),*param_2,&local_308);
      }
    }
    if (plVar15 == (longlong *)0x0) goto LAB_1800585fa;
  }
  uVar21 = 0xffffffff;
  uVar13 = 0;
  do {
    uVar18 = (uint)uVar13;
    if ((plVar15[uVar13 * 10 + 1] == 0) ||
       (local_res8[0] = (int)plVar15[0x51],
       (*(byte *)((longlong)local_res8 + ((longlong)(int)uVar18 >> 3)) >> (uVar18 & 7) & 1) == 0)) {
      uVar9 = uVar18;
      if (uVar21 != 0xffffffff) {
        uVar9 = uVar21;
      }
    }
    else {
      iVar6 = FUN_1800fbe7c(param_3,(byte *)(plVar15 + uVar13 * 10 + 3),0x40);
      uVar9 = uVar21;
      if (iVar6 == 0) {
        lStack_360 = plVar15[uVar13 * 10 + 1];
        local_358 = plVar15[uVar13 * 10 + 2];
        goto LAB_1800583f3;
      }
    }
    uVar21 = uVar9;
    uVar18 = uVar18 + 1;
    uVar13 = (ulonglong)uVar18;
  } while ((int)uVar18 < 8);
  if (uVar18 == 8) {
    uVar18 = 0;
    if (uVar21 != 0xffffffff) {
      uVar18 = uVar21;
    }
    lStack_360 = FUN_180057ccc(param_1 + -0x30,(longlong)param_2,(longlong)param_3);
    plVar15[(longlong)(int)uVar18 * 10 + 1] = lStack_360;
    local_358 = FUN_180057ccc(param_1 + -0x30,(longlong)(param_2 + 0x95),(longlong)param_3);
    plVar15[(longlong)(int)uVar18 * 10 + 2] = local_358;
    pbVar3 = (byte *)((longlong)plVar15 + ((longlong)(int)uVar18 >> 3) + 0x288);
    *pbVar3 = *pbVar3 | '\x01' << (uVar18 & 7);
  }
LAB_1800583f3:
  lVar14 = *plVar15;
  uVar21 = *(uint *)(param_1 + -0x20);
  lVar22 = *(longlong *)(param_1 + -0x28);
  plVar17 = plVar15 + 0x52;
  puVar19 = &uStack_34c;
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar19 = (int)*plVar17;
    plVar17 = (longlong *)((longlong)plVar17 + 4);
    puVar19 = puVar19 + 1;
  }
  lVar22 = lVar22 + (ulonglong)uVar21 * 0x1ac0;
  piVar1 = (int *)(lVar22 + 0x1bc0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar22 + 0x1dc4) == '\0') {
LAB_1800585ad:
    plVar17 = *(longlong **)(lVar22 + 0x1da0);
    *plVar17 = param_1 + -0x30;
    plVar17[1] = lVar14;
    plVar17[2] = lStack_360;
    plVar17[3] = local_358;
    plVar17[4] = CONCAT44(uStack_34c,param_4);
    plVar17[5] = local_348;
    plVar17[6] = lStack_340;
    plVar17[7] = local_338;
    plVar17[8] = lStack_330;
    plVar17[9] = local_328;
    plVar17[10] = lStack_320;
    plVar17[0xb] = local_318;
    plVar17[0xc] = lStack_310;
    FUN_180058628(plVar17);
  }
  else {
    puVar7 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x68);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_1800facb0(piVar1);
      Sleep(100);
      FUN_1800fab60(piVar1);
      goto LAB_1800585ad;
    }
    LOCK();
    *(int *)(lVar22 + 0x1dc0) = *(int *)(lVar22 + 0x1dc0) + 1;
    UNLOCK();
    puVar7[1] = 0x68;
    puVar7[2] = param_1 + -0x30;
    puVar20 = (undefined8 *)((longlong)puVar7 + 0x7fU & 0xfffffffffffffff8);
    puVar7[3] = lVar14;
    puVar7[4] = lStack_360;
    puVar7[5] = local_358;
    puVar7[6] = CONCAT44(uStack_34c,param_4);
    puVar7[7] = local_348;
    puVar7[8] = lStack_340;
    puVar7[9] = local_338;
    puVar7[10] = lStack_330;
    puVar7[0xb] = local_328;
    puVar7[0xc] = lStack_320;
    puVar7[0xd] = local_318;
    puVar7[0xe] = lStack_310;
    *puVar20 = 0;
    *puVar7 = FUN_180058628;
    *(undefined8 **)(lVar22 + 0x1c50 + (ulonglong)*(uint *)(lVar22 + 0x1dbc) * 0x28) = puVar20;
    if (*(char *)(lVar22 + 0x1dc5) != '\0') {
      FUN_1800facb0(piVar1);
      SetEvent(*(HANDLE *)(lVar22 + 0x1c40));
      goto LAB_1800585fa;
    }
  }
  FUN_1800facb0(piVar1);
LAB_1800585fa:
  LeaveCriticalSection(local_res10);
  return plVar15 != (longlong *)0x0;
}

