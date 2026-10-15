/*
 * FUN_1009d840 at 1009d840
 * undefined __fastcall FUN_1009d840(undefined4 * param_1)
 * Address ranges: 1009d840-1009d887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009d840(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__100b52d8;
  param_1[0xe] = &PTR_LAB_100b52c0;
  FUN_1009ea70((void *)param_1[0x11],(uint)param_1,(undefined *)0x0,'\x01');
  if (param_1[0x10] != 0) {
    FUN_1009eb0e((void *)param_1[0x11],param_1[0x10],'\x01');
    (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10]);
  }
  param_1[0xe] = &PTR_LAB_100b5288;
  *param_1 = &PTR_FUN_100b52e8;
  return;
}

