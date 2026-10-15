/*
 * FUN_18003b2bc at 18003b2bc
 * undefined __fastcall FUN_18003b2bc(longlong param_1, longlong param_2)
 * Address ranges: 18003b2bc-18003b343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003b2bc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  FUN_180038960(param_1,0,0,0);
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xf7a8) = 0;
  }
  else {
    *(longlong *)(param_1 + 0xf7a8) = param_2;
    if (*(int *)(param_2 + 0x58) == 0x104) {
      bVar2 = true;
      uVar1 = 1;
      goto LAB_18003b306;
    }
  }
  bVar2 = false;
  uVar1 = 0;
LAB_18003b306:
  *(undefined1 *)(param_1 + 0xf688) = 1;
  if (bVar2) {
    bVar2 = *(int *)(param_1 + 0x6f2c) == 0;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x6f2c) != 0;
  }
  *(byte *)(param_1 + 0xf691) = *(byte *)(param_1 + 0xf691) | bVar2;
  *(undefined4 *)(param_1 + 0x6f2c) = uVar1;
  *(undefined1 *)(param_1 + 0xf6c2) = 1;
  return;
}

