/*
 * FUN_10040f86 at 10040f86
 * undefined4 __thiscall FUN_10040f86(void * this, undefined4 * param_1)
 * Address ranges: 10040f86-10041011
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040f86(void *this,undefined4 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 2;
    uVar2 = 0;
    param_1[1] = *(int *)((int)this + 500) << 0xc | *(uint *)((int)this + 0x1f0);
    param_1[2] = *(undefined4 *)((int)this + 0x1f8);
    param_1[3] = *(undefined4 *)((int)this + 0x1fc);
    param_1[4] = *(undefined4 *)((int)this + 0x200);
    param_1[5] = *(undefined4 *)((int)this + 0x204);
    param_1[6] = *(undefined4 *)((int)this + 0x208);
    param_1[7] = *(undefined4 *)((int)this + 0x20c);
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

