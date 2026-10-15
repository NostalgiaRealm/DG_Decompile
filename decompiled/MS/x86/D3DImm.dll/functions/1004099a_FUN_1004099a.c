/*
 * FUN_1004099a at 1004099a
 * undefined4 __thiscall FUN_1004099a(void * this, uint param_1, uint param_2, uint param_3)
 * Address ranges: 1004099a-10040a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004099a(void *this,uint param_1,uint param_2,uint param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if ((((param_1 < 8) && (param_2 != 0)) && (param_2 < 0x19)) &&
     (*(char *)(param_2 * 0xc + *(int *)((int)this + 8)) != '\0')) {
    if ((*(char *)((int)this + 0x224) == '\0') &&
       ((((param_2 == 1 || (param_2 == 2)) || ((param_2 == 3 || ((param_2 == 4 || (param_2 == 5)))))
         ) || (param_2 == 6)))) {
      *(byte *)((int)this + 0xa84) =
           *(byte *)((int)this + 0xa84) &
           *(uint *)((int)this + (param_1 * 0x19 + param_2) * 4 + 0x4f4) == param_3;
    }
    FUN_10005ff1(this,param_1,param_2,param_3);
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

