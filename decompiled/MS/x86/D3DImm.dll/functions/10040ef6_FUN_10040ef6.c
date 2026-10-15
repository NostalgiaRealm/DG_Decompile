/*
 * FUN_10040ef6 at 10040ef6
 * undefined4 __thiscall FUN_10040ef6(void * this, byte * param_1)
 * Address ranges: 10040ef6-10040f84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040ef6(void *this,byte *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if ((param_1 != (byte *)0x0) && ((*param_1 & 4) == 0)) {
    if ((*param_1 & 1) != 0) {
      *(uint *)((int)this + 0x1f0) = *(uint *)(param_1 + 4) & 0xfff;
      *(uint *)((int)this + 500) = *(uint *)(param_1 + 4) >> 0xc & 0xfff;
    }
    if ((*param_1 & 2) != 0) {
      *(undefined4 *)((int)this + 0x1fc) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)((int)this + 0x1f8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)((int)this + 0x204) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)((int)this + 0x200) = *(undefined4 *)(param_1 + 0x10);
    }
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

