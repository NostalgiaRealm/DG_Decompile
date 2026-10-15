/*
 * FUN_1001540f at 1001540f
 * undefined __thiscall FUN_1001540f(void * this, int param_1, int param_2)
 * Address ranges: 1001540f-100154ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001540f(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x38) == '\0') {
    FUN_10014d6d(this,*(void **)(*(int *)((int)this + 8) + 0x15d8),*(int **)((int)this + 0x18),
                 (*(int *)((int)this + 0x30) != 0) + 1);
    FUN_10014d6d(this,*(void **)(*(int *)((int)this + 8) + 0x15dc),*(int **)((int)this + 0x1c),
                 param_1 * param_2);
    FUN_10014d6d(this,*(void **)(*(int *)((int)this + 8) + 0x15e0),*(int **)((int)this + 0x20),
                 param_1 * param_2);
  }
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  piVar1 = *(int **)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if (piVar1 != (int *)0x0) {
    if (*(char *)((int)this + 0x38) == '\0') {
      FUN_10014c41(this,piVar1);
    }
    else {
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar1 = *(int **)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    if (*(char *)((int)this + 0x38) == '\0') {
      FUN_10014c41(this,piVar1);
    }
    else {
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  thunk_FUN_10060be1(*(LPVOID *)((int)this + 0x14));
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}

