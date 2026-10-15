/*
 * FUN_100115ab at 100115ab
 * undefined __thiscall FUN_100115ab(void * this, byte param_1, uint * param_2, uint * param_3, uint * param_4)
 * Address ranges: 100115ab-100115ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100115ab(void *this,byte param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)((int)this + 0x98) >> (param_1 & 0x1f);
  uVar3 = *(uint *)((int)this + 0x9c) >> (param_1 & 0x1f);
  uVar1 = *(uint *)((int)this + 0xa0) >> (param_1 & 0x1f);
  *param_2 = uVar2;
  *param_3 = uVar3;
  *param_4 = uVar1;
  if (uVar2 == 0) {
    *param_2 = 1;
  }
  if (uVar3 == 0) {
    *param_3 = 1;
  }
  if (uVar1 == 0) {
    *param_4 = 1;
  }
  return;
}

