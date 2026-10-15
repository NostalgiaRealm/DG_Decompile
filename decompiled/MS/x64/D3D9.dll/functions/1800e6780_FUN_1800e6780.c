/*
 * FUN_1800e6780 at 1800e6780
 * undefined8 * __fastcall FUN_1800e6780(longlong * param_1, byte * param_2, uint param_3)
 * Address ranges: 1800e6780-1800e696b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800e6780(longlong *param_1,byte *param_2,uint param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong local_res8 [4];
  
  uVar13 = CONCAT44(0,param_3);
  local_res8[0] = (ulonglong)param_3;
  uVar10 = 0;
  if (param_3 != 0) {
    do {
      uVar11 = (int)uVar10 + 1;
      lVar9 = uVar10 * 0x20;
      local_res8[0] =
           local_res8[0] +
           ((longlong)*(int *)(param_2 + lVar9 + 0x18) + (longlong)*(int *)(param_2 + lVar9 + 0xc) +
            (ulonglong)*(uint *)(param_2 + lVar9 + 8) << 0x20 |
           (ulonglong)*(uint *)(param_2 + lVar9 + 0x1c)) +
           (ulonglong)*(uint *)(param_2 + lVar9 + 0x14) +
           (ulonglong)*(uint *)(param_2 + lVar9 + 0x10) + *(longlong *)(param_2 + lVar9);
      uVar10 = (ulonglong)uVar11;
    } while (uVar11 < param_3);
  }
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      uVar4 = uVar11 + uVar12 >> 1;
      uVar10 = *(ulonglong *)(*param_1 + (ulonglong)uVar4 * 0x18);
      uVar3 = uVar4;
      if (uVar10 <= local_res8[0]) {
        if (local_res8[0] <= uVar10) break;
        uVar12 = uVar4 + 1;
        uVar3 = uVar11;
        uVar4 = uVar12;
      }
      uVar11 = uVar3;
    } while (uVar11 != uVar12);
  }
  if ((uVar4 == *(uint *)((longlong)param_1 + 0xc)) ||
     (*(ulonglong *)((ulonglong)uVar4 * 0x18 + *param_1) != local_res8[0])) {
    FUN_1800e7bb4(param_1,uVar4,local_res8[0],local_res8);
  }
  plVar1 = *(longlong **)((ulonglong)uVar4 * 0x18 + 0x10 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    if ((int)plVar1[1] != 0) {
      lVar9 = *plVar1;
      uVar10 = 0;
      do {
        puVar7 = *(undefined8 **)(lVar9 + uVar10 * 8);
        if ((param_3 == *(uint *)(puVar7 + 1)) &&
           (iVar5 = FUN_1800fbe7c((byte *)*puVar7,param_2,uVar13 << 5), iVar5 == 0)) {
          return puVar7;
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(plVar1 + 1));
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13;
    uVar6 = SUB168(ZEXT816(0x20) * auVar2,0);
    if (SUB168(ZEXT816(0x20) * auVar2,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    puVar7 = (undefined8 *)thunk_FUN_1800fbccc(uVar6);
    if (puVar7 != (undefined8 *)0x0) {
      uVar11 = 0x10;
      puVar8 = (undefined8 *)FUN_1800fbccc(0x10);
      if (puVar8 != (undefined8 *)0x0) {
        FUN_1800fbec0(puVar7,(undefined8 *)param_2,uVar13 << 5);
        *puVar8 = puVar7;
        *(uint *)(puVar8 + 1) = param_3;
        iVar5 = *(int *)((longlong)plVar1 + 0xc);
        if ((int)plVar1[1] == iVar5) {
          if (iVar5 != 0) {
            uVar11 = iVar5 * 2;
          }
          uVar6 = SUB168(ZEXT816(8) * ZEXT416(uVar11),0);
          if (SUB168(ZEXT816(8) * ZEXT416(uVar11),8) != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          puVar7 = (undefined8 *)thunk_FUN_1800fbccc(uVar6);
          if (puVar7 == (undefined8 *)0x0) {
            return puVar8;
          }
          FUN_1800fbec0(puVar7,(undefined8 *)*plVar1,
                        (ulonglong)*(uint *)((longlong)plVar1 + 0xc) << 3);
          FUN_1800fbcf0((LPVOID)*plVar1);
          *plVar1 = (longlong)puVar7;
          *(uint *)((longlong)plVar1 + 0xc) = uVar11;
        }
        *(undefined8 **)(*plVar1 + (ulonglong)*(uint *)(plVar1 + 1) * 8) = puVar8;
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        return puVar8;
      }
      FUN_1800fbcf0(puVar7);
    }
  }
  return (undefined8 *)0x0;
}

