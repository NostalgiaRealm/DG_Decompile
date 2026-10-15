/*
 * FUN_18013cd80 at 18013cd80
 * undefined FUN_18013cd80(void)
 * Address ranges: 18013cd80-18013ce0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013cd80(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_180137af0(param_1,0,0,0);
  if (*(longlong *)(param_1 + 0xfd68) == *(longlong *)(param_1 + 0xfd58)) {
    *(undefined8 *)(param_1 + 0xfd58) = 0;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0xfd68) = uVar2;
  *(longlong *)(param_1 + 0xfd78) = param_2;
  uVar1 = 0x2a;
  if (param_3 == '\0') {
    uVar1 = 0x39;
  }
  *(undefined4 *)(param_1 + 0xfd70) = uVar1;
  *(undefined1 *)(param_1 + 0xf690) = 1;
  return;
}

