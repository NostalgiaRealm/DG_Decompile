/*
 * FUN_100494b4 at 100494b4
 * int __thiscall FUN_100494b4(void * this, int param_1)
 * Address ranges: 100494b4-1004950a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100494b4(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  iVar3 = 0;
  uVar2 = 0;
  if (*(uint *)((int)this + 0x4bc) != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x4b8) + uVar2 * 4);
      if (*piVar1 == param_1) {
        iVar3 = piVar1[0x358];
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x4bc));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return iVar3;
}

