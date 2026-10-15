/*
 * FUN_1007c90f at 1007c90f
 * undefined4 __stdcall FUN_1007c90f(int param_1, uint param_2)
 * Address ranges: 1007c90f-1007c97f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c90f(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  puVar2 = (uint *)FUN_10080572((void *)(iVar1 + 0x3c),param_2);
  if (puVar2 != (uint *)0x0) {
    uVar3 = 0;
    if (param_2 == *(uint *)(iVar1 + 100)) {
      *(undefined4 *)(iVar1 + 100) = 0;
      (**(code **)(**(int **)(iVar1 + -0x58cc) + 0x90))(0);
    }
    FUN_100805af((void *)(iVar1 + 0x3c),puVar2);
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar3;
}

