/*
 * FUN_18001e3ac at 18001e3ac
 * undefined __fastcall FUN_18001e3ac(longlong param_1, int param_2)
 * Address ranges: 18001e3ac-18001e40c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e3ac(longlong param_1,int param_2)

{
  byte *pbVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(param_2 - 10U & 0x3f);
  uVar3 = (ulonglong)(param_2 - 10U >> 6);
  if ((*(byte *)(param_1 + 0xcf0 + uVar3 * 8 + ((longlong)uVar4 >> 3)) >> (uVar4 & 7) & 1) == 0) {
    pfVar2 = (float *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0xe10));
    FUN_18002d088(pfVar2,(undefined8 *)(pfVar2 + 0x10a0),'\x01');
    pbVar1 = (byte *)(param_1 + 0xcf0 + uVar3 * 8 + ((longlong)uVar4 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
  }
  return;
}

