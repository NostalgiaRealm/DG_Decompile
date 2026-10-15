/*
 * FUN_18002c830 at 18002c830
 * undefined __cdecl FUN_18002c830(longlong * param_1, uint param_2, undefined4 param_3, ulonglong param_4)
 * Address ranges: 18002c830-18002ce03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c830(longlong *param_1,uint param_2,undefined4 param_3,ulonglong param_4)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong extraout_x0;
  longlong *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  undefined8 extraout_x1_01;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined ****ppppuVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  longlong *local_b0 [2];
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  RECT local_88;
  float local_78 [3];
  float fStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x2b2c);
  uVar4 = (uint)param_4;
  FUN_18002d0f8((longlong)(param_1 + 0x84c),0,0);
  uVar7 = FUN_180016f80(param_1 + 0x6b4,*(int *)(param_1[0x6dc] + 0x29fc));
  uVar8 = FUN_180016f80(param_1 + 0x6b4,*(int *)(param_1[0x6dc] + 0x2a00));
  uVar9 = 0;
  lVar19 = 0;
  local_b0[0] = param_1 + 0x800;
  local_a0 = uVar7;
  local_9c = param_2;
  local_98 = param_3;
  local_94 = uVar4;
  local_90 = uVar3;
  do {
    if (uVar9 == local_a0 || uVar9 == uVar8) {
      lVar17 = lVar19 * 0x180;
      if ((*(byte *)((longlong)param_1 + lVar17 + 0x3782) & 1) != 0) {
        if ((*(int *)((longlong)param_1 + lVar17 + 0x375c) == 0) &&
           ((int)param_1[lVar19 * 0x30 + 0x6ec] == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          FUN_180011b28(param_1[0x6dc]);
          FUN_180016dc8(param_1 + 0x6b4,uVar9,1,0,0,(LONG)param_1[lVar19 * 0x30 + 0x6e1],
                        *(LONG *)((longlong)param_1 + lVar17 + 0x370c),0);
          FUN_1800296e8(param_1 + 0x6b4,param_1 + lVar19 * 0x30 + 0x6dd,1,(undefined ****)0x0);
          param_4 = (ulonglong)*(uint *)(param_1 + lVar19 * 0x30 + 0x6eb);
          FUN_180016c00(param_1 + 0x6b4,uVar9,*(uint *)((longlong)param_1 + lVar17 + 0x3754),
                        *(uint *)(param_1 + lVar19 * 0x30 + 0x6eb),
                        *(char *)((longlong)param_1 + lVar17 + 0x377d),
                        (uint)*(byte *)((longlong)param_1 + lVar17 + 0x3781),'\0',0,
                        *(undefined1 *)((longlong)param_1 + lVar17 + 0x377f),
                        *(undefined4 *)((longlong)param_1 + lVar17 + 0x3774),
                        (int)param_1[lVar19 * 0x30 + 0x6ef]);
          FUN_18001d758((longlong)(param_1 + lVar19 * 0x30 + 0x6dd),
                        (ulonglong)*(uint *)((longlong)param_1 + lVar17 + 0x370c));
          LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1[0x6dc] + 0x3330) + 0x620))
          ;
        }
        else {
          local_88.right = (LONG)param_1[lVar19 * 0x30 + 0x6e1];
          local_88.left = 0;
          local_88.top = 0;
          local_88.bottom = *(LONG *)((longlong)param_1 + lVar17 + 0x370c);
          UnionRect((LPRECT)((longlong)param_1 + lVar17 + 0x371c),
                    (RECT *)((longlong)param_1 + lVar17 + 0x371c),&local_88);
          param_4 = 0;
          FUN_1800296e8(param_1 + 0x6b4,param_1 + lVar19 * 0x30 + 0x6dd,1,(undefined ****)0x0);
          FUN_18001d758((longlong)(param_1 + lVar19 * 0x30 + 0x6dd),
                        (ulonglong)*(uint *)((longlong)param_1 + lVar17 + 0x370c));
          *(byte *)((longlong)param_1 + lVar17 + 0x3782) =
               *(byte *)((longlong)param_1 + lVar17 + 0x3782) & 0xfe;
        }
      }
      *(byte *)((longlong)param_1 + lVar17 + 0x3782) =
           *(byte *)((longlong)param_1 + lVar19 * 0x180 + 0x3782) | 2;
    }
    uVar7 = local_90;
    uVar4 = local_94;
    uVar5 = local_98;
    uVar3 = local_9c;
    plVar11 = local_b0[0];
    uVar9 = uVar9 + 1;
    lVar19 = lVar19 + 1;
  } while ((int)uVar9 < 7);
  FUN_180011b28((longlong)param_1);
  FUN_1800176c0(param_1,-1);
  FUN_180010898((longlong)param_1);
  if (((int)param_1[0x55f] == 0) || (bVar6 = true, *(int *)((longlong)param_1 + 0x2afc) != 1)) {
    bVar6 = false;
  }
  DAT_18006f744 = *(byte *)((longlong)param_1 + 0x2b54);
  if ((bVar6) || (DAT_18006f764 = '\0', (*(uint *)((longlong)param_1 + 0x2cac) & 0xff0000) == 0)) {
    DAT_18006f764 = '\x0f';
  }
  DAT_18006f6a4 = *(undefined4 *)((longlong)param_1 + 0x2b94);
  DAT_18006f6b0 = (undefined4)param_1[0x55f];
  DAT_18006f6b4 = *(undefined4 *)((longlong)param_1 + 0x2afc);
  FUN_180053700(param_1[0x666],(ulonglong)*(uint *)(param_1 + 0x667),(int *)&DAT_18006f720,param_4,
                *(int *)((longlong)param_1 + 0x2b34));
  FUN_1800539b0(param_1[0x666],(ulonglong)*(uint *)(param_1 + 0x667),&DAT_18006f6b0,uVar7 & 0xff);
  FUN_180053c88(param_1[0x666],(ulonglong)*(uint *)(param_1 + 0x667),(uint *)&DAT_18006f688);
  uVar9 = FUN_180016f80(param_1 + 0x6b4,*(int *)((longlong)param_1 + 0x29fc));
  uVar7 = FUN_180016f80(param_1 + 0x6b4,(int)param_1[0x540]);
  plVar1 = param_1 + (longlong)(int)uVar9 * 0x30 + 0x6dd;
  if (uVar9 == 0xffffffff) {
    plVar1 = (longlong *)0x0;
  }
  plVar14 = param_1 + (longlong)(int)uVar7 * 0x30 + 0x6dd;
  if (uVar7 == 0xffffffff) {
    plVar14 = (longlong *)0x0;
  }
  if (plVar1 == (longlong *)0x0) {
    uVar7 = 0;
    uVar18 = 0;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    puVar2 = (uint *)(param_1 + (longlong)(int)uVar9 * 0x30 + 0x6e2);
    bVar6 = uVar9 == 0xffffffff;
    if (bVar6) {
      puVar2 = (uint *)&DAT_00000028;
    }
    uVar7 = *puVar2;
    puVar2 = (uint *)((longlong)param_1 + (longlong)(int)uVar9 * 0x180 + 0x3714);
    if (bVar6) {
      puVar2 = (uint *)&DAT_0000002c;
    }
    uVar8 = *puVar2;
    puVar2 = (uint *)(param_1 + (longlong)(int)uVar9 * 0x30 + 0x6e1);
    if (bVar6) {
      puVar2 = (uint *)&DAT_00000020;
    }
    uVar18 = *puVar2;
    puVar2 = (uint *)((longlong)param_1 + (longlong)(int)uVar9 * 0x180 + 0x370c);
    if (bVar6) {
      puVar2 = (uint *)&DAT_00000024;
    }
    uVar9 = *puVar2;
  }
  fStack_6c = (float)uVar8;
  local_78[2] = (float)uVar7;
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_68 = 0;
  local_64 = 0x3f800000;
  FUN_180054160(param_1[0x666],(ulonglong)*(uint *)(param_1 + 0x667),local_78);
  fVar20 = FUN_1800172c0((longlong)param_1,uVar3,(byte)uVar5,uVar4 & 0xffff);
  *(byte *)(plVar11 + 0x97) = *(byte *)(plVar11 + 0x97) | 1;
  FUN_180010198(extraout_x0);
  FUN_180010808(param_1[0x6dc],5,param_1[0x848],param_1[0x845],param_1[0x841]);
  uVar15 = 4;
  uVar13 = 0;
  plVar11 = *(longlong **)(*(longlong *)(param_1[0x6dc] + 0x3340) + 8);
  iVar10 = (**(code **)(*plVar11 + 0x70))(plVar11,param_1[0x84a],0,4,0,local_b0);
  uVar12 = extraout_x1;
  if (-1 < iVar10) {
    uVar13 = 0;
    *(undefined4 *)local_b0[0] = 0;
    *(undefined4 *)((longlong)local_b0[0] + 4) = 0;
    *(float *)(local_b0[0] + 1) = fVar20;
    *(undefined4 *)((longlong)local_b0[0] + 0xc) = 0;
    *(float *)(local_b0[0] + 2) = (float)uVar18;
    *(undefined4 *)((longlong)local_b0[0] + 0x14) = 0;
    *(float *)(local_b0[0] + 3) = fVar20;
    *(undefined4 *)((longlong)local_b0[0] + 0x1c) = 0;
    *(undefined4 *)(local_b0[0] + 4) = 0;
    *(float *)((longlong)local_b0[0] + 0x24) = (float)uVar9;
    *(float *)(local_b0[0] + 5) = fVar20;
    *(undefined4 *)((longlong)local_b0[0] + 0x2c) = 0;
    *(float *)(local_b0[0] + 6) = (float)uVar18;
    *(float *)((longlong)local_b0[0] + 0x34) = (float)uVar9;
    *(float *)(local_b0[0] + 7) = fVar20;
    *(undefined4 *)((longlong)local_b0[0] + 0x3c) = 0;
    plVar11 = *(longlong **)(*(longlong *)(param_1[0x6dc] + 0x3340) + 8);
    (**(code **)(*plVar11 + 0x78))(plVar11,param_1[0x84a]);
    uVar12 = extraout_x1_00;
  }
  FUN_180028738(param_1[0x6dc] + 0x4260,uVar12,uVar13,uVar15);
  plVar11 = *(longlong **)(*(longlong *)(param_1[0x6dc] + 0x3340) + 8);
  (**(code **)(*plVar11 + 0x68))(plVar11,4,0);
  ppppuVar16 = (undefined ****)(ulonglong)DAT_18006f744;
  FUN_180017380((longlong)param_1,(longlong)plVar1,(longlong)plVar14,DAT_18006f744,DAT_18006f764);
  FUN_18002aef0(param_1 + 0x6b4,extraout_x1_01,plVar14,ppppuVar16);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x666] + 0x620));
  *(undefined4 *)(param_1 + 0x58f) = 0x1010101;
  return;
}

