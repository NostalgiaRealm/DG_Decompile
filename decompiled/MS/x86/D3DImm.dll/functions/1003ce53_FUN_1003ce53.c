/*
 * FUN_1003ce53 at 1003ce53
 * undefined __thiscall FUN_1003ce53(void * this, int * param_1)
 * Address ranges: 1003ce53-1003cfc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003ce53(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_1005c9cc(param_1,0,0xec);
  *param_1 = *(int *)((int)this + 0x34);
  piVar2 = (int *)((int)this + 0x54);
  piVar3 = param_1;
  for (iVar1 = 0xe; piVar3 = piVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
  }
  piVar3 = (int *)((int)this + 0x8c);
  piVar2 = param_1 + 0xf;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar2 = piVar2 + 1;
  }
  param_1[0x1d] = *(int *)((int)this + 0xc4);
  param_1[0x1e] = *(int *)((int)this + 200);
  param_1[0x1f] = *(int *)((int)this + 0xd4);
  param_1[0x20] = *(int *)((int)this + 0xd8);
  param_1[0x21] = *(int *)((int)this + 0xdc);
  param_1[0x22] = *(int *)((int)this + 0xe0);
  param_1[0x23] = *(int *)((int)this + 0xf4);
  param_1[0x24] = *(int *)((int)this + 0xf8);
  param_1[0x25] = *(int *)((int)this + 0xfc);
  param_1[0x26] = *(int *)((int)this + 0x100);
  param_1[0x27] = *(int *)((int)this + 0x104);
  param_1[0x28] = *(int *)((int)this + 0x108);
  param_1[0x29] = *(int *)((int)this + 0x10c);
  param_1[0x2a] = *(int *)((int)this + 0x110);
  param_1[0x2b] = *(int *)((int)this + 0x114);
  param_1[0x2c] = *(int *)((int)this + 0x118);
  param_1[0x2d] = *(int *)((int)this + 0x11c);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)((int)this + 0x120);
  *(undefined2 *)((int)param_1 + 0xba) = *(undefined2 *)((int)this + 0x122);
  param_1[0x2f] = *(int *)((int)this + 0x124);
  param_1[0x30] = *(int *)((int)this + 0x128);
  param_1[0x31] = *(int *)((int)this + 0x10);
  param_1[0x32] = *(int *)((int)this + 0x14);
  param_1[0x33] = *(int *)((int)this + 0x18);
  param_1[0x34] = *(int *)((int)this + 0x1c);
  *(undefined2 *)(param_1 + 0x35) = *(undefined2 *)((int)this + 300);
  *(undefined2 *)((int)param_1 + 0xd6) = *(undefined2 *)((int)this + 0x12e);
  param_1[0x36] = *(int *)((int)this + 0x130);
  return;
}

