/*
 * FUN_18002f3b0 at 18002f3b0
 * undefined FUN_18002f3b0(void)
 * Address ranges: 18002f3b0-18002f457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f3b0(longlong param_1,uint param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_18002a810(param_1,0,0,0);
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x106c) = param_4;
    *(undefined8 *)(param_1 + 0xfd60) = uVar2;
    *(undefined4 *)(param_1 + 0x1028) = param_5;
  }
  else {
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + 0x18);
    }
    *(undefined8 *)(param_1 + (ulonglong)param_2 * 8 + 0xfcd8) = uVar2;
    lVar1 = param_1 + (ulonglong)param_2 * 4;
    *(undefined4 *)(lVar1 + 0x102c) = param_4;
    *(undefined4 *)(lVar1 + 0xfe8) = param_5;
  }
  *(undefined1 *)(param_1 + 0xf68f) = 1;
  return;
}

