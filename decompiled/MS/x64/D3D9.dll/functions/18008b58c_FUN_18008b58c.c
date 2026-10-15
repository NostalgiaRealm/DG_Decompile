/*
 * FUN_18008b58c at 18008b58c
 * byte __fastcall FUN_18008b58c(longlong param_1, float * param_2, longlong * param_3, longlong * param_4, char param_5, undefined8 param_6, uint param_7, uint param_8, byte param_9, byte param_10, byte param_11, byte param_12)
 * Address ranges: 18008b58c-18008bbc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18008b58c(longlong param_1,float *param_2,longlong *param_3,longlong *param_4,char param_5,
                  undefined8 *param_6,uint param_7,uint param_8,byte param_9,byte param_10,
                  byte param_11,byte param_12)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char cVar8;
  byte bVar9;
  longlong **pplVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_res8;
  longlong *local_res10;
  uint local_res18;
  float local_res20;
  undefined8 local_128;
  int local_120;
  int local_11c;
  int local_118;
  float local_114;
  longlong *local_110;
  longlong *local_108;
  undefined8 uStack_100;
  RECT local_f8;
  undefined1 local_e8 [16];
  uint local_d8;
  undefined1 local_b8 [16];
  uint local_a8;
  
  lVar15 = *(longlong *)(param_1 + 0x1cf10);
  FUN_1800dfe48(lVar15,param_2,param_1);
  if (param_6 == (undefined8 *)0x0) {
    pplVar10 = (longlong **)
               FUN_1800a97d0(lVar15,(int *)&local_108,*param_2,param_2[1],param_2[2],param_2[3]);
  }
  else {
    pplVar10 = &local_108;
    local_108 = (longlong *)*param_6;
    uStack_100 = param_6[1];
  }
  local_f8.left = *(LONG *)pplVar10;
  local_f8.top = *(int *)((longlong)pplVar10 + 4);
  local_f8.right = *(LONG *)(pplVar10 + 1);
  local_f8.bottom = *(int *)((longlong)pplVar10 + 0xc);
  bVar9 = 1;
  local_res8 = (longlong *)CONCAT71(local_res8._1_7_,1);
  fVar20 = (float)(**(code **)(*param_4 + 0x58))(param_4);
  fVar21 = (float)(**(code **)(*param_4 + 0x60))(param_4);
  fVar22 = (float)(**(code **)(*param_3 + 0x58))(param_3);
  fVar23 = (float)(**(code **)(*param_3 + 0x60))(param_3);
  local_res20 = param_2[0xb];
  plVar17 = param_4 + 0xc;
  plVar18 = param_3 + 0xc;
  local_118 = *(int *)((longlong)param_4 + 0x3c);
  local_114 = param_2[10];
  local_res18 = (int)param_2[8] + *(int *)((longlong)param_3 + 0x3c) * (int)param_2[9];
  local_108 = (longlong *)0x0;
  local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffffffffff00);
  local_110 = plVar17;
  puVar7 = param_6;
  if ((*(int *)((longlong)param_4 + 0x2c) == 0) && (*(int *)((longlong)param_3 + 0x2c) == 0)) {
    cVar8 = (**(code **)(*param_4 + 0xa8))(param_4);
    puVar7 = param_6;
    if (cVar8 == '\0') {
      cVar8 = (**(code **)(*param_3 + 0xa8))(param_3);
      puVar7 = param_6;
      if (cVar8 == '\0') goto LAB_18008b76c;
    }
    param_6._4_4_ = (undefined4)((ulonglong)puVar7 >> 0x20);
    param_6._0_4_ = CONCAT31((int3)((ulonglong)puVar7 >> 8),1);
    cVar8 = (**(code **)(*param_4 + 0xa8))(param_4);
    if (cVar8 != '\0') {
      FUN_180092848(param_4,(int)param_2[10],(int)param_2[0xb]);
      fVar21 = 1.0;
      plVar17 = param_4 + 0x30;
      fVar20 = 1.0;
      param_6._0_4_ = (uint)param_6 & 0xffffff00;
      local_110 = plVar17;
    }
    cVar8 = (**(code **)(*param_3 + 0xa8))(param_3);
    if (cVar8 != '\0') {
      local_108 = param_3;
      FUN_180092848(param_3,(int)param_2[8],(int)param_2[9]);
      fVar23 = 1.0;
      plVar18 = param_3 + 0x30;
      fVar22 = 1.0;
      local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffffff00);
    }
    puVar7 = (undefined8 *)CONCAT44(param_6._4_4_,(uint)param_6);
    bVar19 = (char)param_6 != '\0';
    local_res10 = (longlong *)CONCAT71(local_res10._1_7_,1);
    param_6 = puVar7;
    if (bVar19) goto LAB_18008b76c;
  }
  else {
LAB_18008b76c:
    param_6 = puVar7;
    (**(code **)(*param_4 + 8))(param_4,param_2[10],param_2[0xb],1);
  }
  if ((char)local_res8 != '\0') {
    (**(code **)(*param_3 + 8))(param_3,param_2[8],param_2[9],0);
  }
  param_2[4] = fVar20 * param_2[4];
  fVar1 = *param_2;
  param_2[5] = fVar21 * param_2[5];
  *param_2 = fVar22 * fVar1;
  param_2[1] = fVar23 * param_2[1];
  param_2[6] = fVar20 * param_2[6];
  param_2[7] = fVar21 * param_2[7];
  param_2[2] = fVar22 * param_2[2];
  param_2[3] = fVar23 * param_2[3];
  local_128 = (longlong *)plVar17[4];
  if (local_128 == (longlong *)0x0) {
    local_128 = (longlong *)plVar17[3];
  }
  (**(code **)(*local_128 + 0x50))(fVar22 * fVar1,local_b8);
  if (*(int *)((longlong)param_4 + 0x44) - 3U < 3) {
    bVar9 = FUN_18008a934(param_1,param_2,(longlong)param_3,(longlong)param_4);
    puVar7 = param_6;
    if (bVar9 != 0) {
      (**(code **)(*param_3 + 0x18))(param_3,local_res18,&local_f8);
      puVar7 = param_6;
    }
    goto LAB_18008bb82;
  }
  (**(code **)(*(longlong *)plVar18[3] + 0x50))((longlong *)plVar18[3],local_e8);
  FUN_1800aa2e0(param_1,*(uint *)((longlong)param_4 + 0x2c),param_7,param_8,param_9,
                *(byte *)(param_1 + 0x1cf08),param_10,param_11,param_12);
  if ((char)local_res10 == '\0') {
    if (local_a8 == 0x3c) {
      FUN_18008d228(param_1,1,param_4[2]);
    }
    if ((param_5 == '\0') && (local_d8 == 0x3c)) {
      FUN_18008d228(param_1,2,param_3[2]);
    }
  }
  puVar11 = (uint *)(**(code **)(*param_4 + 0x20))(param_4,&local_res8);
  uVar14 = *puVar11 >> 0x14 & 3;
  FUN_1800aa584(param_1,(uint *)&param_6,*(uint *)((longlong)param_4 + 0x2c),
                *(uint *)((longlong)param_3 + 0x2c),local_a8,local_d8,uVar14,param_10,param_11,
                param_9,param_12);
  plVar17 = (longlong *)plVar17[5];
  local_res10 = plVar17;
  if ((((uint)param_6 == 8) && (local_110[3] != plVar18[3])) && (param_10 == param_11)) {
LAB_18008b9ad:
    param_6 = (undefined8 *)CONCAT44(param_6._4_4_,(*(int *)((longlong)param_4 + 0x34) != 1) + 4);
LAB_18008b9bf:
    plVar12 = (longlong *)(**(code **)(*param_4 + 0xc0))(param_4,0);
    *(longlong **)(param_2 + 0x12) = local_128;
    plVar17 = plVar12;
    uVar16 = (uint)param_6;
    local_res10 = plVar12;
    puVar7 = param_6;
  }
  else {
    plVar12 = plVar17;
    uVar16 = (uint)param_6;
    cVar8 = FUN_1800a91c4((uint)param_6);
    puVar7 = param_6;
    if (cVar8 != '\0') {
      if (uVar16 == 8) goto LAB_18008b9ad;
      goto LAB_18008b9bf;
    }
  }
  param_6._0_4_ = uVar16;
  if (plVar12 != (longlong *)0x0) {
    if (local_110[3] == plVar18[3]) {
      local_res8 = (longlong *)0x0;
      param_6 = puVar7;
      (**(code **)(*plVar17 + 0x38))(plVar17,&local_res8);
      fVar20 = param_2[4];
      bVar19 = fVar20 != param_2[6];
      bVar3 = param_2[6] <= fVar20;
      fVar21 = param_2[5];
      bVar2 = fVar21 != param_2[7];
      bVar4 = param_2[7] <= fVar21;
      iVar5 = (int)fVar20;
      if (bVar3 && bVar19) {
        iVar5 = (int)param_2[6];
      }
      iVar6 = (int)fVar21;
      if (bVar4 && bVar2) {
        iVar6 = (int)param_2[7];
      }
      local_128 = (longlong *)CONCAT44(iVar6,iVar5);
      local_120 = (int)param_2[6];
      if (bVar3 && bVar19) {
        local_120 = (int)fVar20;
      }
      local_11c = (int)param_2[7];
      if (bVar4 && bVar2) {
        local_11c = (int)fVar21;
      }
      InflateRect((LPRECT)&local_128,2,2);
      uVar14 = (int)local_res20 * local_118 + (int)local_114;
      uVar13 = FUN_18008a23c(param_1,local_res8,plVar17,(longlong *)(param_2 + 0x12),&local_res10,
                             SUB41(param_2[10],0),uVar14,(RECT *)&local_128);
      bVar9 = (byte)uVar13;
      (**(code **)(*local_res8 + 0x10))();
      param_2[10] = 0.0;
      param_2[0xb] = 0.0;
      plVar17 = local_res10;
      puVar7 = param_6;
    }
    if ((bVar9 != 0) && (*(longlong *)(plVar18[6] + (ulonglong)local_res18 * 0x28) != 0)) {
      *(longlong *)(param_2 + 0xc) = plVar18[3];
      *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(plVar18[6] + (ulonglong)local_res18 * 0x28);
      *(longlong **)(param_2 + 0x14) = plVar17;
      FUN_18008a494(param_1,param_2,*(uint *)((longlong)param_3 + 0x2c),
                    *(uint *)((longlong)param_4 + 0x2c),(uint)param_6,param_10,uVar14 & 0xffffff00);
      param_6 = puVar7;
      if (local_108 == (longlong *)0x0) {
        (**(code **)(*param_3 + 0x18))(param_3);
        puVar7 = param_6;
      }
      else {
        FUN_1800929e8((longlong)local_108,local_res18,&local_f8);
        puVar7 = param_6;
      }
      goto LAB_18008bb82;
    }
  }
  bVar9 = 0;
LAB_18008bb82:
  param_6 = puVar7;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1cf10) + 0x620));
  return bVar9;
}

