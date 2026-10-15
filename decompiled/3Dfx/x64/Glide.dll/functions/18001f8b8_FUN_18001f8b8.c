/*
 * FUN_18001f8b8 at 18001f8b8
 * undefined __fastcall FUN_18001f8b8(longlong * param_1, float * param_2, float * param_3)
 * Address ranges: 18001f8b8-18001fc4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f8b8(longlong *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_178;
  float local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  float local_104;
  float local_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  float local_8c;
  
  if (*(char *)((longlong)param_1 + 0x2bea) == '\0') {
    (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
    if (*(int *)(param_1[0x631] + 0x54) != 2) {
      (**(code **)(*param_1 + 0x2a0))(param_1);
      *(undefined4 *)(param_1[0x631] + 0x54) = 2;
    }
    FUN_180036418((undefined8 *)param_1[0x631],2,2);
    FUN_18001ea88(param_1[0x631],param_2,1,0);
    FUN_18001ea88(param_1[0x631],param_3,1,0);
    **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) + -2;
    *(int *)(*(longlong *)(param_1[0x631] + 0x48) + 4) = *(int *)(param_1[0x631] + 0x50) + -1;
    *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 8;
    if ((*(byte *)((longlong)param_1 + 0x2b4c) & 2) != 0) {
      (**(code **)(*param_1 + 0x2a0))(param_1);
    }
    (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  }
  else {
    fVar7 = (float)(int)(short)(int)(*param_2 * 16.0) * 0.0625;
    fVar6 = (float)(int)(short)(int)(*param_3 * 16.0) * 0.0625;
    fVar4 = (float)(int)(short)(int)(param_3[1] * 16.0) * 0.0625;
    fVar3 = fVar6 - fVar7;
    fVar5 = (float)(int)(short)(int)(param_2[1] * 16.0) * 0.0625;
    fVar2 = fVar4 - fVar5;
    fVar1 = FUN_18005f138(fVar2 * fVar2 + fVar3 * fVar3);
    local_140 = param_2[0xe];
    local_160 = *(undefined8 *)(param_2 + 6);
    uStack_158 = *(undefined8 *)(param_2 + 8);
    local_c8 = param_3[0xe];
    local_c4 = (*(float *)(param_1 + 0x57b) * -0.5 * fVar2) / (fVar1 * 2.8);
    local_c0 = (*(float *)((longlong)param_1 + 0x2bdc) * 0.5 * fVar3) / (fVar1 * 2.8);
    local_134 = *(undefined8 *)(param_2 + 2);
    uStack_12c = *(undefined8 *)(param_2 + 4);
    local_114 = *(undefined8 *)(param_2 + 10);
    uStack_10c = *(undefined8 *)(param_2 + 0xc);
    local_e8 = *(undefined8 *)(param_3 + 6);
    uStack_e0 = *(undefined8 *)(param_3 + 8);
    local_170 = *(undefined8 *)(param_2 + 2);
    uStack_168 = *(undefined8 *)(param_2 + 4);
    local_150 = *(undefined8 *)(param_2 + 10);
    uStack_148 = *(undefined8 *)(param_2 + 0xc);
    local_bc = *(undefined8 *)(param_3 + 2);
    uStack_b4 = *(undefined8 *)(param_3 + 4);
    local_9c = *(undefined8 *)(param_3 + 10);
    uStack_94 = *(undefined8 *)(param_3 + 0xc);
    local_f8 = *(undefined8 *)(param_3 + 2);
    uStack_f0 = *(undefined8 *)(param_3 + 4);
    local_d8 = *(undefined8 *)(param_3 + 10);
    uStack_d0 = *(undefined8 *)(param_3 + 0xc);
    local_178 = local_c4 + fVar7;
    local_174 = local_c0 + fVar5;
    local_13c = fVar7 - local_c4;
    local_138 = fVar5 - local_c0;
    local_100 = fVar6 - local_c4;
    local_c4 = local_c4 + fVar6;
    local_fc = fVar4 - local_c0;
    local_c0 = local_c0 + fVar4;
    local_124 = local_160;
    uStack_11c = uStack_158;
    local_104 = local_140;
    local_ac = local_e8;
    uStack_a4 = uStack_e0;
    local_8c = local_c8;
    (**(code **)(*param_1 + 0x2f0))(param_1,&local_178,&local_13c,&local_100,0);
    (**(code **)(*param_1 + 0x2f0))(param_1,&local_100,&local_c4,&local_178,0);
    if (*(int *)((longlong)param_1 + 0x2ae4) != 1) {
      (**(code **)(*param_1 + 0x2f0))(param_1,&local_178,&local_100,&local_13c,0);
      (**(code **)(*param_1 + 0x2f0))(param_1,&local_100,&local_178,&local_c4,0);
    }
  }
  return;
}

