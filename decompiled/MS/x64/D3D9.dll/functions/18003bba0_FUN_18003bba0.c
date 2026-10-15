/*
 * FUN_18003bba0 at 18003bba0
 * undefined __fastcall FUN_18003bba0(longlong param_1, longlong param_2, char param_3)
 * Address ranges: 18003bba0-18003bc22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003bba0(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  
  FUN_180038960(param_1,0,0,0);
  if (*(longlong *)(param_1 + 0xfd68) == *(longlong *)(param_1 + 0xfd58)) {
    *(undefined8 *)(param_1 + 0xfd58) = 0;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0xfd68) = uVar1;
  *(longlong *)(param_1 + 0xfd78) = param_2;
  *(undefined1 *)(param_1 + 0xf690) = 1;
  *(uint *)(param_1 + 0xfd70) = (-(uint)(param_3 != '\0') & 0xfffffff1) + 0x39;
  return;
}

