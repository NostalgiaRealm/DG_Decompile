/*
 * FUN_18003e230 at 18003e230
 * bool __fastcall FUN_18003e230(longlong param_1, uint * param_2, byte * param_3, undefined4 param_4)
 * Address ranges: 18003e230-18003e689
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18003e230(longlong param_1,uint *param_2,byte *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  LPVOID pvVar17;
  longlong lVar18;
  uint uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  int iVar22;
  longlong local_res8;
  longlong local_res10;
  LPVOID local_338;
  int local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined1 local_320;
  undefined8 *local_318;
  LPVOID local_310;
  int local_308;
  longlong *local_300;
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
  ulonglong uVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  uVar15 = *(uint *)(param_1 + 0x98);
  if (uVar15 == 0) {
LAB_18003e2c1:
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uVar21 = (ulonglong)*param_2;
    uVar16 = 0;
    lVar13 = *(longlong *)(param_1 + 0x90);
    uVar19 = uVar15;
    do {
      uVar10 = uVar19 + (int)uVar16 >> 1;
      uVar11 = (ulonglong)uVar10;
      uVar1 = *(ulonglong *)(lVar13 + uVar11 * 0x2f0);
      if (uVar1 <= uVar21) {
        if (uVar21 <= uVar1) break;
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar16 = uVar11;
        uVar10 = uVar19;
      }
      uVar19 = uVar10;
    } while (uVar19 != (uint)uVar16);
    if (((uint)uVar11 == uVar15) || (*(ulonglong *)(uVar11 * 0x2f0 + lVar13) != uVar21))
    goto LAB_18003e2c1;
    puVar14 = (undefined8 *)(lVar13 + 0x10 + uVar11 * 0x2f0);
  }
  if (puVar14 == (undefined8 *)0x0) {
    FUN_1800fbea0((undefined1 *)&local_318,0,0x2e0);
    puVar6 = (undefined8 *)FUN_1800fbccc(0x270);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      lVar13 = 4;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar4 = param_2;
      puVar5 = puVar6 + 3;
      do {
        puVar12 = puVar5;
        puVar7 = puVar4;
        uVar9 = *(undefined8 *)(puVar7 + 2);
        *puVar12 = *(undefined8 *)puVar7;
        puVar12[1] = uVar9;
        uVar9 = *(undefined8 *)(puVar7 + 6);
        puVar12[2] = *(undefined8 *)(puVar7 + 4);
        puVar12[3] = uVar9;
        uVar9 = *(undefined8 *)(puVar7 + 10);
        puVar12[4] = *(undefined8 *)(puVar7 + 8);
        puVar12[5] = uVar9;
        uVar9 = *(undefined8 *)(puVar7 + 0xe);
        puVar12[6] = *(undefined8 *)(puVar7 + 0xc);
        puVar12[7] = uVar9;
        uVar9 = *(undefined8 *)(puVar7 + 0x12);
        puVar12[8] = *(undefined8 *)(puVar7 + 0x10);
        puVar12[9] = uVar9;
        uVar9 = *(undefined8 *)(puVar7 + 0x16);
        puVar12[10] = *(undefined8 *)(puVar7 + 0x14);
        puVar12[0xb] = uVar9;
        uVar9 = *(undefined8 *)(puVar7 + 0x1a);
        puVar12[0xc] = *(undefined8 *)(puVar7 + 0x18);
        puVar12[0xd] = uVar9;
        uVar9 = *(undefined8 *)(puVar7 + 0x1e);
        puVar12[0xe] = *(undefined8 *)(puVar7 + 0x1c);
        puVar12[0xf] = uVar9;
        lVar13 = lVar13 + -1;
        puVar4 = puVar7 + 0x20;
        puVar5 = puVar12 + 0x10;
      } while (lVar13 != 0);
      uVar9 = *(undefined8 *)(puVar7 + 0x22);
      puVar12[0x10] = *(undefined8 *)(puVar7 + 0x20);
      puVar12[0x11] = uVar9;
      uVar9 = *(undefined8 *)(puVar7 + 0x26);
      puVar12[0x12] = *(undefined8 *)(puVar7 + 0x24);
      puVar12[0x13] = uVar9;
      uVar9 = *(undefined8 *)(puVar7 + 0x2a);
      puVar12[0x14] = *(undefined8 *)(puVar7 + 0x28);
      puVar12[0x15] = uVar9;
      uVar9 = *(undefined8 *)(puVar7 + 0x2e);
      puVar12[0x16] = *(undefined8 *)(puVar7 + 0x2c);
      puVar12[0x17] = uVar9;
      uVar9 = *(undefined8 *)(puVar7 + 0x32);
      puVar12[0x18] = *(undefined8 *)(puVar7 + 0x30);
      puVar12[0x19] = uVar9;
      *(uint *)(puVar12 + 0x1a) = puVar7[0x34];
    }
    local_318 = puVar6;
    if (puVar6 == (undefined8 *)0x0) goto LAB_18003e65c;
    local_320 = 1;
    local_328 = 0x100;
    local_338 = (LPVOID)thunk_FUN_1800fbccc(0x100);
    local_32c = (undefined4)((ulonglong)local_338 >> 0x20);
    local_330 = (int)local_338;
    FUN_18008861c(local_338,*(undefined8 *)(param_1 + 8),(longlong)param_2,(longlong *)&local_338);
    pvVar17 = local_338;
    local_res10 = *(longlong *)(param_1 + -0x28);
    local_res8 = (ulonglong)*(uint *)(param_1 + -0x20) * 0x18c0;
    iVar22 = local_330 - (int)local_338;
    local_310 = local_338;
    local_308 = iVar22;
    plVar8 = (longlong *)
             FUN_18003dd80((longlong)param_2,(longlong)param_3,local_338,iVar22,
                           *(longlong **)(local_res8 + 0x6b0 + local_res10));
    local_300 = plVar8;
    if (plVar8 == (longlong *)0x0) {
LAB_18003e4df:
      if (puVar6 != (undefined8 *)0x0) {
        FUN_18003eb90(puVar6);
        FUN_1800fbcf0(puVar6);
      }
      puVar14 = (undefined8 *)0x0;
    }
    else {
      local_2f8 = FUN_18003dd80((longlong)(param_2 + 0x95),(longlong)param_3,pvVar17,iVar22,
                                *(longlong **)(local_res8 + 0x6b0 + local_res10));
      if (local_2f8 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        goto LAB_18003e4df;
      }
      local_2f0 = *(undefined8 *)param_3;
      uStack_2e8 = *(undefined8 *)(param_3 + 8);
      local_7c = param_2[0x12a];
      pvVar17 = (LPVOID)0x0;
      local_2e0 = *(undefined8 *)(param_3 + 0x10);
      uStack_2d8 = *(undefined8 *)(param_3 + 0x18);
      local_2d0 = *(undefined8 *)(param_3 + 0x20);
      uStack_2c8 = *(undefined8 *)(param_3 + 0x28);
      local_2c0 = *(undefined8 *)(param_3 + 0x30);
      uStack_2b8 = *(undefined8 *)(param_3 + 0x38);
      FUN_1800fbea0(local_78,0,0x40);
      local_80 = 1;
      puVar14 = (undefined8 *)FUN_18003df8c((longlong *)(param_1 + 0x88),*param_2,&local_318);
    }
    FUN_1800fbcf0(pvVar17);
    if (puVar14 == (undefined8 *)0x0) goto LAB_18003e65c;
  }
  uVar15 = 0xffffffff;
  uVar16 = 0;
  do {
    uVar19 = (uint)uVar16;
    if (puVar14[uVar16 * 10 + 3] == 0) {
LAB_18003e56c:
      uVar10 = uVar19;
      if (uVar15 != 0xffffffff) {
        uVar10 = uVar15;
      }
    }
    else {
      local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(puVar14 + 0x53));
      if ((*(byte *)((longlong)&local_res8 + ((longlong)(int)uVar19 >> 3)) >> (uVar19 & 7) & 1) == 0
         ) goto LAB_18003e56c;
      iVar22 = FUN_1800fbe7c(param_3,(byte *)(puVar14 + uVar16 * 10 + 5),0x40);
      uVar10 = uVar15;
      if (iVar22 == 0) {
        *(undefined8 *)(param_1 + 0x78) = puVar14[uVar16 * 10 + 3];
        *(undefined8 *)(param_1 + 0x80) = puVar14[uVar16 * 10 + 4];
        goto LAB_18003e639;
      }
    }
    uVar15 = uVar10;
    uVar19 = uVar19 + 1;
    uVar16 = (ulonglong)uVar19;
  } while ((int)uVar19 < 8);
  if (uVar19 == 8) {
    uVar19 = 0;
    if (uVar15 != 0xffffffff) {
      uVar19 = uVar15;
    }
    local_res8 = CONCAT44(local_res8._4_4_,uVar19);
    lVar13 = (longlong)(int)uVar19;
    if ((longlong *)puVar14[lVar13 * 10 + 3] != (longlong *)0x0) {
      FUN_1800dbb60(*(longlong *)(param_1 + -0x28),(ulonglong)*(uint *)(param_1 + -0x20),
                    (longlong *)puVar14[lVar13 * 10 + 3]);
      FUN_1800dbb60(*(longlong *)(param_1 + -0x28),(ulonglong)*(uint *)(param_1 + -0x20),
                    (longlong *)puVar14[lVar13 * 10 + 4]);
    }
    lVar2 = *(longlong *)(param_1 + -0x28);
    lVar18 = (ulonglong)*(uint *)(param_1 + -0x20) * 0x18c0;
    uVar9 = FUN_18003dd80((longlong)param_2,(longlong)param_3,puVar14[1],
                          *(undefined4 *)(puVar14 + 2),*(longlong **)(lVar18 + 0x6b0 + lVar2));
    *(undefined8 *)(param_1 + 0x78) = uVar9;
    puVar14[lVar13 * 10 + 3] = uVar9;
    uVar9 = FUN_18003dd80((longlong)(param_2 + 0x95),(longlong)param_3,puVar14[1],
                          *(undefined4 *)(puVar14 + 2),*(longlong **)(lVar18 + 0x6b0 + lVar2));
    *(undefined8 *)(param_1 + 0x80) = uVar9;
    puVar14[lVar13 * 10 + 4] = uVar9;
    pbVar3 = (byte *)((longlong)puVar14 + ((longlong)(int)(uint)local_res8 >> 3) + 0x298);
    *pbVar3 = *pbVar3 | '\x01' << ((uint)local_res8 & 7);
  }
LAB_18003e639:
  *(undefined8 *)(param_1 + -0x18) = *puVar14;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  puVar6 = puVar14 + 0x54;
  puVar20 = (undefined4 *)(param_1 + 0x30);
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar20 = *(undefined4 *)puVar6;
    puVar6 = (undefined8 *)((longlong)puVar6 + 4);
    puVar20 = puVar20 + 1;
  }
LAB_18003e65c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  return puVar14 != (undefined8 *)0x0;
}

