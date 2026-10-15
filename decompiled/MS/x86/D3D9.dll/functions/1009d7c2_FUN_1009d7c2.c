/*
 * FUN_1009d7c2 at 1009d7c2
 * int __stdcall FUN_1009d7c2(undefined4 * param_1)
 * Address ranges: 1009d7c2-1009d80b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009d7c2(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = param_1;
  param_1 = (undefined4 *)0x0;
  iVar1 = puVar2[0x48];
  uVar3 = FUN_100910a8(puVar2 + 0x38,(int *)&param_1);
  if ((char)uVar3 != '\0') {
    FUN_1009d6ef(puVar2);
  }
  if (param_1 == (undefined4 *)0x0) {
    FUN_1009229f(iVar1 + 0x66b4);
  }
  return (int)param_1;
}

