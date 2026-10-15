/*
 * FUN_10028980 at 10028980
 * undefined FUN_10028980(void)
 * Address ranges: 10028980-10028d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028980(int param_1,int param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  float fVar4;
  float fVar5;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e4;
  float fStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  float local_6c;
  float fStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  if (*(char *)(param_1 + 0x2bca) == '\0') {
    FUN_1002b880(*(undefined4 *)(param_1 + 0x315c),0,2);
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    piVar1 = (int *)(param_1 + 0x3160);
    if (*(int *)(*piVar1 + 0x30) != 2) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_03)(param_1);
      *(undefined4 *)(*piVar1 + 0x30) = 2;
    }
    FUN_100483d0(*piVar1,2,2);
    FUN_10027750(*piVar1,param_2,1,0);
    FUN_10027750(*piVar1,param_3,1,0);
    **(int **)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x2c) + -2;
    *(int *)(*(int *)(*piVar1 + 0x28) + 4) = *(int *)(*piVar1 + 0x2c) + -1;
    *(int *)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x28) + 8;
    FUN_1002e7c0(param_1);
    uVar3 = (*pcVar2)();
    (*extraout_w11_04)(uVar3);
  }
  else {
    FUN_1008e650(param_2,&fStack_124,&fStack_12c);
    FUN_1008e650(param_3,&local_128,&local_130);
    fVar4 = (float)FUN_100013b0((local_130 - fStack_12c) * (local_130 - fStack_12c) +
                                (local_128 - fStack_124) * (local_128 - fStack_124));
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uStack_b4 = *(undefined8 *)(param_2 + 0x30);
    fVar5 = (*(float *)(param_1 + 0x2bb8) * -0.5 * (local_130 - fStack_12c)) / (fVar4 * 2.8);
    fVar4 = (*(float *)(param_1 + 0x2bbc) * 0.5 * (local_128 - fStack_124)) / (fVar4 * 2.8);
    uStack_dc = *(undefined8 *)(param_2 + 8);
    uStack_cc = *(undefined8 *)(param_2 + 0x18);
    uStack_d4 = *(undefined8 *)(param_2 + 0x10);
    uStack_bc = *(undefined8 *)(param_2 + 0x28);
    uStack_c4 = *(undefined8 *)(param_2 + 0x20);
    uStack_ac = *(undefined4 *)(param_2 + 0x38);
    uStack_118 = *(undefined8 *)(param_2 + 8);
    uStack_108 = *(undefined8 *)(param_2 + 0x18);
    uStack_110 = *(undefined8 *)(param_2 + 0x10);
    local_f0 = *(undefined8 *)(param_2 + 0x30);
    uStack_f8 = *(undefined8 *)(param_2 + 0x28);
    local_100 = *(undefined8 *)(param_2 + 0x20);
    local_e8 = *(undefined4 *)(param_2 + 0x38);
    uStack_64 = *(undefined8 *)(param_3 + 8);
    uStack_54 = *(undefined8 *)(param_3 + 0x18);
    uStack_5c = *(undefined8 *)(param_3 + 0x10);
    uStack_3c = *(undefined8 *)(param_3 + 0x30);
    uStack_44 = *(undefined8 *)(param_3 + 0x28);
    uStack_4c = *(undefined8 *)(param_3 + 0x20);
    uStack_34 = *(undefined4 *)(param_3 + 0x38);
    uStack_a0 = *(undefined8 *)(param_3 + 8);
    uStack_90 = *(undefined8 *)(param_3 + 0x18);
    uStack_98 = *(undefined8 *)(param_3 + 0x10);
    uStack_78 = *(undefined8 *)(param_3 + 0x30);
    uStack_80 = *(undefined8 *)(param_3 + 0x28);
    uStack_88 = *(undefined8 *)(param_3 + 0x20);
    uStack_70 = *(undefined4 *)(param_3 + 0x38);
    _local_120 = CONCAT44(fVar4 + fStack_12c,fVar5 + fStack_124);
    _local_e4 = CONCAT44(fStack_12c - fVar4,fStack_124 - fVar5);
    _local_a8 = CONCAT44(local_130 - fVar4,local_128 - fVar5);
    _local_6c = CONCAT44(fVar4 + local_130,fVar5 + local_128);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,&local_120,&local_e4,&local_a8,0);
    (*pcVar2)();
    (*extraout_w11_00)(param_1,&local_a8,&local_6c,&local_120,0);
    if (*(int *)(param_1 + 0x2ac4) != 1) {
      (*pcVar2)();
      (*extraout_w11_01)(param_1,&local_120,&local_a8,&local_e4,0);
      (*pcVar2)();
      (*extraout_w11_02)(param_1,&local_a8,&local_120,&local_6c,0);
    }
  }
  return;
}

