/*
 * FUN_18006c79c at 18006c79c
 * uint * __fastcall FUN_18006c79c(undefined8 param_1, uint * param_2, longlong param_3, uint param_4, undefined1 param_5)
 * Address ranges: 18006c79c-18006c806
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18006c79c(undefined8 param_1,uint *param_2,longlong param_3,uint param_4,
                    undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((param_4 & 0xe000000) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1800ec8c0(param_3,4,'\x01');
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        if (*(int *)(param_3 + 0x3c0 + uVar3 * 4) == 0) {
          *(uint *)(param_3 + 0x3c0 + uVar3 * 4) = uVar1;
          break;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 4);
    }
  }
  *param_2 = uVar1;
  *(undefined1 *)(param_2 + 1) = param_5;
  return param_2;
}

