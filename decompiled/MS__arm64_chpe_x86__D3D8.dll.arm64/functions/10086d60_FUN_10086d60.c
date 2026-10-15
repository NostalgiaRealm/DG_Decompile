/*
 * FUN_10086d60 at 10086d60
 * undefined FUN_10086d60(void)
 * Address ranges: 10086d60-10086eff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10086d60(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *extraout_w11;
  int iVar5;
  undefined1 auStack_60 [20];
  undefined4 local_4c;
  
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,auStack_60);
  iVar5 = 1;
  iVar1 = 1;
  switch(local_4c) {
  case 2:
    uVar4 = 0x10;
    break;
  default:
    iVar1 = 0;
  case 1:
    iVar5 = iVar1;
    uVar4 = 0xf;
    break;
  case 4:
    uVar4 = 0x11;
    break;
  case 8:
    uVar4 = 0x12;
    break;
  case 0x10:
    uVar4 = 0x13;
  }
  if (*(int *)(param_4 + 0x5c) == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    iVar1 = *(int *)(param_3 + 0x58);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_3 + 0x54);
    }
    iVar2 = *(int *)(param_2 + 0x20) + *(int *)(param_2 + 0x24) * *(int *)(param_3 + 0x2c);
    if (*(int *)(*(int *)(param_3 + 0x60) + iVar2 * 0x1c + 4) == 0) {
      iVar5 = 0;
    }
    else {
      *(int *)(param_2 + 0x48) = iVar1;
      *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(*(int *)(param_3 + 0x60) + iVar2 * 0x1c + 4)
      ;
      *(int *)(param_2 + 0x40) = *(int *)(param_4 + 0x5c);
      FUN_100865a8(param_1,param_2,*(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_4 + 0x1c),
                   uVar4,0,0);
    }
  }
  return iVar5;
}

