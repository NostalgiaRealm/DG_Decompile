/*
 * FUN_10056950 at 10056950
 * undefined FUN_10056950(void)
 * Address ranges: 10056950-100569af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056950(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_10062d50(iVar1,(ulonglong)uVar2,param_1[2]);
  if ((uVar2 < 0x35) && ((0x10000000004080U >> ((ulonglong)uVar2 & 0x3f) & 1) != 0)) {
    *(undefined1 *)(iVar1 + 0xde5f) = 1;
  }
  return;
}

