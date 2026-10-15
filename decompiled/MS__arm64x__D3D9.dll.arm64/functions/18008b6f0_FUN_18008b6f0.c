/*
 * FUN_18008b6f0 at 18008b6f0
 * undefined FUN_18008b6f0(void)
 * Address ranges: 18008b6f0-18008bbeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008b6f0(longlong param_1,float *param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7,int param_8,
                  undefined1 param_9,char param_10,char param_11,undefined1 param_12)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int extraout_w11;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_110 [2];
  undefined8 local_108;
  ulonglong local_100;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [32];
  int local_c0;
  undefined1 auStack_a8 [32];
  int local_88;
  
  local_100 = CONCAT44(local_100._4_4_,param_7);
  local_108 = CONCAT44(local_108._4_4_,param_5) & 0xffffffff000000ff;
  if (param_6 == (undefined8 *)0x0) {
    iVar14 = (int)param_2[2];
    iVar12 = (int)param_2[3];
    if (param_2[2] - (float)iVar14 != 0.0) {
      iVar14 = iVar14 + 1;
    }
    if (param_2[3] - (float)iVar12 != 0.0) {
      iVar12 = iVar12 + 1;
    }
    local_f0 = CONCAT44((int)param_2[1],(int)*param_2);
    uStack_e8 = CONCAT44(iVar12,iVar14);
  }
  else {
    uStack_e8 = param_6[1];
    local_f0 = *param_6;
  }
  bVar1 = true;
  local_110[0] = param_8;
  fVar19 = (float)(**(code **)(*param_4 + 0x58))(param_4);
  fVar20 = (float)(**(code **)(*param_4 + 0x60))(param_4);
  fVar21 = (float)(**(code **)(*param_3 + 0x58))(param_3);
  fVar22 = (float)(**(code **)(*param_3 + 0x60))(param_3);
  plVar17 = param_4 + 0xc;
  plVar16 = param_3 + 0xc;
  plVar15 = (longlong *)0x0;
  bVar2 = false;
  if ((*(int *)((longlong)param_4 + 0x2c) == 0) && (*(int *)((longlong)param_3 + 0x2c) == 0)) {
    cVar4 = (**(code **)(*param_4 + 0xa8))(param_4);
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*param_3 + 0xa8))(param_3);
      bVar3 = false;
      if (cVar4 != '\0') goto LAB_18008b838;
    }
    else {
LAB_18008b838:
      bVar3 = true;
    }
    if (!bVar3) goto LAB_18008b8d0;
    cVar4 = (**(code **)(*param_4 + 0xa8))(param_4);
    if (cVar4 == '\0') {
      lVar13 = 0x60;
    }
    else {
      FUN_180097758(param_4,param_2[0xb],param_2[0xc]);
      fVar20 = 1.0;
      fVar19 = 1.0;
      lVar13 = 0x1a4;
    }
    plVar17 = (longlong *)(lVar13 + (longlong)param_4);
    cVar5 = (**(code **)(*param_3 + 0xa8))(param_3);
    bVar1 = cVar5 == '\0';
    if (bVar1) {
      lVar13 = 0x60;
    }
    else {
      FUN_180097758(param_3,param_2[8],param_2[9]);
      fVar22 = 1.0;
      fVar21 = 1.0;
      lVar13 = 0x1a4;
      plVar15 = param_3;
    }
    bVar2 = true;
    plVar16 = (longlong *)(lVar13 + (longlong)param_3);
    if (cVar4 == '\0') goto LAB_18008b8d0;
  }
  else {
LAB_18008b8d0:
    (**(code **)(*param_4 + 8))(param_4,param_2[0xb],param_2[0xc],1);
  }
  if (bVar1) {
    (**(code **)(*param_3 + 8))(param_3,param_2[8],param_2[9],0);
  }
  *(ulonglong *)(param_2 + 2) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20) * fVar22,
                (float)*(undefined8 *)(param_2 + 2) * fVar21);
  *(ulonglong *)param_2 =
       CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) * fVar22,
                (float)*(undefined8 *)param_2 * fVar21);
  *(ulonglong *)(param_2 + 6) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) * fVar20,
                (float)*(undefined8 *)(param_2 + 6) * fVar19);
  *(ulonglong *)(param_2 + 4) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20) * fVar20,
                (float)*(undefined8 *)(param_2 + 4) * fVar19);
  plVar7 = *(longlong **)((longlong)plVar17 + 0x1c);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)((longlong)plVar17 + 0x14);
  }
  (**(code **)(*plVar7 + 0x50))(plVar7,auStack_a8);
  if (*(int *)((longlong)param_4 + 0x44) - 3U < 3) {
    uVar8 = FUN_18008ae80(param_1,param_2,param_3,param_4);
    if ((uVar8 & 1) == 0) {
      return;
    }
    fVar19 = param_2[10];
    goto LAB_18008b97c;
  }
  FUN_1800a0700(param_1,*(undefined4 *)((longlong)param_4 + 0x2c),local_100 & 0xffffffff,
                local_110[0],param_9,*(undefined1 *)(param_1 + 0x1cf08),param_10,param_11,param_12);
  (**(code **)(**(longlong **)((longlong)plVar16 + 0x14) + 0x50))
            (*(longlong **)((longlong)plVar16 + 0x14),auStack_e0);
  if (!bVar2) {
    if (local_88 == 0x3c) {
      FUN_18008db78(param_1,1,param_4[2]);
    }
    if (((local_108 & 1) == 0) && (local_c0 == 0x3c)) {
      FUN_18008db78(param_1,2,param_3[2]);
    }
  }
  puVar9 = (uint *)(**(code **)(*param_4 + 0x20))(param_4,&local_108);
  FUN_1800a09c8(param_1,local_110,*(undefined4 *)((longlong)param_4 + 0x2c),
                *(undefined4 *)((longlong)param_3 + 0x2c),local_88,local_c0,*puVar9 >> 0x14 & 3,
                param_10,param_11,param_9,param_12);
  uVar18 = *(undefined8 *)((longlong)plVar17 + 0x14);
  lVar13 = *(longlong *)((longlong)plVar16 + 0x1c);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)((longlong)plVar16 + 0x14);
  }
  local_108 = param_1 + 0x1c000;
  FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),&local_100,
                *(undefined4 *)((longlong)plVar17 + 0x2c),0);
  if ((local_110[0] == 8) &&
     (*(longlong *)((longlong)plVar17 + 0x14) != *(longlong *)((longlong)plVar16 + 0x14) &&
      param_10 == param_11)) {
LAB_18008baf8:
    if (param_10 == '\0') {
      local_110[0] = 4;
    }
    else {
      local_110[0] = 6;
    }
    if (*(int *)((longlong)param_4 + 0x34) != 1) {
      local_110[0] = local_110[0] + 1;
    }
LAB_18008bb18:
    uVar18 = (**(code **)(*param_4 + 0xf8))(param_4);
    uVar6 = (**(code **)(*param_4 + 0x118))(param_4,0,1);
    puVar10 = (ulonglong *)
              FUN_1800e7b48(*(undefined8 *)(*(longlong *)(local_108 + 0xf18) + 0x1930),auStack_f8,
                            uVar6,0);
    local_100 = *puVar10;
    *(undefined8 *)(param_2 + 0x16) = uVar18;
  }
  else {
    uVar8 = func_0x0001801b7978(local_110[0]);
    if ((uVar8 & 1) != 0) {
      if (extraout_w11 == 8) goto LAB_18008baf8;
      goto LAB_18008bb18;
    }
  }
  *(longlong *)(param_2 + 0xe) = lVar13;
  *(undefined8 *)(param_2 + 0x16) = uVar18;
  puVar11 = (undefined8 *)
            FUN_1800e7b48(*(undefined8 *)(*(longlong *)(local_108 + 0xf18) + 0x1938),auStack_f8,
                          (int)plVar16[6],param_2[10]);
  *(undefined8 *)(param_2 + 0x12) = *puVar11;
  *(ulonglong *)(param_2 + 0x1a) = local_100;
  param_2[0x22] = *(float *)(plVar16 + 9);
  param_2[0x24] = *(float *)(plVar16 + 9);
  FUN_18008a4a0(param_1,param_2,*(undefined4 *)((longlong)param_3 + 0x2c),
                *(undefined4 *)((longlong)param_4 + 0x2c),local_110[0],0,param_10,0);
  fVar19 = param_2[10];
  if (plVar15 != (longlong *)0x0) {
    FUN_1800978b8(plVar15,fVar19,&local_f0);
    return;
  }
LAB_18008b97c:
  (**(code **)(*param_3 + 0x18))(param_3,fVar19,&local_f0);
  return;
}

