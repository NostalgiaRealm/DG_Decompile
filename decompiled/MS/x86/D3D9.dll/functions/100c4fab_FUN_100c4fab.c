/*
 * FUN_100c4fab at 100c4fab
 * undefined4 __thiscall FUN_100c4fab(void * this, int * param_1, uint * param_2, float * param_3, int * param_4, undefined4 * param_5)
 * Address ranges: 100c4fab-100c57e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100c4fab(void *this,int *param_1,uint *param_2,float *param_3,int *param_4,undefined4 *param_5)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int iVar8;
  int iVar9;
  int **ppiVar10;
  undefined4 local_190 [2];
  undefined1 local_188 [16];
  int local_178;
  int local_170;
  undefined1 local_150 [16];
  uint local_140;
  uint local_138;
  undefined1 local_118 [16];
  uint local_108;
  int *local_100;
  uint *local_f8;
  int *local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  uint local_d0 [6];
  int local_b8;
  int local_b4;
  undefined4 *local_b0;
  int iStack_ac;
  uint local_a8;
  int local_a4;
  float *local_a0;
  float local_94;
  int *local_90;
  int local_8c;
  uint *local_88;
  uint *local_84;
  undefined8 local_80;
  int *local_78 [2];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int iStack_54;
  uint uStack_50;
  int *piStack_4c;
  int local_48;
  uint local_44 [2];
  uint *local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_14;
  char local_13;
  int *local_10;
  void *local_c;
  
  iVar9 = (int)this + param_1[2] * 0x16c0 + 0x6c0;
  local_10 = (int *)param_1[param_1[0x35a] + 0x35c];
  local_c = this;
  FUN_100ba192(*(void **)(iVar9 + 0x15dc),&local_48,param_1[0x35e],param_1[0x35a]);
  (**(code **)(*(int *)param_2[1] + 0x28))((int *)param_2[1],local_150);
  (**(code **)(*local_10 + 0x28))(local_10,local_118);
  puVar3 = FUN_100b70df(local_44,param_1,param_4,local_140,local_138,local_108,(uint)local_100,
                        (int)param_3,(int)local_f8);
  if (((local_44[0] == 0) && (local_14 == '\0')) && (local_13 == '\0')) {
    return (uint)puVar3 & 0xffffff00;
  }
  piVar5 = (int *)(*(int *)(iVar9 + 0x1304) + 0x634);
  *piVar5 = *piVar5 + 1;
  if (*param_2 != 0) {
    FUN_100c4b94(iVar9,param_2[1],*param_2,param_3);
  }
  if (local_14 != '\0') {
    FUN_100baf7e(*(void **)(iVar9 + 0x1304),(uint)local_10,0,0,4);
    uVar4 = FUN_100b72de((int)local_44,local_108,(int)local_100,local_190);
    local_58 = 0;
    iStack_54 = 0;
    uStack_50 = 0;
    piStack_4c = (int *)0x0;
    FUN_100bc089(*(int *)(iVar9 + 0x1304),local_48,&local_58,uVar4,local_190);
  }
  if (param_2[2] == 0) goto LAB_100c56cd;
  if (((local_44[0] != 0) || (local_13 != '\0')) ||
     ((local_2c - local_34 != local_1c - local_24 || (local_28 - local_30 != local_18 - local_20))))
  {
    param_3 = (float *)((local_18 - local_20) * 2);
    if (((uint)(local_2c - local_34) / (uint)param_1[6] < (uint)((local_1c - local_24) * 2)) &&
       ((float *)((local_28 - local_30) / (uint)param_1[7]) < param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_94 = 1.4013e-45;
    if (param_1[9] == 7) {
      local_94 = 4.2039e-45;
    }
    iVar8 = 0;
    if (bVar1) {
      iVar8 = 5;
    }
    cVar2 = FUN_100c2028(*(void **)(iVar9 + 0x15e8),iVar8 + (int)local_94,
                         *(uint *)(*(int *)(iVar9 + 0x1300) + 0xc),
                         *(uint *)(*(int *)(iVar9 + 0x1304) + 0x938),
                         *(uint *)(*(int *)(iVar9 + 0x1304) + 0x93c),(int *)local_d0);
    if (cVar2 == '\0') goto LAB_100c56cd;
    piVar5 = (int *)FUN_100bf6d2((void *)(*(int *)(iVar9 + 0xc) + 0x38),(int *)&local_58,2,
                                 *(int *)(*(int *)(iVar9 + 0x1300) + 0xc),
                                 *(undefined4 *)(iVar9 + 0x90),*(undefined4 *)(iVar9 + 0x94));
    local_b8 = *piVar5;
    local_b4 = piVar5[1];
    local_b0 = (undefined4 *)piVar5[2];
    iStack_ac = piVar5[3];
    if (local_b0 != (undefined4 *)0x0) {
      FUN_100b7382(local_c,param_1,extraout_ECX,extraout_ECX,local_108,(uint)local_100,*param_4,
                   param_4[1],param_4[2],(float *)(iVar9 + 0xa0));
      FUN_100cff00(local_b0,(float *)(iVar9 + 0xa0),0x1040);
      FUN_100bf71c(*(int *)(iVar9 + 0xc) + 0x38);
    }
    FUN_100bf6d2((void *)(*(int *)(iVar9 + 8) + 0x38),(int *)&local_a8,2,
                 *(int *)(*(int *)(iVar9 + 0x1300) + 0xc),*(undefined4 *)(iVar9 + 0x90),
                 *(undefined4 *)(iVar9 + 0x94));
    if (local_a0 == (float *)0x0) goto LAB_100c56cd;
    *(void **)(*(int *)(iVar9 + 0x1304) + 0x948) = local_c;
    if ((param_1[9] == 7) &&
       (uVar6 = FUN_100cb643(local_c,(int *)param_1[2],&local_b8,local_d0,&local_a8,1,param_2[1],
                             param_2[3],local_140,local_138), (char)uVar6 != '\0')) {
      param_2[1] = *(uint *)(iVar9 + 0x16a4);
      puVar3 = (uint *)FUN_100ba192(*(void **)(iVar9 + 0x15d8),(int *)&param_3,
                                    *(int *)(iVar9 + 0x1698) + 1,0);
      param_2[3] = *puVar3;
    }
    *(undefined4 *)(iVar9 + 0x48) = 1;
    *(uint **)(iVar9 + 0x4c) = local_f8;
    uVar6 = FUN_1007f976((void *)(iVar9 + 0x1600),(int *)&DAT_100d40c0);
    *(undefined4 *)(iVar9 + 0x2c) = uVar6;
    uVar6 = FUN_10044780((void *)(iVar9 + 0x15f0),(int *)&DAT_100d4060);
    *(undefined4 *)(iVar9 + 0x38) = uVar6;
    uVar6 = FUN_10044240((void *)(iVar9 + 0x1620),(uint *)&DAT_100d4094);
    *(undefined4 *)(iVar9 + 0x34) = uVar6;
    FUN_100bf71c(*(int *)(iVar9 + 8) + 0x38);
    FUN_100baf54(*(void **)(iVar9 + 0x1304),*(undefined4 *)(iVar9 + 0x10));
    FUN_100bb59b(*(int *)(iVar9 + 0x1304),*(int *)(iVar9 + 0x10));
    FUN_100bb51f(*(int *)(iVar9 + 0x1304),1,local_d0 + 3);
    FUN_100bb660(*(int *)(iVar9 + 0x1304),5);
    local_58 = local_a8;
    iStack_54 = local_a4;
    uStack_50 = 0x200;
    piStack_4c = (int *)&DAT_00000010;
    FUN_100bb9cb(*(int *)(iVar9 + 0x1304),0,1,(int)&local_58);
    FUN_100bb73f(*(int *)(iVar9 + 0x1304),0,local_b8,local_b4);
    param_3 = (float *)(param_2 + 3);
    if (param_1[9] != 7) {
      local_88 = local_44;
      local_84 = local_d0;
      local_80 = CONCAT44(iVar9,&local_a8);
      local_78[1] = (int *)param_2[1];
      local_70 = *param_3;
      local_6c = local_94;
      local_78[0] = param_1;
      local_68 = 0.0;
      local_64 = 0.0;
      FUN_100b7518(local_c,local_44,(uint)param_1,&local_88);
      param_2[1] = (uint)local_78[1];
      param_2[3] = (uint)local_70;
    }
    if ((((local_44[0] != 0) || (local_13 != '\0')) || (local_2c - local_34 != local_1c - local_24))
       || (local_28 - local_30 != local_18 - local_20)) {
      *(undefined4 *)(iVar9 + 0x18) =
           *(undefined4 *)(iVar9 + 0x10f0 + (uint)(byte)(&DAT_100d3f94)[local_44[0]] * 4);
      *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar9 + 0x119c);
      *(undefined4 *)(iVar9 + 0x3c) = *(undefined4 *)(iVar9 + 0x11a4);
      iVar8 = FUN_100be8e2((void *)(iVar9 + 0x1640),(uint *)(iVar9 + 0x10));
      FUN_100baf54(*(void **)(iVar9 + 0x1304),iVar8);
      FUN_100bb625(*(int *)(iVar9 + 0x1304),iVar8);
      FUN_100baf7e(*(void **)(iVar9 + 0x1304),(uint)local_10,0,0,4);
      FUN_100baf7e(*(void **)(iVar9 + 0x1304),param_2[1],0,0,0x80);
      piVar5 = *(int **)(param_1[2] * 0x18 + 0x520 + (int)local_c);
      (**(code **)(*piVar5 + 0x60))(piVar5,1,local_d0[2],*param_3,0);
      FUN_100bb78a(*(int *)(iVar9 + 0x1304),1,local_d0[0],local_d0[1]);
      FUN_100bbcc8(*(int *)(iVar9 + 0x1304),1,&local_48,0,(int *)0x0);
      local_78[0] = (int *)0x0;
      local_78[1] = (int *)0x0;
      local_68 = 0.0;
      local_64 = 1.0;
      local_58 = 0;
      iStack_54 = 0;
      uStack_50 = local_108;
      piStack_4c = local_100;
      local_70 = (float)((double)(int)local_108 + (double)(&DAT_100d97a0)[-((int)local_108 >> 0x1f)]
                        );
      local_6c = (float)((double)(int)local_100 + (double)(&DAT_100d97a0)[-((int)local_100 >> 0x1f)]
                        );
      FUN_100bbee4(*(int *)(iVar9 + 0x1304),1,(int)local_78);
      FUN_100bbe59(*(int *)(iVar9 + 0x1304),1,(int)&local_58);
      iVar8 = 0;
      iVar7 = 0;
      if ((&DAT_100d3fd0)[local_44[0]] != '\0') {
        (**(code **)(*(int *)param_2[1] + 0x28))((int *)param_2[1],local_188);
        iVar8 = local_178;
        iVar7 = local_170;
      }
      FUN_100b7763((int)param_1,(int)local_44,local_a0,iVar8,iVar7);
      FUN_100bc10f(*(int *)(iVar9 + 0x1304),4,1,0,0);
      goto LAB_100c56cd;
    }
  }
  piVar5 = local_10;
  FUN_100baf7e(*(void **)(iVar9 + 0x1304),(uint)local_10,0,0,0x400);
  FUN_100baf7e(*(void **)(iVar9 + 0x1304),param_2[1],0,0,0x800);
  local_e0 = piVar5;
  piStack_4c = (int *)0x1;
  local_dc = 0;
  local_d8 = 0;
  puVar3 = local_d0;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_88 = (uint *)param_2[1];
  local_84 = (uint *)0x0;
  local_80 = 0;
  ppiVar10 = local_78;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppiVar10 = (int *)0x0;
    ppiVar10 = ppiVar10 + 1;
  }
  local_60 = local_34;
  local_5c = local_30;
  iStack_54 = local_2c;
  uStack_50 = local_28;
  local_58 = 0;
  FUN_100bc04a(*(int *)(iVar9 + 0x1304),&local_e0,local_24,local_20,0,&local_88,&local_60);
LAB_100c56cd:
  if (param_5 != (undefined4 *)0x0) {
    iVar8 = (local_1c - local_24) * param_1[6];
    iVar7 = (local_18 - local_20) * param_1[7];
    local_70 = (float)((double)iVar8 + (double)(&DAT_100d97a0)[-(iVar8 >> 0x1f)]) /
               (float)(local_2c - local_34);
    local_90 = local_10;
    local_8c = local_48;
    local_6c = (float)((double)iVar7 + (double)(&DAT_100d97a0)[-(iVar7 >> 0x1f)]) /
               (float)(int)(local_28 - local_30);
    local_88 = local_f8;
    local_84 = local_3c;
    local_80 = CONCAT44(local_108,local_38);
    local_78[0] = local_100;
    local_78[1] = &local_24;
    local_68 = (float)local_24 - (float)local_34 * local_70;
    local_64 = (float)local_20 - (float)local_30 * local_6c;
    (**(code **)*param_5)(&local_90);
  }
  uVar4 = FUN_100baeff((void *)(*(int *)(iVar9 + 0x1304) + 4),'\0');
  return CONCAT31((int3)(uVar4 >> 8),1);
}

