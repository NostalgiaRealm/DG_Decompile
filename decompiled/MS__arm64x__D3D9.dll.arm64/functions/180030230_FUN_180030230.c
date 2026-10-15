/*
 * FUN_180030230 at 180030230
 * undefined FUN_180030230(void)
 * Address ranges: 180030230-1800302b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180030230(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  FUN_18002a810(param_1,0,0,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
  lVar2 = *plVar1;
  if (param_3 == 0xc) {
    (**(code **)(lVar2 + 0xd8))(plVar1,uVar4);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
    lVar2 = *plVar1;
  }
  else if ((param_4 >> 1 & 1) != 0) {
    pcVar3 = *(code **)(lVar2 + 0xd8);
    goto LAB_180030290;
  }
  pcVar3 = *(code **)(lVar2 + 0xe0);
LAB_180030290:
  (*pcVar3)(plVar1,uVar4);
  return 0;
}

