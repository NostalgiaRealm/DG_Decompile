/*
 * FUN_10014a64 at 10014a64
 * undefined __fastcall FUN_10014a64(int * param_1)
 * Address ranges: 10014a64-10014ac0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10014a64(int *param_1)

{
  uint *puVar1;
  undefined4 uStack_8;
  
  puVar1 = (uint *)(param_1[0xb] + -0x58e4);
  if (param_1[0xb] == 0) {
    puVar1 = (uint *)&DAT_00000dd0;
  }
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*puVar1 >> 2) & 1);
  FUN_1000706e((void *)(-(uint)(param_1[0xb] != 0) & param_1[0xb] - 0x66b4U),(int)param_1);
  FUN_10014b2a((int)param_1);
  (**(code **)(*param_1 + 4))(1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

