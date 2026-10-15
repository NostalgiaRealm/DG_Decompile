/*
 * FUN_1400109c0 at 1400109c0
 * undefined8 __fastcall FUN_1400109c0(longlong param_1, undefined4 param_2)
 * Address ranges: 1400109c0-140010a1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400109c0(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                      (*(longlong **)(param_1 + 0x10),param_2);
                    /* WARNING: Could not recover jumptable at 0x000140010a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
                      (*(longlong **)(param_1 + 0x10),uVar2);
    return uVar3;
  }
  return 0;
}

