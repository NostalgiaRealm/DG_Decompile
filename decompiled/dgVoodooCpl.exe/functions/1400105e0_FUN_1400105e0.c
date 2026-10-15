/*
 * FUN_1400105e0 at 1400105e0
 * undefined8 __fastcall FUN_1400105e0(longlong param_1)
 * Address ranges: 1400105e0-14001061d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400105e0(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140010612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    return uVar2;
  }
  return 0;
}

