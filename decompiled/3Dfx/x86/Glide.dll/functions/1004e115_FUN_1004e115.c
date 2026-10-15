/*
 * FUN_1004e115 at 1004e115
 * undefined4 __thiscall FUN_1004e115(void * this, int * param_1, float param_2, float param_3, float param_4)
 * Address ranges: 1004e115-1004e716
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1004e115(void *this,int *param_1,float param_2,float param_3,float param_4)

{
  int *piVar1;
  int *piVar2;
  uint in_EAX;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_d4 [16];
  float local_94 [13];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c [3];
  undefined4 *local_10 [3];
  
  piVar2 = param_1;
  iVar6 = (int)param_1 * 0x1510;
  if (*(char *)(iVar6 + 0x1a18 + (int)this) == '\0') {
    in_EAX = FUN_1004d8ef(this,param_1);
    *(undefined1 *)(iVar6 + 0x1a18 + (int)this) = 1;
  }
  if (*(int *)(iVar6 + 0x19ec + (int)this) == 0) {
    uVar5 = in_EAX & 0xffffff00;
  }
  else {
    local_94[10] = 0.0;
    local_94[6] = 0.0;
    local_94[7] = 0.0;
    local_94[8] = 160.0;
    local_94[9] = 200.0;
    local_94[0xb] = 1.0;
    FUN_10041a37(this,(int)piVar2,local_94 + 6);
    FUN_100418e8(this,(int)piVar2,(int *)&DAT_10051c38,extraout_ECX,-1);
    FUN_10041957(this,(int)piVar2,(int *)&DAT_10051d9c,0);
    FUN_100419c4(this,(int)piVar2,(uint *)&DAT_10051d74);
    FUN_10041cdb(this,(int)piVar2,5,*(int *)(iVar6 + 0x988 + (int)this),
                 *(int *)(iVar6 + 0x980 + (int)this),*(int *)(iVar6 + 0x8d8 + (int)this));
    local_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    FUN_10041daa(this,(int)piVar2,4,(int)&local_3c,0);
    FUN_10050561((int *)local_d4,0,0x40);
    local_d4[0] = param_2;
    FUN_10041b6f(this,(int)piVar2,0,0x10,(int)local_d4);
    FUN_10041b36(this,(int)piVar2,1,extraout_ECX_00,(int *)((int)this + iVar6 + 0x98c));
    local_3c = *(undefined4 *)(iVar6 + 0x19e4 + (int)this);
    FUN_10041daa(this,(int)piVar2,4,(int)&local_3c,0);
    param_2 = 2.24208e-44;
    param_1 = (int *)0x0;
    FUN_10041bf9(this,(int)piVar2,0,&param_2,(int *)((int)this + iVar6 + 0x990),(int *)&param_2,
                 (int *)&param_1);
    FUN_10041c7f(this,(int)piVar2,0,0);
    fVar8 = (float)((double)(int)param_3 + (double)(&DAT_10055140)[-((int)param_3 >> 0x1f)]);
    param_1 = (int *)(0.5 / fVar8);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    fVar7 = (float)((double)(int)param_4 + (double)(&DAT_10055140)[-((int)param_4 >> 0x1f)]);
    param_2 = 0.5 / fVar7;
    param_3 = (fVar8 + 0.5) / fVar8;
    param_4 = (fVar7 + 0.5) / fVar7;
    iVar3 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)(iVar6 + 0x990 + (int)this),0,4,0,local_10);
    if (-1 < iVar3) {
      *local_10[0] = 0xbf800000;
      local_10[0][1] = 0x3f800000;
      local_10[0][2] = param_1;
      local_10[0][3] = param_2;
      local_10[0][4] = 0x3f800000;
      local_10[0][5] = 0x3f800000;
      local_10[0][6] = param_3;
      local_10[0][7] = param_2;
      local_10[0][8] = 0xbf800000;
      local_10[0][9] = 0xbf800000;
      local_10[0][10] = param_1;
      local_10[0][0xb] = param_4;
      local_10[0][0xc] = 0x3f800000;
      local_10[0][0xd] = 0xbf800000;
      local_10[0][0xe] = param_3;
      local_10[0][0xf] = param_4;
      piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(iVar6 + 0x990 + (int)this),0);
    }
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x34))(piVar1,4,0);
    local_2c = *(undefined4 *)(iVar6 + 0x19f0 + (int)this);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_10041daa(this,(int)piVar2,4,(int)&local_2c,0);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x34))(piVar1,4,0);
    local_3c = 0;
    FUN_10041daa(this,(int)piVar2,4,(int)&local_3c,0);
    local_48 = *(undefined4 *)(iVar6 + 0x19e8 + (int)this);
    local_44 = *(undefined4 *)(iVar6 + 0x19fc + (int)this);
    local_40 = *(undefined4 *)(iVar6 + 0x1a14 + (int)this);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x10c))(piVar1,0,3,&local_48);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x110))(piVar1,0,1,(int)this + iVar6 + 0x1a04,0);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x114))(piVar1,*(undefined4 *)(iVar6 + 0x8c4 + (int)this),0,0);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0xa4))(piVar1,0x28,0x19,1);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x114))(piVar1,*(undefined4 *)(iVar6 + 0x8c8 + (int)this),0,0);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0xa4))(piVar1,1,0x19,1);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x114))(piVar1,*(undefined4 *)(iVar6 + 0x8cc + (int)this),0,0);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0xa4))(piVar1,0x28,0x19,1);
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0xbc))
              (piVar1,*(undefined4 *)(iVar6 + 0x1a08 + (int)this),
               *(undefined4 *)(iVar6 + 0x1a00 + (int)this));
    piVar1 = *(int **)(iVar6 + 0x514 + (int)this);
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    (**(code **)(*piVar1 + 0x10c))(piVar1,0,3,&local_54);
    local_94[4] = 0.0;
    local_94[0] = 0.0;
    local_94[1] = 0.0;
    local_94[2] = 320.0;
    local_94[3] = 200.0;
    local_94[5] = 1.0;
    FUN_10041a37(this,(int)piVar2,local_94);
    FUN_10041cdb(this,(int)piVar2,5,*(int *)(iVar6 + 0x988 + (int)this),
                 *(int *)(iVar6 + 0x980 + (int)this),*(int *)(iVar6 + 0x978 + (int)this));
    local_94[0xc] = *(float *)(iVar6 + 0x19f0 + (int)this);
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    FUN_10041daa(this,(int)piVar2,4,(int)(local_94 + 0xc),0);
    local_28 = *(undefined4 *)(iVar6 + 0x19e8 + (int)this);
    local_24 = *(undefined4 *)(iVar6 + 0x19fc + (int)this);
    local_20 = *(undefined4 *)(iVar6 + 0x1a0c + (int)this);
    FUN_10041b6f(this,(int)piVar2,0,3,(int)&local_28);
    param_2 = 2.24208e-44;
    param_1 = (int *)0x0;
    FUN_10041bf9(this,(int)piVar2,0,extraout_ECX_01,(int *)((int)this + iVar6 + 0x990),
                 (int *)&param_2,(int *)&param_1);
    FUN_10041c7f(this,(int)piVar2,0,0);
    piVar2 = *(int **)(iVar6 + 0x514 + (int)this);
    iVar3 = (**(code **)(*piVar2 + 0x38))
                      (piVar2,*(undefined4 *)((int)this + iVar6 + 0x990),0,4,0,local_1c);
    if (-1 < iVar3) {
      *local_1c[0] = 0xbf800000;
      local_1c[0][1] = 0x3f800000;
      local_1c[0][2] = 0xc2200000;
      local_1c[0][3] = 0xc2280000;
      local_1c[0][4] = 0x3f800000;
      local_1c[0][5] = 0x3f800000;
      local_1c[0][6] = 0x43480000;
      local_1c[0][7] = 0xc2280000;
      local_1c[0][8] = 0xbf800000;
      local_1c[0][9] = 0xbf800000;
      local_1c[0][10] = 0xc2200000;
      local_1c[0][0xb] = 0x43720000;
      local_1c[0][0xc] = 0x3f800000;
      local_1c[0][0xd] = 0xbf800000;
      local_1c[0][0xe] = 0x43480000;
      local_1c[0][0xf] = 0x43720000;
      piVar2 = *(int **)(iVar6 + 0x514 + (int)this);
      (**(code **)(*piVar2 + 0x3c))(piVar2,*(undefined4 *)((int)this + iVar6 + 0x990),0);
    }
    piVar2 = *(int **)(iVar6 + 0x514 + (int)this);
    uVar4 = (**(code **)(*piVar2 + 0x34))(piVar2,4,0);
    uVar5 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar5;
}

