/*
 * FUN_1008230c at 1008230c
 * undefined __fastcall FUN_1008230c(int * param_1)
 * Address ranges: 1008230c-10082373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1008230c(int *param_1)

{
  uint *puVar1;
  undefined4 uStack_8;
  
  puVar1 = (uint *)(param_1[5] + -0x4dd4);
  if (param_1[5] == 0) {
    puVar1 = (uint *)&DAT_00000b0c;
  }
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*puVar1 >> 2) & 1);
  FUN_10006605((void *)(-(uint)(param_1[5] != 0) & param_1[5] - 0x58e0U),(int)param_1);
  FUN_10082374(param_1);
  FUN_100821c1(param_1);
  FUN_100ad48c(param_1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

