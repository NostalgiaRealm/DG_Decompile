/*
 * FUN_18007f578 at 18007f578
 * undefined FUN_18007f578(void)
 * Address ranges: 18007f578-18007fb2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18007f578(longlong param_1,float *param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,char param_10,char param_11,undefined1 param_12)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *extraout_x11;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_130 [2];
  undefined8 local_128;
  longlong *local_120;
  undefined4 local_118;
  float local_114;
  int iStack_110;
  float local_10c;
  uint local_108;
  int local_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  longlong local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  int local_c0;
  undefined1 auStack_a0 [16];
  int local_90;
  
  local_120 = (longlong *)CONCAT44(local_120._4_4_,param_7);
  local_128 = (longlong *)(CONCAT44(local_128._4_4_,param_5) & 0xffffffff000000ff);
  local_f0 = param_1 + 0x1c000;
  local_118 = param_8;
  FUN_1800e5470(*(undefined8 *)(param_1 + 0x1cf10),param_2,param_1);
  if (param_6 == (undefined8 *)0x0) {
    iVar12 = (int)param_2[2];
    iVar10 = (int)param_2[3];
    if (param_2[2] - (float)iVar12 != 0.0) {
      iVar12 = iVar12 + 1;
    }
    if (param_2[3] - (float)iVar10 != 0.0) {
      iVar10 = iVar10 + 1;
    }
    local_e0 = CONCAT44((int)param_2[1],(int)*param_2);
    uStack_d8 = CONCAT44(iVar10,iVar12);
  }
  else {
    uStack_d8 = param_6[1];
    local_e0 = *param_6;
  }
  bVar1 = true;
  fVar18 = (float)(**(code **)(*param_4 + 0x58))(param_4);
  fVar19 = (float)(**(code **)(*param_4 + 0x60))(param_4);
  fVar20 = (float)(**(code **)(*param_3 + 0x58))(param_3);
  fVar21 = (float)(**(code **)(*param_3 + 0x60))(param_3);
  local_10c = param_2[10];
  local_114 = param_2[0xb];
  plVar16 = param_3 + 0xc;
  iStack_110 = *(int *)((longlong)param_4 + 0x3c);
  plVar15 = (longlong *)0x0;
  bVar2 = false;
  local_108 = (int)param_2[8] + *(int *)((longlong)param_3 + 0x3c) * (int)param_2[9];
  plVar17 = param_4 + 0xc;
  if ((*(int *)((longlong)param_4 + 0x2c) == 0) && (*(int *)((longlong)param_3 + 0x2c) == 0)) {
    cVar4 = (**(code **)(*param_4 + 0xa8))(param_4);
    if ((cVar4 != '\0') ||
       (cVar4 = (**(code **)(*param_3 + 0xa8))(param_3), bVar3 = false, cVar4 != '\0')) {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_18007f778;
    cVar4 = (**(code **)(*param_4 + 0xa8))(param_4);
    if (cVar4 != '\0') {
      FUN_180087aa8(param_4,param_2[10],param_2[0xb]);
      plVar17 = param_4 + 0x30;
      fVar19 = 1.0;
      fVar18 = 1.0;
    }
    cVar5 = (**(code **)(*param_3 + 0xa8))(param_3);
    bVar1 = cVar5 == '\0';
    if (!bVar1) {
      FUN_180087aa8(param_3,param_2[8],param_2[9]);
      plVar16 = param_3 + 0x30;
      fVar21 = 1.0;
      fVar20 = 1.0;
      plVar15 = param_3;
    }
    bVar2 = true;
    if (cVar4 == '\0') goto LAB_18007f778;
  }
  else {
LAB_18007f778:
    (**(code **)(*param_4 + 8))(param_4,param_2[10],param_2[0xb],1);
  }
  if (bVar1) {
    (**(code **)(*param_3 + 8))(param_3,param_2[8],param_2[9],0);
  }
  *(ulonglong *)(param_2 + 2) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * fVar21,
                (float)*(undefined8 *)(param_2 + 2) * fVar20);
  *(ulonglong *)param_2 =
       CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * fVar21,
                (float)*(undefined8 *)param_2 * fVar20);
  *(ulonglong *)(param_2 + 6) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) * fVar19,
                (float)*(undefined8 *)(param_2 + 6) * fVar18);
  *(ulonglong *)(param_2 + 4) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20) * fVar19,
                (float)*(undefined8 *)(param_2 + 4) * fVar18);
  plVar14 = (longlong *)plVar17[4];
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)plVar17[3];
  }
  (**(code **)(*plVar14 + 0x50))(plVar14,auStack_a0);
  if (*(int *)((longlong)param_4 + 0x44) - 3U < 3) {
    bVar6 = FUN_18007ec50(param_1,param_2,param_3,param_4);
    if ((bVar6 & 1) == 0) goto LAB_18007faec;
    uVar9 = (ulonglong)local_108;
LAB_18007f830:
    (**(code **)(*param_3 + 0x18))(param_3,uVar9,&local_e0);
  }
  else {
    (**(code **)(*(longlong *)plVar16[3] + 0x50))((longlong *)plVar16[3],auStack_d0);
    FUN_1800a0700(param_1,*(undefined4 *)((longlong)param_4 + 0x2c),
                  (ulonglong)local_120 & 0xffffffff,local_118,param_9,
                  *(undefined1 *)(param_1 + 0x1cf08),param_10,param_11,param_12);
    if (!bVar2) {
      if (local_90 == 0x3c) {
        FUN_180082250(param_1,1,param_4[2]);
      }
      if ((((ulonglong)local_128 & 1) == 0) && (local_c0 == 0x3c)) {
        FUN_180082250(param_1,2,param_3[2]);
      }
    }
    puVar7 = (uint *)(**(code **)(*param_4 + 0x20))(param_4,&local_128);
    FUN_1800a09c8(param_1,local_130,*(undefined4 *)((longlong)param_4 + 0x2c),
                  *(undefined4 *)((longlong)param_3 + 0x2c),local_90,local_c0,*puVar7 >> 0x14 & 3,
                  param_10,param_11,param_9,param_12);
    plVar13 = (longlong *)plVar17[5];
    local_120 = plVar13;
    if ((local_130[0] == 8) && (plVar17[3] != plVar16[3] && param_10 == param_11)) {
LAB_18007f964:
      local_130[0] = 4;
      if (*(int *)((longlong)param_4 + 0x34) != 1) {
        local_130[0] = 5;
      }
LAB_18007f978:
      plVar8 = (longlong *)(**(code **)(*param_4 + 0xc0))(param_4,0);
      *(longlong **)(param_2 + 0x12) = plVar14;
      plVar13 = plVar8;
      local_120 = plVar8;
    }
    else {
      iVar12 = local_130[0];
      uVar9 = func_0x0001801b7978(local_130[0]);
      plVar8 = extraout_x11;
      if ((uVar9 & 1) != 0) {
        if (iVar12 == 8) goto LAB_18007f964;
        goto LAB_18007f978;
      }
    }
    if (plVar8 != (longlong *)0x0) {
      bVar6 = 1;
      if (plVar17[3] == plVar16[3]) {
        local_128 = (longlong *)0x0;
        (**(code **)(*plVar13 + 0x38))(plVar13,&local_128);
        fVar20 = param_2[6];
        fVar21 = param_2[7];
        fVar18 = param_2[4];
        fVar19 = param_2[5];
        local_100 = (int)fVar20;
        if (fVar18 <= fVar20) {
          local_100 = (int)fVar18;
        }
        iStack_fc = (int)fVar21;
        if (fVar19 <= fVar21) {
          iStack_fc = (int)fVar19;
        }
        local_f8 = (int)fVar18;
        if (fVar18 <= fVar20) {
          local_f8 = (int)fVar20;
        }
        iStack_f4 = (int)fVar19;
        if (fVar19 <= fVar21) {
          iStack_f4 = (int)fVar21;
        }
        (*__imp_USER32_dll_InflateRect)(&local_100,2,2);
        bVar6 = FUN_18007c1c0(param_1,local_128,plVar13,param_2 + 0x12,&local_120,param_2[10],
                              (int)local_10c + (int)local_114 * iStack_110,&local_100);
        (**(code **)(*local_128 + 0x10))();
        param_2[10] = 0.0;
        param_2[0xb] = 0.0;
        plVar13 = local_120;
      }
      if ((bVar6 != 0) &&
         (uVar9 = (ulonglong)local_108, *(longlong *)(plVar16[6] + uVar9 * 0x28) != 0)) {
        *(longlong *)(param_2 + 0xc) = plVar16[3];
        uVar11 = *(undefined8 *)(plVar16[6] + uVar9 * 0x28);
        *(longlong **)(param_2 + 0x14) = plVar13;
        *(undefined8 *)(param_2 + 0xe) = uVar11;
        FUN_18007c448(param_1,param_2,*(undefined4 *)((longlong)param_3 + 0x2c),
                      *(undefined4 *)((longlong)param_4 + 0x2c));
        if (plVar15 != (longlong *)0x0) {
          FUN_180087c30(plVar15,uVar9,&local_e0);
          goto LAB_18007faec;
        }
        goto LAB_18007f830;
      }
    }
    bVar6 = 0;
  }
LAB_18007faec:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(local_f0 + 0xf10) + 0x620);
  return bVar6;
}

