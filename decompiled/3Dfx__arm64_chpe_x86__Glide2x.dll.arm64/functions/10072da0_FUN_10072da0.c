/*
 * FUN_10072da0 at 10072da0
 * undefined FUN_10072da0(void)
 * Address ranges: 10072da0-10072e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10072da0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 5) {
    switch(param_3) {
    case 1:
      iVar1 = 0x19d0;
      break;
    case 2:
      iVar1 = 0x1a30;
      break;
    case 3:
      iVar1 = 0x1a90;
      break;
    case 4:
      iVar1 = 0x1af0;
      break;
    case 5:
      iVar1 = 0x1b50;
    }
    iVar1 = *(int *)(param_1 + 4) + param_2 * 0x16c0 + iVar1;
  }
  return iVar1;
}

