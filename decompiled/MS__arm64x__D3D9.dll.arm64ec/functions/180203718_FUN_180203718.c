/*
 * FUN_180203718 at 180203718
 * undefined FUN_180203718(void)
 * Address ranges: 180203718-18020377b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180203718(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = thunk_FUN_1802236f8(param_1 + 0x620);
  cVar2 = FUN_180202238(uVar3,param_2);
  cVar1 = *(char *)(param_2 + 0xd6d);
  *(char *)(param_2 + 0xd6d) = cVar2;
  *(byte *)(param_2 + 0xd6e) = cVar2 != cVar1 | *(byte *)(param_2 + 0xd6e);
  thunk_FUN_18022370c(param_1 + 0x620);
  return cVar2;
}

