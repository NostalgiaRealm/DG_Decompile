/*
 * FUN_10016cc0 at 10016cc0
 * undefined FUN_10016cc0(void)
 * Address ranges: 10016cc0-10016ddb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016cc0(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ulonglong local_40 [2];
  
  auVar4 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 0x10),0xe4,0,0,1,1);
  uVar3 = FUN_10014cc0(param_1,auVar4._8_8_,0xffffffff,1);
  local_40[0] = uVar3;
  FUN_10002470(param_2,0x500200100700,uVar3 & 0xffffffff,auVar4._0_8_ & 0xffffffff,0,0);
  FUN_10002470(param_2,0x20810200012010,uVar3 & 0xffffffff,0xffffffff,0,
               1 << (ulonglong)(*(uint *)(param_3 + 8) & 3));
  FUN_10014dd8(param_1,param_2,local_40);
  FUN_10019908(param_1,param_2,0);
  uVar1 = 0x850100110000;
  uVar2 = 0x840100110000;
  if (*(char *)(param_3 + 1) == '\0') {
    uVar1 = 0x840100110000;
    uVar2 = 0x850100110000;
  }
  if (param_4 != '\0') {
    uVar2 = uVar1;
  }
  FUN_10002470(param_2,uVar2,0xffffffff,0xffffffff,0,0);
  return;
}

