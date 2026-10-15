/*
 * FUN_1004f4e0 at 1004f4e0
 * undefined __thiscall FUN_1004f4e0(void * this, int param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 1004f4e0-1004f7ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004f4e0(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = (float)((double)*param_3 + (double)(&DAT_100d97a0)[-(*param_3 >> 0x1f)]);
  fVar7 = (float)((double)param_3[1] + (double)(&DAT_100d97a0)[-(param_3[1] >> 0x1f)]);
  fVar4 = (float)((double)param_3[2] + (double)(&DAT_100d97a0)[-(param_3[2] >> 0x1f)]);
  fVar5 = (float)((double)param_3[3] + (double)(&DAT_100d97a0)[-(param_3[3] >> 0x1f)]);
  if ((((*(float *)((int)this + 0xe90) != fVar9) || (*(float *)((int)this + 0xe94) != fVar7)) ||
      (*(float *)((int)this + 0xe98) != fVar4)) ||
     (((*(float *)((int)this + 0xe9c) != fVar5 ||
       (*(float *)((int)this + 0xea0) != (float)param_3[4])) ||
      ((*(float *)((int)this + 0xea4) != (float)param_3[5] ||
       (*(char *)((int)this + 0x7645) != '\0')))))) {
    (**(code **)(*(int *)this + 0xec))(0);
    fVar6 = 1.0;
    fVar8 = 1.0;
    if (param_4 != (int *)0x0) {
      iVar3 = param_4[5];
      iVar2 = (**(code **)(*param_4 + 0x20))(0);
      iVar1 = param_4[6];
      fVar6 = (float)((double)iVar2 + (double)(&DAT_100d97a0)[-(iVar2 >> 0x1f)]) /
              (float)((double)iVar3 + (double)(&DAT_100d97a0)[-(iVar3 >> 0x1f)]);
      iVar3 = (**(code **)(*param_4 + 0x24))(0);
      fVar8 = (float)((double)iVar3 + (double)(&DAT_100d97a0)[-(iVar3 >> 0x1f)]) /
              (float)((double)iVar1 + (double)(&DAT_100d97a0)[-(iVar1 >> 0x1f)]);
    }
    *(float *)(param_1 + 0xe00) = fVar9;
    *(float *)(param_1 + 0xe04) = fVar7;
    *(float *)(param_1 + 0xe30) = fVar6 * fVar9;
    fVar10 = fVar6 * fVar4;
    fVar9 = fVar8 * fVar5;
    *(float *)(param_1 + 0xe08) = fVar4;
    *(float *)(param_1 + 0xe0c) = fVar5;
    *(float *)(param_1 + 0xe34) = fVar8 * fVar7;
    *(float *)(param_1 + 0xe38) = fVar10;
    *(float *)(param_1 + 0xe3c) = fVar9;
    iVar3 = param_3[4];
    *(int *)(param_1 + 0xe40) = iVar3;
    *(int *)(param_1 + 0xe10) = iVar3;
    iVar3 = param_3[5];
    *(int *)(param_1 + 0xe44) = iVar3;
    *(int *)(param_1 + 0xe14) = iVar3;
    *(undefined1 *)(param_2 + 0xe) = 1;
    if (*(char *)((int)this + 0xe) == '\0') {
      fVar8 = 0.5;
      fVar6 = 0.5;
    }
    else {
      fVar8 = fVar8 * 0.5;
      fVar6 = fVar6 * 0.5;
      fVar9 = fVar5;
      fVar10 = fVar4;
    }
    *(float *)(param_1 + 0xe60) = fVar6;
    *(float *)(param_1 + 0xe64) = fVar8;
    *(float *)(param_1 + 0x68b4) = fVar9;
    *(float *)(param_1 + 0x68b0) = fVar10;
    *(float *)(param_1 + 0x6888) = fVar4;
    *(float *)(param_1 + 0x688c) = fVar5;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(float *)(param_1 + 0x5100) = fVar10;
    *(float *)(param_1 + 0x5104) = -fVar9;
    *(undefined1 *)(param_2 + 0x34) = 1;
    FUN_1004f060((int)this);
    *(undefined1 *)((int)this + 0x7645) = 0;
  }
  return;
}

