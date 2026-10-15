/*
 * FUN_1800b549c at 1800b549c
 * undefined4 __fastcall FUN_1800b549c(longlong param_1, uint param_2, longlong param_3, int param_4, int param_5)
 * Address ranges: 1800b549c-1800b560a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b549c(longlong param_1,uint param_2,longlong param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong *plVar2;
  byte *pbVar3;
  bool bVar4;
  BOOL BVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)param_2;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar4 = false;
  }
  else {
    bVar4 = true;
    BVar5 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar5 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar9 = 0x8876086c;
  plVar8 = (longlong *)(-(ulonglong)(param_3 != 0) & param_3 - 0x90U);
  if (param_2 < 0x10) {
    if (plVar8 != (longlong *)0x0) {
      piVar6 = (int *)(param_3 + -0x34);
      if (param_3 == 0) {
        piVar6 = (int *)&DAT_0000005c;
      }
      if (*piVar6 == 3) goto LAB_1800b55de;
    }
    if (*(char *)(param_1 + -0x642c) == '\0') {
      uVar7 = FUN_180007228(param_1 + -0x6838,param_2,plVar8,param_4,param_5);
      uVar9 = 0x8876086c;
      if ((char)uVar7 != '\0') {
        uVar9 = 0;
      }
    }
    else {
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      plVar2 = *(longlong **)(lVar1 + 0xab60 + uVar10 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
      }
      *(longlong **)(lVar1 + 0xab60 + uVar10 * 8) = plVar8;
      *(int *)(lVar1 + 0xac20 + uVar10 * 4) = param_5;
      *(int *)(lVar1 + 44000 + uVar10 * 4) = param_4;
      pbVar3 = (byte *)(lVar1 + 0xacf0 + (ulonglong)(param_2 >> 6) * 8 +
                       ((longlong)(ulonglong)(param_2 & 0x3f) >> 3));
      *pbVar3 = *pbVar3 | '\x01' << ((ulonglong)(param_2 & 0x3f) & 7);
      uVar9 = 0;
    }
  }
LAB_1800b55de:
  if (bVar4) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar9;
}

