/*
 * FUN_10010b4a at 10010b4a
 * undefined __fastcall FUN_10010b4a(int * param_1)
 * Address ranges: 10010b4a-10010ba6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10010b4a(int *param_1)

{
  uint *puVar1;
  undefined4 uStack_8;
  
  puVar1 = (uint *)(param_1[0xb] + -0x4dd4);
  if (param_1[0xb] == 0) {
    puVar1 = (uint *)&DAT_00000b0c;
  }
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*puVar1 >> 2) & 1);
  FUN_10006765((void *)(-(uint)(param_1[0xb] != 0) & param_1[0xb] - 0x58e0U),(int)param_1);
  FUN_10010c10((int)param_1);
  (**(code **)(*param_1 + 4))(1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

