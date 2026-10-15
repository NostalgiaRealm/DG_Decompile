/*
 * FUN_180089354 at 180089354
 * ulonglong __fastcall FUN_180089354(longlong param_1, longlong param_2, int param_3, longlong * param_4)
 * Address ranges: 180089354-180089af9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180089354(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 extraout_RAX;
  uint *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined8 *puVar18;
  longlong lVar19;
  bool bVar20;
  LONG LVar21;
  LONG LVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong *plVar26;
  undefined8 local_198;
  uint uStack_190;
  uint uStack_18c;
  longlong *local_188;
  tagRECT local_178;
  tagRECT local_168;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  longlong *local_100;
  undefined **local_f8;
  longlong local_f0;
  longlong *local_e8;
  uint local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  RECT local_d4;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  uint local_80;
  
  FUN_1800dfe48(*(longlong *)(param_1 + 0x1cf10),param_2,param_1);
  plVar14 = (longlong *)(param_2 + 0x38);
  lVar19 = 0;
  local_198 = -(ulonglong)(param_2 != 0) & param_2 - 0xe0U;
  bVar20 = param_2 == 0;
  piVar8 = (int *)(param_2 + 0x50);
  if (bVar20) {
    piVar8 = (int *)&DAT_00000130;
  }
  iVar7 = *(int *)(&DAT_180100470 + (longlong)*piVar8 * 4);
  local_100 = (longlong *)(param_2 + -0x80);
  if (bVar20) {
    local_100 = (longlong *)&DAT_00000060;
  }
  local_108 = (longlong *)(param_2 + -0x68);
  if (bVar20) {
    local_108 = (longlong *)&DAT_00000078;
  }
  plVar15 = (longlong *)*local_108;
  if (bVar20) {
    plVar14 = (longlong *)&DAT_00000118;
  }
  puVar18 = *(undefined8 **)(*plVar14 + 0xda8);
  local_188 = (longlong *)(param_2 + 0x40);
  if (bVar20) {
    local_188 = (longlong *)&DAT_00000120;
  }
  if ((longlong *)*local_188 == (longlong *)0x0) goto LAB_1800894df;
  cVar5 = (**(code **)(*(longlong *)*local_188 + 0xa8))();
  if (cVar5 != '\0') {
    lVar13 = *local_188;
    if (((*(longlong **)(lVar13 + 0x78) == (longlong *)0x0) ||
        ((**(code **)(**(longlong **)(lVar13 + 0x78) + 0x50))(), 0x1c < local_80)) ||
       ((0x19800a00U >> (local_80 & 0x1f) & 1) == 0)) goto LAB_1800894df;
    lVar19 = *(longlong *)(lVar13 + 0x80);
    lVar9 = 0x50;
    if (*(int *)(lVar13 + 0x2c) != 0x15) {
      lVar9 = 0x40;
    }
    iVar7 = *(int *)(lVar9 + param_1);
    FUN_1800920b8(lVar13,(longlong *)0x0,0,0);
    if (*(longlong *)(lVar13 + 0x80) == 0) {
      if (*(longlong *)(lVar13 + 0x140) == 0) {
        FUN_1800916bc(lVar13);
      }
      puVar18 = *(undefined8 **)(lVar13 + 0x140);
      if (puVar18 != (undefined8 *)0x0) {
        plVar15 = *(longlong **)(lVar13 + 0x78);
        goto LAB_1800894df;
      }
    }
    FUN_1800e055c(*(longlong **)(param_1 + 0x1cf10),*plVar14,1);
    if (((int)param_4[3] == 0) && (iVar7 == *(int *)(&DAT_180100470 + (longlong)*piVar8 * 4))) {
      puVar18 = *(undefined8 **)(*plVar14 + 0xda8);
      plVar15 = *(longlong **)(*plVar14 + 0xd88);
      goto LAB_1800894df;
    }
  }
  lVar19 = 0;
  if (*(longlong *)(*plVar14 + 0xd88) == 0) {
    FUN_1800e055c(*(longlong **)(param_1 + 0x1cf10),*plVar14,1);
  }
  plVar15 = local_188;
  if (*(longlong *)(*plVar14 + 0xd88) != 0) {
    local_158 = (undefined8 *)0x0;
    local_150 = CONCAT35((int3)((ulonglong)local_150 >> 0x28),0x100000000);
    local_178.left = 0;
    local_178.top = 0;
    local_178.right = 0;
    local_178.bottom = 0;
    local_168.left = 0;
    local_168.top = 0;
    local_168.right = 0;
    local_168.bottom = 0;
    SetRect(&local_168,0,0,*(int *)(*local_188 + 0x24),*(int *)(*local_188 + 0x28));
    piVar10 = (int *)(param_2 + -0xb8);
    piVar17 = (int *)(param_2 + -0xbc);
    if (param_2 == 0) {
      piVar10 = (int *)&DAT_00000028;
      piVar17 = (int *)&DAT_00000024;
    }
    SetRect(&local_178,0,0,*piVar17,*piVar10);
    plVar1 = local_100;
    if (*local_108 != *(longlong *)(*plVar14 + 0xd88)) {
      FUN_18008e2ec(local_100,1,1);
      FUN_18008dd0c((longlong)plVar1,*(longlong **)(*plVar14 + 0xd88),
                    *(longlong **)(*plVar14 + 0xd98));
    }
    lVar13 = lVar19;
    if ((local_198 != 0) && (lVar13 = param_2, param_2 == 0)) {
      lVar13 = 0xe0;
    }
    FUN_18008ce40(param_1,0,0,0,0,lVar13,-(ulonglong)(*plVar15 != 0) & *plVar15 + 0xe0U,
                  (longlong *)&local_178);
  }
  plVar15 = *(longlong **)(*plVar14 + 0xd88);
  puVar18 = *(undefined8 **)(*plVar14 + 0xda8);
  iVar7 = *(int *)(&DAT_180100470 + (longlong)*piVar8 * 4);
LAB_1800894df:
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x50))(plVar15,&local_c0);
  }
  uStack_190 = (uint)local_c0;
  local_198 = 0;
  uStack_18c = local_c0._4_4_;
  BVar6 = IsRectEmpty((RECT *)(param_4 + 1));
  if (BVar6 == 0) {
    LVar21 = (LONG)param_4[1];
    LVar22 = *(LONG *)((longlong)param_4 + 0xc);
    uVar23 = *(uint *)(param_4 + 2);
    uVar24 = *(uint *)((longlong)param_4 + 0x14);
  }
  else {
    LVar21 = (LONG)local_198;
    LVar22 = local_198._4_4_;
    uVar23 = uStack_190;
    uVar24 = uStack_18c;
  }
  if ((int)param_4[3] != 0) {
    plVar1 = *(longlong **)(*plVar14 + 0xd88);
    FUN_1800e055c(*(longlong **)(param_1 + 0x1cf10),*plVar14,(plVar15 == plVar1) + 1);
    uVar3 = (ulonglong)(plVar15 != plVar1);
    if (*(longlong *)(*plVar14 + 0xd90 + uVar3 * -8) != 0) {
      puVar12 = (uint *)(*param_4 + -0xb4);
      if (*param_4 == 0) {
        puVar12 = (uint *)&DAT_0000002c;
      }
      FUN_1800aa43c(param_1,(ulonglong)*puVar12,(int)local_b0,
                    *(undefined4 *)((longlong)param_4 + 0x1c));
      uVar25 = 0xffffffff;
      FUN_1800dbbbc(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),
                    (int *)&DAT_1801001b0,(int *)0x0,-1,'\0');
      uVar16 = 0;
      FUN_1800dbc90(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),
                    (int *)&DAT_180100350,0);
      FUN_1800dbe08(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),
                    (uint *)&DAT_180100328);
      local_158 = (undefined8 *)0x0;
      local_150 = 0;
      local_138 = 0;
      local_120 = 0;
      local_178.left = 0;
      local_178.top = 0;
      uStack_148 = *(undefined8 *)(*plVar14 + 0xd90 + uVar3 * -8);
      local_168.left = 0;
      local_168.top = 0;
      local_178.bottom = (LONG)(float)(local_c0 >> 0x20);
      local_178.right = (LONG)(float)(local_c0 & 0xffffffff);
      local_168.bottom = (LONG)(float)(local_c0 >> 0x20);
      local_168.right = (LONG)(float)(local_c0 & 0xffffffff);
      local_140 = *(undefined8 *)(*plVar14 + 0xda0 + (ulonglong)(plVar15 != plVar1) * -8);
      local_118 = 0;
      uStack_110 = 0;
      uVar4 = 0x1d018;
      if ((int)param_4[3] == 4) {
        uVar4 = 0x1d020;
      }
      local_130 = plVar15;
      local_128 = puVar18;
      FUN_180089dfc(param_1,&local_178.left,*(longlong *)((ulonglong)uVar4 + param_1),uVar16,
                    uVar25 & 0xffffff00);
    }
    bVar20 = plVar15 != plVar1;
    plVar15 = *(longlong **)(*plVar14 + 0xd90 + uVar3 * -8);
    puVar18 = *(undefined8 **)(*plVar14 + 0xdb0 + (ulonglong)bVar20 * -8);
    iVar7 = *(int *)(&DAT_180100470 + (longlong)*piVar8 * 4);
  }
  lVar13 = *plVar14;
  local_f8 = &PTR_FUN_180102b48;
  lVar9 = *(longlong *)(param_1 + 8);
  local_e0 = *(uint *)(lVar9 + 0xc);
  local_dc = *(undefined4 *)(lVar9 + 0x10);
  local_d8 = *(undefined4 *)(lVar9 + 0x14);
  local_c4 = *(undefined4 *)(&DAT_1801017c0 + (longlong)*(int *)(lVar9 + 0xca) * 4);
  plVar1 = *(longlong **)(param_1 + 0x1cf10);
  local_f0 = param_1;
  local_e8 = param_4;
  local_d4.left = LVar21;
  local_d4.top = LVar22;
  local_d4.right = uVar23;
  local_d4.bottom = uVar24;
  if ((plVar15 != (longlong *)0x0) || (lVar19 != 0)) {
    uVar23 = *(uint *)(lVar13 + 0x10);
    plVar26 = plVar15;
    uVar11 = FUN_1800da0fc(plVar1,lVar13,&local_e0,lVar19,plVar15,puVar18,iVar7,&local_f8);
    if ((char)uVar11 == '\0') {
      plVar2 = (longlong *)plVar1[(ulonglong)uVar23 * 0x318 + 0xd7];
      if (lVar19 == 0) {
        (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(lVar13 + 0xd78),plVar15);
      }
      else {
        (**(code **)(*plVar2 + 0x1c8))
                  (plVar2,*(undefined8 *)(lVar13 + 0xd78),0,lVar19,
                   (ulonglong)plVar26 & 0xffffffff00000000,iVar7);
      }
      uStack_190 = *(uint *)(lVar13 + 0x18) / *(uint *)(lVar13 + 0x20);
      local_178._0_8_ = *(undefined8 *)(lVar13 + 0xd78);
      uStack_18c = *(uint *)(lVar13 + 0x1c) / *(uint *)(lVar13 + 0x24);
      local_178._8_8_ = *(undefined8 *)(lVar13 + 0xd80);
      local_158 = &local_198;
      local_198 = 0;
      local_168.top = uStack_18c;
      local_168.left = uStack_190;
      local_168.bottom = uStack_18c;
      local_168.right = uStack_190;
      local_150 = 0x3f8000003f800000;
      uStack_148 = 0;
      (*(code *)*local_f8)(&local_f8,&local_178);
    }
  }
  uVar11 = 0;
  if (*(char *)(lVar13 + 0xd6a) != '\0') {
    FUN_1800da7b0((longlong)plVar1,lVar13,&local_d4);
  }
  if (((param_3 == 0) && (*(char *)(lVar13 + 0xd6c) != '\0')) &&
     ((*(int *)(lVar13 + 0x3c) != 2 || (*(char *)(lVar13 + 0xd6d) == '\0')))) {
    uVar11 = 0x200;
  }
  iVar7 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x40))
                    (*(longlong **)(lVar13 + 8),param_3,uVar11);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1cf10) + 0x620));
  uVar11 = extraout_RAX;
  if (-1 < iVar7) {
    uVar11 = FUN_1800e0fa4(*(longlong *)(param_1 + 0x1cf10),*plVar14);
  }
  return CONCAT71((int7)((ulonglong)uVar11 >> 8),(byte)((uint)iVar7 >> 0x1f)) ^ 1;
}

