/*
 * FUN_18002ed60 at 18002ed60
 * undefined FUN_18002ed60(void)
 * Address ranges: 18002ed60-18002eebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ed60(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  char param_9,undefined1 param_10)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + 0xf9b0 + lVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))
                (plVar1,*(undefined4 *)(param_1 + 0xf9d8 + lVar2 * 4),
                 *(undefined4 *)(param_1 + 0xf9e8 + lVar2 * 4),0);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  plVar1 = *(longlong **)(param_1 + 0xf9d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))
              (plVar1,*(undefined4 *)(param_1 + 0xf9f8),*(undefined4 *)(param_1 + 0xf9fc),0);
  }
  if (param_9 == '\0') {
    FUN_180059860(param_1,param_2,param_3,1,0,param_4,0,param_5,param_6,param_7,param_8,0,1,param_10
                  ,0);
  }
  else {
    FUN_180059860(param_1,param_2,param_3,1,0,param_4,0,param_5,param_6,param_7,param_8,1,1,param_10
                  ,0);
  }
  return;
}

