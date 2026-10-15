/*
 * FUN_1000bbdd at 1000bbdd
 * undefined4 __thiscall FUN_1000bbdd(void * this, int param_1, int param_2)
 * Address ranges: 1000bbdd-1000bc5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000bbdd(void *this,int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  FUN_10048d82(*(void **)((int)this + -0x48),this,(int)this + -0x88);
  bVar2 = FUN_1000baa6((void *)((int)this + -0x88));
  uVar4 = 0;
  if (bVar2) {
    piVar1 = *(int **)(*(int *)((int)this + -0x44) + 4);
    iVar3 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)((int)this + -0x14),
                       *(int *)((int)this + -0x5c) * param_2 + param_1,3,0,local_10);
    if (-1 < iVar3) {
      piVar1 = *(int **)(*(int *)((int)this + -0x44) + 4);
      (**(code **)(*piVar1 + 0x3c))
                (piVar1,*(undefined4 *)((int)this + -0x14),
                 *(int *)((int)this + -0x5c) * param_2 + param_1);
      uVar4 = local_c;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + -0x48) + 0x4a0));
  return uVar4;
}

