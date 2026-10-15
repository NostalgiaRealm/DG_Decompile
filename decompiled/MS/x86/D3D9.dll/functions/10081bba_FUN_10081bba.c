/*
 * FUN_10081bba at 10081bba
 * undefined __thiscall FUN_10081bba(void * this, int param_1, int param_2)
 * Address ranges: 10081bba-10081cd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10081bba(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + 0x18);
  if (*(char *)((int)this + 0x38) == '\0') {
    piVar2 = (int *)((int)this + 8);
    if (*(int **)((int)this + 0x24) != (int *)*piVar1) {
      FUN_10081511(this,*(void **)(*piVar2 + 0x15d8),*(int **)((int)this + 0x24),1);
    }
    iVar3 = param_1 * param_2;
    if (*(int **)((int)this + 0x28) != *(int **)((int)this + 0x1c)) {
      FUN_10081511(this,*(void **)(*piVar2 + 0x15dc),*(int **)((int)this + 0x28),iVar3);
    }
    *(undefined4 *)((int)this + 0x24) = 0xffffffff;
    *(undefined4 *)((int)this + 0x28) = 0xffffffff;
    FUN_10081511(this,*(void **)(*piVar2 + 0x15d8),(int *)*piVar1,
                 (*(int *)((int)this + 0x30) != 0) + 1);
    FUN_10081511(this,*(void **)(*piVar2 + 0x15dc),*(int **)((int)this + 0x1c),iVar3);
    FUN_10081511(this,*(void **)(*piVar2 + 0x15e0),*(int **)((int)this + 0x20),iVar3);
  }
  piVar2 = *(int **)((int)this + 0xc);
  *piVar1 = -1;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if (piVar2 != (int *)0x0) {
    if (*(char *)((int)this + 0x38) == '\0') {
      FUN_100813e5(this,piVar2);
    }
    else {
      (**(code **)(*piVar2 + 8))();
    }
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar1 = *(int **)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    if (*(char *)((int)this + 0x38) == '\0') {
      FUN_100813e5(this,piVar1);
    }
    else {
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0x14));
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}

