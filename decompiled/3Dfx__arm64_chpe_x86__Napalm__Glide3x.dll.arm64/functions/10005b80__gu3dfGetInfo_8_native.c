/*
 * _gu3dfGetInfo@8_native at 10005b80
 * undefined _gu3dfGetInfo@8_native(void)
 * Address ranges: 10005b80-10005bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _gu3dfGetInfo_8_native(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  FUN_1004bb48(auStack_20,param_1);
  iVar1 = FUN_1004ab78(auStack_20,param_2);
  FUN_1004bbc0(auStack_20);
  return iVar1 != 0;
}

