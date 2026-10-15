/*
 * FUN_1800557b0 at 1800557b0
 * undefined __fastcall FUN_1800557b0(longlong * param_1, uint param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800557b0-180055830
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800557b0(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (param_2 != 0) {
    local_res18 = param_3;
    local_res20 = param_4;
    if ((char)param_1[3] != '\0') {
      if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + (ulonglong)param_2 * 4) {
        FUN_1800556f4(param_1,(ulonglong)param_2 * 4);
      }
      uVar2 = 0;
      puVar3 = &local_res18;
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
  }
  return;
}

