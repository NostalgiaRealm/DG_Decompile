/*
 * FUN_1003d350 at 1003d350
 * undefined FUN_1003d350(void)
 * Address ranges: 1003d350-1003d3b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003d350(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar3 == 0) {
    FUN_10001c10(0);
  }
  cVar2 = FUN_10038a68(param_1);
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  uVar1 = 0;
  if (cVar2 == '\0') {
    uVar1 = 0x887600e1;
  }
  return uVar1;
}

