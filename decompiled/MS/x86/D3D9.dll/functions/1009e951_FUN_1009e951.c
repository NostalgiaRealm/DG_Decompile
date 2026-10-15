/*
 * FUN_1009e951 at 1009e951
 * undefined __fastcall FUN_1009e951(undefined4 * param_1)
 * Address ranges: 1009e951-1009e9ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009e951(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1[0x17] + 0xdd0) >> 2) & 1);
  FUN_1002cece(param_1,0,0);
  thunk_FUN_100cfd6c((LPVOID)param_1[0x19]);
  param_1[0x19] = 0;
  FUN_1009e935(param_1);
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

