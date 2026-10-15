/*
 * FUN_100051f0 at 100051f0
 * undefined FUN_100051f0(void)
 * Address ranges: 100051f0-10005297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100051f0(int param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_3c = 0;
  local_34 = 0;
  local_40 = param_2;
  uVar1 = FUN_10002930(param_1,&local_40,param_3,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_3;
    if (param_4 != '\0') {
      FUN_10002860(param_1,param_2,1);
    }
    if (param_5 != '\0') {
      FUN_100028e0(param_1,*(undefined4 *)(param_1 + 0x28));
    }
    uVar2 = 1;
  }
  return uVar2;
}

