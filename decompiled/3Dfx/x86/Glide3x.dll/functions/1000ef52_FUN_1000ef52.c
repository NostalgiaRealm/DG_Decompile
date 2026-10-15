/*
 * FUN_1000ef52 at 1000ef52
 * undefined __thiscall FUN_1000ef52(void * this, uint param_1)
 * Address ranges: 1000ef52-1000efde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1000efae) */
/* WARNING: Removing unreachable block (ram,0x1000ef90) */
/* WARNING: Removing unreachable block (ram,0x1000efc7) */
/* WARNING: Removing unreachable block (ram,0x1000ef72) */

void __thiscall FUN_1000ef52(void *this,uint param_1)

{
  (**(code **)(*(int *)this + 0x170))();
  *(float *)((int)this + 0x2cc0) = (float)(param_1 >> 0x18);
  *(float *)((int)this + 0x2cc4) = (float)(param_1 >> 0x10 & 0xff);
  *(float *)((int)this + 0x2cc8) = (float)(param_1 >> 8 & 0xff);
  *(float *)((int)this + 0x2ccc) = (float)(param_1 & 0xff);
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

