/*
 * FUN_18015ad28 at 18015ad28
 * undefined FUN_18015ad28(void)
 * Address ranges: 18015ad28-18015ae43;18015b000-18015b15f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015ad28(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  FUN_1801583c8(param_1,param_3,0);
  lVar13 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar13 + 0x12c0);
  if (*(char *)(lVar13 + 0x14c4) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar2 = *(uint *)(param_1 + 0xf7c8);
      if (uVar2 == 0) {
LAB_18015ae24:
        lVar13 = FUN_1802229a8(0x254);
        if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar13,param_3,0x254);
        }
        uVar8 = 0;
      }
      else {
        uVar3 = *param_3;
        uVar10 = 0;
        uVar9 = uVar2;
        do {
          uVar4 = uVar9 + uVar10 >> 1;
          uVar12 = (ulonglong)uVar4;
          uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar12 * 0x18);
          if (uVar8 <= uVar3) {
            if (uVar3 <= uVar8) break;
            uVar10 = uVar4 + 1;
            uVar12 = (ulonglong)(uVar4 + 1);
            uVar4 = uVar9;
          }
          uVar9 = uVar4;
        } while (uVar9 != uVar10);
        if ((((uint)uVar12 == uVar2) ||
            (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar12 * 0x18),
            *puVar1 != (ulonglong)uVar3)) || (puVar1 = puVar1 + 2, puVar1 == (ulonglong *)0x0))
        goto LAB_18015ae24;
        uVar8 = *puVar1;
      }
      *(ulonglong *)(param_1 + 0x100f8) = uVar8;
    }
    param_3 = *(uint **)(param_1 + 0x100f8);
  }
  bVar5 = (*(uint *)(param_1 + 0x10100) & 0x7fffffff) != 0;
  lVar13 = *(longlong *)(param_1 + 0xf6e0);
  if (*(char *)(lVar13 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_1802218b0(lVar13 + 0x12c0,0x30);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar13 + 0x14c0);
      puVar6[1] = 0x30;
      puVar6[2] = param_1;
      *(undefined4 *)(puVar6 + 3) = param_2;
      *(uint **)((longlong)puVar6 + 0x1c) = param_3;
      *(undefined8 *)((longlong)puVar6 + 0x24) = param_4;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = param_5;
      *(undefined4 *)(puVar6 + 6) = param_6;
      *(undefined1 *)((longlong)puVar6 + 0x34) = param_7;
      puVar11 = (undefined8 *)((longlong)puVar6 + 0x43U & 0xfffffffffffffff8);
      *(bool *)(puVar6 + 7) = bVar5;
      DataMemoryBarrier(2,3);
      *puVar11 = 0;
      *puVar6 = FUN_18015b168;
      *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar11;
      if (*(char *)(lVar13 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar13 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar13 + 0x1340));
        return;
      }
      goto LAB_18015b13c;
    }
    FUN_180221bb0(lVar13 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar13 + 0x12c0);
  }
  plVar7 = *(longlong **)(lVar13 + 0x14a0);
  *plVar7 = param_1;
  *(undefined4 *)(plVar7 + 1) = param_2;
  *(uint **)((longlong)plVar7 + 0xc) = param_3;
  *(undefined8 *)((longlong)plVar7 + 0x14) = param_4;
  *(undefined4 *)((longlong)plVar7 + 0x1c) = param_5;
  *(undefined4 *)(plVar7 + 4) = param_6;
  *(undefined1 *)((longlong)plVar7 + 0x24) = param_7;
  *(bool *)(plVar7 + 5) = bVar5;
  FUN_18015b168();
LAB_18015b13c:
  FUN_180221bb0(lVar13 + 0x12c0);
  return;
}

