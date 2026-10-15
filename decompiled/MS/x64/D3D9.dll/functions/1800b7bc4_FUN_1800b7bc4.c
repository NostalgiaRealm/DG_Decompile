/*
 * FUN_1800b7bc4 at 1800b7bc4
 * undefined8 __fastcall FUN_1800b7bc4(longlong param_1, longlong param_2)
 * Address ranges: 1800b7bc4-1800b7cb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b7bc4(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  BOOL BVar6;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar5 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar5 = true;
    BVar6 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar6 == 0) {
      FUN_1800044dc(0);
    }
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    FUN_1800b5f88(param_1 + -0x6838,param_2);
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      UNLOCK();
    }
    puVar4 = *(undefined8 **)(lVar3 + 0x4fb8);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 + -1 + *(int *)(puVar4 + 1) == 0) {
        FUN_1800c2d6c(puVar4);
      }
    }
    *(undefined1 *)(lVar3 + 0xacfc) = 1;
    *(longlong *)(lVar3 + 0x4fb8) = param_2;
  }
  if (bVar5) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return 0;
}

