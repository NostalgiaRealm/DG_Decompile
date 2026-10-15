/*
 * FUN_1004be1a at 1004be1a
 * undefined4 __thiscall FUN_1004be1a(void * this, int * param_1, int * param_2, uint * param_3, uint * param_4, undefined4 param_5, uint param_6, int param_7, int param_8, int param_9)
 * Address ranges: 1004be1a-1004c51b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall
FUN_1004be1a(void *this,int *param_1,int *param_2,uint *param_3,uint *param_4,undefined4 param_5,
            uint param_6,int param_7,int param_8,int param_9)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int local_28 [5];
  int local_14 [4];
  
  piVar7 = param_1;
  iVar4 = (int)param_1 * 0x18;
  piVar6 = (int *)((int)param_1 * 0x16c0 + 0x6c0 + (int)this);
  param_1 = piVar6;
  local_14[2] = iVar4;
  if ((char)piVar6[0x5ae] == '\0') {
    iVar4 = FUN_1004b8b2(this,piVar7);
    *(undefined1 *)(piVar6 + 0x5ae) = 1;
  }
  if (piVar6[0x5a9] != 0) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0x43200000;
    uStack_4c = 0x43480000;
    local_48 = 0;
    local_44 = 0x3f800000;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0xa0;
    uStack_34 = 200;
    FUN_1003def1(piVar6[0x4c1],1,(int)&local_58);
    FUN_1003de66(piVar6[0x4c1],1,(int)&local_40);
    puVar3 = param_3;
    local_14[0] = param_3[4] + param_3[2];
    local_28[0] = param_7;
    local_14[1] = 2;
    FUN_1003c572((void *)piVar6[0x576],local_28 + 1,piVar6[0x5a6],0);
    piVar7 = *(int **)(local_14[2] + 0x520 + (int)this);
    local_28[2] = 1;
    local_28[3] = 1;
    (**(code **)(*piVar7 + 0x5c))(piVar7,1,local_14,local_14 + 1,2,local_28,local_28 + 2,0);
    iVar4 = FUN_100173cd(piVar6 + 0x580,(int *)&DAT_10051f20);
    piVar6[0xb] = iVar4;
    iVar4 = FUN_1001747c(piVar6 + 0x57c,(int *)&DAT_10051ebc);
    piVar6[0xe] = iVar4;
    iVar4 = FUN_100172bb(piVar6 + 0x588,(uint *)&DAT_10051ef0);
    piVar6[0xd] = iVar4;
    puVar1 = (uint *)(piVar6 + 4);
    piVar6[0xf] = piVar6[0x46a];
    piVar6[5] = piVar6[0x468];
    piVar6[6] = piVar6[0x43e];
    piVar6[0x13] = 0x1c;
    piVar6[0x11] = 3;
    piVar6[0x12] = 1;
    FUN_1003d104((void *)piVar6[0x4c1],*puVar1);
    FUN_1003d5a8(piVar6[0x4c1],*puVar1);
    iVar4 = piVar6[0x4c1];
    iVar5 = FUN_10037e5d(piVar6 + 0x590,puVar1);
    FUN_1003d632(iVar4,iVar5);
    piVar7 = param_1;
    FUN_1003d52c(param_1[0x4c1],1,puVar3 + 3);
    FUN_1003d66d(piVar7[0x4c1],5);
    FUN_1003d74c(piVar7[0x4c1],0,*param_2,param_2[1]);
    piVar7 = param_1;
    FUN_1003d797(param_1[0x4c1],1,puVar3[4] + *puVar3,puVar3[1] + (uint)CARRY4(puVar3[4],*puVar3));
    FUN_1003c572((void *)piVar7[0x577],local_28 + 4,piVar7[0x5a7],0);
    FUN_1003dcd5(piVar7[0x4c1],1,local_28 + 4,1,(int *)0x0);
    puVar1 = param_4;
    local_28[0] = 0x80;
    local_28[1] = 0x10;
    local_30 = *param_4 + 0x40;
    local_2c = param_4[1] + (uint)(0xffffffbf < *param_4);
    FUN_1003d9d8(piVar7[0x4c1],0,1,(int)&local_30);
    fVar9 = (float)((double)param_8 + (double)(&DAT_10055140)[-(param_8 >> 0x1f)]);
    fVar8 = (float)((double)param_9 + (double)(&DAT_10055140)[-(param_9 >> 0x1f)]);
    fVar11 = (fVar9 + 0.5) / fVar9;
    uVar2 = puVar1[2];
    fVar10 = (fVar8 + 0.5) / fVar8;
    *(undefined4 *)(uVar2 + 0x40) = 0xbf800000;
    *(undefined4 *)(uVar2 + 0x44) = 0x3f800000;
    *(float *)(uVar2 + 0x48) = 0.5 / fVar9;
    *(float *)(uVar2 + 0x4c) = 0.5 / fVar8;
    *(undefined4 *)(uVar2 + 0x50) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x54) = 0x3f800000;
    *(float *)(uVar2 + 0x58) = fVar11;
    *(float *)(uVar2 + 0x5c) = 0.5 / fVar8;
    *(undefined4 *)(uVar2 + 0x60) = 0xbf800000;
    *(undefined4 *)(uVar2 + 100) = 0xbf800000;
    *(float *)(uVar2 + 0x68) = 0.5 / fVar9;
    *(float *)(uVar2 + 0x6c) = fVar10;
    *(undefined4 *)(uVar2 + 0x70) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x74) = 0xbf800000;
    *(float *)(uVar2 + 0x78) = fVar11;
    *(float *)(uVar2 + 0x7c) = fVar10;
    *(undefined4 *)(uVar2 + 0x80) = 0xbf800000;
    *(undefined4 *)(uVar2 + 0x84) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x88) = 0xc2200000;
    *(undefined4 *)(uVar2 + 0x8c) = 0xc2280000;
    *(undefined4 *)(uVar2 + 0x90) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x94) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0x98) = 0x43480000;
    *(undefined4 *)(uVar2 + 0x9c) = 0xc2280000;
    *(undefined4 *)(uVar2 + 0xa0) = 0xbf800000;
    *(undefined4 *)(uVar2 + 0xa4) = 0xbf800000;
    *(undefined4 *)(uVar2 + 0xa8) = 0xc2200000;
    *(undefined4 *)(uVar2 + 0xac) = 0x43720000;
    *(undefined4 *)(uVar2 + 0xb0) = 0x3f800000;
    *(undefined4 *)(uVar2 + 0xb4) = 0xbf800000;
    *(undefined4 *)(uVar2 + 0xb8) = 0x43480000;
    *(undefined4 *)(uVar2 + 0xbc) = 0x43720000;
    FUN_1003d12e((void *)piVar7[0x4c1],piVar7[0x5a8],0,0,4);
    FUN_1003d12e((void *)piVar7[0x4c1],piVar7[0x5a9],0,0,4);
    FUN_1003d12e((void *)piVar7[0x4c1],param_6,0,0,0x80);
    FUN_1003e11c(piVar7[0x4c1],4,1,0,0);
    FUN_1003c572((void *)piVar7[0x577],&param_7,piVar7[0x5a7],1);
    FUN_1003dcd5(piVar7[0x4c1],1,&param_7,1,(int *)0x0);
    FUN_1003e11c(piVar7[0x4c1],4,1,0,0);
    puVar1 = (uint *)(piVar7 + 0x20);
    FUN_1003d104((void *)piVar7[0x4c1],*puVar1);
    FUN_1003d5ef(piVar7[0x4c1],*puVar1);
    piVar7[0x21] = piVar7[0x439];
    piVar7 = piVar7 + 0x597;
    iVar4 = FUN_1004ae97(piVar7,puVar1);
    piVar6 = param_1;
    FUN_1003d632(param_1[0x4c1],iVar4);
    FUN_1003d8d6(piVar6[0x4c1],0,param_3[4] * 2 + *param_3,
                 param_3[1] + (uint)CARRY4(param_3[4] * 2,*param_3));
    iVar4 = piVar6[0x4c1];
    uVar12 = (**(code **)(*(int *)piVar6[0x5aa] + 0x2c))((int *)piVar6[0x5aa]);
    FUN_1003d92a(iVar4,1,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    iVar4 = param_1[0x4c1];
    uVar12 = (**(code **)(*(int *)param_1[0x5ad] + 0x2c))((int *)param_1[0x5ad]);
    FUN_1003d92a(iVar4,2,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    iVar4 = param_1[0x4c1];
    uVar12 = (**(code **)(*(int *)param_1[0x5ab] + 0x2c))((int *)param_1[0x5ab]);
    FUN_1003d981(iVar4,3,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    piVar6 = param_1;
    FUN_1003d12e((void *)param_1[0x4c1],param_1[0x5a8],0,0,0x40);
    FUN_1003d12e((void *)piVar6[0x4c1],piVar6[0x5ad],0,1,0x40);
    FUN_1003d12e((void *)piVar6[0x4c1],piVar6[0x5ab],0,1,0x40);
    FUN_1003e193(piVar6[0x4c1],0x28,0x19,1);
    piVar6[0x21] = piVar6[0x43a];
    iVar4 = FUN_1004ae97(piVar7,puVar1);
    FUN_1003d632(piVar6[0x4c1],iVar4);
    FUN_1003e193(piVar6[0x4c1],1,0x19,1);
    piVar6[0x21] = piVar6[0x43b];
    iVar4 = FUN_1004ae97(piVar7,puVar1);
    FUN_1003d632(piVar6[0x4c1],iVar4);
    FUN_1003e193(piVar6[0x4c1],0x28,0x19,1);
    FUN_100450cc((int)piVar6,piVar6[0x5ac],piVar6[0x5ab]);
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0x43a00000;
    uStack_4c = 0x43480000;
    local_48 = 0;
    local_44 = 0x3f800000;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0x140;
    uStack_34 = 200;
    FUN_1003def1(piVar6[0x4c1],1,(int)&local_58);
    FUN_1003de66(piVar6[0x4c1],1,(int)&local_40);
    iVar4 = piVar6[0x4c1];
    piVar6[6] = piVar6[0x466];
    iVar5 = FUN_10037e5d(piVar6 + 0x590,(uint *)(piVar6 + 4));
    FUN_1003d632(iVar4,iVar5);
    FUN_1003d12e((void *)piVar6[0x4c1],piVar6[0x5a8],0,0,0x80);
    FUN_1003d12e((void *)piVar6[0x4c1],piVar6[0x5a9],0,0,4);
    FUN_1003c572((void *)piVar6[0x577],(int *)&param_1,piVar6[0x5a7],1);
    FUN_1003dcd5(piVar6[0x4c1],1,(int *)&param_1,1,(int *)0x0);
    FUN_1003d74c(piVar6[0x4c1],0,*param_2,param_2[1]);
    FUN_1003d797(piVar6[0x4c1],1,param_3[4] + *param_3,
                 param_3[1] + (uint)CARRY4(param_3[4],*param_3));
    iVar4 = piVar6[0x4c1];
    uVar12 = (**(code **)(*(int *)piVar6[0x5aa] + 0x2c))((int *)piVar6[0x5aa]);
    FUN_1003d7e9(iVar4,2,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    iVar4 = piVar6[0x4c1];
    uVar12 = (**(code **)(*(int *)piVar6[0x5ac] + 0x2c))((int *)piVar6[0x5ac]);
    FUN_1003d7e9(iVar4,3,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    iVar4 = FUN_1003e11c(piVar6[0x4c1],4,1,4,0);
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

