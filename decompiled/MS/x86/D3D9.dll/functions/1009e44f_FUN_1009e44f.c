/*
 * FUN_1009e44f at 1009e44f
 * undefined4 __stdcall FUN_1009e44f(int param_1, int param_2)
 * Address ranges: 1009e44f-1009e497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009e44f(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -0x3c) + -0x58e4);
  if (*(int *)(param_1 + -0x3c) == 0) {
    puVar3 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  uVar2 = FUN_1001178e((void *)(iVar1 + -0x48),param_2);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

