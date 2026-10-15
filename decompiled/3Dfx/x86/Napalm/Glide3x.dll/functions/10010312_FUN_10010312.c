/*
 * FUN_10010312 at 10010312
 * undefined __thiscall FUN_10010312(void * this, uint param_1)
 * Address ranges: 10010312-1001039e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1001036e) */
/* WARNING: Removing unreachable block (ram,0x10010350) */
/* WARNING: Removing unreachable block (ram,0x10010387) */
/* WARNING: Removing unreachable block (ram,0x10010332) */

void __thiscall FUN_10010312(void *this,uint param_1)

{
  (**(code **)(*(int *)this + 0x198))();
  *(float *)((int)this + 0x2e10) = (float)(param_1 >> 0x18);
  *(float *)((int)this + 0x2e14) = (float)(param_1 >> 0x10 & 0xff);
  *(float *)((int)this + 0x2e18) = (float)(param_1 >> 8 & 0xff);
  *(float *)((int)this + 0x2e1c) = (float)(param_1 & 0xff);
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

