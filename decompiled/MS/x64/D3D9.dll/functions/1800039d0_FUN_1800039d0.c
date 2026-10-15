/*
 * FUN_1800039d0 at 1800039d0
 * undefined4 __fastcall FUN_1800039d0(longlong param_1, int param_2)
 * Address ranges: 1800039d0-180003a1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800039d0(longlong param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_18000223c(param_2);
  uVar4 = 0;
  pcVar1 = *(char **)(&DAT_18010e458 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0);
  if (*pcVar1 != -1) {
    uVar3 = 1;
    do {
      if ((byte)pcVar1[uVar4] == uVar2) goto LAB_180003a16;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (pcVar1[uVar4] != -1);
  }
  uVar3 = 0;
LAB_180003a16:
  return CONCAT31((int3)(uVar2 >> 8),uVar3);
}

