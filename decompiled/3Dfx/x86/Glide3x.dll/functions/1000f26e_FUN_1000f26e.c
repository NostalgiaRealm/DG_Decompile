/*
 * FUN_1000f26e at 1000f26e
 * undefined __thiscall FUN_1000f26e(void * this, uint param_1)
 * Address ranges: 1000f26e-1000f306
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1000f2cc) */
/* WARNING: Removing unreachable block (ram,0x1000f2f0) */
/* WARNING: Removing unreachable block (ram,0x1000f29e) */

void __thiscall FUN_1000f26e(void *this,uint param_1)

{
  if (*(int *)((int)this + 0x29e8) != 0) {
    (**(code **)(*(int *)this + 0x170))();
    *(undefined1 *)((int)this + 0x32d0) = 1;
  }
  *(float *)((int)this + 0x2cf0) = (float)(param_1 >> 0x18) / 255.0;
  *(float *)((int)this + 0x2cf4) = (float)(param_1 >> 0x10 & 0xff) / 255.0;
  *(float *)((int)this + 0x2cf8) = (float)(param_1 >> 8 & 0xff) / 255.0;
  return;
}

