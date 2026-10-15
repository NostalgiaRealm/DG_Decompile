/*
 * FUN_100ddf18 at 100ddf18
 * undefined FUN_100ddf18(void)
 * Address ranges: 100ddf18-100ddf93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100ddf18(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (*(code *)PTR_FUN_10134070)(param_1 + 0x4a0);
  cVar2 = FUN_100dc570(uVar3,param_2);
  cVar1 = *(char *)(param_2 + 0xd5d);
  *(char *)(param_2 + 0xd5d) = cVar2;
  *(byte *)(param_2 + 0xd5e) = cVar2 != cVar1 | *(byte *)(param_2 + 0xd5e);
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x4a0);
  return cVar2;
}

