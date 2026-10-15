/*
 * FUN_10072c78 at 10072c78
 * undefined FUN_10072c78(void)
 * Address ranges: 10072c78-10072e37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10072c78(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int iVar3;
  int iVar4;
  int local_1b0;
  int iStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined1 auStack_190 [8];
  int local_188;
  int iStack_184;
  undefined1 auStack_170 [68];
  undefined4 local_12c;
  int local_c4;
  int iStack_c0;
  int local_b8;
  undefined1 auStack_90 [96];
  
  local_12c = 0xdc;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = 0;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  param_3[1] = 0;
  if (param_2 == 0) {
    iVar4 = 0;
    iVar3 = 0;
    (*(code *)PTR_FUN_100a8158)(0,0xffffffff,auStack_170);
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2,auStack_90);
    (*(code *)PTR_FUN_100a8158)(auStack_90,0xffffffff,auStack_170);
    local_19c = 1;
    local_1b0 = local_c4;
    iStack_1ac = iStack_c0;
    local_1a8 = local_b8;
    uStack_1a4 = 1;
    local_1a0 = *(undefined4 *)(&DAT_100a2248 + *(int *)(param_1 + 0x4e0) * 4);
    (*pcVar1)();
    iVar2 = (*extraout_w11_00)(param_2,&local_1b0,auStack_190,0);
    iVar3 = 1;
    iVar4 = local_b8;
    if (-1 < iVar2) {
      iVar3 = iStack_184;
      iVar4 = local_188;
    }
    (*pcVar1)();
    (*extraout_w11_01)(param_2);
  }
  if ((*(int *)(param_1 + 0x4d0) == 0) || (iVar2 = *(int *)(param_1 + 0x4d4), iVar2 == 0)) {
    *param_3 = local_c4;
  }
  else {
    *param_3 = *(int *)(param_1 + 0x4d0);
    iStack_c0 = iVar2;
  }
  param_3[1] = iStack_c0;
  if ((*(int *)(param_1 + 0x4d8) != 0) && (*(int *)(param_1 + 0x4dc) != 0)) {
    iVar3 = *(int *)(param_1 + 0x4dc);
    iVar4 = *(int *)(param_1 + 0x4d8);
  }
  param_3[2] = iVar4;
  param_3[3] = iVar3;
  return 1;
}

