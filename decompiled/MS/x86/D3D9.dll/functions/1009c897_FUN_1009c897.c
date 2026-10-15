/*
 * FUN_1009c897 at 1009c897
 * undefined4 __stdcall FUN_1009c897(int param_1, int param_2)
 * Address ranges: 1009c897-1009c8df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009c897(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -0x20) + -0x58e4);
  if (*(int *)(param_1 + -0x20) == 0) {
    puVar3 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  uVar2 = FUN_1001178e((void *)(iVar1 + -0x2c),param_2);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

