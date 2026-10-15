/*
 * FUN_1000e132 at 1000e132
 * undefined4 * __thiscall FUN_1000e132(void * this, undefined4 * param_1)
 * Address ranges: 1000e132-1000e1b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000e132(void *this,undefined4 *param_1)

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
  uVar1 = *(uint *)((int)this + 0x2c10);
  iVar2 = *(int *)((int)this + 0x2c14);
  param_1[10] = *(int *)((int)this + 0x2c20) - *(int *)((int)this + 0x2c50);
  uVar3 = *(uint *)((int)this + 0x2c40);
  uVar4 = *(uint *)((int)this + 0x2c40);
  param_1[2] = *(int *)((int)this + 0x2c00) - *(int *)((int)this + 0x2c30);
  param_1[7] = (iVar2 - *(int *)((int)this + 0x2c44)) - (uint)(uVar1 < uVar3);
  param_1[8] = *(int *)((int)this + 0x2c18) - *(int *)((int)this + 0x2c48);
  iVar2 = *(int *)((int)this + 0x2c1c);
  iVar5 = *(int *)((int)this + 0x2c4c);
  param_1[6] = uVar1 - uVar4;
  param_1[9] = iVar2 - iVar5;
  return param_1;
}

