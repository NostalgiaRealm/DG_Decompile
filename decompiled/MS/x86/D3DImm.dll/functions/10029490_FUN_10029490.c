/*
 * FUN_10029490 at 10029490
 * undefined __thiscall FUN_10029490(void * this, int param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10029490-10029755
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10029490(void *this,int param_1,int param_2,int *param_3,int *param_4)

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
  
  fVar9 = (float)((double)*param_3 + (double)(&DAT_100601f0)[-(*param_3 >> 0x1f)]);
  fVar8 = (float)((double)param_3[1] + (double)(&DAT_100601f0)[-(param_3[1] >> 0x1f)]);
  fVar4 = (float)((double)param_3[2] + (double)(&DAT_100601f0)[-(param_3[2] >> 0x1f)]);
  fVar6 = (float)((double)param_3[3] + (double)(&DAT_100601f0)[-(param_3[3] >> 0x1f)]);
  if ((((*(float *)((int)this + 900) != fVar9) || (*(float *)((int)this + 0x388) != fVar8)) ||
      (*(float *)((int)this + 0x38c) != fVar4)) ||
     (((*(float *)((int)this + 0x390) != fVar6 ||
       (*(float *)((int)this + 0x394) != (float)param_3[4])) ||
      ((*(float *)((int)this + 0x398) != (float)param_3[5] ||
       (*(char *)((int)this + 0x1908) != '\0')))))) {
    (**(code **)(*(int *)this + 0x98))(0);
    fVar5 = 1.0;
    fVar7 = 1.0;
    if (param_4 != (int *)0x0) {
      iVar3 = param_4[5];
      iVar2 = (**(code **)(*param_4 + 0x20))(0);
      iVar1 = param_4[6];
      fVar5 = (float)((double)iVar2 + (double)(&DAT_100601f0)[-(iVar2 >> 0x1f)]) /
              (float)((double)iVar3 + (double)(&DAT_100601f0)[-(iVar3 >> 0x1f)]);
      iVar3 = (**(code **)(*param_4 + 0x24))(0);
      fVar7 = (float)((double)iVar3 + (double)(&DAT_100601f0)[-(iVar3 >> 0x1f)]) /
              (float)((double)iVar1 + (double)(&DAT_100601f0)[-(iVar1 >> 0x1f)]);
    }
    *(float *)(param_1 + 0x304) = fVar9;
    *(float *)(param_1 + 0x308) = fVar8;
    *(float *)(param_1 + 0x334) = fVar5 * fVar9;
    fVar9 = fVar5 * fVar4;
    fVar10 = fVar7 * fVar6;
    *(float *)(param_1 + 0x30c) = fVar4;
    *(float *)(param_1 + 0x310) = fVar6;
    *(float *)(param_1 + 0x338) = fVar7 * fVar8;
    *(float *)(param_1 + 0x33c) = fVar9;
    *(float *)(param_1 + 0x340) = fVar10;
    iVar3 = param_3[4];
    *(int *)(param_1 + 0x344) = iVar3;
    *(int *)(param_1 + 0x314) = iVar3;
    iVar3 = param_3[5];
    *(int *)(param_1 + 0x348) = iVar3;
    *(int *)(param_1 + 0x318) = iVar3;
    *(undefined1 *)(param_2 + 0xe) = 1;
    if (*(char *)((int)this + 0xe) == '\0') {
      fVar7 = 0.5;
      fVar5 = 0.5;
    }
    else {
      fVar7 = fVar7 * 0.5;
      fVar5 = fVar5 * 0.5;
      fVar9 = fVar4;
      fVar10 = fVar6;
    }
    *(float *)(param_1 + 0x364) = fVar5;
    *(float *)(param_1 + 0x368) = fVar7;
    *(float *)(param_1 + 0x930) = fVar9;
    *(float *)(param_1 + 0x934) = fVar10;
    *(float *)(param_1 + 0x908) = fVar4;
    *(float *)(param_1 + 0x90c) = fVar6;
    *(undefined1 *)(param_2 + 0x11) = 1;
    FUN_10029080((int)this);
    *(undefined1 *)((int)this + 0x1908) = 0;
  }
  return;
}

