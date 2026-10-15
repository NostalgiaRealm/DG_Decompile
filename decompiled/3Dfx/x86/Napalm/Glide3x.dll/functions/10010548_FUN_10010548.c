/*
 * FUN_10010548 at 10010548
 * undefined __thiscall FUN_10010548(void * this, uint param_1)
 * Address ranges: 10010548-100105e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x100105a6) */
/* WARNING: Removing unreachable block (ram,0x100105ca) */
/* WARNING: Removing unreachable block (ram,0x10010578) */

void __thiscall FUN_10010548(void *this,uint param_1)

{
  if (*(int *)((int)this + 0x2b24) != 0) {
    (**(code **)(*(int *)this + 0x198))();
    *(undefined1 *)((int)this + 0x3650) = 1;
  }
  *(float *)((int)this + 0x2e40) = (float)(param_1 >> 0x18) / 255.0;
  *(float *)((int)this + 0x2e44) = (float)(param_1 >> 0x10 & 0xff) / 255.0;
  *(float *)((int)this + 0x2e48) = (float)(param_1 >> 8 & 0xff) / 255.0;
  return;
}

