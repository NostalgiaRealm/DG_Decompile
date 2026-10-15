/*
 * FUN_100415f5 at 100415f5
 * undefined4 __thiscall FUN_100415f5(void * this, undefined4 * param_1)
 * Address ranges: 100415f5-100416c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_100415f5(void *this,undefined4 *param_1)

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
    *param_1 = *(undefined4 *)((int)this + 0x104);
    param_1[1] = *(undefined4 *)((int)this + 0x108);
    param_1[2] = *(undefined4 *)((int)this + 0x10c);
    param_1[3] = *(undefined4 *)((int)this + 0x110);
    param_1[4] = *(undefined4 *)((int)this + 0x114);
    param_1[5] = *(undefined4 *)((int)this + 0x118);
    param_1[6] = *(undefined4 *)((int)this + 0x11c);
    param_1[7] = *(undefined4 *)((int)this + 0x120);
    param_1[8] = *(undefined4 *)((int)this + 0x124);
    param_1[9] = *(undefined4 *)((int)this + 0x128);
    param_1[10] = *(undefined4 *)((int)this + 300);
    param_1[0xb] = *(undefined4 *)((int)this + 0x130);
    param_1[0xc] = *(undefined4 *)((int)this + 0x134);
    param_1[0xd] = *(undefined4 *)((int)this + 0x138);
    param_1[0xe] = *(undefined4 *)((int)this + 0x13c);
    param_1[0xf] = *(undefined4 *)((int)this + 0x140);
    uVar2 = 0;
    param_1[0x10] = *(undefined4 *)((int)this + 0x144);
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

