/*
 * FUN_18010bd88 at 18010bd88
 * undefined FUN_18010bd88(void)
 * Address ranges: 18010bd88-18010be1b;18010be2c-18010be93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18010bd88(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar2) {
    uVar3 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    uVar8 = CONCAT44(0,uVar3);
    lVar7 = uVar8 * 0x78;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar8;
    if (SUB168(auVar4 * ZEXT816(0x78),8) != 0) {
      lVar7 = -1;
    }
    lVar7 = FUN_1802229a8(lVar7);
    if (lVar7 != 0) {
      lVar6 = lVar7;
      if (uVar3 != 0) {
        do {
          *(undefined8 *)(lVar6 + 8) = 0;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          uVar8 = uVar8 - 1;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          lVar6 = lVar6 + 0x78;
        } while (uVar8 != 0);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar7,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x78);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    uVar9 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    puVar1 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x78);
    puVar1[1] = param_2[1];
    *puVar1 = uVar9;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    uVar9 = param_2[4];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar9;
    puVar1[7] = uVar11;
    puVar1[6] = uVar10;
    uVar9 = param_2[8];
    uVar11 = param_2[0xb];
    uVar10 = param_2[10];
    puVar1[9] = param_2[9];
    puVar1[8] = uVar9;
    puVar1[0xb] = uVar11;
    puVar1[10] = uVar10;
    uVar9 = param_2[0xc];
    puVar1[0xd] = param_2[0xd];
    puVar1[0xc] = uVar9;
    puVar1[0xe] = param_2[0xe];
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return uVar5;
}

