/*
 * FUN_1009edfc at 1009edfc
 * undefined __fastcall FUN_1009edfc(int * param_1)
 * Address ranges: 1009edfc-1009ee63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009edfc(int *param_1)

{
  uint *puVar1;
  undefined4 uStack_8;
  
  puVar1 = (uint *)(param_1[5] + -0x58e4);
  if (param_1[5] == 0) {
    puVar1 = (uint *)&DAT_00000dd0;
  }
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*puVar1 >> 2) & 1);
  FUN_10006f0e((void *)(-(uint)(param_1[5] != 0) & param_1[5] - 0x66b4U),(int)param_1);
  FUN_1009ee64(param_1);
  FUN_1009ecb1(param_1);
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

