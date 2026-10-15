/*
 * FUN_100bfe18 at 100bfe18
 * undefined __fastcall FUN_100bfe18(undefined4 * param_1)
 * Address ranges: 100bfe18-100bfe5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100bfe18(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__100d8d10;
  param_1[0xe] = &PTR_LAB_100d8cf8;
  FUN_100c1038((void *)param_1[0x11],(uint)param_1,(undefined *)0x0,'\x01');
  if (param_1[0x10] != 0) {
    FUN_100c10d6((void *)param_1[0x11],param_1[0x10],'\x01');
    (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10]);
  }
  param_1[0xe] = &PTR_D3DPERF_GetStatus_100d8cc0;
  *param_1 = &PTR_FUN_100d8d20;
  return;
}

