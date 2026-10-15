/*
 * FUN_1800b793c at 1800b793c
 * undefined4 __fastcall FUN_1800b793c(longlong param_1, ulonglong param_2)
 * Address ranges: 1800b793c-1800b7a7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b793c(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  BOOL BVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  uint local_res8 [8];
  
  uVar10 = 0x8876086c;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar5 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar5 = true;
    BVar7 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar7 == 0) {
      FUN_1800044dc(0);
    }
  }
  FUN_1800fa780(local_res8);
  uVar9 = param_2;
  lVar8 = FUN_1800bf32c(param_1 + 0xd8,param_2);
  if (*(char *)(param_1 + -0x642c) == '\0') {
    cVar6 = FUN_1800b5fe4(param_1 + -0x6838,uVar9,lVar8);
    uVar10 = 0x8876086c;
    if (cVar6 != '\0') {
      uVar10 = 0;
    }
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (param_2 == 0) {
      puVar4 = *(undefined8 **)(lVar3 + 0x4fa8);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)puVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 + -1 + *(int *)(puVar4 + 1) == 0) {
          FUN_1800c04c0(puVar4);
        }
      }
      *(undefined8 *)(lVar3 + 0x4fa8) = 0;
    }
    else {
      if (lVar8 == 0) goto LAB_1800b7a4d;
      LOCK();
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      UNLOCK();
      puVar4 = *(undefined8 **)(lVar3 + 0x4fa8);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)puVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 + -1 + *(int *)(puVar4 + 1) == 0) {
          FUN_1800c04c0(puVar4);
        }
      }
      *(ulonglong *)(lVar3 + 0x4fa8) = param_2;
    }
    *(undefined1 *)(lVar3 + 0xacf8) = 1;
    uVar10 = 0;
  }
LAB_1800b7a4d:
  FUN_1800fa7bc();
  if (bVar5) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar10;
}

