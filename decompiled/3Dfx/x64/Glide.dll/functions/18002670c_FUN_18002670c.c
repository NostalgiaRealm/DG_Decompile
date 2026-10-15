/*
 * FUN_18002670c at 18002670c
 * ulonglong __fastcall FUN_18002670c(longlong param_1)
 * Address ranges: 18002670c-180026ad2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18002670c(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong lVar9;
  longlong lVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  longlong *local_res18;
  uint local_88 [4];
  uint local_78 [4];
  longlong *local_68 [5];
  longlong local_40;
  
  lVar5 = *(longlong *)(param_1 + 0x140);
  puVar1 = (uint *)(param_1 + 0x428);
  lVar10 = 0;
  local_res18 = (longlong *)0x0;
  iVar2 = *(int *)(*(longlong *)(lVar5 + 8) + 0x3f);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  uVar3 = *(undefined4 *)(lVar5 + 0xb4);
  uVar4 = *(uint *)(lVar5 + 0xb0);
  local_res8[0] = 0xffffffff;
  local_res10[0] = 0xffffffff;
  uVar7 = FUN_180030350(puVar1,(ulonglong)uVar4,uVar3,iVar2,
                        *(char *)(*(longlong *)(lVar5 + 8) + 0x54),(longlong *)&local_res18,
                        local_res10,local_res8);
  if ((char)uVar7 != '\0') {
    uVar8 = FUN_18002ff0c((uint *)(param_1 + 0x148),(ulonglong)uVar4,uVar3,*(int *)(param_1 + 0x30),
                          local_68,(longlong *)(local_68 + 3),local_88,local_78);
    if ((char)uVar8 != '\0') {
      uVar8 = FUN_18002ff0c((uint *)(param_1 + 0x2b8),(ulonglong)uVar4,uVar3,
                            *(int *)(param_1 + 0x30),local_68 + 1,(longlong *)(local_68 + 4),
                            local_88 + 1,local_78 + 1);
      if ((char)uVar8 != '\0') {
        uVar8 = FUN_18002ff0c(puVar1,(ulonglong)uVar4,uVar3,*(int *)(param_1 + 0x30),local_68 + 2,
                              &local_40,local_88 + 2,local_78 + 2);
        if ((char)uVar8 != '\0') {
          FUN_1800305c0((longlong)puVar1);
          *(longlong **)(param_1 + 0x520) = local_res18;
          *(uint *)(param_1 + 0x52c) = local_res8[0];
          *(uint *)(param_1 + 0x528) = local_res10[0];
          do {
            lVar9 = lVar10 * 0x170;
            FUN_18003022c((longlong)((uint *)(param_1 + 0x148) + lVar10 * 0x5c));
            plVar6 = local_68[lVar10];
            *(uint *)(param_1 + 0x230 + lVar9) = local_88[lVar10];
            *(uint *)(param_1 + 0x234 + lVar9) = local_78[lVar10];
            lVar5 = lVar10 + 3;
            lVar10 = lVar10 + 1;
            *(longlong **)(param_1 + 0x228 + lVar9) = local_68[lVar5];
            *(longlong **)(param_1 + 0x220 + lVar9) = plVar6;
            *(uint *)(param_1 + 0x170 + lVar9) = uVar4;
            *(undefined4 *)(param_1 + 0x174 + lVar9) = uVar3;
            *(undefined4 *)(param_1 + 0x178 + lVar9) = *(undefined4 *)(param_1 + 0x30);
          } while (lVar10 != 3);
          return CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
        }
        (**(code **)(*local_68[1] + 0x10))();
        (**(code **)(*local_68[4] + 0x10))();
        if (local_88[1] != 0xffffffff) {
          lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1930);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
          FUN_1800469e0(lVar5,local_88[1],2);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
        }
        if (local_78[1] != 0xffffffff) {
          lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1938);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
          FUN_1800469e0(lVar5,local_78[1],2);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
        }
      }
      (**(code **)(*local_68[0] + 0x10))();
      (**(code **)(*local_68[3] + 0x10))();
      if (local_88[0] != 0xffffffff) {
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1930);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
        FUN_1800469e0(lVar5,local_88[0],2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
      }
      if (local_78[0] != 0xffffffff) {
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1938);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
        FUN_1800469e0(lVar5,local_78[0],2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
      }
    }
    uVar7 = (**(code **)(*local_res18 + 0x10))();
    if (local_res8[0] != 0xffffffff) {
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1940);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
      FUN_1800469e0(lVar5,local_res8[0],1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
      uVar7 = extraout_RAX;
    }
    uVar4 = local_res10[0];
    if (local_res10[0] != 0xffffffff) {
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1930);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
      FUN_1800469e0(lVar5,uVar4,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
      uVar7 = extraout_RAX_00;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}

