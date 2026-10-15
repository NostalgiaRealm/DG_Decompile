/*
 * FUN_10082374 at 10082374
 * undefined __fastcall FUN_10082374(int * param_1)
 * Address ranges: 10082374-100823ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10082374(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((short)param_1[0xc] != 0) {
    do {
      (**(code **)(*param_1 + 0x18))(uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 0xc));
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 0xc))();
  }
  param_1[0x25] = 0;
  return;
}

