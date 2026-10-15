/*
 * FUN_10026a32 at 10026a32
 * undefined4 __thiscall FUN_10026a32(void * this, undefined4 * param_1)
 * Address ranges: 10026a32-10026a92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10026a32(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uStack_c = this;
  FUN_10023df9((int)&uStack_c + 3);
  uVar2 = 0x88760082;
  if ((this != (void *)0x0) && (uVar2 = 0x88760005, *(char *)((int)this + 0x14f) == '\0')) {
    uVar2 = 0x80004005;
    bVar1 = FUN_10001b8b();
    if (bVar1) {
      FUN_10028f7c();
      FUN_10002dae();
      uVar2 = FUN_10024050(this,param_1);
    }
  }
  FUN_10023e27();
  return uVar2;
}

