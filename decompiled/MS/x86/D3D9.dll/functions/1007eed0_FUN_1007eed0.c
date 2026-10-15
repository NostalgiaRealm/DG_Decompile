/*
 * FUN_1007eed0 at 1007eed0
 * undefined __thiscall FUN_1007eed0(void * this, int param_1, int param_2)
 * Address ranges: 1007eed0-1007ef75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_1007eed0(void *this,int param_1,int param_2)

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
  
  uStack_c = 0x1007eee0;
  FUN_1008d5fb(param_2,local_1008);
  piVar1 = *(int **)((int)this + 0x1cf08);
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,local_101c,local_1020);
  if (-1 < iVar2) {
    FUN_100bcb54(unaff_EBX,(uint)piVar1,unaff_ESI,param_1 * 0x1000,param_1 * 0x1000 + 0x1000,
                 auStack_1014);
  }
  if (*(int *)(*(int *)((int)this + 0x1cf04) + 4) == 0x10de) {
    FUN_100baf7e(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),*(uint *)((int)this + 0x1cf08),0
                 ,1,0);
  }
  return;
}

