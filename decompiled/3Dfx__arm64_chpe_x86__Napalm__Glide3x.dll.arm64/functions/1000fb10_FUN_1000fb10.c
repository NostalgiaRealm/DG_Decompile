/*
 * FUN_1000fb10 at 1000fb10
 * undefined FUN_1000fb10(void)
 * Address ranges: 1000fb10-1000fcef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000fb10(int param_1)

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
  iVar1 = FUN_1001cae0(*(undefined4 *)(param_1 + 0x365c),*(undefined4 *)(param_1 + 0x2b1c));
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
  if (*(int *)(*(int *)(param_1 + 0x3660) + 0xf0) != 0) {
    local_20 = *(float *)(param_1 + 0x2ce0);
    local_1c = *(float *)(param_1 + 0x2ce4);
    fVar6 = *(float *)(param_1 + 0x2ce8);
    fVar5 = *(float *)(param_1 + 0x2cec);
    if ((*(int *)(param_1 + 0x2b38) - 1U & 0xfffffffd) == 0) {
      fVar4 = *(float *)(param_1 + 0x2cf0);
      fVar3 = *(float *)(param_1 + 0x2cf4);
    }
  }
  if ((((local_20 != *(float *)(param_1 + 0x2cc8)) || (local_1c != *(float *)(param_1 + 0x2ccc))) ||
      (fVar6 != *(float *)(param_1 + 0x2cd0))) || (uVar2 = 0, fVar5 != *(float *)(param_1 + 0x2cd4))
     ) {
    uVar2 = 1;
    *(float *)(param_1 + 0x2cc8) = local_20;
    *(float *)(param_1 + 0x2ccc) = local_1c;
    *(float *)(param_1 + 0x2cd0) = fVar6;
    *(float *)(param_1 + 0x2cd4) = fVar5;
  }
  if ((fVar4 != *(float *)(param_1 + 0x2cd8)) || (fVar3 != *(float *)(param_1 + 0x2cdc))) {
    *(float *)(param_1 + 0x2cd8) = fVar4;
    uVar2 = 1;
    *(float *)(param_1 + 0x2cdc) = fVar3;
  }
  return uVar2;
}

