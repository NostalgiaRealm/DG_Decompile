/*
 * _grSstScreenWidth@0_native at 100028d0
 * undefined _grSstScreenWidth@0_native(void)
 * Address ranges: 100028d0-1000291b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _grSstScreenWidth_0_native(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1001ba50();
  if (*(char *)(iVar1 + 0x3c) == '\0') {
    uVar2 = (*(code *)PTR_FUN_1009d178)(0x4e);
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x98);
  }
  return uVar2;
}

