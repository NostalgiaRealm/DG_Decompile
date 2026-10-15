/*
 * FUN_18003f688 at 18003f688
 * undefined8 __fastcall FUN_18003f688(longlong param_1)
 * Address ranges: 18003f688-18003f8f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003f688(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong local_res8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  uVar6 = 0;
  uVar2 = FUN_1800e1704(*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930),3);
  *(uint *)(param_1 + 0x180) = uVar2;
  if (uVar2 != 0xffffffff) {
    uVar8 = 0;
    uVar6 = 1;
    do {
      local_a8 = 0x1c;
      local_88 = 0;
      local_80[6] = 3;
      iVar7 = (int)uVar8;
      local_a4 = 4;
      local_a0 = 0x1688;
      local_98 = 0xffffffff00000000;
      if (iVar7 == 1) {
        uVar2 = 6;
        local_a4 = 9;
      }
      else {
        uVar2 = 1;
        local_80[6] = 3;
        if (iVar7 == 2) {
          local_80[6] = 4;
          local_a4 = 8;
        }
      }
      uStack_90 = 0;
      local_60 = 0;
      local_58 = 1;
      local_50 = 1;
      local_4c = (undefined2)uVar2;
      local_4a = 1;
      local_48 = 0x1c;
      local_44 = 1;
      local_3c = 0;
      lVar3 = FUN_1800e2130(*(longlong *)(param_1 + 0x188) + 0x6d0,
                            (ulonglong)*(uint *)(param_1 + 400),local_80 + 6);
      *(longlong *)(param_1 + 0x168 + uVar8 * 8) = lVar3;
      if (lVar3 == 0) goto LAB_18003f874;
      local_80[0] = 0;
      local_80[1] = 0;
      uVar9 = 0;
      local_80[2] = 0;
      local_80[3] = 1;
      local_80[4] = 1;
      local_80[5] = 1;
      do {
        FUN_1800e5510(*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1518),
                      *(longlong **)(param_1 + 0x168 + uVar8 * 8),uVar9,
                      (longlong *)(*(longlong *)(param_1 + 0x198) + 0x16d0),local_80,
                      (uint *)&DAT_18010f404,0,0);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar2);
      plVar4 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930),&local_res8,
                             *(uint *)(param_1 + 0x180),iVar7);
      plVar1 = *(longlong **)
                (*(longlong *)(param_1 + 0x188) + 0x6d0 + (ulonglong)*(uint *)(param_1 + 400) * 0x20
                );
      (**(code **)(*plVar1 + 0x90))
                (plVar1,*(undefined8 *)(param_1 + 0x168 + uVar8 * 8),&local_a8,*plVar4);
      uVar8 = (ulonglong)(iVar7 + 1U);
    } while (iVar7 + 1U < 3);
  }
LAB_18003f8c2:
  uVar5 = FUN_1800e2ae8(*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1518) + 8,'\0');
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),uVar6);
LAB_18003f874:
  while ((int)uVar8 != 0) {
    uVar8 = (ulonglong)((int)uVar8 - 1);
    (**(code **)(**(longlong **)(param_1 + 0x168 + uVar8 * 8) + 0x10))();
  }
  uVar2 = *(uint *)(param_1 + 0x180);
  if (uVar2 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_1800e149c(lVar3,uVar2,3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  uVar6 = 0;
  goto LAB_18003f8c2;
}

