/*
 * FUN_18001aff0 at 18001aff0
 * undefined __cdecl FUN_18001aff0(undefined8 param_1, undefined8 * param_2, undefined8 * param_3, uint param_4, int param_5)
 * Address ranges: 18001aff0-18001b037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001aff0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar3 = *param_2;
    param_3[1] = CONCAT44((int)((ulonglong)param_2[1] >> 0x20) + param_5,(int)param_2[1] + param_5);
    *param_3 = CONCAT44((int)((ulonglong)uVar3 >> 0x20) + param_5,(int)uVar3 + param_5);
    param_2 = param_2 + 2;
    param_3 = param_3 + 2;
  }
  uVar2 = 0;
  if ((param_4 & 3) != 0) {
    do {
      *(int *)((longlong)param_3 + uVar2 * 4) = *(int *)((longlong)param_2 + uVar2 * 4) + param_5;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < (param_4 & 3));
  }
  return;
}

