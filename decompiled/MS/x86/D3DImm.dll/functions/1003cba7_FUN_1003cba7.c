/*
 * FUN_1003cba7 at 1003cba7
 * undefined __thiscall FUN_1003cba7(void * this, undefined4 * param_1)
 * Address ranges: 1003cba7-1003cc2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003cba7(void *this,undefined4 *param_1)

{
  FUN_1005c9cc(param_1 + 1,0,0xa8);
  *param_1 = 0xac;
  FUN_1003cb24((int)this,(int)param_1);
  param_1[3] = param_1[3] & 0x3ff;
  param_1[0xd] = param_1[0xd] & 0x3ff;
  param_1[0x1b] = param_1[0x1b] & 0x3ff;
  param_1[0x15] = param_1[0x15] & 0x7f;
  param_1[0x23] = param_1[0x23] & 0x7f;
  param_1[0x16] = param_1[0x16] & 7;
  param_1[0x24] = param_1[0x24] & 7;
  param_1[0x28] = param_1[0x28] & 0xfffffeff;
  *(ulonglong *)(param_1 + 0x13) = *(ulonglong *)(param_1 + 0x13) & 0x3f0000003f;
  *(ulonglong *)(param_1 + 0x21) = *(ulonglong *)(param_1 + 0x21) & 0x3f0000003f;
  return;
}

