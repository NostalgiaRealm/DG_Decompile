/*
 * FUN_1002c9c1 at 1002c9c1
 * char __thiscall FUN_1002c9c1(void * this, float * param_1, int param_2, float param_3, float param_4, float param_5, undefined4 * param_6, uint param_7, char * param_8)
 * Address ranges: 1002c9c1-1002d119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_1002c9c1(void *this,float *param_1,int param_2,float param_3,float param_4,float param_5,
            undefined4 *param_6,uint param_7,char *param_8)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar10;
  int *piVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  float in_XMM3_Da;
  int local_4a4 [257];
  uint local_a0;
  uint local_9c;
  uint local_98;
  float local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  float local_74 [4];
  tagRECT local_64;
  undefined4 local_54;
  undefined4 local_50;
  char local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  char local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  float *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  uint local_c;
  char local_5;
  
  iVar8 = param_2;
  local_1c = *(int *)((int)this + 4);
  local_18 = *(int **)(local_1c + 0x4c);
  local_28 = *(int *)(param_2 + 4) + 100;
  fVar16 = in_XMM3_Da;
  local_90 = in_XMM3_Da;
  local_10 = this;
  iVar6 = FUN_100313c3((int)this + 0x150);
  local_24 = FUN_10031403(extraout_ECX);
  pfVar3 = param_1;
  uVar7 = FUN_10032056((uint *)param_1,iVar6,local_24);
  local_40 = (uint)param_3;
  local_5 = (char)uVar7;
  local_2c = (float *)0x0;
  local_44 = (uint)in_XMM3_Da;
  if (((((char)param_7 == '\0') || ((char)param_8 != '\0')) || (local_5 == '\0')) ||
     (((local_44 & iVar6 - 1U) != 0 || ((local_40 & local_24 - 1U) != 0)))) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  local_54 = 0;
  local_50 = 0;
  local_4c = '\0';
  pfVar13 = local_74;
  local_4b = local_4c;
  local_4a = local_4c;
  local_49 = local_4c;
  local_48 = cVar4;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar13 = 0.0;
    pfVar13 = pfVar13 + 1;
  }
  if (cVar4 != '\0') {
    SetRect(&local_64,(int)fVar16,(int)param_3,(int)param_4,(int)param_5);
    local_74[0] = *pfVar3;
    local_74[1] = pfVar3[1];
    local_74[2] = pfVar3[2];
    local_74[3] = pfVar3[3];
    cVar4 = (**(code **)(*local_18 + 0x84))
                      (*(undefined4 *)(local_1c + 0x6c),*(undefined4 *)(local_1c + 0x70),
                       *(undefined4 *)(local_28 + 8),*(undefined4 *)(local_28 + 0xc),
                       *(undefined4 *)(*(int *)((int)local_10 + 4) + 0x50),
                       *(undefined4 *)(*(int *)(iVar8 + 4) + 0x50),local_74);
    return cVar4;
  }
  local_3c = *(uint *)(iVar8 + 400);
  local_38 = *(uint *)(iVar8 + 0x1d0);
  local_14 = (uint)*pfVar3 & 0xfffffffc;
  fVar16 = pfVar3[2];
  local_c = (uint)pfVar3[1] & 0xfffffffc;
  uVar12 = (int)fVar16 + 3U & 0xfffffffc;
  fVar1 = param_1[3];
  uVar14 = (int)fVar1 + 3U & 0xfffffffc;
  local_34 = *(undefined4 *)(local_28 + 8);
  local_30 = *(undefined4 *)(local_28 + 0xc);
  uVar7 = FUN_1002c723(iVar8);
  pvVar10 = local_10;
  if ((char)uVar7 == '\0') {
LAB_1002cb40:
    param_7 = param_7 & 0xffffff;
  }
  else {
    uVar7 = FUN_1002c761((int)local_10);
    param_7 = CONCAT13(1,(undefined3)param_7);
    pvVar10 = extraout_ECX_00;
    if ((char)uVar7 == '\0') goto LAB_1002cb40;
  }
  local_24 = 6;
  if (((((char)param_8 == '\0') && (*(char *)(param_6 + 1) == '\0')) &&
      ((*(char *)((int)param_6 + 5) == '\0' &&
       ((*(char *)(param_6 + 2) == '\0' && param_7._3_1_ == '\0' && (local_5 != '\0')))))) &&
     ((*(int *)(iVar8 + 0x1cc) == 5 || (*(int *)(iVar8 + 0x1cc) == 6)))) {
    cVar4 = '\x01';
LAB_1002ce81:
    local_20 = *(int **)(*(int *)(param_2 + 4) + 0x50);
    iVar8 = *(int *)(param_2 + 0x1cc);
    local_24 = iVar8;
  }
  else {
    local_8c = uVar14 - local_c;
    local_88 = uVar12 - local_14;
    local_20 = (int *)FUN_100251fe(*(void **)((int)pvVar10 + 0xfc),local_88,local_8c);
    if (local_20 == (int *)0x0) {
      cVar4 = '\0';
      goto LAB_1002ce81;
    }
    param_8 = (char *)(param_6 + 2);
    local_34 = 0;
    local_30 = 0;
    if ((local_5 == '\0') || (*param_8 != '\0')) {
      local_74[0] = 0.0;
      local_74[1] = 0.0;
      local_74[2] = (float)((double)(int)local_88 +
                           (double)(&DAT_10066fd0)[-((int)local_88 >> 0x1f)]);
      local_74[3] = (float)((double)(int)local_8c +
                           (double)(&DAT_10066fd0)[-((int)local_8c >> 0x1f)]);
      local_64.left =
           (LONG)(float)((double)(int)local_14 + (double)(&DAT_10066fd0)[-((int)local_14 >> 0x1f)]);
      local_64.top = (LONG)(float)((double)(int)local_c +
                                  (double)(&DAT_10066fd0)[-((int)local_c >> 0x1f)]);
      local_64.right =
           (LONG)(float)((double)(int)uVar12 +
                        (double)(&DAT_10066fd0)[-((int)((int)fVar16 + 3U) >> 0x1f)]);
      local_64.bottom =
           (LONG)(float)((double)(int)uVar14 +
                        (double)(&DAT_10066fd0)[-((int)((int)fVar1 + 3U) >> 0x1f)]);
      cVar5 = (**(code **)(*local_18 + 0x84))
                        (0,0,*(undefined4 *)(local_1c + 0x6c),*(undefined4 *)(local_1c + 0x70),
                         local_20,*(undefined4 *)(*(int *)((int)local_10 + 4) + 0x50),local_74);
      cVar4 = '\0';
      iVar8 = param_2;
      if (cVar5 != '\0') goto LAB_1002cce9;
    }
    else {
LAB_1002cce9:
      local_74[0] = (float)((double)(int)((int)*param_1 - local_14) +
                           (double)(&DAT_10066fd0)[-((int)((int)*param_1 - local_14) >> 0x1f)]);
      local_74[1] = (float)((double)(int)((int)param_1[1] - local_c) +
                           (double)(&DAT_10066fd0)[-((int)((int)param_1[1] - local_c) >> 0x1f)]);
      local_74[2] = (float)((double)(int)((int)param_1[2] - local_14) +
                           (double)(&DAT_10066fd0)[-((int)((int)param_1[2] - local_14) >> 0x1f)]);
      local_54 = *param_6;
      local_50 = *(undefined4 *)(iVar8 + 0x1d0);
      local_74[3] = (float)((double)(int)((int)param_1[3] - local_c) +
                           (double)(&DAT_10066fd0)[-((int)((int)param_1[3] - local_c) >> 0x1f)]);
      local_4c = *param_8;
      local_4b = *(char *)((int)param_6 + 6);
      local_4a = *(char *)((int)param_6 + 7);
      local_64.left = (LONG)local_90;
      local_64.top = (LONG)param_3;
      local_49 = param_7._3_1_;
      local_64.right = (LONG)param_4;
      local_64.bottom = (LONG)param_5;
      cVar4 = (**(code **)(*local_18 + 0x84))
                        (0,0,*(undefined4 *)(local_28 + 8),*(undefined4 *)(local_28 + 0xc),local_20,
                         *(undefined4 *)(*(int *)(iVar8 + 4) + 0x50),local_74);
    }
    if (*(int *)(param_2 + 0x1cc) == 0) {
      FUN_100336f5(local_10,local_4a4);
      piVar11 = local_4a4;
    }
    else {
      piVar11 = (int *)0x0;
    }
    local_3c = (**(code **)(*local_18 + 0x24))
                         (local_3c,*(undefined4 *)(param_2 + 0x1cc),6,piVar11,0);
    (**(code **)(*local_18 + 0x20))(&local_a0,*(undefined4 *)(param_2 + 0x1cc));
    local_38 = local_98 | local_9c | local_a0;
    local_44 = 0;
    local_40 = 0;
    iVar8 = 6;
  }
  (**(code **)(*local_18 + 0x20))(&local_84,iVar8);
  param_7 = (uint)local_2c;
  if (local_84 == 0xff) {
    if ((local_80 != 0xff00) || (local_7c != 0xff0000)) goto LAB_1002d10f;
    param_7 = 1;
  }
  else if (local_84 == -0x1000000) {
    if ((local_80 != 0xff0000) || (local_7c != 0xff00)) goto LAB_1002d10f;
    param_7 = 2;
  }
  else if (local_84 == 0xff00) {
    if ((local_80 != 0xff0000) || (local_7c != -0x1000000)) {
LAB_1002d10f:
      return (char)local_2c;
    }
    param_7 = 3;
  }
  else if (((local_84 != 0xff0000) || (local_80 != 0xff00)) || (local_7c != 0xff))
  goto LAB_1002d10f;
  if (cVar4 != '\0') {
    param_5 = (float)local_2c;
    param_1 = local_2c;
    param_3 = (float)(**(code **)(*local_20 + 0x2c))(local_34,local_30,1,1,&param_5,&param_1);
    if ((char *)param_3 == (char *)0x0) {
      param_8 = (char *)param_3;
      iVar8 = (**(code **)(**(int **)(*(int *)((int)local_10 + 4) + 0x50) + 0x2c))
                        (*(undefined4 *)(local_1c + 0x6c),*(undefined4 *)(local_1c + 0x70),2,1,
                         &param_3,&param_8);
      if (iVar8 == 0) {
        bVar15 = local_24 != 5;
        param_4 = (float)CONCAT31(param_4._1_3_,bVar15);
        if ((*(char *)(param_6 + 2) == '\0') && ((*(uint *)(param_2 + 0x154) & 0x10000) != 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        param_2 = (int)param_1 * local_40 + (int)param_5 + local_44 * 4;
        iVar8 = *(int *)((int)local_10 + 0x1a0);
        if (iVar8 == 0x31545844) {
          puVar9 = &local_3c;
          if (!bVar2) {
            puVar9 = (uint *)0x0;
          }
          FUN_10034288(param_2,(int)param_1,uVar12 - local_14,uVar14 - local_c,param_7,puVar9,bVar15
                       ,(local_c >> 2) * (int)param_8 + (int)param_3 + (local_14 >> 1) * 4,
                       (int)param_8);
        }
        else if ((iVar8 == 0x32545844) || (iVar8 == 0x33545844)) {
          param_6 = (undefined4 *)0x0;
          puVar9 = &local_3c;
          if (!bVar2) {
            puVar9 = (uint *)0x0;
          }
          FUN_10034434(param_2,(int)param_1,uVar12 - local_14,uVar14 - local_c,param_7,puVar9,bVar15
                       ,(local_c >> 2) * (int)param_8 + (int)param_3 + local_14 * 4,(int)param_8);
        }
        else if ((iVar8 == 0x34545844) || (iVar8 == 0x35545844)) {
          param_6 = (undefined4 *)0x0;
          puVar9 = &local_3c;
          if (!bVar2) {
            puVar9 = (uint *)0x0;
          }
          FUN_10034618(param_2,(int)param_1,uVar12 - local_14,uVar14 - local_c,param_7,puVar9,bVar15
                       ,(local_c >> 2) * (int)param_8 + (int)param_3 + local_14 * 4,(int)param_8);
        }
        (**(code **)(**(int **)(*(int *)((int)local_10 + 4) + 0x50) + 0x30))
                  (*(undefined4 *)(local_1c + 0x6c),*(undefined4 *)(local_1c + 0x70));
      }
      else {
        cVar4 = '\0';
      }
      (**(code **)(*local_20 + 0x30))(local_34,local_30);
    }
    else {
      cVar4 = '\0';
    }
  }
  return cVar4;
}

