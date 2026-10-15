/*
 * FUN_100948b3 at 100948b3
 * undefined4 __stdcall FUN_100948b3(int param_1)
 * Address ranges: 100948b3-100948ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100948b3(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar2 = FUN_1001a5be(iVar1 + -0x66b4);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

