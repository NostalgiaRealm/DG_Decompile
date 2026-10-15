/*
 * FUN_10091440 at 10091440
 * undefined FUN_10091440(void)
 * Address ranges: 10091440-100914ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10091440(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1008f048(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_1008cc68(param_1,0);
    iVar1 = param_1 + 0x48;
  }
  else {
    if ((*(int *)(param_1 + 0xf4) == 0) || (*(int *)(param_1 + 0x114) == 0)) {
      FUN_1008f4d8(param_1);
    }
    iVar1 = param_1 + 0xe8;
    if (*(int *)(param_1 + 0xf4) == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

