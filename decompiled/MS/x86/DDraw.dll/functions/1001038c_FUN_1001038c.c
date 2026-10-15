/*
 * FUN_1001038c at 1001038c
 * undefined __thiscall FUN_1001038c(void * this, float * param_1, int param_2, uint param_3, uint param_4, char param_5, float * param_6, float param_7)
 * Address ranges: 1001038c-10010a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001038c(void *this,float *param_1,int param_2,uint param_3,uint param_4,char param_5,
            float *param_6,float param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float **ppfVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 local_78 [16];
  uint local_68;
  uint local_60;
  int local_40;
  int local_3c;
  undefined1 local_38 [4];
  undefined4 local_34 [3];
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int *local_10;
  void *local_c;
  
  uVar8 = param_4;
  local_c = this;
  if (param_7._0_1_ == '\0') {
    local_1c = (float)-((int)param_4 >> 0x1f);
    fVar11 = param_1[6];
    fVar13 = param_1[4];
    fVar10 = param_1[7];
    fVar14 = param_1[5];
    fVar15 = ((fVar11 - fVar13) / (param_1[2] - *param_1)) * 0.495;
    fVar16 = ((fVar10 - fVar14) / (param_1[3] - param_1[1])) * 0.495;
    local_14 = fVar16;
    local_10 = (int *)fVar15;
    if (local_1c == 0.0) {
      if ((param_4 == 5) || (param_4 == 4)) {
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\0';
      }
    }
    else {
      uVar2 = FUN_1001f556(param_4);
      cVar1 = (char)uVar2;
    }
    param_7 = (float)CONCAT31(param_7._1_3_,cVar1);
    uVar2 = uVar8;
    if (cVar1 != '\0') {
      (**(code **)(*(int *)param_1[0x12] + 0x28))((int *)param_1[0x12],local_78);
      local_68 = local_68 >> (SUB41(param_1[0xb],0) & 0x1f);
      local_60 = local_60 >> (SUB41(param_1[0xb],0) & 0x1f);
      uVar2 = 1;
      if (local_68 != 0) {
        uVar2 = local_68;
      }
      uVar3 = 1;
      if (local_60 != 0) {
        uVar3 = local_60;
      }
      fVar11 = (float)((double)(int)uVar2 + (double)(&DAT_10066fd0)[-((int)uVar2 >> 0x1f)]);
      fVar15 = (float)local_10 / fVar11;
      fVar10 = (float)((double)(int)uVar3 + (double)(&DAT_10066fd0)[-((int)uVar3 >> 0x1f)]);
      fVar16 = local_14 / fVar10;
      if ((char)param_6 == '\0') {
        fVar12 = 0.5;
      }
      else {
        fVar12 = 1.0;
      }
      fVar13 = (fVar12 + param_1[4]) / fVar11;
      fVar14 = (fVar12 + param_1[5]) / fVar10;
      fVar11 = (fVar12 + param_1[6]) / fVar11;
      fVar10 = (fVar12 + param_1[7]) / fVar10;
      uVar2 = param_4;
    }
    param_1[4] = fVar13 - fVar15;
    param_1[5] = fVar14 - fVar16;
    param_1[6] = fVar11 - fVar15;
    param_1[7] = fVar10 - fVar16;
    fVar11 = local_1c;
  }
  else {
    fVar11 = (float)(param_4 >> 0x1f);
    uVar2 = param_4;
  }
  if ((fVar11 != 0.0) && (((byte)uVar2 & 0xf) == 2)) {
    FUN_10022013((uint *)&param_6,(int)this,param_3);
    uVar8 = ~((int)param_6 << 8) & 0x40000000U | ((uint)param_6 & 0xfff00) << 10 |
            uVar2 & 0x8003ffff;
    param_4 = uVar8;
  }
  if ((int)uVar8 < 0) {
    local_10 = FUN_1000f360((void *)((int)this + 0xd02c),uVar8);
  }
  else {
    local_10 = *(int **)((int)this + uVar8 * 4 + 0xcf84);
  }
  *(void **)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304) + 0x948) = this;
  piVar6 = (int *)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304) + 0x634);
  *piVar6 = *piVar6 + 1;
  FUN_10052baa(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),*(undefined4 *)((int)this + 0xcf0c)
              );
  FUN_100531e5(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),*(int *)((int)this + 0xcf0c));
  FUN_1002074f(this,param_2,0,0);
  FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),*(uint *)((int)this + 53000),0,1,
               0x80);
  pfVar9 = param_1;
  FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),(uint)param_1[0x12],
               (uint)param_1[0xd],0,0x80);
  if (pfVar9[0x13] != 0.0) {
    FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),(uint)pfVar9[0x13],
                 (uint)pfVar9[0xd],0,0x80);
  }
  param_6 = pfVar9 + 10;
  if (pfVar9[0xe] != 0.0) {
    FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),(uint)pfVar9[0xe],(uint)*param_6,
                 0,4);
  }
  if (pfVar9[0xf] != 0.0) {
    FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),(uint)pfVar9[0xf],
                 (uint)pfVar9[10],0,4);
  }
  if (pfVar9[0x16] != 0.0) {
    FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),(uint)pfVar9[0x16],(uint)*param_6
                 ,0,0x10);
  }
  uVar2 = param_3;
  param_6 = (float *)0x2;
  if (uVar8 != 4) {
    if (uVar8 != 5) {
      if (uVar8 == 6) goto LAB_10010812;
      if (uVar8 != 7) {
        if (param_7._0_1_ == '\0') {
          if (param_3 < 0xe) {
            lVar17 = (**(code **)(**(int **)((int)this + 53000) + 0x2c))
                               (*(int **)((int)this + 53000));
            this = local_c;
            lVar18 = lVar17 + (ulonglong)(uint)(*(char *)((int)local_c + uVar2 * 4 + 0x3c) * 0x1000)
            ;
            FUN_10053426(*(int *)(*(int *)((int)local_c + 0xcf04) + 0x1304),1,(int)lVar18,
                         (int)((ulonglong)lVar18 >> 0x20));
            lVar18 = lVar17 + (ulonglong)(uint)(*(char *)((int)this + param_3 * 4 + 0x3d) * 0x1000);
            FUN_10053426(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),2,(int)lVar18,
                         (int)((ulonglong)lVar18 >> 0x20));
            lVar18 = lVar17 + (ulonglong)(uint)(*(char *)((int)this + param_3 * 4 + 0x3e) * 0x1000);
            FUN_10053426(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),3,(int)lVar18,
                         (int)((ulonglong)lVar18 >> 0x20));
            lVar17 = lVar17 + (ulonglong)(uint)(*(char *)((int)this + param_3 * 4 + 0x3f) * 0x1000);
            FUN_10053426(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),4,(int)lVar17,
                         (int)((ulonglong)lVar17 >> 0x20));
            pfVar9 = param_1;
          }
          if (param_2 == 0) {
            lVar18 = (**(code **)(**(int **)((int)this + 53000) + 0x2c))
                               (*(int **)((int)this + 53000));
            FUN_10053426(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),5,(int)(lVar18 + 0x2000),
                         (int)((ulonglong)(lVar18 + 0x2000) >> 0x20));
          }
        }
        goto LAB_1001084a;
      }
    }
    param_7 = (float)((double)(int)pfVar9[0xc] +
                     (double)(&DAT_10066fd0)[-((int)pfVar9[0xc] >> 0x1f)]);
    FUN_100532d7(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),7,param_7,1);
  }
LAB_10010812:
  param_7 = (float)((double)(int)pfVar9[0xb] + (double)(&DAT_10066fd0)[-((int)pfVar9[0xb] >> 0x1f)])
  ;
  FUN_100532d7(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),7,param_7,0);
LAB_1001084a:
  iVar7 = *(int *)((int)this + 0xcf04);
  cVar1 = FUN_100520b0(*(void **)(iVar7 + 0x15e8),2,*(uint *)(*(int *)(iVar7 + 0x1300) + 0xc),
                       *(uint *)(*(int *)(iVar7 + 0x1304) + 0x938),
                       *(uint *)(*(int *)(iVar7 + 0x1304) + 0x93c),&local_40);
  if (cVar1 != '\0') {
    FUN_10053169(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),1,local_34);
    local_20 = pfVar9[0x14];
    local_1c = pfVar9[0x15];
    local_28 = 1;
    local_24 = 1;
    param_7 = (float)((local_1c != 0.0) + 1);
    piVar6 = *(int **)(*(int *)((int)this + 0x14) * 0x18 + 0x520 + *(int *)((int)this + 0xcf00));
    (**(code **)(*piVar6 + 0x5c))(piVar6,1,local_38,&param_7,param_7,&local_20,&local_28,0);
    FUN_100533d4(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),6,local_40,local_3c);
    local_14 = pfVar9[0x11];
    local_18 = pfVar9[0x10];
    param_1 = (float *)pfVar9[0x17];
    if (local_14 == 0.0) {
      param_6 = (float *)(uint)(local_18 != 0.0);
    }
    ppfVar4 = &param_1;
    if (param_1 == (float *)0x0) {
      ppfVar4 = (float **)0x0;
    }
    FUN_10053912(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),(uint)param_6,(int *)&local_18,0,
                 (int *)ppfVar4);
    uVar5 = FUN_10012e5b((void *)(*(int *)((int)this + 0xcf04) + 0x1600),(int *)&DAT_100630a0);
    *(undefined4 *)((int)this + 0xcf28) = uVar5;
    if (param_5 == '\0') {
      piVar6 = (int *)&DAT_10063040;
      if (pfVar9[0xe] == 0.0) {
        piVar6 = (int *)&DAT_1006321c;
      }
    }
    else {
      piVar6 = (int *)&DAT_100631e8;
    }
    uVar5 = FUN_10012f0a((void *)(*(int *)((int)this + 0xcf04) + 0x15f0),piVar6);
    *(undefined4 *)((int)this + 0xcf34) = uVar5;
    uVar5 = FUN_10012d49((void *)(*(int *)((int)this + 0xcf04) + 0x1620),(uint *)&DAT_10063074);
    *(undefined4 *)((int)this + 0xcf30) = uVar5;
    *(undefined4 *)((int)this + 0xcf38) = *(undefined4 *)((int)this + 0xd028);
    *(float *)((int)this + 0xcf48) = pfVar9[0x18];
    *(float *)((int)this + 0xcf4c) = pfVar9[0x19];
    *(float *)((int)this + 0xcf68) = pfVar9[0x1a];
    iVar7 = 0;
    if (pfVar9[0xe] != 0.0) {
      iVar7 = (pfVar9[0xf] != 0.0) + 1;
    }
    *(int *)((int)this + 0xcf44) = iVar7;
    FUN_1000fe22(this,pfVar9,local_10);
  }
  FUN_10052b55((void *)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304) + 4),'\0');
  return;
}

