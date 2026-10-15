/*
 * FUN_10044b20 at 10044b20
 * undefined __thiscall FUN_10044b20(void * this, int * param_1)
 * Address ranges: 10044b20-10044ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10044b20(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  
  fVar4 = (float)((double)param_1[5] + (double)(&DAT_100b5ce0)[-(param_1[5] >> 0x1f)]);
  if ((*(float *)((int)this + 0x4ca0) != fVar4) ||
     (*(float *)((int)this + 0x4ca4) !=
      (float)((double)param_1[6] + (double)(&DAT_100b5ce0)[-(param_1[6] >> 0x1f)]))) {
    *(float *)((int)this + 0x4ca0) = fVar4;
    *(float *)((int)this + 0x4ca4) =
         (float)((double)param_1[6] + (double)(&DAT_100b5ce0)[-(param_1[6] >> 0x1f)]);
    *(float *)((int)this + 0x598) =
         (float)((double)param_1[5] + (double)(&DAT_100b5ce0)[-(param_1[5] >> 0x1f)]);
    *(float *)((int)this + 0x59c) =
         (float)((double)param_1[6] + (double)(&DAT_100b5ce0)[-(param_1[6] >> 0x1f)]);
    iVar1 = (**(code **)(*param_1 + 0x20))(0);
    *(float *)((int)this + 0x5c8) =
         (float)((double)iVar1 + (double)(&DAT_100b5ce0)[-(iVar1 >> 0x1f)]);
    iVar1 = (**(code **)(*param_1 + 0x24))(0);
    *(float *)((int)this + 0x5cc) =
         (float)((double)iVar1 + (double)(&DAT_100b5ce0)[-(iVar1 >> 0x1f)]);
    FUN_100416c0((int)this);
    *(undefined1 *)((int)this + 0xd97e) = 1;
    *(undefined1 *)((int)this + 0xd981) = 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x20))(0);
  uVar2 = (**(code **)(*param_1 + 0x24))(0);
  if ((iVar1 == *(int *)((int)this + 0x5888)) && (iVar1 == *(int *)((int)this + 0x588c))) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  *(byte *)((int)this + 0x5958) = *(byte *)((int)this + 0x5958) | bVar3;
  *(undefined4 *)((int)this + 0x588c) = uVar2;
  *(int *)((int)this + 0x5888) = iVar1;
  return;
}

