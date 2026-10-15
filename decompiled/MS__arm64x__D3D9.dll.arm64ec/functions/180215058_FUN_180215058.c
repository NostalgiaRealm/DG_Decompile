/*
 * FUN_180215058 at 180215058
 * undefined FUN_180215058(void)
 * Address ranges: 180215058-180215103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180215058(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined8 *)(param_5 + -0x10);
  *puVar3 = param_3;
  *(undefined8 *)(param_5 + -8) = param_4;
  if ((param_2 != 0) && ((char)param_1[3] != '\0')) {
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + (ulonglong)param_2 * 4) {
      FUN_180214f80(param_1,(ulonglong)param_2 << 2);
    }
    uVar4 = 0;
    if (param_2 != 0) {
      do {
        puVar2 = (undefined4 *)((-(longlong)puVar3 & 3U) + (longlong)puVar3);
        puVar3 = (undefined8 *)(puVar2 + 2);
        *(undefined4 *)(param_1[1] + uVar4 * 4) = *puVar2;
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < param_2);
    }
    param_1[1] = param_1[1] + (ulonglong)param_2 * 4;
  }
  return;
}

