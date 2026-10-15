/*
 * FUN_1005180c at 1005180c
 * undefined __fastcall FUN_1005180c(undefined4 * param_1)
 * Address ranges: 1005180c-10051853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005180c(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__10058268;
  param_1[0xe] = &PTR_LAB_10058250;
  FUN_1003bf7d((void *)param_1[0x11],(uint)param_1,(undefined *)0x0,'\x01');
  if (param_1[0x10] != 0) {
    FUN_1003c020((void *)param_1[0x11],param_1[0x10],'\x01');
    (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10]);
  }
  param_1[0xe] = &PTR_LAB_100572f4;
  *param_1 = &PTR_FUN_1005732c;
  return;
}

