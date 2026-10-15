/*
 * FUN_1004ed24 at 1004ed24
 * undefined __fastcall FUN_1004ed24(undefined4 * param_1)
 * Address ranges: 1004ed24-1004ed6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004ed24(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__10055010;
  param_1[0xe] = &PTR_LAB_10054ff8;
  FUN_10039498((void *)param_1[0x11],(uint)param_1,(undefined *)0x0,'\x01');
  if (param_1[0x10] != 0) {
    FUN_1003953b((void *)param_1[0x11],param_1[0x10],'\x01');
    (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10]);
  }
  param_1[0xe] = &PTR_LAB_1005409c;
  *param_1 = &PTR_FUN_100540d4;
  return;
}

