/*
 * FUN_10038442 at 10038442
 * undefined __thiscall FUN_10038442(void * this, int param_1, int param_2)
 * Address ranges: 10038442-10038518
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10038442(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 8) != 0) {
    iVar3 = param_2 * 0x1510;
    if (*(int *)((int)this + 8) == 0) {
      iVar2 = 0;
      goto LAB_10038481;
    }
    do {
      iVar2 = *(int *)((int)this + 4) + 8 + uVar4 * 0x18;
LAB_10038481:
      piVar1 = *(int **)(iVar2 + 8);
      if (piVar1 != (int *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
        if (piVar1 == *(int **)(param_1 + 0x7f0 + iVar3)) {
          *(undefined4 *)(param_1 + 0x7f0 + iVar3) = 0;
        }
        (**(code **)(*piVar1 + 8))(piVar1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
      }
      piVar1 = *(int **)(iVar2 + 0xc);
      if (piVar1 != (int *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
        if (piVar1 == *(int **)(param_1 + 0x7f8 + iVar3)) {
          *(undefined4 *)(param_1 + 0x7f8 + iVar3) = 0;
        }
        (**(code **)(*piVar1 + 8))(piVar1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 8));
  }
  return;
}

