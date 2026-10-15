/*
 * FUN_1800b5674 at 1800b5674
 * undefined4 __fastcall FUN_1800b5674(longlong param_1, longlong param_2)
 * Address ranges: 1800b5674-1800b5781
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b5674(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  
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
  uVar7 = 0x8876086c;
  plVar6 = (longlong *)(-(ulonglong)(param_2 != 0) & param_2 - 0x78U);
  if (plVar6 != (longlong *)0x0) {
    piVar4 = (int *)(param_2 + -0x20);
    if (param_2 == 0) {
      piVar4 = (int *)&DAT_00000058;
    }
    if (*piVar4 == 3) goto LAB_1800b575a;
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    uVar5 = FUN_1800073d0(param_1 + -0x6838,plVar6);
    uVar7 = 0x8876086c;
    if ((char)uVar5 != '\0') {
      uVar7 = 0;
    }
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    if (*(longlong **)(lVar1 + 0xab58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0xab58) + 0x10))();
    }
    *(longlong **)(lVar1 + 0xab58) = plVar6;
    uVar7 = 0;
    *(undefined1 *)(lVar1 + 0xacfa) = 1;
  }
LAB_1800b575a:
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar7;
}

