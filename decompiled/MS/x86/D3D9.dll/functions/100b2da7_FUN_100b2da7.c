/*
 * FUN_100b2da7 at 100b2da7
 * undefined __fastcall FUN_100b2da7(undefined4 * param_1)
 * Address ranges: 100b2da7-100b2f04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100b2da7(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0x9100;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbf] = 0;
  param_1[0x120] = 0;
  param_1[0x122] = 0;
  SetRectEmpty((LPRECT)(param_1 + 0xc0));
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  FUN_100cfed0(param_1 + 0x11,0,0x40);
  FUN_100cfed0(param_1 + 0x21,0,0x40);
  FUN_100cfed0(param_1 + 0x31,0,0x30);
  FUN_100cfed0(param_1 + 0x3d,0,0x100);
  FUN_100cfed0(param_1 + 0x7d,0,0x40);
  FUN_100cfed0(param_1 + 0x8d,0,0x40);
  FUN_100cfed0(param_1 + 0x9d,0,0x40);
  puVar2 = param_1 + 0xb0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  FUN_100cfed0(param_1 + 0xf0,0,0xac);
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  FUN_100cfed0(param_1 + 0x124,0,0x1040);
  FUN_100cfed0(param_1 + 0x534,0,0x3c);
  return;
}

