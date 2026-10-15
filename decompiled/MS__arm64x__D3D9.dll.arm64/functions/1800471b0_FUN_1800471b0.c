/*
 * FUN_1800471b0 at 1800471b0
 * undefined FUN_1800471b0(void)
 * Address ranges: 1800471b0-180047387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800471b0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined8 uVar11;
  longlong *plVar12;
  
  plVar1 = (longlong *)0x0;
  if (*param_2 != 0) {
    plVar1 = (longlong *)(*param_2 + -0x100);
  }
  plVar2 = (longlong *)0x0;
  if (param_2[1] != 0) {
    plVar2 = (longlong *)(param_2[1] + -0x100);
  }
  plVar3 = (longlong *)0x0;
  if (param_2[2] != 0) {
    plVar3 = (longlong *)(param_2[2] + -0x100);
  }
  plVar4 = (longlong *)0x0;
  if (param_2[3] != 0) {
    plVar4 = (longlong *)(param_2[3] + -0x100);
  }
  if (param_3 == 0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = (longlong *)(param_3 + -0x100);
    if (plVar12 != (longlong *)0x0) {
      bVar5 = (**(code **)(*plVar12 + 0xa8))(plVar12);
      goto LAB_180047230;
    }
  }
  bVar5 = 1;
LAB_180047230:
  if (plVar1 == (longlong *)0x0) {
    bVar6 = 1;
  }
  else {
    bVar6 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  }
  if (plVar2 == (longlong *)0x0) {
    bVar7 = 1;
  }
  else {
    bVar7 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  }
  if (plVar3 == (longlong *)0x0) {
    bVar8 = 1;
  }
  else {
    bVar8 = (**(code **)(*plVar3 + 0xa8))(plVar3);
  }
  if (plVar4 == (longlong *)0x0) {
    bVar9 = 1;
  }
  else {
    bVar9 = (**(code **)(*plVar4 + 0xa8))(plVar4);
  }
  if (((bVar6 & bVar5 & bVar7 & bVar8 & bVar9) == 0) &&
     ((((((FUN_180101df0(*(longlong *)(param_1 + 0xf6e0) + 0x12c0), plVar1 != (longlong *)0x0 &&
          (cVar10 = (**(code **)(*plVar1 + 0xe8))(plVar1), cVar10 == '\0')) ||
         ((plVar2 != (longlong *)0x0 &&
          (cVar10 = (**(code **)(*plVar2 + 0xe8))(plVar2), cVar10 == '\0')))) ||
        ((plVar3 != (longlong *)0x0 &&
         (cVar10 = (**(code **)(*plVar3 + 0xe8))(plVar3), cVar10 == '\0')))) ||
       ((plVar4 != (longlong *)0x0 &&
        (cVar10 = (**(code **)(*plVar4 + 0xe8))(plVar4), cVar10 == '\0')))) ||
      ((plVar12 != (longlong *)0x0 &&
       (cVar10 = (**(code **)(*plVar12 + 0xe8))(plVar12), cVar10 == '\0')))))) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  return uVar11;
}

