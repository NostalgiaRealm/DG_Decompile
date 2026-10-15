/*
 * FUN_10053080 at 10053080
 * undefined __thiscall FUN_10053080(void * this, int * param_1)
 * Address ranges: 10053080-10053209
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053080(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  
  fVar4 = (float)((double)param_1[5] + (double)(&DAT_100d97a0)[-(param_1[5] >> 0x1f)]);
  if ((*(float *)((int)this + 0x6910) != fVar4) ||
     (*(float *)((int)this + 0x6914) !=
      (float)((double)param_1[6] + (double)(&DAT_100d97a0)[-(param_1[6] >> 0x1f)]))) {
    *(float *)((int)this + 0x6910) = fVar4;
    *(float *)((int)this + 0x6914) =
         (float)((double)param_1[6] + (double)(&DAT_100d97a0)[-(param_1[6] >> 0x1f)]);
    *(float *)((int)this + 0xeb0) =
         (float)((double)param_1[5] + (double)(&DAT_100d97a0)[-(param_1[5] >> 0x1f)]);
    *(float *)((int)this + 0xeb4) =
         (float)((double)param_1[6] + (double)(&DAT_100d97a0)[-(param_1[6] >> 0x1f)]);
    iVar1 = (**(code **)(*param_1 + 0x20))(0);
    *(float *)((int)this + 0xee0) =
         (float)((double)iVar1 + (double)(&DAT_100d97a0)[-(iVar1 >> 0x1f)]);
    iVar1 = (**(code **)(*param_1 + 0x24))(0);
    *(float *)((int)this + 0xee4) =
         (float)((double)iVar1 + (double)(&DAT_100d97a0)[-(iVar1 >> 0x1f)]);
    FUN_1004f060((int)this);
    *(undefined1 *)((int)this + 0xf66e) = 1;
    *(undefined1 *)((int)this + 0xf671) = 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x20))(0);
  uVar2 = (**(code **)(*param_1 + 0x24))(0);
  if ((iVar1 == *(int *)((int)this + 0x7578)) && (iVar1 == *(int *)((int)this + 0x757c))) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  *(byte *)((int)this + 0x7645) = *(byte *)((int)this + 0x7645) | bVar3;
  *(byte *)((int)this + 0xf6a1) = *(byte *)((int)this + 0xf6a1) | bVar3;
  *(undefined4 *)((int)this + 0x757c) = uVar2;
  *(int *)((int)this + 0x7578) = iVar1;
  return;
}

