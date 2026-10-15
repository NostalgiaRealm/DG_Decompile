/*
 * FUN_1007c380 at 1007c380
 * undefined FUN_1007c380(void)
 * Address ranges: 1007c380-1007c40b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007c380(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = 0;
  if (param_4 - 1U < 3) {
    switch(param_4) {
    case 1:
      iVar3 = 0x19d0;
      break;
    case 2:
      iVar3 = 0x1a30;
      break;
    case 3:
      iVar3 = 0x1a90;
    }
    iVar3 = iVar2 + param_2 * 0x16c0 + iVar3;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 0x520;
  }
  iVar2 = FUN_100614e8(iVar1,param_2,iVar3,param_3,0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x38;
  }
  return iVar3;
}

