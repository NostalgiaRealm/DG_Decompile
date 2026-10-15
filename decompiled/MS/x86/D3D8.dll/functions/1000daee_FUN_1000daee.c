/*
 * FUN_1000daee at 1000daee
 * undefined __fastcall FUN_1000daee(undefined4 * param_1)
 * Address ranges: 1000daee-1000db52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000daee(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uStack_8;
  
  puVar1 = (uint *)(param_1[0xb] + -0x4dd4);
  if (param_1[0xb] == 0) {
    puVar1 = (uint *)&DAT_00000b0c;
  }
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*puVar1 >> 2) & 1);
  FUN_100067fc((void *)(-(uint)(param_1[0xb] != 0) & param_1[0xb] - 0x58e0),(int)param_1);
  FUN_1000dbd2((int)param_1);
  FUN_1000dae0(param_1);
  FUN_100ad48c(param_1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

