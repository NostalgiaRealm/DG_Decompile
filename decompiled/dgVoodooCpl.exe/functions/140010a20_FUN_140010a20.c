/*
 * FUN_140010a20 at 140010a20
 * undefined8 __fastcall FUN_140010a20(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 140010a20-140010a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140010a20(longlong param_1,undefined4 param_2,undefined4 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000140010a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
                      (*(longlong **)(param_1 + 0x10),uVar2,param_3);
    return uVar3;
  }
  return 0;
}

