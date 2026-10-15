/*
 * FUN_18000c848 at 18000c848
 * undefined8 __cdecl FUN_18000c848(longlong param_1)
 * Address ranges: 18000c848-18000c95f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000c848(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = 0.0;
  fVar4 = 0.0;
  uVar1 = FUN_180016f80(*(longlong **)(param_1 + 0x3300),*(int *)(param_1 + 0x29fc));
  if (uVar1 == 0xffffffff) {
    fVar8 = 0.0;
    fVar9 = 0.0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))();
    fVar9 = (float)*(uint *)(lVar2 + 0x28);
    fVar8 = (float)*(uint *)(lVar2 + 0x2c);
  }
  fVar7 = 0.0;
  fVar6 = 1.0;
  if (*(int *)(*(longlong *)(param_1 + 0x3308) + 0x168) != 0) {
    fVar5 = *(float *)(param_1 + 0x2bb8);
    fVar4 = *(float *)(param_1 + 0x2bbc);
    fVar9 = *(float *)(param_1 + 0x2bc0);
    fVar8 = *(float *)(param_1 + 0x2bc4);
    if ((*(int *)(param_1 + 0x2a18) - 1U & 0xfffffffd) == 0) {
      fVar7 = *(float *)(param_1 + 0x2bc8);
      fVar6 = *(float *)(param_1 + 0x2bcc);
    }
  }
  if ((((fVar5 != *(float *)(param_1 + 0x2ba0)) || (fVar4 != *(float *)(param_1 + 0x2ba4))) ||
      (fVar9 != *(float *)(param_1 + 0x2ba8))) || (uVar3 = 0, fVar8 != *(float *)(param_1 + 0x2bac))
     ) {
    *(float *)(param_1 + 0x2ba0) = fVar5;
    *(float *)(param_1 + 0x2ba4) = fVar4;
    uVar3 = 1;
    *(float *)(param_1 + 0x2ba8) = fVar9;
    *(float *)(param_1 + 0x2bac) = fVar8;
  }
  if ((fVar7 != *(float *)(param_1 + 0x2bb0)) || (fVar6 != *(float *)(param_1 + 0x2bb4))) {
    *(float *)(param_1 + 0x2bb0) = fVar7;
    *(float *)(param_1 + 0x2bb4) = fVar6;
    uVar3 = 1;
  }
  return uVar3;
}

