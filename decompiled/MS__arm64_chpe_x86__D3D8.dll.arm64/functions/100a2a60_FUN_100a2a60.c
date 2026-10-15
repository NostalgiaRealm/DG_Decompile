/*
 * FUN_100a2a60 at 100a2a60
 * undefined FUN_100a2a60(void)
 * Address ranges: 100a2a60-100a2aeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100a2a60(int param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = param_2 & 0xff;
  auVar3 = FUN_100a0318(param_1,param_2,uVar2);
  if ((auVar3._0_8_ & 1) == 0) {
    FUN_1009e5a8(param_1,0,uVar2 & 0xffffffff);
    iVar1 = param_1 + 0x48;
  }
  else {
    if ((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x184) == 0)) {
      if ((auVar3._8_8_ & 1) != 0) {
        FUN_100fd9e8(*(int *)(param_1 + 0x44) + 0x11c0);
      }
      FUN_100a0a88(param_1);
    }
    iVar1 = param_1 + 0x13c;
    if (*(int *)(param_1 + 0x148) == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

