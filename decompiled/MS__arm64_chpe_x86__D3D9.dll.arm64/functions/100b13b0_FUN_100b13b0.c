/*
 * FUN_100b13b0 at 100b13b0
 * undefined FUN_100b13b0(void)
 * Address ranges: 100b13b0-100b141b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b13b0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_100aef38(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_100acb38(param_1,0);
    iVar1 = param_1 + 0x48;
  }
  else {
    if ((*(int *)(param_1 + 0xf4) == 0) || (*(int *)(param_1 + 0x114) == 0)) {
      FUN_100af3c8(param_1);
    }
    iVar1 = param_1 + 0xe8;
    if (*(int *)(param_1 + 0xf4) == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

