/*
 * FUN_18000b6c0 at 18000b6c0
 * undefined8 __cdecl FUN_18000b6c0(longlong * param_1, undefined4 * param_2)
 * Address ranges: 18000b6c0-18000b7cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000b6c0(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  SIZE_T SVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  ulonglong *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar4) {
    uVar6 = iVar4 << 1;
    if (iVar4 == 0) {
      uVar6 = 0x10;
    }
    uVar11 = CONCAT44(0,uVar6);
    uVar10 = uVar11 * 0x18;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar11;
    if (SUB168(auVar7 * ZEXT816(0x18),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    SVar2 = uVar10 + 8;
    if (0xfffffffffffffff7 < uVar10) {
      SVar2 = 0xffffffffffffffff;
    }
    puVar8 = (ulonglong *)thunk_FUN_18005fb88(SVar2);
    if (puVar8 != (ulonglong *)0x0) {
      puVar3 = puVar8 + 1;
      *puVar8 = uVar11;
      puVar8 = puVar3;
      if (uVar6 != 0) {
        do {
          puVar8[1] = 0;
          puVar8[2] = 0;
          uVar11 = uVar11 - 1;
          puVar8 = puVar8 + 3;
        } while (uVar11 != 0);
      }
      if (puVar3 != (ulonglong *)0x0) {
        uVar5 = *(uint *)((longlong)param_1 + 0xc);
        uVar10 = 0;
        lVar12 = *param_1;
        if (uVar5 != 0) {
          do {
            FUN_18000b920((undefined4 *)(puVar3 + uVar10 * 3),(undefined4 *)(lVar12 + uVar10 * 0x18)
                         );
            uVar1 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar1;
          } while (uVar1 < uVar5);
        }
        if (*param_1 != 0) {
          FUN_18000ba58(*param_1);
        }
        *param_1 = (longlong)puVar3;
        *(uint *)((longlong)param_1 + 0xc) = uVar6;
        goto LAB_18000b78c;
      }
    }
    uVar9 = 0;
  }
  else {
LAB_18000b78c:
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    FUN_18000b920((undefined4 *)(*param_1 + (ulonglong)uVar6 * 0x18),param_2);
    uVar9 = 1;
  }
  return uVar9;
}

