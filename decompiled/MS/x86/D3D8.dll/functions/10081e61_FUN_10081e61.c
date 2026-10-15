/*
 * FUN_10081e61 at 10081e61
 * undefined __fastcall FUN_10081e61(undefined4 * param_1)
 * Address ranges: 10081e61-10081ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10081e61(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1[0x17] + 0xb0c) >> 2) & 1);
  FUN_1002586c(param_1,0,0);
  thunk_FUN_100ad48c((LPVOID)param_1[0x19]);
  param_1[0x19] = 0;
  FUN_10081e45(param_1);
  FUN_100ad48c(param_1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

