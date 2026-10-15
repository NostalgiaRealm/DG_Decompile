/*
 * FUN_1003cd2c at 1003cd2c
 * undefined __thiscall FUN_1003cd2c(void * this, undefined4 * param_1)
 * Address ranges: 1003cd2c-1003ce52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003cd2c(void *this,undefined4 *param_1)

{
  undefined2 uVar1;
  
  FUN_1005c9cc(param_1 + 1,0,0xf8);
  *param_1 = 0xfc;
  FUN_1003cb24((int)this,(int)param_1);
  FUN_1003cc2e((int)this,(int)param_1);
  param_1[0x33] = *(undefined4 *)((int)this + 0xf4);
  param_1[0x34] = *(undefined4 *)((int)this + 0xf8);
  param_1[0x35] = *(undefined4 *)((int)this + 0xfc);
  param_1[0x36] = *(undefined4 *)((int)this + 0x100);
  param_1[0x37] = *(undefined4 *)((int)this + 0x104);
  param_1[0x38] = *(undefined4 *)((int)this + 0x108);
  param_1[0x39] = *(undefined4 *)((int)this + 0x10c);
  param_1[0x3a] = *(undefined4 *)((int)this + 0x110);
  param_1[0x3b] = *(undefined4 *)((int)this + 0x114);
  param_1[0x3c] = *(undefined4 *)((int)this + 0x118);
  param_1[0x3d] = *(undefined4 *)((int)this + 0x11c);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)((int)this + 0x120);
  uVar1 = *(undefined2 *)((int)this + 0x122);
  param_1[0x16] = param_1[0x16] & 0x1f;
  *(undefined2 *)((int)param_1 + 0xfa) = uVar1;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[0xd] = param_1[0xd] & 0x3fffff;
  param_1[0x1b] = param_1[0x1b] & 0x3fffff;
  param_1[0x13] = param_1[0x13] & 0x1ff;
  param_1[0x21] = param_1[0x21] & 0x1ff;
  param_1[0x14] = param_1[0x14] & 0x1f03073f;
  param_1[0x22] = param_1[0x22] & 0x1f03073f;
  param_1[0x24] = param_1[0x24] & 0x1f;
  param_1[0x15] = (uint)*(byte *)(param_1 + 0x15);
  param_1[0x23] = (uint)*(byte *)(param_1 + 0x23);
  return;
}

