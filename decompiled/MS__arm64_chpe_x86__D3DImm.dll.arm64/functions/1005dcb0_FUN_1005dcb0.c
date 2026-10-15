/*
 * FUN_1005dcb0 at 1005dcb0
 * undefined FUN_1005dcb0(void)
 * Address ranges: 1005dcb0-1005dd73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1005dcb0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_3 + 0x80) == 0) {
    cVar2 = *(char *)(param_3 + 0x136);
  }
  else {
    cVar2 = *(int *)(param_1 + 0x4b0) != 0;
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xa58) + 0x36);
  if (((uVar1 & 1) == 0) && (*(int *)(param_1 + 0x4b8) != 0)) {
    uVar4 = 1;
LAB_1005dd24:
    if (cVar2 != '\0') {
      uVar5 = 1;
      goto LAB_1005dd34;
    }
  }
  else {
    uVar4 = 0;
    if ((uVar1 & 1) == 0) goto LAB_1005dd24;
  }
  uVar5 = 0;
LAB_1005dd34:
  uVar3 = FUN_10096b90(param_1,param_2,param_3,param_4,param_5,7,uVar4,uVar5,
                       *(int *)(param_1 + 0x4b4) != 0);
  return uVar3;
}

