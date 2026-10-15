/*
 * FUN_180099204 at 180099204
 * undefined __fastcall FUN_180099204(longlong param_1, undefined8 * param_2, int param_3, longlong * param_4)
 * Address ranges: 180099204-180099baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180099204(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  BOOL BVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  int *piVar18;
  int *piVar19;
  longlong *plVar20;
  uint uVar21;
  bool bVar22;
  int iVar23;
  int local_res8;
  tagRECT *ptVar24;
  ulonglong local_210;
  ulonglong local_208;
  int *local_200;
  tagRECT local_1f8;
  tagRECT local_1e8;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_188;
  float local_180;
  float local_17c;
  undefined8 local_178;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined **local_b0;
  longlong local_a8;
  longlong *local_a0;
  uint local_78;
  
  local_210 = 0;
  piVar19 = (int *)(param_2 + 0xb);
  plVar16 = param_2 + 8;
  local_208 = -(ulonglong)(param_2 != (undefined8 *)0x0) & (ulonglong)(param_2 + -0x20);
  bVar22 = param_2 == (undefined8 *)0x0;
  if (bVar22) {
    piVar19 = (int *)&DAT_00000158;
  }
  local_res8 = *(int *)(&DAT_180100470 + (longlong)*piVar19 * 4);
  puVar9 = param_2 + -0x14;
  plVar10 = (longlong *)((longlong)param_2 + -0x8c);
  if (bVar22) {
    puVar9 = (undefined8 *)&DAT_00000060;
    plVar10 = (longlong *)&DAT_00000074;
  }
  plVar17 = (longlong *)*plVar10;
  puVar11 = (uint *)((longlong)param_2 + -0x74);
  if (bVar22) {
    puVar11 = (uint *)&DAT_0000008c;
  }
  uVar21 = *puVar11;
  if (bVar22) {
    plVar16 = (longlong *)&DAT_00000140;
  }
  local_200 = piVar19;
  if ((longlong *)*plVar16 == (longlong *)0x0) goto LAB_180099617;
  cVar6 = (**(code **)(*(longlong *)*plVar16 + 0xa8))();
  if (cVar6 != '\0') {
    lVar14 = *plVar16;
    if (((*(longlong **)(lVar14 + 0x74) == (longlong *)0x0) ||
        ((**(code **)(**(longlong **)(lVar14 + 0x74) + 0x50))(), 0x1c < local_78)) ||
       ((0x19800a00U >> (local_78 & 0x1f) & 1) == 0)) goto LAB_180099617;
    local_210 = *(ulonglong *)(lVar14 + 0x7c);
    lVar12 = 0x50;
    if (*(int *)(lVar14 + 0x2c) != 0x15) {
      lVar12 = 0x40;
    }
    local_res8 = *(int *)(lVar12 + param_1);
    FUN_1800a1190(lVar14,0,0,0);
    if (*(longlong *)(lVar14 + 0x7c) == 0) {
      if (*(longlong *)(lVar14 + 0x154) == 0) {
        FUN_1800a0198(lVar14);
      }
      uVar21 = *(uint *)(lVar14 + 0x16c);
      if (uVar21 != 0xffffffff) {
        plVar17 = *(longlong **)(lVar14 + 0x74);
        goto LAB_180099617;
      }
    }
    plVar17 = param_2 + 7;
    if (param_2 == (undefined8 *)0x0) {
      plVar17 = (longlong *)&DAT_00000138;
    }
    FUN_1800e055c(*(longlong **)(param_1 + 0x1cf10),*plVar17,1);
    if (((int)param_4[3] == 0) && (local_res8 == *(int *)(&DAT_180100470 + (longlong)*piVar19 * 4)))
    {
      uVar21 = *(uint *)(*plVar17 + 0xdb0);
      plVar17 = *(longlong **)(*plVar17 + 0xda0);
      goto LAB_180099617;
    }
  }
  local_210 = 0;
  plVar20 = param_2 + 7;
  if (param_2 == (undefined8 *)0x0) {
    plVar20 = (longlong *)&DAT_00000138;
  }
  if (*(longlong *)(*plVar20 + 0xda0) == 0) {
    FUN_1800e055c(*(longlong **)(param_1 + 0x1cf10),*plVar20,1);
  }
  if (*(longlong *)(*plVar20 + 0xda0) != 0) {
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 1;
    local_1f8.left = 0;
    local_1f8.top = 0;
    local_1f8.right = 0;
    local_1f8.bottom = 0;
    local_1e8.left = 0;
    local_1e8.top = 0;
    local_1e8.right = 0;
    local_1e8.bottom = 0;
    SetRect(&local_1e8,0,0,*(int *)(*plVar16 + 0x24),*(int *)(*plVar16 + 0x28));
    piVar19 = (int *)(param_2 + -0x1b);
    piVar18 = (int *)((longlong)param_2 + -0xdc);
    if (param_2 == (undefined8 *)0x0) {
      piVar19 = (int *)&DAT_00000028;
      piVar18 = (int *)&DAT_00000024;
    }
    SetRect(&local_1f8,0,0,*piVar18,*piVar19);
    if (*plVar10 != *(longlong *)(*plVar20 + 0xda0)) {
      FUN_18009ac8c((longlong)puVar9,1,1);
      lVar14 = *plVar20;
      uVar1 = *(undefined4 *)(lVar14 + 0xdb4);
      uVar21 = *(uint *)(lVar14 + 0xdb0);
      plVar17 = *(longlong **)(lVar14 + 0xda0);
      uVar2 = *(undefined4 *)(&DAT_180100470 + (longlong)*(int *)(lVar14 + 0x34) * 4);
      FUN_180099ff4((longlong)puVar9,1,1);
      *plVar10 = (longlong)plVar17;
      *puVar11 = uVar21;
      puVar9 = param_2 + -0xe;
      if (param_2 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&DAT_00000090;
      }
      *(undefined4 *)puVar9 = uVar1;
      puVar9 = param_2 + -0xb;
      if (param_2 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&DAT_000000a8;
      }
      *(undefined4 *)puVar9 = uVar2;
      (**(code **)(*plVar17 + 8))(plVar17);
      puVar13 = (undefined1 *)((longlong)param_2 + -0x54);
      if (param_2 == (undefined8 *)0x0) {
        puVar13 = &DAT_000000ac;
      }
      *puVar13 = 1;
      puVar13 = (undefined1 *)((longlong)param_2 + -0x53);
      if (param_2 == (undefined8 *)0x0) {
        puVar13 = &DAT_000000ad;
      }
      *puVar13 = 1;
    }
    puVar9 = (undefined8 *)0x0;
    if ((local_208 != 0) && (puVar9 = param_2, param_2 == (undefined8 *)0x0)) {
      puVar9 = (undefined8 *)&DAT_00000100;
    }
    FUN_180098e5c(param_1,0,0,0,0,(longlong)puVar9,-(ulonglong)(*plVar16 != 0) & *plVar16 + 0x100U,
                  (longlong *)&local_1f8);
  }
  plVar17 = *(longlong **)(*plVar20 + 0xda0);
  uVar21 = *(uint *)(*plVar20 + 0xdb0);
  local_res8 = *(int *)(&DAT_180100470 + (longlong)*local_200 * 4);
LAB_180099617:
  iVar23 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  if (plVar17 != (longlong *)0x0) {
    lVar14 = (**(code **)(*plVar17 + 0x50))(plVar17,&local_1f8);
    local_d8 = *(ulonglong *)(lVar14 + 0x10);
    uStack_d0 = *(ulonglong *)(lVar14 + 0x18);
    iVar23 = *(int *)(lVar14 + 0x20);
  }
  BVar7 = IsRectEmpty((RECT *)(param_4 + 1));
  if (BVar7 == 0) {
    uVar1 = (undefined4)param_4[1];
    uVar2 = *(undefined4 *)((longlong)param_4 + 0xc);
    uVar8 = *(undefined4 *)((longlong)param_4 + 0x14);
    uVar5 = (int)param_4[2];
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    uVar8 = (undefined4)uStack_d0;
    uVar5 = (undefined4)local_d8;
  }
  if ((int)param_4[3] != 0) {
    plVar16 = param_2 + 7;
    if (param_2 == (undefined8 *)0x0) {
      plVar16 = (longlong *)&DAT_00000138;
    }
    plVar10 = *(longlong **)(*plVar16 + 0xda0);
    uVar4 = (uint)(plVar17 == plVar10);
    FUN_1800e055c(*(longlong **)(param_1 + 0x1cf10),*plVar16,(plVar17 == plVar10) + 1);
    lVar14 = 0x1b5 - (ulonglong)(plVar17 != plVar10);
    local_198 = lVar14;
    if (*(longlong *)(*plVar16 + lVar14 * 8) != 0) {
      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
      piVar19 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0x684);
      *piVar19 = *piVar19 + 1;
      puVar11 = (uint *)(*param_4 + -0xd4);
      if (*param_4 == 0) {
        puVar11 = (uint *)&DAT_0000002c;
      }
      FUN_1800aa43c(param_1,(ulonglong)*puVar11,iVar23,*(undefined4 *)((longlong)param_4 + 0x1c));
      FUN_1800e2cec(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(ulonglong *)(param_1 + 0x1cf28));
      FUN_1800e3400(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(longlong *)(param_1 + 0x1cf28));
      FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),(ulonglong)plVar17,0,0,
                    0x80);
      FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(ulonglong *)(*plVar16 + lVar14 * 8),0,0,4);
      uVar15 = FUN_180098258((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1978),
                             (int *)&DAT_1801004f0);
      *(undefined8 *)(param_1 + 0x1cf60) = uVar15;
      uVar15 = FUN_18004c500((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1960),
                             (int *)&DAT_180100480);
      *(undefined8 *)(param_1 + 0x1cf78) = uVar15;
      uVar15 = FUN_18004bf30((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x19a8),
                             (uint *)&DAT_1801004b8);
      *(undefined8 *)(param_1 + 0x1cf70) = uVar15;
      *(undefined8 *)(param_1 + 0x1cf80) = *(undefined8 *)(param_1 + 0x1d120);
      *(undefined4 *)(param_1 + 0x1cf90) = 1;
      iVar23 = *(int *)(*plVar16 + 0x34);
      *(undefined4 *)(param_1 + 0x1cf98) = 0;
      *(undefined4 *)(param_1 + 0x1cfb4) = 0;
      *(undefined4 *)(param_1 + 0x1cf94) = *(undefined4 *)(&DAT_180100470 + (longlong)iVar23 * 4);
      ptVar24 = &local_1f8;
      lVar14 = *(longlong *)(param_1 + 0x1cf18);
      cVar6 = FUN_1800eb61c(*(longlong *)(lVar14 + 0x1950),1,
                            *(undefined8 *)(*(longlong *)(lVar14 + 0x1500) + 0x18),
                            *(undefined8 *)(*(longlong *)(lVar14 + 0x1508) + 0xb78),
                            (longlong *)ptVar24);
      if (cVar6 != '\0') {
        FUN_1800e3368(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,
                      (undefined8 *)&local_1e8);
        uVar3 = *(uint *)(param_1 + 0x28);
        lVar14 = *(longlong *)(param_1 + 0x1cf10);
        FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),
                      (longlong *)&local_208,uVar21,0);
        plVar10 = *(longlong **)((ulonglong)uVar3 * 0x20 + 0x6d0 + lVar14);
        (**(code **)(*plVar10 + 0xc0))
                  (plVar10,1,local_1f8._8_8_,local_208,(ulonglong)ptVar24 & 0xffffffff00000000);
        FUN_1800e3368(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,
                      (undefined8 *)&local_1e8);
        FUN_1800e3664(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),6,local_1f8._0_8_);
        FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1938),&local_1a0,
                      *(uint *)(*plVar16 + 0xdb4),uVar4);
        FUN_1800e3a7c(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&local_1a0,0,
                      (longlong *)0x0);
        lVar14 = local_198;
        local_188 = 0;
        local_180 = (float)(local_d8 & 0xffffffff);
        local_178 = 0;
        local_168 = 0;
        local_160 = 0;
        local_17c = (float)(uStack_d0 & 0xffffffff);
        local_158 = 0;
        local_148 = 0;
        local_130 = 0;
        local_150 = *(undefined8 *)(*plVar16 + local_198 * 8);
        local_128 = 0;
        local_110 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_140 = 0;
        local_138 = 0;
        local_120 = 0;
        local_118 = 0;
        local_108 = 0;
        uVar21 = 0x1d0d0;
        if ((int)param_4[3] == 4) {
          uVar21 = 0x1d0d8;
        }
        local_170 = local_180;
        local_16c = local_17c;
        FUN_1800947bc(param_1,(undefined4 *)&local_188,*(undefined8 *)((ulonglong)uVar21 + param_1))
        ;
        uVar21 = *(int *)(*plVar16 + 0xdb0) + uVar4;
        plVar17 = *(longlong **)(*plVar16 + lVar14 * 8);
        local_res8 = *(int *)(&DAT_180100470 + (longlong)*local_200 * 4);
      }
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
      piVar19 = (int *)(lVar14 + 0x684);
      *piVar19 = *piVar19 + -1;
      if ((*piVar19 == 0) && (*(int *)(lVar14 + 0x680) <= *(int *)(lVar14 + 0x678))) {
        FUN_1800e2ae8(lVar14 + 8,'\0');
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 8);
  local_b0 = &PTR_FUN_180103470;
  plVar16 = param_2 + 7;
  local_1c0 = *(uint *)(lVar14 + 0xc);
  local_1bc = *(undefined4 *)(lVar14 + 0x10);
  local_1b8 = *(undefined4 *)(lVar14 + 0x14);
  local_1a4 = *(undefined4 *)(&DAT_1801017c0 + (longlong)*(int *)(lVar14 + 0xca) * 4);
  if (param_2 == (undefined8 *)0x0) {
    plVar16 = (longlong *)&DAT_00000138;
  }
  local_1b4 = uVar1;
  local_1b0 = uVar2;
  local_1ac = uVar5;
  local_1a8 = uVar8;
  local_a8 = param_1;
  local_a0 = param_4;
  FUN_1800f03c8(*(longlong **)(param_1 + 0x1cf10),*plVar16,(ulonglong)plVar17,uVar21,local_210,
                local_res8,param_3,&local_1c0,&local_b0);
  LOCK();
  *(int *)(param_1 + 0x1d16c) = *(int *)(param_1 + 0x1d16c) + -1;
  UNLOCK();
  SetEvent(*(HANDLE *)(param_1 + 0x1d170));
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return;
}

