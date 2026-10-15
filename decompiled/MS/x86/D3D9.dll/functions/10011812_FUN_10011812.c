/*
 * FUN_10011812 at 10011812
 * undefined __fastcall FUN_10011812(undefined4 * param_1)
 * Address ranges: 10011812-10011876
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10011812(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uStack_8;
  
  puVar1 = (uint *)(param_1[0xb] + -0x58e4);
  if (param_1[0xb] == 0) {
    puVar1 = (uint *)&DAT_00000dd0;
  }
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*puVar1 >> 2) & 1);
  FUN_10007105((void *)(-(uint)(param_1[0xb] != 0) & param_1[0xb] - 0x66b4),(int)param_1);
  FUN_100118f6((int)param_1);
  FUN_10011804(param_1);
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

