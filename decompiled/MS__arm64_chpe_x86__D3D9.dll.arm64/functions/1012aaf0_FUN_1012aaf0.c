/*
 * FUN_1012aaf0 at 1012aaf0
 * undefined FUN_1012aaf0(void)
 * Address ranges: 1012aaf0-1012ab7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1012aaf0(int param_1,int param_2,undefined4 param_3,int param_4)

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
  iVar2 = FUN_1011bb08(iVar1,param_2,iVar3,param_3,0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 0x38;
  }
  return iVar3;
}

