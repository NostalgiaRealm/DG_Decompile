/*
 * FUN_1003cc8f at 1003cc8f
 * undefined __thiscall FUN_1003cc8f(void * this, undefined4 * param_1)
 * Address ranges: 1003cc8f-1003cd2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003cc8f(void *this,undefined4 *param_1)

{
  FUN_1005c9cc(param_1 + 1,0,200);
  *param_1 = 0xcc;
  FUN_1003cb24((int)this,(int)param_1);
  FUN_1003cc2e((int)this,(int)param_1);
  param_1[0xd] = param_1[0xd] & 0x3ffff;
  param_1[0x1b] = param_1[0x1b] & 0x3ffff;
  param_1[3] = param_1[3] & 0x1fff;
  param_1[0x16] = param_1[0x16] & 0x1f;
  param_1[0x24] = param_1[0x24] & 0x1f;
  param_1[0x28] = param_1[0x28] & 0xfffffeff;
  *(ulonglong *)(param_1 + 0x13) = *(ulonglong *)(param_1 + 0x13) & 0x3f0000003f;
  param_1[0x15] = (uint)*(byte *)(param_1 + 0x15);
  *(ulonglong *)(param_1 + 0x21) = *(ulonglong *)(param_1 + 0x21) & 0x3f0000003f;
  param_1[0x23] = (uint)*(byte *)(param_1 + 0x23);
  return;
}

