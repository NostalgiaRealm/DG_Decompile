/*
 * FUN_10041ab0 at 10041ab0
 * undefined __thiscall FUN_10041ab0(void * this, int param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10041ab0-10041d9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10041ab0(void *this,int param_1,int param_2,int *param_3,int *param_4)

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
  
  fVar9 = (float)((double)*param_3 + (double)(&DAT_100b5ce0)[-(*param_3 >> 0x1f)]);
  fVar7 = (float)((double)param_3[1] + (double)(&DAT_100b5ce0)[-(param_3[1] >> 0x1f)]);
  fVar4 = (float)((double)param_3[2] + (double)(&DAT_100b5ce0)[-(param_3[2] >> 0x1f)]);
  fVar5 = (float)((double)param_3[3] + (double)(&DAT_100b5ce0)[-(param_3[3] >> 0x1f)]);
  if ((((*(float *)((int)this + 0x578) != fVar9) || (*(float *)((int)this + 0x57c) != fVar7)) ||
      (*(float *)((int)this + 0x580) != fVar4)) ||
     (((*(float *)((int)this + 0x584) != fVar5 ||
       (*(float *)((int)this + 0x588) != (float)param_3[4])) ||
      ((*(float *)((int)this + 0x58c) != (float)param_3[5] ||
       (*(char *)((int)this + 0x5958) != '\0')))))) {
    (**(code **)(*(int *)this + 0xc0))(0);
    fVar6 = 1.0;
    fVar8 = 1.0;
    if (param_4 != (int *)0x0) {
      iVar3 = param_4[5];
      iVar2 = (**(code **)(*param_4 + 0x20))(0);
      iVar1 = param_4[6];
      fVar6 = (float)((double)iVar2 + (double)(&DAT_100b5ce0)[-(iVar2 >> 0x1f)]) /
              (float)((double)iVar3 + (double)(&DAT_100b5ce0)[-(iVar3 >> 0x1f)]);
      iVar3 = (**(code **)(*param_4 + 0x24))(0);
      fVar8 = (float)((double)iVar3 + (double)(&DAT_100b5ce0)[-(iVar3 >> 0x1f)]) /
              (float)((double)iVar1 + (double)(&DAT_100b5ce0)[-(iVar1 >> 0x1f)]);
    }
    *(float *)(param_1 + 0x4e8) = fVar9;
    *(float *)(param_1 + 0x4ec) = fVar7;
    *(float *)(param_1 + 0x518) = fVar6 * fVar9;
    fVar10 = fVar6 * fVar4;
    fVar9 = fVar8 * fVar5;
    *(float *)(param_1 + 0x4f0) = fVar4;
    *(float *)(param_1 + 0x4f4) = fVar5;
    *(float *)(param_1 + 0x51c) = fVar8 * fVar7;
    *(float *)(param_1 + 0x520) = fVar10;
    *(float *)(param_1 + 0x524) = fVar9;
    iVar3 = param_3[4];
    *(int *)(param_1 + 0x528) = iVar3;
    *(int *)(param_1 + 0x4f8) = iVar3;
    iVar3 = param_3[5];
    *(int *)(param_1 + 0x52c) = iVar3;
    *(int *)(param_1 + 0x4fc) = iVar3;
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
    *(float *)(param_1 + 0x548) = fVar6;
    *(float *)(param_1 + 0x54c) = fVar8;
    *(float *)(param_1 + 0x4c44) = fVar9;
    *(float *)(param_1 + 0x4c40) = fVar10;
    *(float *)(param_1 + 0x4c18) = fVar4;
    *(float *)(param_1 + 0x4c1c) = fVar5;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(float *)(param_1 + 0x46a0) = fVar10;
    *(float *)(param_1 + 0x46a4) = -fVar9;
    *(undefined1 *)(param_2 + 0x34) = 1;
    FUN_100416c0((int)this);
    *(undefined1 *)((int)this + 0x5958) = 0;
  }
  return;
}

