/*
 * FUN_100365a4 at 100365a4
 * undefined __thiscall FUN_100365a4(void * this, int * param_1)
 * Address ranges: 100365a4-10036715
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100365a4(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  
  if ((((*param_1 == *(int *)((int)this + 0xe40)) && (param_1[1] == *(int *)((int)this + 0xe44))) &&
      (param_1[2] == *(int *)((int)this + 0xe48))) && (param_1[3] == *(int *)((int)this + 0xe4c))) {
    return;
  }
  FUN_10032e50(this,0,0,0);
  piVar5 = *(int **)((int)this + 0xf830);
  if (piVar5 == (int *)0x0) {
    piVar5 = *(int **)((int)this + 0xf840);
    fVar6 = 1.0;
    fVar7 = 1.0;
    if (piVar5 == (int *)0x0) goto LAB_100366a5;
  }
  iVar4 = piVar5[5];
  iVar3 = (**(code **)(*piVar5 + 0x20))(0);
  iVar1 = piVar5[6];
  fVar6 = (float)((double)iVar3 + (double)(&DAT_100d97a0)[-(iVar3 >> 0x1f)]) /
          (float)((double)iVar4 + (double)(&DAT_100d97a0)[-(iVar4 >> 0x1f)]);
  iVar4 = (**(code **)(*piVar5 + 0x24))(0);
  fVar7 = (float)((double)iVar4 + (double)(&DAT_100d97a0)[-(iVar4 >> 0x1f)]) /
          (float)((double)iVar1 + (double)(&DAT_100d97a0)[-(iVar1 >> 0x1f)]);
LAB_100366a5:
  iVar4 = *param_1;
  iVar1 = param_1[1];
  iVar3 = param_1[2];
  iVar2 = param_1[3];
  *(int *)((int)this + 0xe40) = *param_1;
  *(int *)((int)this + 0xe44) = param_1[1];
  *(int *)((int)this + 0xe48) = param_1[2];
  *(int *)((int)this + 0xe4c) = param_1[3];
  *(int *)((int)this + 0xe50) = (int)((float)iVar4 * fVar6);
  *(int *)((int)this + 0xe54) = (int)((float)iVar1 * fVar7);
  *(int *)((int)this + 0xe58) = (int)((float)iVar3 * fVar6);
  *(int *)((int)this + 0xe5c) = (int)((float)iVar2 * fVar7);
  *(undefined1 *)((int)this + 0xf6a1) = 1;
  return;
}

