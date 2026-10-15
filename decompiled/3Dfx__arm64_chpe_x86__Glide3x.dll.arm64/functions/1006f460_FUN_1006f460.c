/*
 * FUN_1006f460 at 1006f460
 * undefined FUN_1006f460(void)
 * Address ranges: 1006f460-1006f4db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1006f460(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (*(code *)PTR_FUN_100a003c)(param_1 + 0x4a0);
  cVar2 = FUN_1006db50(uVar3,param_2);
  cVar1 = *(char *)(param_2 + 0xd5d);
  *(char *)(param_2 + 0xd5d) = cVar2;
  *(byte *)(param_2 + 0xd5e) = cVar2 != cVar1 | *(byte *)(param_2 + 0xd5e);
  (*(code *)PTR_FUN_100a0090)(param_1 + 0x4a0);
  return cVar2;
}

