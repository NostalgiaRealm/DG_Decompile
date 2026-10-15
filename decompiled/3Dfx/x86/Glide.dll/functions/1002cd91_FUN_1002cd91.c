/*
 * FUN_1002cd91 at 1002cd91
 * undefined __thiscall FUN_1002cd91(void * this, uint param_1)
 * Address ranges: 1002cd91-1002ce1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1002cded) */
/* WARNING: Removing unreachable block (ram,0x1002cdcf) */
/* WARNING: Removing unreachable block (ram,0x1002ce06) */
/* WARNING: Removing unreachable block (ram,0x1002cdb1) */

void __thiscall FUN_1002cd91(void *this,uint param_1)

{
  (**(code **)(*(int *)this + 0x150))();
  *(float *)((int)this + 0x2c20) = (float)(param_1 >> 0x18);
  *(float *)((int)this + 0x2c24) = (float)(param_1 >> 0x10 & 0xff);
  *(float *)((int)this + 0x2c28) = (float)(param_1 >> 8 & 0xff);
  *(float *)((int)this + 0x2c2c) = (float)(param_1 & 0xff);
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

