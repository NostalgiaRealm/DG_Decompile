/*
 * FUN_10059d10 at 10059d10
 * undefined FUN_10059d10(void)
 * Address ranges: 10059d10-10059d7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10059d10(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x3a8) + param_2 * 0x1510 + 0x520);
  if (iVar1 < 0xb000) {
    if (iVar1 == 0xa000) {
      uVar2 = 1;
    }
    else if (iVar1 == 0xa100) {
      uVar2 = 2;
    }
  }
  else if (iVar1 < 0xb001) {
    uVar2 = 3;
  }
  else if (iVar1 == 0xb100) {
    uVar2 = 4;
  }
  return uVar2;
}

