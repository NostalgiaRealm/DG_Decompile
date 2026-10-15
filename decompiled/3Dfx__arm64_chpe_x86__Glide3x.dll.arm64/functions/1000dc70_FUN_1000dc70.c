/*
 * FUN_1000dc70 at 1000dc70
 * undefined FUN_1000dc70(void)
 * Address ranges: 1000dc70-1000de4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000dc70(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *extraout_w11;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_20;
  float local_1c;
  
  local_20 = 0.0;
  local_1c = 0.0;
  iVar1 = FUN_1001c518(*(undefined4 *)(param_1 + 0x32dc),*(undefined4 *)(param_1 + 0x29e0));
  if (iVar1 == -1) {
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  else {
    auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar1 = (*extraout_w11)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_ & 0xffffffff);
    fVar6 = (float)*(uint *)(iVar1 + 0x28);
    fVar5 = (float)*(uint *)(iVar1 + 0x2c);
  }
  fVar4 = 0.0;
  fVar3 = 1.0;
  if (*(int *)(*(int *)(param_1 + 0x32e0) + 0xf0) != 0) {
    local_20 = *(float *)(param_1 + 0x2ba0);
    local_1c = *(float *)(param_1 + 0x2ba4);
    fVar6 = *(float *)(param_1 + 0x2ba8);
    fVar5 = *(float *)(param_1 + 0x2bac);
    if ((*(int *)(param_1 + 0x29fc) - 1U & 0xfffffffd) == 0) {
      fVar4 = *(float *)(param_1 + 0x2bb0);
      fVar3 = *(float *)(param_1 + 0x2bb4);
    }
  }
  if ((((local_20 != *(float *)(param_1 + 0x2b88)) || (local_1c != *(float *)(param_1 + 0x2b8c))) ||
      (fVar6 != *(float *)(param_1 + 0x2b90))) || (uVar2 = 0, fVar5 != *(float *)(param_1 + 0x2b94))
     ) {
    uVar2 = 1;
    *(float *)(param_1 + 0x2b88) = local_20;
    *(float *)(param_1 + 0x2b8c) = local_1c;
    *(float *)(param_1 + 0x2b90) = fVar6;
    *(float *)(param_1 + 0x2b94) = fVar5;
  }
  if ((fVar4 != *(float *)(param_1 + 0x2b98)) || (fVar3 != *(float *)(param_1 + 0x2b9c))) {
    *(float *)(param_1 + 0x2b98) = fVar4;
    uVar2 = 1;
    *(float *)(param_1 + 0x2b9c) = fVar3;
  }
  return uVar2;
}

