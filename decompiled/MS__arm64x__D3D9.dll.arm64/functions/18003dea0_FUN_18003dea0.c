/*
 * FUN_18003dea0 at 18003dea0
 * undefined FUN_18003dea0(void)
 * Address ranges: 18003dea0-18003df5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003dea0(longlong param_1)

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
    (**(code **)(*plVar1 + 8))
              (plVar1,*(undefined4 *)(param_1 + 0xfd08),*(undefined4 *)(param_1 + 0xfd0c),0);
  }
  return;
}

