/*
 * FUN_1800146a8 at 1800146a8
 * undefined8 __fastcall FUN_1800146a8(longlong * param_1, undefined8 * param_2)
 * Address ranges: 1800146a8-180014802
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800146a8(longlong *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  puVar8 = (undefined8 *)(ulonglong)uVar2;
  if (*(uint *)(param_1 + 1) == uVar2) {
    uVar9 = 0x10;
    if (uVar2 != 0) {
      uVar9 = uVar2 * 2;
    }
    uVar10 = CONCAT44(0,uVar9);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    uVar5 = SUB168(ZEXT816(0x28) * auVar3,0);
    if (SUB168(ZEXT816(0x28) * auVar3,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar6 = uVar5 + 8;
    if (0xfffffffffffffff7 < uVar5) {
      lVar6 = -1;
    }
    puVar7 = (ulonglong *)thunk_FUN_1800fbccc(lVar6);
    if (puVar7 != (ulonglong *)0x0) {
      *puVar7 = uVar10;
      puVar1 = puVar7 + 1;
      puVar7 = puVar1;
      if (uVar9 != 0) {
        do {
          puVar7[2] = 0;
          puVar7[3] = 0;
          *(undefined1 *)(puVar7 + 4) = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = puVar7 + 5;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (puVar1 != (ulonglong *)0x0) {
        puVar8 = FUN_1800fbec0(puVar1,(undefined8 *)*param_1,
                               (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x28);
        lVar6 = *param_1;
        if (lVar6 != 0) {
          lVar11 = *(longlong *)(lVar6 + -8);
          puVar8 = (undefined8 *)(lVar6 + lVar11 * 0x28);
          while (lVar11 != 0) {
            lVar11 = lVar11 + -1;
            if ((*(byte *)((longlong)puVar8 + -0xc) & 1) == 0) {
              FUN_1800fbcf0((longlong *)puVar8[-3]);
            }
            else {
              (**(code **)(*(longlong *)puVar8[-3] + 0x10))();
            }
            puVar8[-3] = 0;
            puVar8[-2] = 0;
            puVar8[-5] = 0;
            puVar8[-4] = 0;
            puVar8 = puVar8 + -5;
          }
          puVar8 = (undefined8 *)FUN_1800fbcf0((longlong *)(lVar6 + -8));
        }
        *param_1 = (longlong)puVar1;
        *(uint *)((longlong)param_1 + 0xc) = uVar9;
        goto LAB_1800147c0;
      }
    }
    uVar5 = (ulonglong)puVar7 & 0xffffffffffffff00;
  }
  else {
LAB_1800147c0:
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    uVar5 = CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
    uVar4 = param_2[1];
    lVar6 = *param_1;
    puVar8 = (undefined8 *)(lVar6 + uVar10 * 0x28);
    *puVar8 = *param_2;
    puVar8[1] = uVar4;
    uVar4 = param_2[3];
    puVar8 = (undefined8 *)(lVar6 + 0x10 + uVar10 * 0x28);
    *puVar8 = param_2[2];
    puVar8[1] = uVar4;
    *(undefined8 *)(lVar6 + 0x20 + uVar10 * 0x28) = param_2[4];
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return uVar5;
}

