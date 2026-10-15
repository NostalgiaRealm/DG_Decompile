/*
 * FUN_10054a34 at 10054a34
 * undefined __fastcall FUN_10054a34(undefined4 * param_1)
 * Address ranges: 10054a34-10054a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10054a34(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1005fe68;
  param_1[0xe] = &PTR_LAB_1005fe50;
  FUN_10055793((void *)param_1[0x11],(uint)param_1,(undefined *)0x0,'\x01');
  if (param_1[0x10] != 0) {
    FUN_10055836((void *)param_1[0x11],param_1[0x10],'\x01');
    (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10]);
  }
  param_1[0xe] = &PTR_LAB_1005fec0;
  *param_1 = &PTR_FUN_1005fef8;
  return;
}

