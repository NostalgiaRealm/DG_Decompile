/*
 * FUN_10053870 at 10053870
 * int * __thiscall FUN_10053870(void * this, uint param_1, int * param_2)
 * Address ranges: 10053870-10053a86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10053870(void *this,uint param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 auVar5 [10];
  float fVar6;
  
  (**(code **)(*(int *)this + 0xec))(0);
  iVar3 = param_1 * 0x70;
  *(int *)(iVar3 + 0x6fdc + (int)this) = *param_2;
  *(int *)(iVar3 + 0x6f90 + (int)this) = param_2[1];
  *(int *)(iVar3 + 0x6f94 + (int)this) = param_2[2];
  *(int *)(iVar3 + 0x6f98 + (int)this) = param_2[3];
  *(int *)(iVar3 + 0x6fa0 + (int)this) = param_2[5];
  *(int *)(iVar3 + 0x6fa4 + (int)this) = param_2[6];
  *(int *)(iVar3 + 0x6fa8 + (int)this) = param_2[7];
  *(int *)(iVar3 + 0x6fb0 + (int)this) = param_2[9];
  *(int *)(iVar3 + 0x6fb4 + (int)this) = param_2[10];
  *(int *)(iVar3 + 0x6fb8 + (int)this) = param_2[0xb];
  *(int *)(iVar3 + 0x6fc0 + (int)this) = param_2[0xd];
  *(int *)(iVar3 + 0x6fc4 + (int)this) = param_2[0xe];
  *(int *)(iVar3 + 0x6fc8 + (int)this) = param_2[0xf];
  fVar4 = FUN_100cfcfa((float)param_2[0x11] * (float)param_2[0x11] +
                       (float)param_2[0x10] * (float)param_2[0x10] +
                       (float)param_2[0x12] * (float)param_2[0x12]);
  fVar6 = (float)fVar4;
  *(float *)(iVar3 + 0x6fd0 + (int)this) = (float)param_2[0x10] / fVar6;
  *(float *)(iVar3 + 0x6fd4 + (int)this) = (float)param_2[0x11] / fVar6;
  *(float *)(iVar3 + 0x6fd8 + (int)this) = (float)param_2[0x12] / fVar6;
  *(int *)(iVar3 + 0x6f9c + (int)this) = param_2[0x13];
  fVar6 = (float)param_2[0x14];
  if (fVar6 == 0.0) {
    fVar6 = 1e-07;
  }
  *(float *)(iVar3 + 0x6fac + (int)this) = fVar6;
  *(int *)(iVar3 + 0x6fe4 + (int)this) = param_2[0x15];
  *(int *)(iVar3 + 0x6fe8 + (int)this) = param_2[0x16];
  *(int *)(iVar3 + 0x6fec + (int)this) = param_2[0x17];
  auVar5 = FUN_100cfd22((float)param_2[0x19] * 0.5);
  *(float *)(iVar3 + 0x6fcc + (int)this) = (float)(float10)auVar5;
  auVar5 = FUN_100cfd22((float)param_2[0x18] * 0.5);
  *(float *)(iVar3 + 0x6fbc + (int)this) = (float)(float10)auVar5;
  fVar6 = (float)(float10)auVar5 - *(float *)(iVar3 + 0x6fcc + (int)this);
  *(float *)(iVar3 + 0x6fe0 + (int)this) = fVar6;
  if (fVar6 <= 0.0) {
    *(undefined4 *)(iVar3 + 0x6fe0 + (int)this) = 0x3f800000;
  }
  *(uint *)(iVar3 + 0x6ff0 + (int)this) = (uint)((char)param_2[0x1a] != '\0');
  *(undefined1 *)((int)this + 0xf671) = 1;
  pbVar1 = (byte *)((int)this +
                   ((int)param_1 >> 3) + (uint)*(byte *)((int)this + param_1 + 0xfb8) * 4 + 0xfa8);
  *pbVar1 = *pbVar1 & ~('\x01' << (param_1 & 7));
  uVar2 = *(int *)(iVar3 + 0x6fdc + (int)this) - 1U & 3;
  *(char *)((int)this + param_1 + 0xfb8) = (char)uVar2;
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + uVar2 * 4 + 0xfa8);
  *pbVar1 = *pbVar1 | '\x01' << (param_1 & 7);
  *(undefined1 *)((int)this + 0xf6a5) = 1;
  return (int *)((int)this + uVar2 * 4);
}

