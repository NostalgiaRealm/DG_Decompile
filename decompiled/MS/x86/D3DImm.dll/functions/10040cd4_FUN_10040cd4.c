/*
 * FUN_10040cd4 at 10040cd4
 * undefined4 __thiscall FUN_10040cd4(void * this, undefined4 * param_1)
 * Address ranges: 10040cd4-10040d88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_10040cd4(void *this,undefined4 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  ushort in_FPUControlWord;
  void *local_c;
  void **local_8;
  
  local_c = this;
  local_8 = this;
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    local_8 = &local_c;
    local_c = (void *)(in_FPUControlWord | 0x80000000);
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_c = (void *)(uint)in_FPUControlWord;
    }
    uVar2 = 0;
    *param_1 = *(undefined4 *)((int)this + 0x2c);
    param_1[1] = *(undefined4 *)((int)this + 0x30);
    param_1[2] = *(undefined4 *)((int)this + 0x34);
    param_1[3] = *(undefined4 *)((int)this + 0x38);
    param_1[4] = *(undefined4 *)((int)this + 0x3c);
    param_1[5] = *(undefined4 *)((int)this + 0x40);
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

