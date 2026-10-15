/*
 * FUN_10040b88 at 10040b88
 * undefined4 __thiscall FUN_10040b88(void * this, int param_1)
 * Address ranges: 10040b88-10040bca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040b88(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  
  uVar2 = *(uint *)((int)this + 0x18);
  uVar4 = 0;
  iVar1 = *(int *)(uVar2 + 4);
  if ((((*(uint *)(param_1 + 4) < *(uint *)(iVar1 + 100)) &&
       (uVar2 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4), uVar2 <= *(uint *)(iVar1 + 100)))
      && (uVar2 = *(uint *)(param_1 + 8), uVar2 < *(uint *)(iVar1 + 0x68))) &&
     (uVar3 = *(int *)(param_1 + 0x10) + uVar2, uVar2 = 0, uVar3 <= *(uint *)(iVar1 + 0x68))) {
    uVar4 = 1;
  }
  return CONCAT31((int3)(uVar2 >> 8),uVar4);
}

