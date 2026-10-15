/*
 * FUN_18002eaf0 at 18002eaf0
 * undefined FUN_18002eaf0(void)
 * Address ranges: 18002eaf0-18002ec53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002eaf0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,char param_10,undefined1 param_11)

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
  if (param_10 == '\0') {
    FUN_180059860(param_1,param_2,param_3,1,0,param_4,param_5,param_6,param_7,param_8,param_9,0,0,
                  param_11,0);
  }
  else {
    FUN_180059860(param_1,param_2,param_3,1,0,param_4,param_5,param_6,param_7,param_8,param_9,1,0,
                  param_11,0);
  }
  return;
}

