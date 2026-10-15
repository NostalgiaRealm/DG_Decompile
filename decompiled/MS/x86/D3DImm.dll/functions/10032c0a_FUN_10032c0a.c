/*
 * FUN_10032c0a at 10032c0a
 * uint * __stdcall FUN_10032c0a(uint * param_1, int param_2, undefined1 param_3, char param_4)
 * Address ranges: 10032c0a-10032c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10032c0a(uint *param_1,int param_2,undefined1 param_3,char param_4)

{
  uint uVar1;
  
  uVar1 = FUN_10056ee5(param_2,4,param_4);
  *param_1 = uVar1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = param_3;
  return param_1;
}

