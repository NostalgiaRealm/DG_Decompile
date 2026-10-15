/*
 * FUN_1002ca07 at 1002ca07
 * undefined __thiscall FUN_1002ca07(void * this, uint param_1)
 * Address ranges: 1002ca07-1002ca93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1002ca63) */
/* WARNING: Removing unreachable block (ram,0x1002ca45) */
/* WARNING: Removing unreachable block (ram,0x1002ca7c) */
/* WARNING: Removing unreachable block (ram,0x1002ca27) */

void __thiscall FUN_1002ca07(void *this,uint param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(float *)((int)this + 0x2c20) = (float)(param_1 >> 0x18);
  *(float *)((int)this + 0x2c24) = (float)(param_1 >> 0x10 & 0xff);
  *(float *)((int)this + 0x2c28) = (float)(param_1 >> 8 & 0xff);
  *(float *)((int)this + 0x2c2c) = (float)(param_1 & 0xff);
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

