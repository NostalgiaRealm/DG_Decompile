/*
 * FUN_100407e3 at 100407e3
 * undefined4 __thiscall FUN_100407e3(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 100407e3-10040843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100407e3(void *this,uint param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if ((((param_2 != (undefined4 *)0x0) && (param_1 != 0)) && (param_1 < 9)) &&
     (*(char *)(*(int *)((int)this + 0xa5c) + param_1 * 8) != '\0')) {
    uVar2 = 0;
    *param_2 = *(undefined4 *)((int)this + param_1 * 4 + 0x14b0);
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

