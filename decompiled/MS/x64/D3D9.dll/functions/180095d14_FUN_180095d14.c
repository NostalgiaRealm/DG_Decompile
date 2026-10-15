/*
 * FUN_180095d14 at 180095d14
 * undefined __fastcall FUN_180095d14(longlong param_1, float * param_2, longlong * param_3, longlong * param_4, char param_5, undefined8 * param_6, uint param_7, uint param_8, byte param_9, byte param_10, byte param_11, byte param_12)
 * Address ranges: 180095d14-180096256
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180095d14(longlong param_1,float *param_2,longlong *param_3,longlong *param_4,char param_5,
                  undefined8 *param_6,uint param_7,uint param_8,byte param_9,byte param_10,
                  byte param_11,byte param_12)

{
  float fVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  RECT *pRVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong *local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined4 in_stack_fffffffffffffed0;
  undefined4 uVar18;
  uint uVar19;
  RECT local_108;
  longlong *local_f8;
  longlong local_f0;
  undefined1 local_e8 [32];
  uint local_c8;
  undefined1 local_b0 [32];
  uint local_90;
  
  plVar12 = param_4;
  if (param_6 == (undefined8 *)0x0) {
    pRVar8 = (RECT *)FUN_1800a97d0(param_1,&local_108.left,*param_2,param_2[1],param_2[2],param_2[3]
                                  );
  }
  else {
    pRVar8 = &local_108;
    local_108._0_8_ = *param_6;
    local_108._8_8_ = param_6[1];
  }
  local_108.left = pRVar8->left;
  local_108.top = pRVar8->top;
  local_108.right = pRVar8->right;
  local_108.bottom = pRVar8->bottom;
  bVar13 = true;
  fVar14 = (float)(**(code **)(*plVar12 + 0x58))(param_4);
  fVar15 = (float)(**(code **)(*param_4 + 0x60))(param_4);
  fVar16 = (float)(**(code **)(*param_3 + 0x58))(param_3);
  fVar17 = (float)(**(code **)(*param_3 + 0x60))(param_3);
  local_res10 = param_4 + 0xc;
  plVar12 = param_3 + 0xc;
  local_f8 = (longlong *)0x0;
  param_6 = (undefined8 *)((ulonglong)param_6 & 0xffffffffffffff00);
  if (((*(int *)((longlong)param_4 + 0x2c) == 0) && (*(int *)((longlong)param_3 + 0x2c) == 0)) &&
     ((cVar4 = (**(code **)(*param_4 + 0xa8))(param_4), cVar4 != '\0' ||
      (cVar4 = (**(code **)(*param_3 + 0xa8))(param_3), cVar4 != '\0')))) {
    cVar4 = (**(code **)(*param_4 + 0xa8))(param_4);
    if (cVar4 != '\0') {
      FUN_1800a18d8(param_4,(int)param_2[0xb],(int)param_2[0xc]);
      fVar15 = 1.0;
      local_res10 = (longlong *)((longlong)param_4 + 0x1a4);
      fVar14 = 1.0;
    }
    cVar5 = (**(code **)(*param_3 + 0xa8))(param_3);
    bVar13 = cVar5 == '\0';
    if (bVar13) {
      lVar9 = 0x60;
    }
    else {
      local_f8 = param_3;
      FUN_1800a18d8(param_3,(int)param_2[8],(int)param_2[9]);
      fVar17 = 1.0;
      fVar16 = 1.0;
      lVar9 = 0x1a4;
    }
    param_6 = (undefined8 *)CONCAT71(param_6._1_7_,1);
    plVar12 = (longlong *)(lVar9 + (longlong)param_3);
    if (cVar4 == '\0') goto LAB_180095eaf;
  }
  else {
LAB_180095eaf:
    (**(code **)(*param_4 + 8))(param_4,param_2[0xb],param_2[0xc],1);
  }
  if (bVar13) {
    (**(code **)(*param_3 + 8))(param_3,param_2[8],param_2[9],0);
  }
  plVar2 = local_res10;
  param_2[4] = fVar14 * param_2[4];
  fVar1 = *param_2;
  param_2[5] = fVar15 * param_2[5];
  *param_2 = fVar16 * fVar1;
  param_2[1] = fVar17 * param_2[1];
  param_2[6] = fVar14 * param_2[6];
  param_2[7] = fVar15 * param_2[7];
  param_2[2] = fVar16 * param_2[2];
  param_2[3] = fVar17 * param_2[3];
  plVar11 = *(longlong **)((longlong)local_res10 + 0x1c);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)local_res10 + 0x14);
  }
  (**(code **)(*plVar11 + 0x50))(fVar16 * fVar1,local_b0);
  bVar3 = param_10;
  if (*(int *)((longlong)param_4 + 0x44) - 3U < 3) {
    cVar4 = FUN_180095534(param_1,param_2,(longlong)param_3,param_4);
    if (cVar4 == '\0') {
      return;
    }
    fVar14 = param_2[10];
    goto LAB_180095f7c;
  }
  uVar18 = CONCAT31((int3)((uint)in_stack_fffffffffffffed0 >> 8),param_11);
  FUN_1800aa2e0(param_1,*(uint *)((longlong)param_4 + 0x2c),param_7,param_8,param_9,
                *(byte *)(param_1 + 0x1cf08),param_10,param_11,param_12);
  (**(code **)(**(longlong **)((longlong)plVar12 + 0x14) + 0x50))
            (*(longlong **)((longlong)plVar12 + 0x14),local_e8);
  if ((char)param_6 == '\0') {
    if (local_90 == 0x3c) {
      FUN_1800976c4(param_1,1,param_4[2]);
    }
    if ((param_5 == '\0') && (local_c8 == 0x3c)) {
      FUN_1800976c4(param_1,2,param_3[2]);
    }
  }
  puVar10 = (uint *)(**(code **)(*param_4 + 0x20))(param_4,&param_6);
  uVar19 = CONCAT31((int3)((uint)uVar18 >> 8),bVar3);
  FUN_1800aa584(param_1,(uint *)&local_res10,*(uint *)((longlong)param_4 + 0x2c),
                *(uint *)((longlong)param_3 + 0x2c),local_90,local_c8,*puVar10 >> 0x14 & 3,bVar3,
                param_11,param_9,param_12);
  param_6 = *(undefined8 **)((longlong)plVar2 + 0x14);
  local_res18 = *(longlong *)((longlong)plVar12 + 0x1c);
  if (local_res18 == 0) {
    local_res18 = *(longlong *)((longlong)plVar12 + 0x14);
  }
  FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),&local_res20,
                *(uint *)((longlong)plVar2 + 0x2c),0);
  if ((((uint)local_res10 == 8) &&
      (*(longlong *)((longlong)plVar2 + 0x14) != *(longlong *)((longlong)plVar12 + 0x14))) &&
     (bVar3 == param_11)) {
LAB_18009612e:
    if (bVar3 == 0) {
      iVar6 = (*(int *)((longlong)param_4 + 0x34) != 1) + 4;
    }
    else {
      iVar6 = (*(int *)((longlong)param_4 + 0x34) != 1) + 6;
    }
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar6);
LAB_180096150:
    param_6 = (undefined8 *)(**(code **)(*param_4 + 0xf8))(param_4);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930);
    uVar7 = (**(code **)(*param_4 + 0x118))(param_4,0,1);
    plVar11 = FUN_1800e1d04(lVar9,&local_f0,uVar7,0);
    local_res20 = *plVar11;
    *(undefined8 **)(param_2 + 0x16) = param_6;
  }
  else {
    uVar7 = (uint)local_res10;
    cVar4 = FUN_1800a91c4((uint)local_res10);
    if (cVar4 != '\0') {
      if (uVar7 == 8) goto LAB_18009612e;
      goto LAB_180096150;
    }
  }
  *(longlong *)(param_2 + 0xe) = local_res18;
  *(undefined8 **)(param_2 + 0x16) = param_6;
  plVar11 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1938),
                          (longlong *)&param_6,*(uint *)(plVar12 + 6),(int)param_2[10]);
  lVar9 = *plVar11;
  *(longlong *)(param_2 + 0x1a) = local_res20;
  *(longlong *)(param_2 + 0x12) = lVar9;
  param_2[0x22] = *(float *)(plVar12 + 9);
  param_2[0x24] = *(float *)(plVar12 + 9);
  FUN_180094c50(param_1,param_2,*(uint *)((longlong)param_3 + 0x2c),
                *(uint *)((longlong)param_4 + 0x2c),(uint)local_res10,'\0',bVar3,uVar19 & 0xffffff00
               );
  fVar14 = param_2[10];
  if (local_f8 != (longlong *)0x0) {
    FUN_1800a1a1c((longlong)local_f8,(uint)fVar14,&local_108);
    return;
  }
LAB_180095f7c:
  (**(code **)(*param_3 + 0x18))(param_3,fVar14,&local_108);
  return;
}

