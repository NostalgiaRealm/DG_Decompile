/*
 * FUN_1800570f4 at 1800570f4
 * undefined __fastcall FUN_1800570f4(longlong param_1, ulonglong * param_2)
 * Address ranges: 1800570f4-1800572e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800570f4(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res8 [2];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  FUN_180057064(param_1,*param_2);
  local_res8[0] = *(uint *)(param_1 + 0x54);
  if (local_res8[0] == 0xffffffff) {
LAB_1800571f3:
    uVar9 = *(uint *)(param_1 + 0x48);
    uVar2 = *(uint *)(param_1 + 0x4c);
    local_res8[0] = uVar9;
    if (uVar9 == uVar2) {
      uVar8 = 0x10;
      if (uVar2 != 0) {
        uVar8 = (ulonglong)(uVar2 * 2);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar5 = SUB168(ZEXT816(0x40) * auVar4,0);
      if (SUB168(ZEXT816(0x40) * auVar4,8) != 0) {
        uVar5 = 0xffffffffffffffff;
      }
      puVar6 = (undefined8 *)thunk_FUN_1800fbccc(uVar5);
      if (puVar6 == (undefined8 *)0x0) goto LAB_1800572c9;
      FUN_1800fbec0(puVar6,*(undefined8 **)(param_1 + 0x40),
                    (ulonglong)*(uint *)(param_1 + 0x4c) << 6);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x40));
      *(undefined8 **)(param_1 + 0x40) = puVar6;
      *(int *)(param_1 + 0x4c) = (int)uVar8;
    }
    uVar8 = param_2[1];
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar7 = (ulonglong)*(uint *)(param_1 + 0x48) * 0x40;
    *(ulonglong *)(lVar7 + lVar3) = *param_2;
    ((ulonglong *)(lVar7 + lVar3))[1] = uVar8;
    uVar8 = param_2[3];
    puVar1 = (ulonglong *)(lVar7 + 0x10 + lVar3);
    *puVar1 = param_2[2];
    puVar1[1] = uVar8;
    uVar8 = param_2[5];
    puVar1 = (ulonglong *)(lVar7 + 0x20 + lVar3);
    *puVar1 = param_2[4];
    puVar1[1] = uVar8;
    uVar8 = param_2[7];
    puVar1 = (ulonglong *)(lVar7 + 0x30 + lVar3);
    *puVar1 = param_2[6];
    puVar1[1] = uVar8;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    if (*(char *)((longlong)param_2 + 0x3c) != '\0') {
      FUN_1800578cc((longlong *)(param_1 + 0x68),param_2,local_res8);
      uVar9 = local_res8[0];
    }
    if (*(int *)(param_1 + 0x54) != -1) {
      *(uint *)((ulonglong)*(uint *)(param_1 + 0x54) * 0x40 + 0x38 + *(longlong *)(param_1 + 0x40))
           = uVar9;
    }
    *(uint *)(param_1 + 0x54) = uVar9;
    if (*(int *)(param_1 + 0x50) == -1) {
      *(uint *)(param_1 + 0x50) = uVar9;
    }
  }
  else {
    if (*(longlong *)((ulonglong)local_res8[0] * 0x40 + *(longlong *)(param_1 + 0x40)) != 0) {
      local_res8[0] =
           *(uint *)((ulonglong)local_res8[0] * 0x40 + 0x38 + *(longlong *)(param_1 + 0x40));
    }
    if (local_res8[0] == 0xffffffff) goto LAB_1800571f3;
    if (*(char *)((longlong)param_2 + 0x3c) != '\0') {
      FUN_1800578cc((longlong *)(param_1 + 0x68),param_2,local_res8);
    }
    lVar10 = (ulonglong)local_res8[0] * 0x40;
    lVar7 = 0;
    *(ulonglong *)(lVar10 + *(longlong *)(param_1 + 0x40)) = *param_2;
    *(ulonglong *)(lVar10 + 8 + *(longlong *)(param_1 + 0x40)) = param_2[1];
    *(ulonglong *)(lVar10 + 0x10 + *(longlong *)(param_1 + 0x40)) = param_2[2];
    lVar3 = *(longlong *)(param_1 + 0x40);
    uVar8 = param_2[4];
    puVar1 = (ulonglong *)(lVar10 + 0x18 + lVar3);
    *puVar1 = param_2[3];
    puVar1[1] = uVar8;
    uVar8 = param_2[6];
    puVar1 = (ulonglong *)(lVar10 + 0x28 + lVar3);
    *puVar1 = param_2[5];
    puVar1[1] = uVar8;
    do {
      *(undefined1 *)(lVar7 + 0x3c + *(longlong *)(param_1 + 0x40) + lVar10) =
           *(undefined1 *)((longlong)param_2 + lVar7 + 0x3c);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2);
    *(uint *)(param_1 + 0x54) = local_res8[0];
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
LAB_1800572c9:
                    /* WARNING: Could not recover jumptable at 0x0001800572e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
}

