/*
 * FUN_10040471 at 10040471
 * undefined4 __thiscall FUN_10040471(void * this, int * param_1, int * param_2, int param_3, int * param_4, float param_5, float param_6, undefined4 * param_7)
 * Address ranges: 10040471-10040a26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10040471(void *this,int *param_1,int *param_2,int param_3,int *param_4,float param_5,
            float param_6,undefined4 *param_7)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_ECX_01;
  float extraout_ECX_02;
  float extraout_ECX_03;
  float fVar5;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int iVar6;
  int local_13c;
  float local_138;
  float local_110;
  float local_10c;
  int local_e4 [3];
  undefined4 *local_d8 [3];
  uint local_cc;
  float local_c8;
  int local_bc;
  uint *local_a0;
  int local_9c;
  int *local_98;
  int *local_94;
  float local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  float local_74;
  int *local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  int local_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  uint local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_14;
  char local_13;
  float local_10;
  void *local_c;
  
  iVar6 = param_1[2] * 0x1510 + 0x510 + (int)this;
  local_c = this;
  (**(code **)(*param_4 + 0x28))(param_4,&local_110);
  (**(code **)(*(int *)param_1[0x35a] + 0x28))((int *)param_1[0x35a],&local_cc);
  puVar1 = FUN_10042682(local_44,param_1,param_2,(uint)local_110,(uint)local_10c,local_cc,
                        (uint)local_c8,(int)param_6,local_bc);
  if (((local_44[0] == 0) && (local_14 == '\0')) && (local_13 == '\0')) {
    uVar2 = (uint)puVar1 & 0xffffff00;
  }
  else {
    fVar5 = extraout_ECX;
    if (param_3 != 0) {
      (**(code **)(**(int **)(iVar6 + 4) + 0xe4))(*(int **)(iVar6 + 4),param_4,0,param_3,0,param_6);
      fVar5 = extraout_ECX_00;
    }
    param_6 = param_5;
    if ((param_1[9] == 7) &&
       (uVar3 = FUN_1004e115(this,(int *)param_1[2],param_5,local_110,local_10c),
       fVar5 = extraout_ECX_01, (char)uVar3 != '\0')) {
      fVar5 = *(float *)(iVar6 + 0x14e4);
      param_4 = *(int **)(iVar6 + 0x14dc);
      param_6 = fVar5;
    }
    if (local_14 != '\0') {
      local_54 = 0;
      iStack_50 = 0;
      iStack_4c = 0;
      uStack_48 = 0;
      (**(code **)(**(int **)(iVar6 + 4) + 200))(*(int **)(iVar6 + 4),param_1[0x35b],&local_54);
      fVar5 = extraout_ECX_02;
    }
    if (param_1[9] != 7) {
      local_a0 = local_44;
      local_94 = param_4;
      local_90 = param_6;
      local_98 = param_1;
      local_8c = 0;
      local_9c = iVar6;
      FUN_10042abb(this,local_44,(uint)param_1,&local_a0);
      param_6 = local_90;
      param_4 = local_94;
      fVar5 = extraout_ECX_03;
    }
    if (((local_44[0] == 0) && (local_13 == '\0')) &&
       ((fVar5 = (float)(local_1c - local_24), (float)(local_2c - local_34) == fVar5 &&
        (fVar5 = (float)(local_18 - local_20), (float)(local_28 - local_30) == fVar5)))) {
      local_5c = local_34;
      local_58 = local_30;
      iStack_50 = local_2c;
      iStack_4c = local_28;
      local_54 = 0;
      uStack_48 = 1;
      (**(code **)(**(int **)(iVar6 + 4) + 0xb8))
                (*(int **)(iVar6 + 4),param_1[0x35a],0,local_24,local_20,0,param_4,0,&local_5c);
    }
    else {
      FUN_100418e8(this,param_1[2],(int *)&DAT_10051c38,fVar5,-1);
      FUN_10041957(this,param_1[2],(int *)&DAT_10051d9c,0);
      FUN_100419c4(this,param_1[2],(uint *)&DAT_10051d74);
      param_5 = 2.24208e-44;
      param_3 = 0;
      FUN_10041bf9(this,param_1[2],0,&param_5,(int *)(iVar6 + 0x480),(int *)&param_5,&param_3);
      FUN_10041c7f(this,param_1[2],0,0);
      iVar4 = (**(code **)(**(int **)(iVar6 + 4) + 0x38))
                        (*(int **)(iVar6 + 4),*(undefined4 *)(iVar6 + 0x488),0,4,0,local_d8);
      if (-1 < iVar4) {
        FUN_10042925(local_c,param_1,extraout_ECX_04,extraout_ECX_04,local_cc,(uint)local_c8,
                     *param_2,param_2[1],param_2[2],(float *)(iVar6 + 0x490));
        FUN_100500b0(local_d8[0],(float *)(iVar6 + 0x490),0x1040);
        (**(code **)(**(int **)(iVar6 + 4) + 0x3c))
                  (*(int **)(iVar6 + 4),*(undefined4 *)(iVar6 + 0x488),0);
        this = local_c;
      }
      FUN_10041cdb(this,param_1[2],5,*(int *)(iVar6 + 0x474),*(int *)(iVar6 + 0x46c),
                   *(int *)(iVar6 + 0x3c0 + (uint)(byte)(&DAT_10051e38)[local_44[0]] * 4));
      (**(code **)(**(int **)(iVar6 + 4) + 0x40))(*(int **)(iVar6 + 4),2,1,iVar6 + 0x488);
      (**(code **)(**(int **)(iVar6 + 4) + 0x1c))(*(int **)(iVar6 + 4),2,1,iVar6 + 0x488);
      local_74 = 0.0;
      local_70 = (int *)0x0;
      local_64 = 0.0;
      local_60 = 1.0;
      local_6c = (float)((double)(int)local_cc + (double)(&DAT_10055140)[-((int)local_cc >> 0x1f)]);
      local_68 = (float)((double)(int)local_c8 + (double)(&DAT_10055140)[-((int)local_c8 >> 0x1f)]);
      FUN_10041a37(this,param_1[2],&local_74);
      local_54 = param_1[0x35b];
      iStack_50 = 0;
      iStack_4c = 0;
      uStack_48 = 0;
      FUN_10041daa(this,param_1[2],4,(int)&local_54,0);
      local_10 = param_6;
      local_c = (void *)0x0;
      FUN_10041b6f(this,param_1[2],0,2,(int)&local_10);
      param_3 = 0;
      param_6 = 0.0;
      if ((&DAT_10051e74)[local_44[0]] != '\0') {
        FUN_10041b36(this,param_1[2],1,extraout_ECX_05,(int *)(iVar6 + 0x47c));
        (**(code **)(*param_4 + 0x28))(param_4,&local_13c);
        param_3 = local_13c;
        param_6 = local_138;
      }
      param_4 = *(int **)(iVar6 + 0x484);
      if ((int *)0x400 < param_4 + 1) {
        param_4 = (int *)0x0;
      }
      *(int **)(iVar6 + 0x484) = param_4 + 1;
      iVar4 = (**(code **)(**(int **)(iVar6 + 4) + 0x38))
                        (*(int **)(iVar6 + 4),*(undefined4 *)(iVar6 + 0x480),0,
                         (param_4 != (int *)0x0) + '\x04',0,local_e4);
      if (-1 < iVar4) {
        FUN_10042d06((int)param_1,(int)local_44,(float *)((int)param_4 * 0x10 + local_e4[0]),param_3
                     ,(int)param_6);
        (**(code **)(**(int **)(iVar6 + 4) + 0x3c))
                  (*(int **)(iVar6 + 4),*(undefined4 *)(iVar6 + 0x480),0);
      }
      (**(code **)(**(int **)(iVar6 + 4) + 0x34))(*(int **)(iVar6 + 4),4,param_4);
    }
    local_10 = 0.0;
    local_c = (void *)0x0;
    uVar3 = FUN_10041b6f(this,param_1[2],0,2,(int)&local_10);
    if (param_7 != (undefined4 *)0x0) {
      iVar6 = (local_1c - local_24) * param_1[6];
      iVar4 = (local_18 - local_20) * param_1[7];
      local_6c = (float)((double)iVar6 + (double)(&DAT_10055140)[-(iVar6 >> 0x1f)]) /
                 (float)(local_2c - local_34);
      local_88 = param_1[0x35a];
      local_84 = param_1[0x35b];
      local_68 = (float)((double)iVar4 + (double)(&DAT_10055140)[-(iVar4 >> 0x1f)]) /
                 (float)(local_28 - local_30);
      local_80 = local_3c;
      local_7c = local_38;
      local_78 = local_cc;
      local_74 = local_c8;
      local_70 = &local_24;
      local_64 = (float)local_24 - (float)local_34 * local_6c;
      local_60 = (float)local_20 - (float)local_30 * local_68;
      uVar3 = (**(code **)*param_7)(&local_88);
    }
    uVar2 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar2;
}

