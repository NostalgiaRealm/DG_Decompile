/*
 * FUN_100db290 at 100db290
 * undefined FUN_100db290(void)
 * Address ranges: 100db290-100db313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100db290(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0xc2ef) == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0xc2ea);
  }
  else {
    uVar1 = *(int *)(param_1 + 0x18) != 0;
    if ((bool)uVar1) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*(undefined4 *)(param_1 + 0x14),param_1 + 0x2c);
      (*extraout_w11)(uVar2);
    }
    *(undefined1 *)(param_1 + 0xc2ea) = uVar1;
    *(undefined1 *)(param_1 + 0xc2ef) = 0;
  }
  return uVar1;
}

