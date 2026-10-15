/*
 * FUN_180039c70 at 180039c70
 * undefined8 __fastcall FUN_180039c70(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180039c70-180039d51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180039c70(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar1 = (longlong *)0x0;
  plVar5 = (longlong *)(*param_2 + -0xe0);
  if (*param_2 == 0) {
    plVar5 = plVar1;
  }
  plVar6 = (longlong *)(param_2[1] + -0xe0);
  if (param_2[1] == 0) {
    plVar6 = plVar1;
  }
  plVar3 = (longlong *)(param_2[2] + -0xe0);
  if (param_2[2] == 0) {
    plVar3 = plVar1;
  }
  plVar4 = (longlong *)(param_2[3] + -0xe0);
  if (param_2[3] == 0) {
    plVar4 = plVar1;
  }
  plVar2 = (longlong *)(param_3 + -0xe0);
  if (param_3 == 0) {
    plVar2 = plVar1;
  }
  if (plVar5 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar5 + 0xf0))(plVar5);
    if ((char)plVar1 == '\0') goto LAB_180039d3a;
  }
  if (plVar6 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar6 + 0xf0))(plVar6);
    if ((char)plVar1 == '\0') goto LAB_180039d3a;
  }
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar3 + 0xf0))(plVar3);
    if ((char)plVar1 == '\0') goto LAB_180039d3a;
  }
  if (plVar4 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar4 + 0xf0))(plVar4);
    if ((char)plVar1 == '\0') goto LAB_180039d3a;
  }
  if (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar2 + 0xf0))(plVar2);
    if ((char)plVar1 == '\0') {
LAB_180039d3a:
      return (ulonglong)plVar1 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}

