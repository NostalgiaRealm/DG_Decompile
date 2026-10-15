/*
 * FUN_180084650 at 180084650
 * undefined FUN_180084650(void)
 * Address ranges: 180084650-1800848db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180084650(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  int local_88 [12];
  undefined1 auStack_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  
  *(undefined1 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    func_0x0001801bad48(&local_a0);
    iVar2 = *(int *)(param_1 + 0x34);
    iVar3 = local_a0._4_4_;
    if (*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 +
                0x6cc) == 0xa000) {
      uVar7 = FUN_180082d80(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                            *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),iVar2,1,
                            local_a0 & 0xffffffff,local_a0._4_4_,0,0,0,8,0,0,0,0,0);
      if ((uVar7 & 1) != 0) {
LAB_18008486c:
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
    }
    else {
      uVar6 = 4;
      if (iVar2 == 1) {
        uVar6 = 0;
      }
      uVar7 = FUN_180082d80(param_1 + 0x60,*(undefined4 *)(param_1 + 0x24),
                            *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),iVar2,1,
                            local_a0 & 0xffffffff,local_a0._4_4_,0,local_94._4_4_,0,0x48,0,uVar6,0,0
                            ,0);
      if ((uVar7 & 1) != 0) {
        if (iVar2 == 1) goto LAB_18008486c;
        plVar11 = *(longlong **)(param_1 + 0x78);
        cVar5 = '\0';
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x50))(plVar11,auStack_58);
          local_88[0] = iVar3;
          local_88[1] = 9;
          local_98 = 0;
          local_88[4] = 0;
          local_88[5] = 0;
          local_88[2] = 0;
          local_88[3] = -1;
          local_a0 = 0x500000000;
          local_88[6] = 0;
          local_88[7] = 4;
          local_88[8] = 0;
          local_88[9] = 0;
          piVar1 = local_88;
          if (iVar3 == 0) {
            piVar1 = (int *)0x0;
          }
          local_94 = 0;
          local_88[10] = 0;
          local_88[0xb] = 0;
          *(longlong **)(param_1 + 0x130) = plVar11;
          cVar5 = FUN_180082b40(param_1 + 0x118,piVar1,0,0,local_50,uStack_4c,0);
          if (cVar5 == '\0') {
            *(undefined8 *)(param_1 + 0x130) = 0;
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x130) + 8))();
          }
        }
        *(char *)(param_1 + 0x168) = cVar5;
        uVar10 = 0;
        if (*(int *)(param_1 + 0x34) != 0) {
          do {
            uVar9 = 0;
            if (*(int *)(param_1 + 0x30) != 0) {
              do {
                FUN_1800a2b98(param_1,*(undefined4 *)(param_1 + 0x28),uVar9);
                uVar6 = FUN_1800a2b50(param_1,*(undefined4 *)(param_1 + 0x24));
                (*__imp_USER32_dll_SetRect)
                          (*(longlong *)(param_1 + 0x148) +
                           (ulonglong)(uVar9 + *(int *)(param_1 + 0x3c) * uVar10) * 0x28 + 0x18,0,0,
                           uVar6);
                uVar9 = uVar9 + 1;
              } while (uVar9 < *(uint *)(param_1 + 0x30));
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(param_1 + 0x34));
        }
      }
    }
    if (*(char *)(param_1 + 0x168) != '\0') {
      return true;
    }
    FUN_180083208(param_1 + 0x60,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
LAB_1800848a8:
    bVar4 = false;
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0) {
      lVar8 = thunk_FUN_180102f80(0x400);
      *(longlong *)(param_1 + 0x10) = lVar8;
      if (lVar8 == 0) goto LAB_1800848a8;
    }
    cVar5 = FUN_180083fc0(param_1,1);
    bVar4 = cVar5 != '\0';
    *(char *)(param_1 + 0x168) = cVar5;
  }
  return bVar4;
}

