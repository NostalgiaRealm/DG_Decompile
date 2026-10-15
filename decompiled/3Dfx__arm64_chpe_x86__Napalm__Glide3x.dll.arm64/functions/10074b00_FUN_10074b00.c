/*
 * FUN_10074b00 at 10074b00
 * undefined FUN_10074b00(void)
 * Address ranges: 10074b00-10074b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10074b00(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (*(code *)PTR_FUN_100a803c)(param_1 + 0x4a0);
  cVar2 = FUN_100731f0(uVar3,param_2);
  cVar1 = *(char *)(param_2 + 0xd5d);
  *(char *)(param_2 + 0xd5d) = cVar2;
  *(byte *)(param_2 + 0xd5e) = cVar2 != cVar1 | *(byte *)(param_2 + 0xd5e);
  (*(code *)PTR_FUN_100a8090)(param_1 + 0x4a0);
  return cVar2;
}

