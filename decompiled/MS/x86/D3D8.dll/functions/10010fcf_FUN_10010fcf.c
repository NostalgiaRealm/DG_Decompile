/*
 * FUN_10010fcf at 10010fcf
 * uint __thiscall FUN_10010fcf(void * this, uint * param_1)
 * Address ranges: 10010fcf-1001100c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10010fcf(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((((uVar1 == *param_1) && (uVar1 = *(uint *)((int)this + 4), uVar1 == param_1[1])) &&
      (uVar1 = *(uint *)((int)this + 8), uVar1 == param_1[2])) &&
     (((uVar1 = *(uint *)((int)this + 0xc), uVar1 == param_1[3] &&
       (uVar1 = *(uint *)((int)this + 0x10), uVar1 == param_1[4])) &&
      (uVar1 = *(uint *)((int)this + 0x14), uVar1 == param_1[5])))) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

