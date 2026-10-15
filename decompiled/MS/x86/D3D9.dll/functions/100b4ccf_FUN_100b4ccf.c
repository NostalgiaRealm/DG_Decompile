/*
 * FUN_100b4ccf at 100b4ccf
 * undefined __thiscall FUN_100b4ccf(void * this, int param_1, int * param_2)
 * Address ranges: 100b4ccf-100b4d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b4ccf(void *this,int param_1,int *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  if (param_2 == *(int **)(param_1 * 0x1510 + 0x7ec + (int)this)) {
    *(undefined4 *)(param_1 * 0x1510 + 0x7ec + (int)this) = 0;
  }
  (**(code **)(*param_2 + 8))(param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return;
}

