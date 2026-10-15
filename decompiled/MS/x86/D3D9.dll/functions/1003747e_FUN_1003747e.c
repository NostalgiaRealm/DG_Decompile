/*
 * FUN_1003747e at 1003747e
 * uint __thiscall FUN_1003747e(void * this, uint * param_1)
 * Address ranges: 1003747e-100374fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003747e(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if (((((uVar1 == *param_1) && (uVar1 = *(uint *)((int)this + 4), uVar1 == param_1[1])) &&
       (uVar1 = *(uint *)((int)this + 8), uVar1 == param_1[2])) &&
      ((((uVar1 = *(uint *)((int)this + 0xc), uVar1 == param_1[3] &&
         (uVar1 = *(uint *)((int)this + 0x10), uVar1 == param_1[4])) &&
        ((uVar1 = *(uint *)((int)this + 0x14), uVar1 == param_1[5] &&
         ((uVar1 = *(uint *)((int)this + 0x18), uVar1 == param_1[6] &&
          (uVar1 = *(uint *)((int)this + 0x1c), uVar1 == param_1[7])))))) &&
       (uVar1 = *(uint *)((int)this + 0x20), uVar1 == param_1[8])))) &&
     ((((uVar1 = *(uint *)((int)this + 0x24), uVar1 == param_1[9] &&
        (uVar1 = *(uint *)((int)this + 0x28), uVar1 == param_1[10])) &&
       (uVar1 = *(uint *)((int)this + 0x2c), uVar1 == param_1[0xb])) &&
      ((uVar1 = *(uint *)((int)this + 0x30), uVar1 == param_1[0xc] &&
       (uVar1 = *(uint *)((int)this + 0x34), uVar1 == param_1[0xd])))))) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

