/*
 * FUN_180020800 at 180020800
 * undefined __cdecl FUN_180020800(longlong * param_1, float * param_2, float * param_3)
 * Address ranges: 180020800-180020b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020800(longlong *param_1,float *param_2,float *param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  float fStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  float local_cc;
  float local_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float fStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  float local_54;
  
  if (*(char *)((longlong)param_1 + 0x2bea) == '\0') {
    (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
    if (*(int *)(param_1[0x631] + 0x54) != 2) {
      (**(code **)(*param_1 + 0x2a0))(param_1);
      *(undefined4 *)(param_1[0x631] + 0x54) = 2;
    }
    FUN_180039768((undefined8 *)param_1[0x631],2,2);
    bVar1 = 0;
    FUN_18001f7e0(param_1[0x631],param_2,1,0);
    FUN_18001f7e0(param_1[0x631],param_3,1,bVar1);
    **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) + -2;
    *(int *)(*(longlong *)(param_1[0x631] + 0x48) + 4) = *(int *)(param_1[0x631] + 0x50) + -1;
    *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 8;
    if ((*(uint *)((longlong)param_1 + 0x2b4c) >> 1 & 1) != 0) {
      (**(code **)(*param_1 + 0x2a0))(param_1);
    }
    (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  }
  else {
    fVar8 = (float)(int)(short)(int)(*param_2 * 16.0) * 0.0625;
    fVar7 = (float)(int)(short)(int)(param_2[1] * 16.0) * 0.0625;
    fVar6 = (float)(int)(short)(int)(*param_3 * 16.0) * 0.0625;
    fVar3 = fVar6 - fVar8;
    fVar5 = (float)(int)(short)(int)(param_3[1] * 16.0) * 0.0625;
    fVar4 = fVar5 - fVar7;
    fVar2 = FUN_180001210(fVar4 * fVar4 + fVar3 * fVar3);
    local_d4 = *(undefined8 *)(param_2 + 0xc);
    fVar4 = (*(float *)(param_1 + 0x57b) * -0.5 * fVar4) / (fVar2 * 2.8);
    fVar2 = (*(float *)((longlong)param_1 + 0x2bdc) * 0.5 * fVar3) / (fVar2 * 2.8);
    uStack_fc = *(undefined8 *)(param_2 + 2);
    uStack_ec = *(undefined8 *)(param_2 + 6);
    uStack_f4 = *(undefined8 *)(param_2 + 4);
    uStack_dc = *(undefined8 *)(param_2 + 10);
    local_e4 = *(undefined8 *)(param_2 + 8);
    uStack_138 = *(undefined8 *)(param_2 + 2);
    uStack_128 = *(undefined8 *)(param_2 + 6);
    uStack_130 = *(undefined8 *)(param_2 + 4);
    local_cc = param_2[0xe];
    local_110 = *(undefined8 *)(param_2 + 0xc);
    uStack_118 = *(undefined8 *)(param_2 + 10);
    local_120 = *(undefined8 *)(param_2 + 8);
    local_108 = param_2[0xe];
    uStack_84 = *(undefined8 *)(param_3 + 2);
    uStack_74 = *(undefined8 *)(param_3 + 6);
    uStack_7c = *(undefined8 *)(param_3 + 4);
    local_5c = *(undefined8 *)(param_3 + 0xc);
    uStack_64 = *(undefined8 *)(param_3 + 10);
    local_6c = *(undefined8 *)(param_3 + 8);
    uStack_c0 = *(undefined8 *)(param_3 + 2);
    uStack_b0 = *(undefined8 *)(param_3 + 6);
    uStack_b8 = *(undefined8 *)(param_3 + 4);
    local_54 = param_3[0xe];
    local_98 = *(undefined8 *)(param_3 + 0xc);
    uStack_a0 = *(undefined8 *)(param_3 + 10);
    local_a8 = *(undefined8 *)(param_3 + 8);
    local_90 = param_3[0xe];
    _local_140 = CONCAT44(fVar2 + fVar7,fVar4 + fVar8);
    _local_104 = CONCAT44(fVar7 - fVar2,fVar8 - fVar4);
    _local_c8 = CONCAT44(fVar5 - fVar2,fVar6 - fVar4);
    _local_8c = CONCAT44(fVar2 + fVar5,fVar4 + fVar6);
    (**(code **)(*param_1 + 0x2f0))(param_1,&local_140,&local_104,&local_c8,0);
    (**(code **)(*param_1 + 0x2f0))(param_1,&local_c8,&local_8c,&local_140,0);
    if (*(int *)((longlong)param_1 + 0x2ae4) != 1) {
      (**(code **)(*param_1 + 0x2f0))(param_1,&local_140,&local_c8,&local_104,0);
      (**(code **)(*param_1 + 0x2f0))(param_1,&local_c8,&local_140,&local_8c,0);
    }
  }
  return;
}

