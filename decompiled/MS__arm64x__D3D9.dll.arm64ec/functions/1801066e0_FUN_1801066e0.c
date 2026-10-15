/*
 * FUN_1801066e0 at 1801066e0
 * undefined FUN_1801066e0(void)
 * Address ranges: 1801066e0-18010675b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801066e0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  if (param_2 == 8) {
    uVar1 = 0x29;
  }
  else {
    uVar1 = 0;
    pcVar3 = (char *)(&DAT_180246578)[(ulonglong)*(uint *)(param_1 + 0x10) * 0x36];
    if (*pcVar3 != -1) {
      uVar2 = 0;
      do {
        if ((byte)(&DAT_180229a68)[(byte)pcVar3[uVar2]] == param_2) {
          return *(undefined4 *)(&DAT_180229aa0 + (ulonglong)(byte)pcVar3[uVar2] * 4);
        }
        uVar2 = (ulonglong)((int)uVar2 + 1);
      } while (pcVar3[uVar2] != -1);
    }
  }
  return uVar1;
}

