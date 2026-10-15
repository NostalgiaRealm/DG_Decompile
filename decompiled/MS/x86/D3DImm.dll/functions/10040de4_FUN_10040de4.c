/*
 * FUN_10040de4 at 10040de4
 * undefined4 __thiscall FUN_10040de4(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10040de4-10040e9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall FUN_10040de4(void *this,int param_1,undefined4 *param_2)

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
  local_8 = &local_c;
  local_c = (void *)(in_FPUControlWord | 0x80000000);
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_c = (void *)(uint)in_FPUControlWord;
  }
  uVar2 = 0x80070057;
  if (((param_2 != (undefined4 *)0x0) && (param_1 != 0)) && (param_1 < 0x18)) {
    FUN_1001385b((void *)(*(int *)(&DAT_1005f420 + param_1 * 4) * 0x40 + *(int *)((int)this + 0x9cc)
                         ),param_2);
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

