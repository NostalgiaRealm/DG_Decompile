/*
 * FUN_18009873c at 18009873c
 * undefined __fastcall FUN_18009873c(longlong param_1, int param_2, int param_3, longlong param_4, uint param_5, float param_6, float param_7, float param_8, float param_9)
 * Address ranges: 18009873c-180098e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009873c(longlong param_1,int param_2,int param_3,longlong param_4,uint param_5,
                  float param_6,float param_7,float param_8,float param_9)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  BOOL BVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  longlong local_res8;
  int local_res10;
  int local_res18;
  longlong local_res20;
  longlong local_1a8;
  longlong *local_1a0;
  int local_198 [4];
  RECT local_188;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_158;
  int local_154;
  uint local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_d8 [4];
  undefined1 local_c8 [32];
  uint local_a8;
  
  plVar1 = (longlong *)(param_4 + -0x100);
  piVar16 = (int *)(param_4 + -0xbc);
  local_res10 = param_2;
  local_res18 = param_3;
  (**(code **)(*plVar1 + 0xb0))(plVar1);
  fVar19 = (float)(**(code **)(*plVar1 + 0x58))(plVar1);
  fVar20 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
  uVar18 = param_3 * *(int *)(param_4 + -0xc4) + param_2;
  cVar6 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if ((((cVar6 == '\0') || (*piVar16 - 3U < 3)) || (*(longlong *)(param_4 + 0xb8) == 0)) ||
     (BVar7 = IsRectEmpty((RECT *)(((ulonglong)uVar18 << 5 | 0x10) + *(longlong *)(param_4 + 200))),
     BVar7 != 0)) {
    local_1a0 = (longlong *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
    lVar10 = -0x8c;
    local_res20 = -0x6c;
    local_res8 = -0x70;
    local_1a8 = -0x58;
    lVar12 = -0x84;
  }
  else {
    fVar20 = 1.0;
    lVar10 = 0xb8;
    fVar19 = 1.0;
    local_res20 = 0xd8;
    local_res8 = 0xd4;
    lVar12 = 0xc0;
    local_1a8 = 0xec;
    local_1a0 = plVar1;
  }
  FUN_1800a97d0(lVar10,&local_188.left,param_6,param_7,param_8,param_9);
  plVar13 = *(longlong **)(lVar12 + param_4);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = *(longlong **)(lVar10 + param_4);
  }
  (**(code **)(*plVar13 + 0x50))(plVar13,local_c8);
  if ((0x38 < local_a8) ||
     (bVar5 = true, (0x100000a19800a00U >> ((ulonglong)local_a8 & 0x3f) & 1) == 0)) {
    bVar5 = false;
  }
  if ((local_a8 < 0x37) && ((0x40020400010404U >> ((ulonglong)local_a8 & 0x3f) & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (*(int *)(param_4 + 8) != 0) {
    if (param_4 == 0) {
      piVar16 = (int *)&DAT_00000044;
    }
    if (*piVar16 - 3U < 3) {
      bVar4 = true;
      goto LAB_18009896f;
    }
  }
  bVar4 = false;
LAB_18009896f:
  uVar14 = 3;
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
  piVar16 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0x684);
  *piVar16 = *piVar16 + 1;
  FUN_1800e2cec(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(ulonglong *)(param_1 + 0x1cf28));
  FUN_1800e3400(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                *(longlong *)(param_1 + 0x1cf28));
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  FUN_1800e2d18(lVar10,(ulonglong)plVar13,(ulonglong)uVar18,0,(-(uint)bVar4 & 0xc) + 4);
  FUN_1800a97d0(lVar10,local_198,fVar19 * param_6,fVar20 * param_7,fVar19 * param_8,fVar20 * param_9
               );
  if (bVar4) {
    FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1940),&local_res8,
                  *(uint *)(local_res20 + param_4),uVar18);
    uVar2 = *(uint *)(&DAT_18010ff10 + (longlong)*(int *)(param_4 + -0xd4) * 0x2c);
    if (uVar2 == 0) {
      fVar19 = 0.0;
    }
    else {
      fVar19 = (float)((double)(uVar2 & param_5) / (double)uVar2);
    }
    cVar6 = (**(code **)(*plVar1 + 0x88))(plVar1);
    iVar17 = local_res10;
    if (cVar6 == '\0') {
      uVar11 = 0;
      uVar14 = 1;
    }
    else {
      FUN_1800e2d18(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),(ulonglong)plVar13,
                    (ulonglong)
                    (uint)((*(int *)(param_4 + -0xcc) + local_res18) * *(int *)(param_4 + -0xc4) +
                          local_res10),0,0x10);
      uVar11 = 0;
      uVar2 = *(uint *)(&DAT_18010ff14 + (longlong)*(int *)(param_4 + -0xd4) * 0x2c);
      if (uVar2 != 0) {
        iVar15 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
          }
        }
        local_res10 = 0;
        uVar11 = (undefined1)((uVar2 & param_5) >> ((byte)iVar15 & 0x1f));
      }
    }
    FUN_1800e3fb8(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),local_res8,uVar14,fVar19,
                  uVar11,1,local_198);
    iVar15 = local_res18;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1938);
    FUN_1800e1d04(lVar10,&local_res20,*(uint *)(local_res8 + param_4),uVar18);
    if (*(int *)(param_4 + 8) == 0) {
      lVar12 = 0;
    }
    else {
      plVar9 = (longlong *)(param_4 + -0xf0);
      if (param_4 == 0) {
        plVar9 = (longlong *)&DAT_00000010;
      }
      lVar12 = *plVar9;
    }
    uVar8 = FUN_1800aa158(CONCAT71((int7)((ulonglong)lVar10 >> 8),!bVar3 && !bVar5),
                          *(uint *)(param_4 + -0xd4),lVar12,param_5,!bVar3 && !bVar5,local_d8);
    if ((char)uVar8 == '\0') {
      if (*(int *)(param_4 + 8) == 0) {
        lVar10 = 0;
      }
      else {
        plVar9 = (longlong *)(param_4 + -0xf0);
        if (param_4 == 0) {
          plVar9 = (longlong *)&DAT_00000010;
        }
        lVar10 = *plVar9;
      }
      FUN_1800aa244(param_1,*(uint *)(param_4 + -0xd4),lVar10,param_5);
      uVar8 = FUN_180098258((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1978),
                            (int *)&DAT_1801004f0);
      *(undefined8 *)(param_1 + 0x1cf60) = uVar8;
      uVar8 = FUN_18004bf30((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x19a8),
                            (uint *)&DAT_1801004b8);
      iVar15 = local_res18;
      *(undefined8 *)(param_1 + 0x1cf70) = uVar8;
      *(undefined8 *)(param_1 + 0x1cf80) = *(undefined8 *)(param_1 + 0x1d120);
      local_158 = local_res10;
      local_14c = 0;
      local_144 = 0;
      local_138 = 0;
      local_120 = 0;
      local_118 = 0;
      local_100 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_130 = 0;
      local_128 = 0;
      local_110 = 0;
      local_108 = 0;
      local_f8 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_154 = local_res18;
      local_178 = fVar19 * param_6;
      local_174 = fVar20 * param_7;
      local_170 = fVar19 * param_8;
      local_16c = fVar20 * param_9;
      local_150 = uVar18;
      FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1938),&local_res8,
                    *(uint *)(local_res8 + param_4),uVar18);
      FUN_1800e3a7c(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&local_res8,0,
                    (longlong *)0x0);
      uVar8 = FUN_18004c500((longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1960),
                            (int *)&DAT_180100480);
      *(undefined8 *)(param_1 + 0x1cf78) = uVar8;
      *(undefined4 *)(param_1 + 0x1cfb4) = 0;
      *(undefined4 *)(param_1 + 0x1cf90) = 1;
      *(undefined4 *)(param_1 + 0x1cf94) = *(undefined4 *)(local_1a8 + param_4);
      *(undefined4 *)(param_1 + 0x1cf98) = 0;
      local_140 = plVar13;
      FUN_1800947bc(param_1,&local_178,
                    *(undefined8 *)
                     ((-(ulonglong)(bVar3 || bVar5) & 0xfffffffffffffff8) + 0x1d0a0 + param_1));
      iVar17 = local_res10;
    }
    else {
      FUN_1800e3f5c(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),local_res20,local_d8,1,
                    local_198);
      iVar17 = local_res10;
      iVar15 = local_res18;
    }
  }
  if (local_1a0 == (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  else {
    FUN_1800a1a1c((longlong)local_1a0,uVar18,&local_188);
  }
  (**(code **)(*plVar1 + 0xb8))(plVar1,iVar17,iVar15);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
  piVar16 = (int *)(lVar10 + 0x684);
  *piVar16 = *piVar16 + -1;
  if ((*piVar16 == 0) && (*(int *)(lVar10 + 0x680) <= *(int *)(lVar10 + 0x678))) {
    FUN_1800e2ae8(lVar10 + 8,'\0');
  }
  return;
}

