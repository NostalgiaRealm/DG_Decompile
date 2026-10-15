/*
 * FUN_10054c15 at 10054c15
 * undefined __fastcall FUN_10054c15(undefined4 * param_1)
 * Address ranges: 10054c15-10054c5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10054c15(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1005b718;
  param_1[0xe] = &PTR_LAB_1005b700;
  FUN_1003f38b((void *)param_1[0x11],(uint)param_1,(undefined *)0x0,'\x01');
  if (param_1[0x10] != 0) {
    FUN_1003f42e((void *)param_1[0x11],param_1[0x10],'\x01');
    (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10]);
  }
  param_1[0xe] = &PTR_LAB_1005a7a0;
  *param_1 = &PTR_FUN_1005a7d8;
  return;
}

