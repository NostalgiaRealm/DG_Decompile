/*
 * FUN_1800b3b44 at 1800b3b44
 * undefined8 __fastcall FUN_1800b3b44(longlong param_1, longlong param_2)
 * Address ranges: 1800b3b44-1800b3c7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b3b44(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  BOOL BVar3;
  byte *pbVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar2 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar2 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
  }
  plVar7 = (longlong *)(-(ulonglong)(param_2 != 0) & param_2 - 0x80U);
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)(param_2 + -0x58);
    if (param_2 == 0) {
      plVar6 = (longlong *)&DAT_00000028;
    }
    uVar8 = 0x8876086c;
    pbVar4 = (byte *)(param_2 + -0x30);
    if (param_2 == 0) {
      pbVar4 = &DAT_00000050;
    }
    if ((*pbVar4 & 2) == 0) goto LAB_1800b3c53;
    piVar5 = (int *)(param_2 + -0x2c);
    if (param_2 == 0) {
      piVar5 = (int *)&DAT_00000054;
    }
    if ((*piVar5 != 0) || (*plVar6 != param_1 + -0x6838)) goto LAB_1800b3c53;
    (**(code **)(*plVar7 + 0x30))(plVar7);
    plVar6 = (longlong *)(param_2 + -0x50);
    if (param_2 == 0) {
      plVar6 = (longlong *)&DAT_00000030;
    }
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar6 + 8))();
    }
  }
  plVar6 = *(longlong **)(param_1 + -0x67e8);
  if (plVar6 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar6[6];
    (**(code **)(*plVar6 + 0x38))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(longlong **)(param_1 + -0x67e8) = plVar7;
  uVar8 = 0;
  *(undefined1 *)(param_1 + 0x5cd1) = 1;
LAB_1800b3c53:
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar8;
}

