/*
 * FUN_18002db98 at 18002db98
 * undefined FUN_18002db98(void)
 * Address ranges: 18002db98-18002dccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002db98(longlong param_1,uint param_2,undefined4 param_3,longlong *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_18002a810(param_1,0,0,0);
  if (param_4 == (longlong *)0x0) {
    FUN_180056840(param_1,param_2,param_3,0,0,param_5,param_6,param_7,(char)param_8,1);
    param_1 = param_1 + (ulonglong)param_2 * 8;
    *(undefined8 *)(param_1 + 64000) = 0;
    *(undefined8 *)(param_1 + 0xfa80) = 0;
  }
  else {
    iVar2 = (**(code **)(*param_4 + 8))(param_4);
    if (iVar2 == 1) {
      plVar3 = (longlong *)0x0;
      plVar4 = param_4 + -4;
    }
    else {
      plVar4 = (longlong *)0x0;
      (**(code **)(param_4[-0x1c] + 0xf8))(param_4 + -0x1c,param_8);
      plVar3 = param_4 + -0x1c;
    }
    lVar1 = param_1 + (ulonglong)param_2 * 8;
    *(longlong **)(lVar1 + 64000) = plVar3;
    *(longlong **)(lVar1 + 0xfa80) = plVar4;
    FUN_180056840(param_1,param_2,param_3,plVar3,plVar4,param_5,param_6,param_7,(char)param_8,1);
  }
  return;
}

