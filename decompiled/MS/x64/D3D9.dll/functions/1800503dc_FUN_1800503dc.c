/*
 * FUN_1800503dc at 1800503dc
 * undefined1 __fastcall FUN_1800503dc(longlong param_1, longlong * param_2, longlong param_3)
 * Address ranges: 1800503dc-180050571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800503dc(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  plVar11 = (longlong *)(-(ulonglong)(*param_2 != 0) & *param_2 - 0x100U);
  plVar10 = (longlong *)(-(ulonglong)(param_2[1] != 0) & param_2[1] - 0x100U);
  plVar8 = (longlong *)(-(ulonglong)(param_2[2] != 0) & param_2[2] - 0x100U);
  plVar9 = (longlong *)(-(ulonglong)(param_2[3] != 0) & param_2[3] - 0x100U);
  plVar7 = (longlong *)(-(ulonglong)(param_3 != 0) & param_3 - 0x100U);
  if (plVar7 == (longlong *)0x0) {
    bVar1 = 1;
  }
  else {
    bVar1 = (**(code **)(*plVar7 + 0xa8))(plVar7,param_2,-param_3);
  }
  if (plVar11 == (longlong *)0x0) {
    bVar2 = 1;
  }
  else {
    bVar2 = (**(code **)(*plVar11 + 0xa8))(plVar11);
  }
  if (plVar10 == (longlong *)0x0) {
    bVar3 = 1;
  }
  else {
    bVar3 = (**(code **)(*plVar10 + 0xa8))(plVar10);
  }
  if (plVar8 == (longlong *)0x0) {
    bVar4 = 1;
  }
  else {
    bVar4 = (**(code **)(*plVar8 + 0xa8))(plVar8);
  }
  if (plVar9 == (longlong *)0x0) {
    bVar5 = 1;
  }
  else {
    bVar5 = (**(code **)(*plVar9 + 0xa8))(plVar9);
  }
  if ((bVar4 & bVar3 & bVar2 & bVar1 & bVar5) != 0) {
    return 1;
  }
  FUN_1800fb1f0(*(longlong *)(param_1 + 0xf6e0) + 0x12c0);
  if (((((plVar11 == (longlong *)0x0) ||
        (cVar6 = (**(code **)(*plVar11 + 0xe8))(plVar11), cVar6 != '\0')) &&
       ((plVar10 == (longlong *)0x0 ||
        (cVar6 = (**(code **)(*plVar10 + 0xe8))(plVar10), cVar6 != '\0')))) &&
      ((plVar8 == (longlong *)0x0 || (cVar6 = (**(code **)(*plVar8 + 0xe8))(plVar8), cVar6 != '\0'))
      )) && ((plVar9 == (longlong *)0x0 ||
             (cVar6 = (**(code **)(*plVar9 + 0xe8))(plVar9), cVar6 != '\0')))) {
    if (plVar7 == (longlong *)0x0) {
      return 1;
    }
    cVar6 = (**(code **)(*plVar7 + 0xe8))(plVar7);
    if (cVar6 != '\0') {
      return 1;
    }
  }
  return 0;
}

