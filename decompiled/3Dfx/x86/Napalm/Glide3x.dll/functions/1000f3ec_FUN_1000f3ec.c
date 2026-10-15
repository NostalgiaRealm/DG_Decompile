/*
 * FUN_1000f3ec at 1000f3ec
 * undefined4 * __thiscall FUN_1000f3ec(void * this, undefined4 * param_1)
 * Address ranges: 1000f3ec-1000f46a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000f3ec(void *this,undefined4 *param_1)

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
  uVar1 = *(uint *)((int)this + 0x2d58);
  iVar2 = *(int *)((int)this + 0x2d5c);
  param_1[10] = *(int *)((int)this + 0x2d68) - *(int *)((int)this + 0x2d98);
  uVar3 = *(uint *)((int)this + 0x2d88);
  uVar4 = *(uint *)((int)this + 0x2d88);
  param_1[2] = *(int *)((int)this + 0x2d48) - *(int *)((int)this + 0x2d78);
  param_1[7] = (iVar2 - *(int *)((int)this + 0x2d8c)) - (uint)(uVar1 < uVar3);
  param_1[8] = *(int *)((int)this + 0x2d60) - *(int *)((int)this + 0x2d90);
  iVar2 = *(int *)((int)this + 0x2d64);
  iVar5 = *(int *)((int)this + 0x2d94);
  param_1[6] = uVar1 - uVar4;
  param_1[9] = iVar2 - iVar5;
  return param_1;
}

