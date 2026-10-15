/*
 * FUN_1008eff4 at 1008eff4
 * undefined __thiscall FUN_1008eff4(void * this, undefined4 * param_1, int param_2)
 * Address ranges: 1008eff4-1008f031
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008eff4(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2 * 0xc18;
  uVar1 = *(undefined4 *)(iVar4 + 0x10cac + (int)this);
  *param_1 = *(undefined4 *)(iVar4 + 0x10ca8 + (int)this);
  uVar2 = *(undefined4 *)(iVar4 + 0x10cb0 + (int)this);
  uVar3 = *(undefined4 *)(iVar4 + 0x10cb4 + (int)this);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

