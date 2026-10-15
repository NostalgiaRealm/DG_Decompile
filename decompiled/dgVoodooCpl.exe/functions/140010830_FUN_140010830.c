/*
 * FUN_140010830 at 140010830
 * undefined8 __fastcall FUN_140010830(longlong param_1, undefined4 param_2)
 * Address ranges: 140010830-14001087f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140010830(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014001086f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                      (*(longlong **)(param_1 + 0x10),param_2);
    return uVar2;
  }
  return 0;
}

