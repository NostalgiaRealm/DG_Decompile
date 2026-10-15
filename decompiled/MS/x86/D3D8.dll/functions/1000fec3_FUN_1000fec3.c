/*
 * FUN_1000fec3 at 1000fec3
 * undefined __thiscall FUN_1000fec3(void * this, byte param_1, uint * param_2, uint * param_3)
 * Address ranges: 1000fec3-1000fef5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000fec3(void *this,byte param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x4c) >> (param_1 & 0x1f);
  uVar1 = *(uint *)((int)this + 0x50) >> (param_1 & 0x1f);
  *param_2 = uVar2;
  *param_3 = uVar1;
  if (uVar2 == 0) {
    *param_2 = 1;
  }
  if (uVar1 == 0) {
    *param_3 = 1;
  }
  return;
}

