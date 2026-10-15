/*
 * FUN_1800f5a28 at 1800f5a28
 * undefined FUN_1800f5a28(void)
 * Address ranges: 1800f5a28-1800f5a8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f5a28(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = thunk_FUN_180102f80(param_2 + param_1[2] * 2);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  thunk_FUN_180001218(lVar3,lVar1,param_1[2]);
  thunk_FUN_180102fc0(*param_1);
  *param_1 = lVar3;
  param_1[1] = (lVar2 - lVar1) + lVar3;
  param_1[2] = param_2 + param_1[2] * 2;
  return;
}

