/*
 * FUN_18003c7ac at 18003c7ac
 * undefined8 __fastcall FUN_18003c7ac(longlong param_1, longlong param_2, int param_3, uint param_4)
 * Address ranges: 18003c7ac-18003c81a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003c7ac(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_180038960(param_1,0,0,0);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
  lVar2 = *plVar3;
  if (param_3 == 0xc) {
    (**(code **)(lVar2 + 0xd8))(plVar3,uVar1);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    lVar2 = *plVar3;
  }
  else if ((param_4 & 2) != 0) {
    (**(code **)(lVar2 + 0xd8))();
    return 0;
  }
  (**(code **)(lVar2 + 0xe0))(plVar3,uVar1);
  return 0;
}

