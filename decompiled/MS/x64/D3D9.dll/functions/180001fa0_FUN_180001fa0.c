/*
 * FUN_180001fa0 at 180001fa0
 * undefined4 __fastcall FUN_180001fa0(longlong param_1, uint param_2)
 * Address ranges: 180001fa0-180001ff9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180001fa0(longlong param_1,uint param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if (param_2 == 8) {
    uVar3 = 0x29;
  }
  else {
    uVar3 = 0;
    pcVar1 = *(char **)(&DAT_18010e458 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0);
    if (*pcVar1 != -1) {
      uVar2 = 0;
      do {
        if ((byte)(&DAT_180100e08)[(byte)pcVar1[uVar2]] == param_2) {
          return *(undefined4 *)(&DAT_180100e40 + (ulonglong)(byte)pcVar1[uVar2] * 4);
        }
        uVar2 = (ulonglong)((int)uVar2 + 1);
      } while (pcVar1[uVar2] != -1);
    }
  }
  return uVar3;
}

