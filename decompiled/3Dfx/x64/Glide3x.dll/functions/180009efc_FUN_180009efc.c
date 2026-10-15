/*
 * FUN_180009efc at 180009efc
 * ulonglong __fastcall FUN_180009efc(longlong param_1)
 * Address ranges: 180009efc-18000a03b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180009efc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = 0.0;
  fVar9 = 0.0;
  uVar1 = FUN_180014854(*(longlong **)(param_1 + 0x3300),*(int *)(param_1 + 0x29fc));
  if (uVar1 == 0xffffffff) {
    fVar5 = 0.0;
    fVar4 = 0.0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                      (*(longlong **)(param_1 + 0x3300),uVar1);
    fVar4 = (float)*(uint *)(lVar2 + 0x28);
    fVar5 = (float)*(uint *)(lVar2 + 0x2c);
  }
  uVar3 = *(ulonglong *)(param_1 + 0x3308);
  fVar6 = 0.0;
  fVar7 = 1.0;
  if (*(int *)(uVar3 + 0x168) != 0) {
    fVar8 = *(float *)(param_1 + 0x2bb8);
    uVar1 = *(int *)(param_1 + 0x2a18) - 1;
    uVar3 = (ulonglong)uVar1;
    fVar9 = *(float *)(param_1 + 0x2bbc);
    fVar4 = *(float *)(param_1 + 0x2bc0);
    fVar5 = *(float *)(param_1 + 0x2bc4);
    if ((uVar1 & 0xfffffffd) == 0) {
      fVar6 = *(float *)(param_1 + 0x2bc8);
      fVar7 = *(float *)(param_1 + 0x2bcc);
    }
  }
  if ((((fVar8 != *(float *)(param_1 + 0x2ba0)) || (fVar9 != *(float *)(param_1 + 0x2ba4))) ||
      (fVar4 != *(float *)(param_1 + 0x2ba8))) ||
     (uVar3 = uVar3 & 0xffffffffffffff00, fVar5 != *(float *)(param_1 + 0x2bac))) {
    *(float *)(param_1 + 0x2ba0) = fVar8;
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    *(float *)(param_1 + 0x2ba4) = fVar9;
    *(float *)(param_1 + 0x2ba8) = fVar4;
    *(float *)(param_1 + 0x2bac) = fVar5;
  }
  if ((fVar6 != *(float *)(param_1 + 0x2bb0)) || (fVar7 != *(float *)(param_1 + 0x2bb4))) {
    *(float *)(param_1 + 0x2bb0) = fVar6;
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    *(float *)(param_1 + 0x2bb4) = fVar7;
  }
  return uVar3;
}

