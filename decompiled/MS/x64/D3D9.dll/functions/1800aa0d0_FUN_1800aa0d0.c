/*
 * FUN_1800aa0d0 at 1800aa0d0
 * undefined __fastcall FUN_1800aa0d0(undefined8 param_1, longlong param_2, undefined1 * param_3)
 * Address ranges: 1800aa0d0-1800aa155
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aa0d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      uVar2 = (int)uVar4 * 4;
      *(float *)(param_3 + (ulonglong)uVar2 * 4) = (float)*(byte *)(param_2 + 2 + uVar4 * 4);
      *(float *)(param_3 + (ulonglong)(uVar2 + 1) * 4) = (float)*(byte *)(param_2 + 1 + uVar4 * 4);
      *(float *)(param_3 + (ulonglong)(uVar2 + 2) * 4) = (float)*(byte *)(param_2 + uVar4 * 4);
      lVar1 = uVar4 * 4;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *(float *)(param_3 + (ulonglong)(uVar2 + 3) * 4) = (float)*(byte *)(param_2 + 3 + lVar1);
    } while (uVar3 < 0x100);
    return;
  }
  FUN_1800fbea0(param_3,0,0x1000);
  return;
}

