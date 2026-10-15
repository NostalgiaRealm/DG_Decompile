/*
 * FUN_1800c035c at 1800c035c
 * undefined8 __fastcall FUN_1800c035c(longlong param_1)
 * Address ranges: 1800c035c-1800c049b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c035c(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  undefined1 *puVar4;
  uint *puVar5;
  longlong *plVar6;
  byte *pbVar7;
  char *pcVar8;
  
  pbVar7 = (byte *)(*(longlong *)(param_1 + -0x38) + -0x59c0);
  if (*(longlong *)(param_1 + -0x38) == 0) {
    pbVar7 = &DAT_00000e78;
  }
  if (((*pbVar7 & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
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
  if (*(longlong *)(param_1 + -0x60) != 0) {
    if ((*(longlong **)(param_1 + -0x18) != (longlong *)0x0) &&
       (((*(uint *)(param_1 + -0x28) & 0x200) != 0 || (*(char *)(param_1 + -5) != '\0')))) {
      pcVar8 = (char *)(*(longlong *)(param_1 + -0x38) + -0x6818);
      if (*(longlong *)(param_1 + -0x38) == 0) {
        pcVar8 = &DAT_00000020;
      }
      if (*pcVar8 != '\0') {
        (**(code **)(**(longlong **)(param_1 + -0x18) + 0x20))();
        *(undefined8 *)(param_1 + -0x60) = 0;
        if (*(char *)(param_1 + -8) != '\0') {
          puVar5 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x54);
          if (*(longlong *)(param_1 + -0x38) == 0) {
            puVar5 = (uint *)&DAT_000067e4;
          }
          *puVar5 = *puVar5 & 0xfffffffe;
        }
        goto LAB_1800c046d;
      }
    }
    *(undefined8 *)(param_1 + -0x60) = 0;
    LOCK();
    *(int *)(param_1 + -0x4c) = *(int *)(param_1 + -0x4c) + -1;
    UNLOCK();
    lVar1 = *(longlong *)(param_1 + -0x38);
    plVar6 = (longlong *)(lVar1 + -0x178);
    if (lVar1 == 0) {
      plVar6 = (longlong *)&DAT_000066c0;
    }
    if (*plVar6 == param_1 + -0x78) {
      puVar4 = (undefined1 *)(lVar1 + -0x20);
      if (lVar1 == 0) {
        puVar4 = &DAT_00006818;
      }
      *puVar4 = 1;
    }
  }
LAB_1800c046d:
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return 0;
}

