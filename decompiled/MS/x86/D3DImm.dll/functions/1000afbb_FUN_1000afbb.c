/*
 * FUN_1000afbb at 1000afbb
 * undefined __thiscall FUN_1000afbb(void * this, float * param_1, undefined4 param_2, uint * param_3, undefined4 param_4, uint param_5, uint * param_6)
 * Address ranges: 1000afbb-1000b1f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000afbb(void *this,float *param_1,undefined4 param_2,uint *param_3,undefined4 param_4,
            uint param_5,uint *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  uVar14 = param_5 >> 1;
  if (*(int *)((int)this + 0x4c0) == 3) {
    fVar3 = **(float **)((int)this + 0x9c4);
    fVar15 = fVar3 - **(float **)((int)this + 0x9c0);
    FUN_10008c2c((int)this);
    iVar8 = *(int *)((int)this + 0x9cc);
    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
      fVar10 = *(float *)(iVar8 + 0x830);
      fVar11 = *(float *)(iVar8 + 0x834);
      fVar12 = *(float *)(iVar8 + 0x838);
      fVar13 = *(float *)(iVar8 + 0x83c);
      pfVar1 = param_1 + 2;
      fVar16 = *param_1;
      pfVar2 = param_1 + 1;
      fVar4 = param_1[8];
      fVar5 = param_1[9];
      uVar7 = *param_3;
      uVar9 = param_3[8];
      fVar6 = param_1[10];
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
      fVar16 = (fVar3 - (fVar13 * 1.0 + fVar11 * *pfVar2 + fVar12 * *pfVar1 + fVar10 * fVar16)) /
               fVar15;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
      *param_6 = (int)(fVar16 * 255.0) << 0x18 | uVar7 & 0xffffff;
      fVar16 = (fVar3 - (fVar13 * 1.0 + fVar11 * fVar5 + fVar12 * fVar6 + fVar10 * fVar4)) / fVar15;
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
      param_6[8] = (int)(fVar16 * 255.0) << 0x18 | uVar9 & 0xffffff;
      param_6 = param_6 + 0x10;
    }
    if ((param_5 & 1) != 0) {
      fVar15 = (fVar3 - (*(float *)(iVar8 + 0x83c) * 1.0 +
                         (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) *
                         *(float *)(iVar8 + 0x834) +
                        param_1[2] * *(float *)(iVar8 + 0x838) +
                        (float)*(undefined8 *)param_1 * *(float *)(iVar8 + 0x830))) / fVar15;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (1.0 <= fVar15) {
        fVar15 = 1.0;
      }
      *param_6 = (int)(fVar15 * 255.0) << 0x18 | *param_3 & 0xffffff;
    }
  }
  else {
    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
      uVar7 = param_3[8];
      *param_6 = *param_3 | 0xff000000;
      param_6[8] = uVar7 | 0xff000000;
      param_3 = param_3 + 0x10;
      param_6 = param_6 + 0x10;
    }
    if ((param_5 & 1) != 0) {
      *param_6 = *param_3 | 0xff000000;
    }
  }
  return;
}

