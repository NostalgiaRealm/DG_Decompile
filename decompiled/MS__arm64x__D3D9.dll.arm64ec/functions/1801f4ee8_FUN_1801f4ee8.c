/*
 * FUN_1801f4ee8 at 1801f4ee8
 * undefined FUN_1801f4ee8(void)
 * Address ranges: 1801f4ee8-1801f4ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801f4ee8(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar3) {
    uVar5 = iVar3 << 1;
    if (iVar3 == 0) {
      uVar5 = 0x10;
    }
    uVar10 = CONCAT44(0,uVar5);
    uVar9 = uVar10 * 0x18;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar10;
    if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar11 = uVar9 + 8;
    if (0xfffffffffffffff7 < uVar9) {
      lVar11 = -1;
    }
    puVar7 = (ulonglong *)FUN_1802229a8(lVar11);
    if (puVar7 != (ulonglong *)0x0) {
      puVar2 = puVar7 + 1;
      *puVar7 = uVar10;
      puVar7 = puVar2;
      if (uVar5 != 0) {
        do {
          puVar7[1] = 0;
          puVar7[2] = 0;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + 3;
        } while (uVar10 != 0);
      }
      if (puVar2 != (ulonglong *)0x0) {
        uVar4 = *(uint *)((longlong)param_1 + 0xc);
        uVar9 = 0;
        lVar11 = *param_1;
        if (uVar4 != 0) {
          do {
            FUN_1801f50a0(puVar2 + uVar9 * 3,lVar11 + uVar9 * 0x18);
            uVar1 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar1;
          } while (uVar1 < uVar4);
        }
        if (*param_1 != 0) {
          FUN_1801f51d8();
        }
        *param_1 = (longlong)puVar2;
        *(uint *)((longlong)param_1 + 0xc) = uVar5;
        goto LAB_1801f4fb4;
      }
    }
    uVar8 = 0;
  }
  else {
LAB_1801f4fb4:
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    FUN_1801f50a0(*param_1 + (ulonglong)uVar5 * 0x18,param_2);
    uVar8 = 1;
  }
  return uVar8;
}

