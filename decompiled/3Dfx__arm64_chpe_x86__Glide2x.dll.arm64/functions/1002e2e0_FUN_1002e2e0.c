/*
 * FUN_1002e2e0 at 1002e2e0
 * undefined FUN_1002e2e0(void)
 * Address ranges: 1002e2e0-1002e3af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e2e0(float param_1,float param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (float)*(uint *)(*(int *)(param_3 + -0x2954) + 0xc) / 100.0;
  if (param_4 != 0) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      iVar2 = (int)(*(float *)(param_5 + uVar3 * 4) * 255.0);
      fVar6 = *(float *)(param_7 + iVar2 * 0xc) * fVar7;
      fVar4 = param_1;
      if (param_1 <= fVar6) {
        fVar4 = fVar6;
      }
      fVar5 = param_2;
      if (fVar6 <= param_2) {
        fVar5 = fVar4;
      }
      *(float *)(param_6 + uVar3 * 0xc) = fVar5;
      fVar6 = *(float *)(param_7 + 4 + iVar2 * 0xc) * fVar7;
      fVar4 = param_1;
      if (param_1 <= fVar6) {
        fVar4 = fVar6;
      }
      fVar5 = param_2;
      if (fVar6 <= param_2) {
        fVar5 = fVar4;
      }
      *(float *)(param_6 + 4 + uVar3 * 0xc) = fVar5;
      fVar6 = *(float *)(param_7 + 8 + iVar2 * 0xc) * fVar7;
      fVar4 = param_1;
      if (param_1 <= fVar6) {
        fVar4 = fVar6;
      }
      fVar5 = param_2;
      if (fVar6 <= param_2) {
        fVar5 = fVar4;
      }
      *(float *)(param_6 + 8 + uVar3 * 0xc) = fVar5;
      uVar3 = uVar1;
    } while (uVar1 < param_4);
  }
  return;
}

