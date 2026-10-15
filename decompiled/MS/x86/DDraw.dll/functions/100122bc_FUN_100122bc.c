/*
 * FUN_100122bc at 100122bc
 * undefined __thiscall FUN_100122bc(void * this, int param_1, int param_2)
 * Address ranges: 100122bc-10012361
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_100122bc(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *unaff_EBX;
  void *unaff_ESI;
  undefined1 local_1020 [4];
  undefined1 local_101c [8];
  undefined4 auStack_1014 [3];
  int local_1008 [1023];
  undefined4 uStack_c;
  
  uStack_c = 0x100122cc;
  FUN_1002045f(param_2,local_1008);
  piVar1 = *(int **)((int)this + 53000);
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,local_101c,local_1020);
  if (-1 < iVar2) {
    FUN_10054749(unaff_EBX,(uint)piVar1,unaff_ESI,param_1 * 0x1000,param_1 * 0x1000 + 0x1000,
                 auStack_1014);
  }
  if (*(int *)(*(int *)((int)this + 0xcf04) + 4) == 0x10de) {
    FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),*(uint *)((int)this + 53000),0,1,
                 0);
  }
  return;
}

