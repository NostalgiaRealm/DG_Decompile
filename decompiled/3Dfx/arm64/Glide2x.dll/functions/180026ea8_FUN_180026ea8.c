/*
 * FUN_180026ea8 at 180026ea8
 * undefined8 __cdecl FUN_180026ea8(longlong param_1)
 * Address ranges: 180026ea8-1800272fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180026ea8(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint local_b0;
  uint local_ac;
  longlong *local_a8;
  uint local_a0 [4];
  uint local_90 [4];
  longlong *local_80 [2];
  longlong lStack_70;
  longlong *local_68 [2];
  longlong lStack_58;
  
  local_a8 = (longlong *)0x0;
  lVar9 = *(longlong *)(param_1 + 0x140);
  local_b0 = 0xffffffff;
  local_ac = 0xffffffff;
  iVar4 = *(int *)(*(longlong *)(lVar9 + 8) + 0x3f);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x30) = iVar4;
  uVar1 = *(uint *)(lVar9 + 0xb0);
  uVar2 = *(undefined4 *)(lVar9 + 0xb4);
  uVar7 = FUN_180032620((uint *)(param_1 + 0x428),(ulonglong)uVar1,uVar2,iVar4,
                        (uint)*(byte *)(*(longlong *)(lVar9 + 8) + 0x54),(longlong *)&local_a8,
                        &local_ac,&local_b0);
  if ((uVar7 & 1) != 0) {
    uVar7 = FUN_180032148((uint *)(param_1 + 0x148),(ulonglong)uVar1,uVar2,*(int *)(param_1 + 0x30),
                          (longlong *)local_80,(longlong *)local_68,local_a0,local_90);
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_180032148((uint *)(param_1 + 0x2b8),(ulonglong)uVar1,uVar2,
                            *(int *)(param_1 + 0x30),(longlong *)(local_80 + 1),
                            (longlong *)(local_68 + 1),local_a0 + 1,local_90 + 1);
      if ((uVar7 & 1) != 0) {
        uVar7 = FUN_180032148((uint *)(param_1 + 0x428),(ulonglong)uVar1,uVar2,
                              *(int *)(param_1 + 0x30),&lStack_70,&lStack_58,local_a0 + 2,
                              local_90 + 2);
        if ((uVar7 & 1) != 0) {
          lVar9 = *(longlong *)(param_1 + 0x4f0);
          if ((*(char *)(lVar9 + 0x14c4) != '\0') &&
             (DVar6 = GetCurrentThreadId(), *(DWORD *)(lVar9 + 0x14b4) != DVar6)) {
            FUN_180043140(*(longlong *)(param_1 + 0x4f0) + 0x12c0);
          }
          FUN_180048d98(*(longlong *)(param_1 + 0x4e8),*(longlong **)(param_1 + 0x520));
          uVar3 = *(uint *)(param_1 + 0x52c);
          *(undefined8 *)(param_1 + 0x520) = 0;
          if (uVar3 != 0xffffffff) {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x1940);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
            FUN_180049988(lVar9,uVar3,1);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
          }
          *(undefined4 *)(param_1 + 0x52c) = 0xffffffff;
          uVar3 = *(uint *)(param_1 + 0x528);
          if (uVar3 != 0xffffffff) {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x1930);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
            FUN_180049988(lVar9,uVar3,1);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
          }
          lVar9 = 0;
          *(longlong **)(param_1 + 0x520) = local_a8;
          *(uint *)(param_1 + 0x528) = local_ac;
          *(uint *)(param_1 + 0x52c) = local_b0;
          do {
            FUN_180032490((longlong)((uint *)(param_1 + 0x148) + lVar9 * 0x5c));
            lVar11 = param_1 + lVar9 * 0x170;
            uVar3 = local_90[lVar9];
            uVar5 = local_a0[lVar9];
            plVar10 = local_80[lVar9];
            *(uint *)(lVar11 + 0x170) = uVar1;
            *(undefined4 *)(lVar11 + 0x174) = uVar2;
            *(uint *)(lVar11 + 0x230) = uVar5;
            *(uint *)(lVar11 + 0x234) = uVar3;
            plVar8 = local_68[lVar9];
            lVar9 = lVar9 + 1;
            *(longlong **)(lVar11 + 0x220) = plVar10;
            *(longlong **)(lVar11 + 0x228) = plVar8;
            *(undefined4 *)(lVar11 + 0x178) = *(undefined4 *)(param_1 + 0x30);
          } while (lVar9 != 3);
          return 1;
        }
        (**(code **)(*local_80[1] + 0x10))();
        (**(code **)(*local_68[1] + 0x10))();
        if (local_a0[1] != 0xffffffff) {
          lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1930);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
          FUN_180049988(lVar9,local_a0[1],2);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
        }
        if (local_90[1] != 0xffffffff) {
          lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1938);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
          FUN_180049988(lVar9,local_90[1],2);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
        }
      }
      (**(code **)(*local_80[0] + 0x10))();
      (**(code **)(*local_68[0] + 0x10))();
      if (local_a0[0] != 0xffffffff) {
        lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1930);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
        FUN_180049988(lVar9,local_a0[0],2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
      }
      if (local_90[0] != 0xffffffff) {
        lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1938);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
        FUN_180049988(lVar9,local_90[0],2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
      }
    }
    (**(code **)(*local_a8 + 0x10))();
    uVar1 = local_b0;
    if (local_b0 != 0xffffffff) {
      lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1940);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
      FUN_180049988(lVar9,uVar1,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
    }
    uVar1 = local_ac;
    if (local_ac != 0xffffffff) {
      lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1930);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
      FUN_180049988(lVar9,uVar1,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x28));
    }
  }
  return 0;
}

