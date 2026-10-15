/*
 * FUN_100c30a0 at 100c30a0
 * undefined FUN_100c30a0(void)
 * Address ranges: 100c30a0-100c312b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100c30a0(int param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = param_2 & 0xff;
  auVar3 = FUN_100c0938(param_1,param_2,uVar2);
  if ((auVar3._0_8_ & 1) == 0) {
    FUN_100beba0(param_1,0,uVar2 & 0xffffffff);
    iVar1 = param_1 + 0x48;
  }
  else {
    if ((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x184) == 0)) {
      if ((auVar3._8_8_ & 1) != 0) {
        FUN_10130fb8(*(int *)(param_1 + 0x44) + 0x11c0);
      }
      FUN_100c10a8(param_1);
    }
    iVar1 = param_1 + 0x13c;
    if (*(int *)(param_1 + 0x148) == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

