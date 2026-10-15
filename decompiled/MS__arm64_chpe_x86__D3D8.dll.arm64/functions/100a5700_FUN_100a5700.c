/*
 * FUN_100a5700 at 100a5700
 * undefined FUN_100a5700(void)
 * Address ranges: 100a5700-100a575f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a5700(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x30);
  iVar1 = *(int *)(iVar1 + 0x1cf00) + *(int *)(iVar1 + 0x14) * 0x16c0;
  FUN_100e56b0(*(undefined4 *)(iVar1 + 0x19c4),*(undefined4 *)(*param_1 + 0x34),param_1[1],
               iVar1 + 0x1af0,param_1 + 2,param_1 + 0xc);
  return;
}

