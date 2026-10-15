/*
 * FUN_100452f0 at 100452f0
 * int * __thiscall FUN_100452f0(void * this, uint param_1, int * param_2)
 * Address ranges: 100452f0-10045506
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_100452f0(void *this,uint param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 auVar5 [10];
  float fVar6;
  
  (**(code **)(*(int *)this + 0xc0))(0);
  iVar3 = param_1 * 0x70;
  *(int *)(iVar3 + 0x534c + (int)this) = *param_2;
  *(int *)(iVar3 + 0x5300 + (int)this) = param_2[1];
  *(int *)(iVar3 + 0x5304 + (int)this) = param_2[2];
  *(int *)(iVar3 + 0x5308 + (int)this) = param_2[3];
  *(int *)(iVar3 + 0x5310 + (int)this) = param_2[5];
  *(int *)(iVar3 + 0x5314 + (int)this) = param_2[6];
  *(int *)(iVar3 + 0x5318 + (int)this) = param_2[7];
  *(int *)(iVar3 + 0x5320 + (int)this) = param_2[9];
  *(int *)(iVar3 + 0x5324 + (int)this) = param_2[10];
  *(int *)(iVar3 + 0x5328 + (int)this) = param_2[0xb];
  *(int *)(iVar3 + 0x5330 + (int)this) = param_2[0xd];
  *(int *)(iVar3 + 0x5334 + (int)this) = param_2[0xe];
  *(int *)(iVar3 + 0x5338 + (int)this) = param_2[0xf];
  fVar4 = FUN_100ad41a((float)param_2[0x11] * (float)param_2[0x11] +
                       (float)param_2[0x10] * (float)param_2[0x10] +
                       (float)param_2[0x12] * (float)param_2[0x12]);
  fVar6 = (float)fVar4;
  *(float *)(iVar3 + 0x5340 + (int)this) = (float)param_2[0x10] / fVar6;
  *(float *)(iVar3 + 0x5344 + (int)this) = (float)param_2[0x11] / fVar6;
  *(float *)(iVar3 + 0x5348 + (int)this) = (float)param_2[0x12] / fVar6;
  *(int *)(iVar3 + 0x530c + (int)this) = param_2[0x13];
  fVar6 = (float)param_2[0x14];
  if (fVar6 == 0.0) {
    fVar6 = 1e-07;
  }
  *(float *)(iVar3 + 0x531c + (int)this) = fVar6;
  *(int *)(iVar3 + 0x5354 + (int)this) = param_2[0x15];
  *(int *)(iVar3 + 0x5358 + (int)this) = param_2[0x16];
  *(int *)(iVar3 + 0x535c + (int)this) = param_2[0x17];
  auVar5 = FUN_100ad442((float)param_2[0x19] * 0.5);
  *(float *)(iVar3 + 0x533c + (int)this) = (float)(float10)auVar5;
  auVar5 = FUN_100ad442((float)param_2[0x18] * 0.5);
  *(float *)(iVar3 + 0x532c + (int)this) = (float)(float10)auVar5;
  fVar6 = (float)(float10)auVar5 - *(float *)(iVar3 + 0x533c + (int)this);
  *(float *)(iVar3 + 0x5350 + (int)this) = fVar6;
  if (fVar6 <= 0.0) {
    *(undefined4 *)(iVar3 + 0x5350 + (int)this) = 0x3f800000;
  }
  *(uint *)(iVar3 + 0x5360 + (int)this) = (uint)((char)param_2[0x1a] != '\0');
  *(undefined1 *)((int)this + 0xd981) = 1;
  pbVar1 = (byte *)((int)this +
                   ((int)param_1 >> 3) + (uint)*(byte *)((int)this + param_1 + 0x694) * 4 + 0x684);
  *pbVar1 = *pbVar1 & ~('\x01' << (param_1 & 7));
  uVar2 = *(int *)(iVar3 + 0x534c + (int)this) - 1U & 3;
  *(char *)((int)this + param_1 + 0x694) = (char)uVar2;
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + uVar2 * 4 + 0x684);
  *pbVar1 = *pbVar1 | '\x01' << (param_1 & 7);
  *(undefined1 *)((int)this + 0xd9aa) = 1;
  return (int *)((int)this + uVar2 * 4);
}

