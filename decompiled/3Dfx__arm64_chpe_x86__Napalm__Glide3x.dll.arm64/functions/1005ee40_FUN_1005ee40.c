/*
 * FUN_1005ee40 at 1005ee40
 * undefined FUN_1005ee40(void)
 * Address ranges: 1005ee40-1005ee97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1005ee40(int param_1,int param_2)

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

