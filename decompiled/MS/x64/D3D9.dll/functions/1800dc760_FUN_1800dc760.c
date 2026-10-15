/*
 * FUN_1800dc760 at 1800dc760
 * undefined8 __fastcall FUN_1800dc760(longlong * param_1, int * param_2)
 * Address ranges: 1800dc760-1800dca6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800dc760(longlong *param_1,int *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (((((((ulonglong)(param_2[0x20] & 7) << 5 | (ulonglong)(uint)param_2[0x1f] & 0x1f) << 5 |
              (ulonglong)(uint)param_2[0x1e] & 0x1f) << 3 | (ulonglong)(param_2[0x1d] & 7)) << 5 |
            (ulonglong)(uint)param_2[0x1c] & 0x1f) << 5 | (ulonglong)(uint)param_2[0x1b] & 0x1f) <<
           0x20 | (ulonglong)
                  ((((((param_2[0x18] & 7U) << 5 | param_2[0x17] & 0x1fU) << 5 |
                     param_2[0x16] & 0x1fU) << 3 | param_2[0x15] & 7U) << 5 | param_2[0x14] & 0x1fU)
                  << 5) | (ulonglong)(uint)param_2[0x13] & 0x1f) +
          (((((((ulonglong)(param_2[0x10] & 7) << 5 | (ulonglong)(uint)param_2[0xf] & 0x1f) << 5 |
              (ulonglong)(uint)param_2[0xe] & 0x1f) << 3 | (ulonglong)(param_2[0xd] & 7)) << 5 |
            (ulonglong)(uint)param_2[0xc] & 0x1f) << 5 | (ulonglong)(uint)param_2[0xb] & 0x1f) <<
           0x20 | (ulonglong)
                  ((((((param_2[8] & 7U) << 5 | param_2[7] & 0x1fU) << 5 | param_2[6] & 0x1fU) << 3
                    | param_2[5] & 7U) << 5 | param_2[4] & 0x1fU) << 5) |
          (ulonglong)(uint)param_2[3] & 0x1f) +
          (((((ulonglong)(*(byte *)(param_2 + 0x21) & 0xf) << 4 |
             (ulonglong)(*(byte *)(param_2 + 0x19) & 0xf)) << 4 |
            (ulonglong)(*(byte *)(param_2 + 0x11) & 0xf)) << 4 |
           (ulonglong)(*(byte *)(param_2 + 9) & 0xf)) << 0x22 |
           (ulonglong)(-(uint)(param_2[0x1a] != 0) & 0x20) |
           (ulonglong)(-(uint)(param_2[0x12] != 0) & 0x10) |
           (ulonglong)(-(uint)(param_2[10] != 0) & 8) | (ulonglong)(-(uint)(param_2[2] != 0) & 4) |
           (ulonglong)(*param_2 != 0) | (ulonglong)(-(uint)(param_2[1] != 0) & 2));
  uVar9 = 0;
  if (uVar5 != 0) {
    uVar4 = 0;
    do {
      uVar8 = uVar5 + uVar4 >> 1;
      uVar9 = (ulonglong)uVar8;
      uVar1 = *(ulonglong *)(*param_1 + uVar9 * 0x118);
      if (uVar1 <= uVar7) {
        if (uVar7 <= uVar1) break;
        uVar4 = uVar8 + 1;
        uVar9 = (ulonglong)uVar4;
        uVar8 = uVar5;
      }
      uVar5 = uVar8;
    } while (uVar5 != uVar4);
  }
  if ((uint)uVar9 != *(uint *)((longlong)param_1 + 0xc)) {
    lVar2 = *param_1;
    lVar6 = uVar9 * 0x118;
    if (*(ulonglong *)(lVar6 + lVar2) == uVar7) {
      if ((((*param_2 != *(int *)(lVar6 + 8 + lVar2)) ||
           (param_2[1] != *(int *)(lVar6 + 0xc + lVar2))) ||
          (iVar3 = FUN_1800fbe7c((byte *)(param_2 + 2),(byte *)(lVar2 + 0x10 + lVar6),0x20),
          iVar3 != 0)) ||
         (((iVar3 = FUN_1800fbe7c((byte *)(param_2 + 10),(byte *)(lVar2 + 0x30 + lVar6),0x20),
           iVar3 != 0 ||
           (iVar3 = FUN_1800fbe7c((byte *)(param_2 + 0x12),(byte *)(lVar2 + 0x50 + lVar6),0x20),
           iVar3 != 0)) ||
          (iVar3 = FUN_1800fbe7c((byte *)(param_2 + 0x1a),(byte *)(lVar2 + 0x70 + lVar6),0x20),
          iVar3 != 0)))) {
        (**(code **)(**(longlong **)(lVar6 + 0x110 + lVar2) + 0x10))();
        FUN_1800dcc14(param_1,uVar9,uVar7,(undefined8 *)param_2);
      }
      goto LAB_1800dca4c;
    }
  }
  FUN_1800dca70(param_1,(uint)uVar9,uVar7,(undefined8 *)param_2);
LAB_1800dca4c:
  return *(undefined8 *)(uVar9 * 0x118 + 0x110 + *param_1);
}

