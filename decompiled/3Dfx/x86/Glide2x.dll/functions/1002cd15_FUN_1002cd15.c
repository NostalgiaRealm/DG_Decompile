/*
 * FUN_1002cd15 at 1002cd15
 * undefined __thiscall FUN_1002cd15(void * this, uint param_1)
 * Address ranges: 1002cd15-1002cdad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1002cd73) */
/* WARNING: Removing unreachable block (ram,0x1002cd97) */
/* WARNING: Removing unreachable block (ram,0x1002cd45) */

void __thiscall FUN_1002cd15(void *this,uint param_1)

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

