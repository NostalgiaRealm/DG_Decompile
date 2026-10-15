/*
 * FUN_100417d4 at 100417d4
 * undefined __thiscall FUN_100417d4(void * this, int param_1, int * param_2)
 * Address ranges: 100417d4-1004183e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100417d4(void *this,int param_1,int *param_2)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  uVar1 = 0;
  do {
    if (param_2 == *(int **)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x604)) {
      *(undefined4 *)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x604) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  uVar1 = 0;
  do {
    if (param_2 == *(int **)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x5d4)) {
      *(undefined4 *)((int)this + uVar1 * 4 + param_1 * 0x1510 + 0x5d4) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xc);
  (**(code **)(*param_2 + 8))(param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  return;
}

