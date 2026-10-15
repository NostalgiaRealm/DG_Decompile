/*
 * FUN_1002c788 at 1002c788
 * undefined __thiscall FUN_1002c788(void * this, int param_1)
 * Address ranges: 1002c788-1002c7ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c788(void *this,int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    if (DAT_1006c238 != (int *)0x0) {
      (**(code **)(*DAT_1006c238 + 0x20))(*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),param_1)
      ;
    }
    FUN_1003146f(param_1);
  }
  if (DAT_1006c238 != (int *)0x0) {
    (**(code **)(*DAT_1006c238 + 0x20))(*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),this);
  }
  FUN_10005b31((undefined4 *)(*(int *)((int)this + 4) + 0x4c));
  FUN_1003146f((int)this);
  return;
}

