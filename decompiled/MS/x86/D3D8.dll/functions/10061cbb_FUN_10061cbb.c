/*
 * FUN_10061cbb at 10061cbb
 * undefined __thiscall FUN_10061cbb(void * this, uint param_1, uint param_2)
 * Address ranges: 10061cbb-10061dd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10061cbb(void *this,uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  if ((*(int *)((int)this + 0x18) != 0) && (local_8 = 0, param_2 != 0)) {
    do {
      uVar4 = 0;
      if (param_1 != 0) {
        do {
          iVar2 = (local_8 * param_1 + uVar4) * 0x1c;
          if (*(int *)(iVar2 + *(int *)((int)this + 0x18)) != 0) {
            FUN_10092988(*(void **)this,*(int *)((int)this + 4),
                         *(int **)(iVar2 + *(int *)((int)this + 0x18)));
          }
          piVar1 = *(int **)(*(int *)((int)this + 0x18) + 4 + iVar2);
          if (piVar1 != (int *)0x0) {
            iVar2 = *(int *)this;
            iVar3 = *(int *)((int)this + 4) * 0x1510;
            EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
            if (piVar1 == *(int **)(iVar2 + 0x80c + iVar3)) {
              *(undefined4 *)(iVar2 + 0x80c + iVar3) = 0;
            }
            (**(code **)(*piVar1 + 8))(piVar1);
            LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_2);
  }
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x18) = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_100929d5(*(void **)this,*(int *)((int)this + 4),*(int **)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar1 = *(int **)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar1 = *(int **)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return;
}

