/*
 * _grSstScreenHeight@0_native at 10002880
 * undefined _grSstScreenHeight@0_native(void)
 * Address ranges: 10002880-100028cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _grSstScreenHeight_0_native(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1001ba50();
  if (*(char *)(iVar1 + 0x3c) == '\0') {
    uVar2 = (*(code *)PTR_FUN_1009d178)(0x4f);
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x9c);
  }
  return uVar2;
}

