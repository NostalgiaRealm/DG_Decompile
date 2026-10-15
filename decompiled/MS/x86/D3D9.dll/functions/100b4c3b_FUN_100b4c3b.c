/*
 * FUN_100b4c3b at 100b4c3b
 * undefined __thiscall FUN_100b4c3b(void * this, int param_1, int * param_2)
 * Address ranges: 100b4c3b-100b4c89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b4c3b(void *this,int param_1,int *param_2)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  uVar1 = 0;
  do {
    if (param_2 == *(int **)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x704)) {
      *(undefined4 *)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x704) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  (**(code **)(*param_2 + 8))(param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return;
}

