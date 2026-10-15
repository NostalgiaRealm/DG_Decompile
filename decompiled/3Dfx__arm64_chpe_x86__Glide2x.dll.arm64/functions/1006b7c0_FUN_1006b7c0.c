/*
 * FUN_1006b7c0 at 1006b7c0
 * undefined FUN_1006b7c0(void)
 * Address ranges: 1006b7c0-1006b83b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1006b7c0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (*(code *)PTR_FUN_1009d03c)(param_1 + 0x4a0);
  cVar2 = FUN_10069eb0(uVar3,param_2);
  cVar1 = *(char *)(param_2 + 0xd5d);
  *(char *)(param_2 + 0xd5d) = cVar2;
  *(byte *)(param_2 + 0xd5e) = cVar2 != cVar1 | *(byte *)(param_2 + 0xd5e);
  (*(code *)PTR_FUN_1009d090)(param_1 + 0x4a0);
  return cVar2;
}

