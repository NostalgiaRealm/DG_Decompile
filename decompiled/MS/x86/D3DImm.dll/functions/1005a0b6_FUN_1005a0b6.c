/*
 * FUN_1005a0b6 at 1005a0b6
 * undefined __fastcall FUN_1005a0b6(int param_1)
 * Address ranges: 1005a0b6-1005a15c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005a0b6(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x1308) = 0;
  *(undefined4 *)(param_1 + 0x1300) = 0;
  *(undefined4 *)(param_1 + 0x130c) = 0;
  *(undefined4 *)(param_1 + 0x1304) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_1005c9cc((int *)(param_1 + 0x10),0,0x70);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_1005c9cc((int *)(param_1 + 0xa0),0,0x1040);
  puVar2 = (undefined4 *)(param_1 + 0x1698);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_1005c9cc((int *)(param_1 + 0x10f0),0,0xac);
  *(undefined4 *)(param_1 + 0x119c) = 0;
  *(undefined4 *)(param_1 + 0x11a0) = 0;
  *(undefined4 *)(param_1 + 0x11a4) = 0;
  *(undefined4 *)(param_1 + 0x11a8) = 0;
  *(undefined4 *)(param_1 + 0x15dc) = 0;
  *(undefined4 *)(param_1 + 0x15e0) = 0;
  *(undefined4 *)(param_1 + 0x15e8) = 0;
  *(undefined4 *)(param_1 + 0x15ec) = 0;
  return;
}

