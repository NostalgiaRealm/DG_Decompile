/*
 * FUN_18003bb1c at 18003bb1c
 * undefined __fastcall FUN_18003bb1c(longlong param_1, uint param_2, longlong param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 18003bb1c-18003bb9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003bb1c(longlong param_1,uint param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  FUN_180038960(param_1,0,0,0);
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_3 + 0x18);
    }
    *(undefined8 *)(param_1 + 0xfd60) = uVar1;
    *(undefined4 *)(param_1 + 0x1028) = param_5;
    *(undefined4 *)(param_1 + 0x106c) = param_4;
  }
  else {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_3 + 0x18);
    }
    *(undefined8 *)(param_1 + 0xfcd8 + uVar2 * 8) = uVar1;
    *(undefined4 *)(param_1 + 0xfe8 + uVar2 * 4) = param_5;
    *(undefined4 *)(param_1 + 0x102c + uVar2 * 4) = param_4;
  }
  *(undefined1 *)(param_1 + 0xf68f) = 1;
  return;
}

