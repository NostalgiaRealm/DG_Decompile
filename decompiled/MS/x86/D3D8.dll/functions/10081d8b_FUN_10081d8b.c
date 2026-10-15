/*
 * FUN_10081d8b at 10081d8b
 * undefined4 __stdcall FUN_10081d8b(int param_1, int param_2)
 * Address ranges: 10081d8b-10081dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081d8b(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -0x3c) + -0x4dd4);
  if (*(int *)(param_1 + -0x3c) == 0) {
    puVar3 = (uint *)&DAT_00000b0c;
  }
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  uVar2 = FUN_1000da6a((void *)(iVar1 + -0x48),param_2);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

