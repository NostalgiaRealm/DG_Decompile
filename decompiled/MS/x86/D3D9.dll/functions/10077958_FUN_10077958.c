/*
 * FUN_10077958 at 10077958
 * undefined __thiscall FUN_10077958(void * this, uint param_1, uint param_2)
 * Address ranges: 10077958-10077aac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10077958(void *this,uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_c;
  
  if ((*(int *)((int)this + 0x18) != 0) && (local_c = 0, param_2 != 0)) {
    do {
      uVar5 = 0;
      if (param_1 != 0) {
        do {
          iVar3 = (local_c * param_1 + uVar5) * 0x1c;
          if (*(int *)(iVar3 + *(int *)((int)this + 0x18)) != 0) {
            FUN_100b4b8c(*(void **)this,*(int *)((int)this + 4),
                         *(int **)(iVar3 + *(int *)((int)this + 0x18)));
          }
          piVar1 = *(int **)(*(int *)((int)this + 0x18) + 4 + iVar3);
          if (piVar1 != (int *)0x0) {
            iVar2 = *(int *)this;
            iVar4 = *(int *)((int)this + 4) * 0x1510;
            EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
            if (piVar1 == *(int **)(iVar2 + 0x80c + iVar4)) {
              *(undefined4 *)(iVar2 + 0x80c + iVar4) = 0;
            }
            (**(code **)(*piVar1 + 8))(piVar1);
            LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
          }
          piVar1 = *(int **)(*(int *)((int)this + 0x18) + 8 + iVar3);
          if (piVar1 != (int *)0x0) {
            FUN_100b4b8c(*(void **)this,*(int *)((int)this + 4),piVar1);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_1);
      }
      local_c = local_c + 1;
    } while (local_c < param_2);
  }
  thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x18) = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_100b4bd9(*(void **)this,*(int *)((int)this + 4),*(int **)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_100b4bd9(*(void **)this,*(int *)((int)this + 4),*(int **)((int)this + 0x14));
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

