/*
 * FUN_1800b7cb8 at 1800b7cb8
 * uint __fastcall FUN_1800b7cb8(longlong param_1, uint param_2)
 * Address ranges: 1800b7cb8-1800b7e32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800b7cb8(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar4 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar4 = true;
    BVar5 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar5 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar9 = 0;
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (*(longlong *)(param_1 + 0x5c60) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x5c60) + 0x28c);
    }
    if (uVar8 != param_2) {
      lVar7 = FUN_1800b8c38((longlong *)(param_1 + 0x110),local_res10);
      uVar9 = ~-(uint)(lVar7 != 0) & 0x8007000e;
      if (lVar7 != 0) {
        FUN_1800b5f88(param_1 + -0x6838,lVar7);
      }
    }
  }
  else {
    lVar7 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    uVar8 = 0;
    if (*(longlong *)(lVar7 + 0x4fb8) != 0) {
      uVar8 = *(uint *)(*(longlong *)(lVar7 + 0x4fb8) + 0x28c);
    }
    uVar9 = 0;
    if (uVar8 != param_2) {
      lVar6 = FUN_1800b8c38((longlong *)(param_1 + 0x110),local_res10);
      uVar9 = ~-(uint)(lVar6 != 0) & 0x8007000e;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
        UNLOCK();
        puVar3 = *(undefined8 **)(lVar7 + 0x4fb8);
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)puVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 + -1 + *(int *)(puVar3 + 1) == 0) {
            FUN_1800c2d6c(puVar3);
          }
        }
        *(undefined1 *)(lVar7 + 0xacfc) = 1;
        *(longlong *)(lVar7 + 0x4fb8) = lVar6;
      }
    }
  }
  if (bVar4) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar9;
}

