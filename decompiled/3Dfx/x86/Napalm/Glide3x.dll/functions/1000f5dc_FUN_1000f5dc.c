/*
 * FUN_1000f5dc at 1000f5dc
 * undefined4 __thiscall FUN_1000f5dc(void * this, int param_1, uint * param_2)
 * Address ranges: 1000f5dc-1000f642
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000f5dc(void *this,int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0xa0);
  if ((((uVar2 == *param_2) && (uVar2 = *(uint *)((int)this + 0xa4), uVar2 == param_2[1])) &&
      (uVar2 = *(uint *)((int)this + 0xb4), uVar2 == param_2[4])) &&
     (uVar2 = *(uint *)((int)this + 0xb8), uVar2 == param_2[5])) {
    iVar1 = *(int *)((int)this + 4);
    uVar2 = *(uint *)(iVar1 + 0x1c);
    if (((uVar2 == *(uint *)(param_1 + 0x1c)) &&
        (uVar2 = *(uint *)(iVar1 + 0x18), uVar2 == *(uint *)(param_1 + 0x18))) &&
       (uVar2 = *(uint *)(param_1 + 0xc2) & 4,
       ((byte)*(undefined4 *)(iVar1 + 0xc2) & 4) == (byte)uVar2)) {
      return 0;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

