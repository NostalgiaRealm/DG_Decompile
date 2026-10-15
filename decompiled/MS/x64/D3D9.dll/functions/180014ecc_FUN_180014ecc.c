/*
 * FUN_180014ecc at 180014ecc
 * undefined __fastcall FUN_180014ecc(longlong param_1, longlong param_2)
 * Address ranges: 180014ecc-180014f48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014ecc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_1800080d8(*(longlong *)(param_1 + 0x28),param_2);
    FUN_180032e10(*(longlong **)(param_2 + 8));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) != 0) {
    FUN_1800080d8(*(longlong *)(param_1 + 0x28),param_1);
    FUN_180032470((undefined8 *)(*(longlong *)(param_1 + 8) + 0x68));
    FUN_180032e10(*(longlong **)(param_1 + 8));
    lVar1 = *(longlong *)(param_1 + 8);
    (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x30))
              (*(longlong **)(lVar1 + 0x70),*(undefined4 *)(lVar1 + 0x94),
               *(undefined4 *)(lVar1 + 0x98),1);
  }
  return;
}

