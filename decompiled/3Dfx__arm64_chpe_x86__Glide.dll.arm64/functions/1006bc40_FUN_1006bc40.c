/*
 * FUN_1006bc40 at 1006bc40
 * undefined FUN_1006bc40(void)
 * Address ranges: 1006bc40-1006bcbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1006bc40(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (*(code *)PTR_FUN_1009d03c)(param_1 + 0x4a0);
  cVar2 = FUN_1006a330(uVar3,param_2);
  cVar1 = *(char *)(param_2 + 0xd5d);
  *(char *)(param_2 + 0xd5d) = cVar2;
  *(byte *)(param_2 + 0xd5e) = cVar2 != cVar1 | *(byte *)(param_2 + 0xd5e);
  (*(code *)PTR_FUN_1009d090)(param_1 + 0x4a0);
  return cVar2;
}

