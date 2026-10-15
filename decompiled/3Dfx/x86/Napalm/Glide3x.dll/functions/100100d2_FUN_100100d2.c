/*
 * FUN_100100d2 at 100100d2
 * undefined __thiscall FUN_100100d2(void * this, uint param_1, uint param_2)
 * Address ranges: 100100d2-10010108
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100100d2(void *this,uint param_1,uint param_2)

{
  if ((*(uint *)((int)this + 0x1b8) < param_1) || (*(uint *)((int)this + 0x1bc) < param_2)) {
    (*(code *)**(undefined4 **)this)
              (*(uint *)((int)this + 0x1b8) < param_1,*(uint *)((int)this + 0x1bc) < param_2);
  }
  return;
}

