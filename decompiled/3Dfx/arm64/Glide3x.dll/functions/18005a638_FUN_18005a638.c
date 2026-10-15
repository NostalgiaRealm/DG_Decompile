/*
 * FUN_18005a638 at 18005a638
 * undefined __cdecl FUN_18005a638(longlong * param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 18005a638-18005a6d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005a638(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_30 = param_3;
  uStack_28 = param_4;
  local_20 = param_5;
  uStack_18 = param_6;
  local_10 = param_7;
  uStack_8 = param_8;
  if ((param_2 != 0) && ((char)param_1[3] != '\0')) {
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + (ulonglong)param_2 * 4) {
      FUN_18005a560(param_1,(ulonglong)param_2 << 2);
    }
    uVar2 = 0;
    puVar3 = &local_30;
    if (param_2 != 0) {
      do {
        *(undefined4 *)(param_1[1] + uVar2 * 4) = *(undefined4 *)puVar3;
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
        puVar3 = puVar3 + 1;
      } while (uVar1 < param_2);
    }
    param_1[1] = param_1[1] + (ulonglong)param_2 * 4;
  }
  return;
}

