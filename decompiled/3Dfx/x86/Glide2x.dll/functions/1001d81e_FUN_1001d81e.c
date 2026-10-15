/*
 * FUN_1001d81e at 1001d81e
 * undefined __thiscall FUN_1001d81e(void * this, uint param_1, undefined4 param_2, float param_3, int param_4, float param_5)
 * Address ranges: 1001d81e-1001d94b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001d81e(void *this,uint param_1,undefined4 param_2,float param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 extraout_ST1;
  float10 fVar7;
  float10 fVar8;
  longlong lVar9;
  
  fVar2 = param_3;
  iVar4 = *(int *)(*(int *)((int)this + -0x2954) + 0xc);
  fVar1 = (float)iVar4;
  if (iVar4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  uVar5 = 0;
  if (param_1 != 0) {
    fVar6 = (float10)(fVar1 / 100.0);
    fVar7 = (float10)param_5;
    do {
      fVar8 = fVar6;
      lVar9 = FUN_10050550();
      iVar4 = (int)lVar9 * 0xc;
      param_3 = (float)((float10)*(float *)(param_4 + iVar4) * extraout_ST1);
      if ((float10)param_3 <= fVar7) {
        if ((float10)param_3 < fVar8) {
          param_3 = (float)fVar8;
        }
      }
      else {
        param_3 = (float)fVar7;
      }
      iVar3 = uVar5 * 0xc;
      *(float *)((int)fVar2 + iVar3) = param_3;
      param_3 = (float)((float10)*(float *)(param_4 + 4 + iVar4) * extraout_ST1);
      if ((float10)param_3 <= fVar7) {
        if ((float10)param_3 < fVar8) {
          param_3 = (float)fVar8;
        }
      }
      else {
        param_3 = (float)fVar7;
      }
      *(float *)((int)fVar2 + 4 + iVar3) = param_3;
      param_3 = (float)((float10)*(float *)(param_4 + 8 + iVar4) * extraout_ST1);
      if ((float10)param_3 <= fVar7) {
        if ((float10)param_3 < fVar8) {
          param_3 = (float)fVar8;
        }
      }
      else {
        param_3 = (float)fVar7;
      }
      uVar5 = uVar5 + 1;
      *(float *)((int)fVar2 + 8 + iVar3) = param_3;
      fVar6 = extraout_ST1;
      fVar7 = fVar8;
    } while (uVar5 < param_1);
  }
  return;
}

