/*
 * FUN_180048cf0 at 180048cf0
 * undefined __fastcall FUN_180048cf0(longlong param_1)
 * Address ranges: 180048cf0-180048dae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048cf0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xfcc0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))
              (plVar1,*(undefined4 *)(param_1 + 0xfce8),*(undefined4 *)(param_1 + 0xfcf8),0);
  }
  plVar1 = *(longlong **)(param_1 + 0xfcc8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))
              (plVar1,*(undefined4 *)(param_1 + 0xfcec),*(undefined4 *)(param_1 + 0xfcfc),0);
  }
  plVar1 = *(longlong **)(param_1 + 0xfcd0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))
              (plVar1,*(undefined4 *)(param_1 + 0xfcf0),*(undefined4 *)(param_1 + 0xfd00),0);
  }
  plVar1 = *(longlong **)(param_1 + 0xfcd8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))
              (plVar1,*(undefined4 *)(param_1 + 0xfcf4),*(undefined4 *)(param_1 + 0xfd04),0);
  }
  plVar1 = *(longlong **)(param_1 + 0xfce0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180048da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))
              (plVar1,*(undefined4 *)(param_1 + 0xfd08),*(undefined4 *)(param_1 + 0xfd0c),0);
    return;
  }
  return;
}

