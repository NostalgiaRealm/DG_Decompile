/*
 * FUN_1002d09f at 1002d09f
 * undefined __thiscall FUN_1002d09f(void * this, uint param_1)
 * Address ranges: 1002d09f-1002d137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1002d0fd) */
/* WARNING: Removing unreachable block (ram,0x1002d121) */
/* WARNING: Removing unreachable block (ram,0x1002d0cf) */

void __thiscall FUN_1002d09f(void *this,uint param_1)

{
  if (*(int *)((int)this + 0x296c) != 0) {
    (**(code **)(*(int *)this + 0x150))();
    *(undefined1 *)((int)this + 0x3150) = 1;
  }
  *(float *)((int)this + 0x2c50) = (float)(param_1 >> 0x18) / 255.0;
  *(float *)((int)this + 0x2c54) = (float)(param_1 >> 0x10 & 0xff) / 255.0;
  *(float *)((int)this + 0x2c58) = (float)(param_1 >> 8 & 0xff) / 255.0;
  return;
}

