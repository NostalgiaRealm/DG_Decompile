/*
 * FUN_1001e068 at 1001e068
 * undefined4 * __thiscall FUN_1001e068(void * this, undefined4 * param_1)
 * Address ranges: 1001e068-1001e0e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001e068(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar5;
  uint uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  uVar1 = *(uint *)((int)this + 0x2b70);
  iVar2 = *(int *)((int)this + 0x2b74);
  param_1[10] = *(int *)((int)this + 0x2b80) - *(int *)((int)this + 0x2bb0);
  uVar3 = *(uint *)((int)this + 0x2ba0);
  uVar4 = *(uint *)((int)this + 0x2ba0);
  param_1[2] = *(int *)((int)this + 0x2b60) - *(int *)((int)this + 0x2b90);
  param_1[7] = (iVar2 - *(int *)((int)this + 0x2ba4)) - (uint)(uVar1 < uVar3);
  param_1[8] = *(int *)((int)this + 0x2b78) - *(int *)((int)this + 0x2ba8);
  iVar2 = *(int *)((int)this + 0x2b7c);
  iVar5 = *(int *)((int)this + 0x2bac);
  param_1[6] = uVar1 - uVar4;
  param_1[9] = iVar2 - iVar5;
  return param_1;
}

