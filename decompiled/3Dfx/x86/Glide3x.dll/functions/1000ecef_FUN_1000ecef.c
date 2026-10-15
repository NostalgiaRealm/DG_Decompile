/*
 * FUN_1000ecef at 1000ecef
 * undefined __thiscall FUN_1000ecef(void * this, uint param_1, uint param_2)
 * Address ranges: 1000ecef-1000ed25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000ecef(void *this,uint param_1,uint param_2)

{
  if ((*(uint *)((int)this + 0x1b8) < param_1) || (*(uint *)((int)this + 0x1bc) < param_2)) {
    (*(code *)**(undefined4 **)this)
              (*(uint *)((int)this + 0x1b8) < param_1,*(uint *)((int)this + 0x1bc) < param_2);
  }
  return;
}

