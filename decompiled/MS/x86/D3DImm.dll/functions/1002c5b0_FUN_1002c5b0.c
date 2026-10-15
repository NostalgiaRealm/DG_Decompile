/*
 * FUN_1002c5b0 at 1002c5b0
 * undefined __thiscall FUN_1002c5b0(void * this, int * param_1)
 * Address ranges: 1002c5b0-1002c733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c5b0(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  
  fVar4 = (float)((double)param_1[5] + (double)(&DAT_100601f0)[-(param_1[5] >> 0x1f)]);
  if ((*(float *)((int)this + 0x980) != fVar4) ||
     (*(float *)((int)this + 0x984) !=
      (float)((double)param_1[6] + (double)(&DAT_100601f0)[-(param_1[6] >> 0x1f)]))) {
    *(float *)((int)this + 0x980) = fVar4;
    *(float *)((int)this + 0x984) =
         (float)((double)param_1[6] + (double)(&DAT_100601f0)[-(param_1[6] >> 0x1f)]);
    *(float *)((int)this + 0x3a4) =
         (float)((double)param_1[5] + (double)(&DAT_100601f0)[-(param_1[5] >> 0x1f)]);
    *(float *)((int)this + 0x3a8) =
         (float)((double)param_1[6] + (double)(&DAT_100601f0)[-(param_1[6] >> 0x1f)]);
    iVar1 = (**(code **)(*param_1 + 0x20))(0);
    *(float *)((int)this + 0x3d4) =
         (float)((double)iVar1 + (double)(&DAT_100601f0)[-(iVar1 >> 0x1f)]);
    iVar1 = (**(code **)(*param_1 + 0x24))(0);
    *(float *)((int)this + 0x3d8) =
         (float)((double)iVar1 + (double)(&DAT_100601f0)[-(iVar1 >> 0x1f)]);
    FUN_10029080((int)this);
    *(undefined1 *)((int)this + 0x1d3e) = 1;
    *(undefined1 *)((int)this + 0x1d41) = 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x20))(0);
  uVar2 = (**(code **)(*param_1 + 0x24))(0);
  if ((iVar1 == *(int *)((int)this + 0x1838)) && (iVar1 == *(int *)((int)this + 0x183c))) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  *(byte *)((int)this + 0x1908) = *(byte *)((int)this + 0x1908) | bVar3;
  *(undefined4 *)((int)this + 0x183c) = uVar2;
  *(int *)((int)this + 0x1838) = iVar1;
  return;
}

