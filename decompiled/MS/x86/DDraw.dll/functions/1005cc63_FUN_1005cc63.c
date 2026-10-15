/*
 * FUN_1005cc63 at 1005cc63
 * undefined __fastcall FUN_1005cc63(undefined4 * param_1)
 * Address ranges: 1005cc63-1005ccaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005cc63(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__10066d50;
  param_1[0xe] = &PTR_LAB_10066d38;
  FUN_1004feaf((void *)param_1[0x11],(uint)param_1,(undefined *)0x0,'\x01');
  if (param_1[0x10] != 0) {
    FUN_1004ff52((void *)param_1[0x11],param_1[0x10],'\x01');
    (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10]);
  }
  param_1[0xe] = &PTR_LAB_10066928;
  *param_1 = &PTR_FUN_10066ce0;
  return;
}

