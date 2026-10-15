/*
 * FUN_18001ef50 at 18001ef50
 * undefined FUN_18001ef50(void)
 * Address ranges: 18001ef50-18001eff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18001ef50(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_2 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x3f800000;
  *(undefined4 *)param_2 = 0x3f800000;
  do {
    uVar3 = 0;
    do {
      uVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(float *)((longlong)param_2 + (ulonglong)(uVar1 + uVar2) * 4) =
           *(float *)(param_3 + (ulonglong)(uVar1 + 1) * 4) *
           *(float *)(param_1 + (ulonglong)(uVar2 + 4) * 4) +
           *(float *)(param_3 + (ulonglong)uVar1 * 4) * *(float *)(param_1 + (ulonglong)uVar2 * 4) +
           *(float *)(param_3 + (ulonglong)(uVar1 + 2) * 4) *
           *(float *)(param_1 + (ulonglong)(uVar2 + 8) * 4) +
           *(float *)(param_3 + (ulonglong)(uVar1 + 3) * 4) *
           *(float *)(param_1 + (ulonglong)(uVar2 + 0xc) * 4);
    } while (uVar3 < 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return param_2;
}

