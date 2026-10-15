/*
 * FUN_1002d917 at 1002d917
 * uint __thiscall FUN_1002d917(void * this, uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1002d917-1002d942
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002d917(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((((uVar1 == param_1) && (uVar1 = *(uint *)((int)this + 4), uVar1 == param_2)) &&
      (uVar1 = *(uint *)((int)this + 8), uVar1 == param_3)) &&
     (uVar1 = *(uint *)((int)this + 0xc), uVar1 == param_4)) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

