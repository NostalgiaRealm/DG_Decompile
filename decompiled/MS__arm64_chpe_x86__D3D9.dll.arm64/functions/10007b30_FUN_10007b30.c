/*
 * FUN_10007b30 at 10007b30
 * undefined FUN_10007b30(void)
 * Address ranges: 10007b30-10007b77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007b30(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_100043d0(*(undefined4 *)(param_1 + 0xd90),param_2,*(undefined4 *)(param_1 + 0xdc8),
                       *(undefined4 *)(param_1 + 0xdcc),param_3,param_5,param_6,0);
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}

