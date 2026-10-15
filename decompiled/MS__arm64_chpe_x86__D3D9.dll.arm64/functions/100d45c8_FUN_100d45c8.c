/*
 * FUN_100d45c8 at 100d45c8
 * undefined FUN_100d45c8(void)
 * Address ranges: 100d45c8-100d4647
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d45c8(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_1000b580(param_1,param_2);
    if ((uVar2 & 1) == 0) {
      return 0x8876086c;
    }
    FUN_1000b5c0(param_1,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_1000b640(param_1,iVar1);
  }
  *(int *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0xc2ed) = 1;
  return 0;
}

