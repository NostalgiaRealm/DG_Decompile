/*
 * FUN_18002efe8 at 18002efe8
 * undefined FUN_18002efe8(void)
 * Address ranges: 18002efe8-18002f137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002efe8(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_58;
  
  lVar3 = 0;
  do {
    plVar2 = *(longlong **)(param_1 + 0xf9b0 + lVar3 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))
                (plVar2,*(undefined4 *)(param_1 + 0xf9d8 + lVar3 * 4),
                 *(undefined4 *)(param_1 + 0xf9e8 + lVar3 * 4),0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  plVar2 = *(longlong **)(param_1 + 0xf9d0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))
              (plVar2,*(undefined4 *)(param_1 + 0xf9f8),*(undefined4 *)(param_1 + 0xf9fc),0);
  }
  local_58 = 0;
  if (param_4 != 0) {
    local_58 = param_4 + -0x30;
  }
  puVar1 = &DAT_0000004c;
  if (param_4 != 0) {
    puVar1 = (undefined1 *)(param_4 + 0x1c);
  }
  FUN_180059860(param_1,param_2,param_3,0,&local_58,param_5,param_6,param_7,param_8,param_9,param_10
                ,param_11,0,0,*puVar1);
  return;
}

