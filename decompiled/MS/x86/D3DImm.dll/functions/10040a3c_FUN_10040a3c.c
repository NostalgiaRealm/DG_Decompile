/*
 * FUN_10040a3c at 10040a3c
 * undefined4 __thiscall FUN_10040a3c(void * this, uint param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 10040a3c-10040ab9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040a3c(void *this,uint param_1,uint param_2,undefined4 *param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if ((((param_1 < 8) && (param_2 != 0)) && (param_2 < 0x19)) && (param_3 != (undefined4 *)0x0)) {
    if (*(char *)(param_2 * 0xc + *(int *)((int)this + 8)) == '\0') {
      *param_3 = 0;
    }
    else {
      uVar2 = 0;
      *param_3 = *(undefined4 *)((int)this + (param_1 * 0x19 + param_2) * 4 + 0x4f4);
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

