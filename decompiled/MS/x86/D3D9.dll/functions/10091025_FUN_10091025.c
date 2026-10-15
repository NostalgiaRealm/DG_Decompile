/*
 * FUN_10091025 at 10091025
 * uint __thiscall FUN_10091025(void * this, uint * param_1)
 * Address ranges: 10091025-1009104d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10091025(void *this,uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 < 3) {
    puVar2 = (uint *)((int)this + uVar1 * 0x10 + 0x10);
    uVar1 = CONCAT31((int3)(uVar1 * 0x10 >> 8),1);
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[3] = param_1[3];
    *(int *)this = *(int *)this + 1;
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

