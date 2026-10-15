/*
 * FUN_10049b3a at 10049b3a
 * undefined __thiscall FUN_10049b3a(void * this, int param_1)
 * Address ranges: 10049b3a-10049c02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049b3a(void *this,int param_1)

{
  undefined4 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  local_8 = 0;
  do {
    iVar3 = local_8 * 0x38;
    if (*(int *)((int)this + iVar3 + 0x2dc) != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)((int)this + iVar3 + 0x2f0);
      EnterCriticalSection(lpCriticalSection);
      for (iVar4 = *(int *)((int)this + iVar3 + 0x2e4); iVar4 != 0; iVar4 = iVar4 + -1) {
        iVar2 = (**(code **)(**(int **)(*(int *)((int)this + iVar3 + 0x2e0) + -4 + iVar4 * 4) + 8))
                          ();
        if (iVar2 == param_1) {
          puVar1 = *(undefined4 **)(*(int *)((int)this + iVar3 + 0x2e0) + -4 + iVar4 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(1);
          }
          FUN_10049c03((void *)(iVar3 + 0x2e0 + (int)this),iVar4 - 1);
        }
      }
      iVar3 = *(int *)((int)this + local_8 * 0x38 + 0x30c);
      while (iVar3 == param_1) {
        Sleep(0);
        iVar3 = *(int *)((int)this + local_8 * 0x38 + 0x30c);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  return;
}

