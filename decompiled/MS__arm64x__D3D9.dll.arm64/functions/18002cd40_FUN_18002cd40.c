/*
 * FUN_18002cd40 at 18002cd40
 * undefined FUN_18002cd40(void)
 * Address ranges: 18002cd40-18002ce43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002cd40(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  
  plVar1 = (longlong *)0x0;
  if (*param_2 != 0) {
    plVar1 = (longlong *)(*param_2 + -0xe0);
  }
  plVar2 = (longlong *)0x0;
  if (param_2[1] != 0) {
    plVar2 = (longlong *)(param_2[1] + -0xe0);
  }
  plVar3 = (longlong *)0x0;
  if (param_2[2] != 0) {
    plVar3 = (longlong *)(param_2[2] + -0xe0);
  }
  plVar4 = (longlong *)0x0;
  if (param_2[3] != 0) {
    plVar4 = (longlong *)(param_2[3] + -0xe0);
  }
  plVar5 = (longlong *)0x0;
  if (param_3 != 0) {
    plVar5 = (longlong *)(param_3 + -0xe0);
  }
  if ((((((plVar1 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar1 + 0xf0))(), cVar6 != '\0'))
        && ((plVar2 == (longlong *)0x0 ||
            (cVar6 = (**(code **)(*plVar2 + 0xf0))(plVar2), cVar6 != '\0')))) &&
       ((plVar3 == (longlong *)0x0 || (cVar6 = (**(code **)(*plVar3 + 0xf0))(plVar3), cVar6 != '\0')
        ))) && ((plVar4 == (longlong *)0x0 ||
                (cVar6 = (**(code **)(*plVar4 + 0xf0))(plVar4), cVar6 != '\0')))) &&
     ((plVar5 == (longlong *)0x0 || (cVar6 = (**(code **)(*plVar5 + 0xf0))(plVar5), cVar6 != '\0')))
     ) {
    return 1;
  }
  return 0;
}

