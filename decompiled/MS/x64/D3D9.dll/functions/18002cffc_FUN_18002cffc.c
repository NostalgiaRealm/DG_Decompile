/*
 * FUN_18002cffc at 18002cffc
 * undefined __fastcall FUN_18002cffc(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 18002cffc-18002d087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002cffc(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    uVar3 = 0;
    iVar1 = (int)uVar4;
    do {
      uVar2 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(float *)(param_3 + (ulonglong)(uVar2 + iVar1) * 4) =
           *(float *)(param_2 + (ulonglong)(uVar2 + 1) * 4) *
           *(float *)(param_1 + (ulonglong)(iVar1 + 4) * 4) +
           *(float *)(param_2 + (ulonglong)uVar2 * 4) * *(float *)(param_1 + uVar4 * 4) +
           *(float *)(param_2 + (ulonglong)(uVar2 + 2) * 4) *
           *(float *)(param_1 + (ulonglong)(iVar1 + 8) * 4) +
           *(float *)(param_2 + (ulonglong)(uVar2 + 3) * 4) *
           *(float *)(param_1 + (ulonglong)(iVar1 + 0xc) * 4);
    } while (uVar3 < 4);
    uVar4 = (ulonglong)(iVar1 + 1U);
  } while (iVar1 + 1U < 4);
  return;
}

