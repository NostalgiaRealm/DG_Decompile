/*
 * FUN_1009d25d at 1009d25d
 * undefined4 __stdcall FUN_1009d25d(int param_1, int param_2)
 * Address ranges: 1009d25d-1009d299
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009d25d(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + -0x44) + 0xdd0) >> 2) & 1);
  uVar2 = FUN_1001178e((void *)(iVar1 + -0x50),param_2);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

