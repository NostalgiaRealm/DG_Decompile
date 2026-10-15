/*
 * FUN_100d4770 at 100d4770
 * undefined FUN_100d4770(void)
 * Address ranges: 100d4770-100d47c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100d4770(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3a8) + param_2 * 0x16c0 + 0x6c0);
  if (iVar1 == 0xb000) {
    uVar2 = 3;
  }
  else if (iVar1 == 0xc000) {
    uVar2 = 5;
  }
  else if (iVar1 == 0xc100) {
    uVar2 = 6;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

