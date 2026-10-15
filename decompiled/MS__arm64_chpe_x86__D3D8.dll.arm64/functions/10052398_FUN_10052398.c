/*
 * FUN_10052398 at 10052398
 * undefined FUN_10052398(void)
 * Address ranges: 10052398-1005244f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10052398(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int local_50;
  undefined4 uStack_4c;
  
  FUN_1004c8a0(param_1);
  local_50 = 0;
  if (param_4 != 0) {
    local_50 = param_4 + -0x18;
  }
  uStack_4c = *(undefined4 *)(param_3 + 0x10);
  FUN_10064518(param_1,param_2,param_3,0,&local_50,param_5,param_6,param_7,param_8);
  return;
}

