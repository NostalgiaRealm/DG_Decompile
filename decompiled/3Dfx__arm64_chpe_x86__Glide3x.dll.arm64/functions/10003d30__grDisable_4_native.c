/*
 * _grDisable@4_native at 10003d30
 * undefined _grDisable@4_native(void)
 * Address ranges: 10003d30-10003db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDisable_4_native(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_100093b8();
  uVar3 = FUN_10009430(iVar1);
  if ((uVar3 & 1) != 0) {
    switch(param_1) {
    case 4:
      *(undefined1 *)(iVar1 + 0x58) = 0;
      break;
    case 6:
      iVar2 = FUN_1000ae88(iVar1);
      if ((&DAT_100a23f1)[iVar2 * 0x18] != '\0') {
        FUN_10009a48(iVar1);
      }
    }
  }
  return;
}

