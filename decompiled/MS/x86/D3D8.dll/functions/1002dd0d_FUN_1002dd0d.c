/*
 * FUN_1002dd0d at 1002dd0d
 * uint __thiscall FUN_1002dd0d(void * this, uint * param_1)
 * Address ranges: 1002dd0d-1002dd8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002dd0d(void *this,uint *param_1)

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

