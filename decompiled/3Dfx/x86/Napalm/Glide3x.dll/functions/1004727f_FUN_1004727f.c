/*
 * FUN_1004727f at 1004727f
 * undefined __thiscall FUN_1004727f(void * this, int param_1, int * param_2)
 * Address ranges: 1004727f-100472e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004727f(void *this,int param_1,int *param_2)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  uVar1 = 0;
  do {
    if (param_2 == *(int **)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x554)) {
      *(undefined4 *)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x554) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  uVar1 = 0;
  do {
    if (param_2 == *(int **)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x594)) {
      *(undefined4 *)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x594) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  (**(code **)(*param_2 + 8))(param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return;
}

