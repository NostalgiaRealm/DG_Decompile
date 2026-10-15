/*
 * FUN_10072f38 at 10072f38
 * undefined FUN_10072f38(void)
 * Address ranges: 10072f38-10072fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10072f38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined1 auStack_50 [4];
  int local_4c;
  
  FUN_10072db8(param_1,auStack_50,param_3,param_5,&DAT_100a2360);
  if (local_4c != 0) {
    FUN_10072e38(param_1,param_2,param_3,auStack_50,0);
  }
  return local_4c != 0;
}

