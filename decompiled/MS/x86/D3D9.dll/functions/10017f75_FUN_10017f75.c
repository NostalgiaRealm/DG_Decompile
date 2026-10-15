/*
 * FUN_10017f75 at 10017f75
 * undefined __fastcall FUN_10017f75(int param_1)
 * Address ranges: 10017f75-10017fac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10017f75(int param_1)

{
  (**(code **)**(undefined4 **)(param_1 + 0x18))();
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))();
  }
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))();
  }
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x24))();
  }
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10017faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)(param_1 + 0x28))();
    return;
  }
  return;
}

