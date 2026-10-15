/*
 * FUN_10040931 at 10040931
 * undefined4 __thiscall FUN_10040931(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10040931-10040999
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040931(void *this,uint param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if (((param_1 != 0) && (param_1 < 0x99)) && (param_2 != (undefined4 *)0x0)) {
    if (*(char *)(*(int *)((int)this + 4) + param_1 * 8) == '\0') {
      *param_2 = 0;
    }
    else {
      uVar2 = 0;
      *param_2 = *(undefined4 *)((int)this + param_1 * 4 + 0x290);
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

