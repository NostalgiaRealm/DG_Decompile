/*
 * FUN_180020a28 at 180020a28
 * undefined FUN_180020a28(void)
 * Address ranges: 180020a28-180020b33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020a28(undefined8 param_1,undefined8 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong extraout_x1;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  
  uVar5 = FUN_18001f9b8();
  if ((param_5 == 0) || ((uVar5 & 1) != 0)) {
    plVar12 = &DAT_180253a88 + (extraout_x1 & 0xffffffff) * 0x4b;
    puVar8 = &DAT_180253a90;
  }
  else {
    plVar12 = &DAT_180253a78 + (extraout_x1 & 0xffffffff) * 0x4b;
    puVar8 = &DAT_180253a80;
  }
  if (*(uint *)(puVar8 + (extraout_x1 & 0xffffffff) * 0x4b) != 0) {
    lVar10 = *plVar12;
    uVar9 = 0;
    lVar6 = 0;
    do {
      lVar11 = uVar9 * 0x18;
      lVar7 = lVar6;
      if ((((*(int *)(lVar11 + lVar10) == param_3) && (*(int *)(lVar10 + 4 + lVar11) == param_4)) &&
          ((param_5 == 0 ||
           (((uVar5 & 1) != 0 ||
            (uVar1 = *(uint *)(lVar10 + 0x10 + lVar11), uVar1 <= param_5 || uVar1 <= param_5 + 1))))
          )) && (lVar7 = lVar11 + lVar10, lVar6 != 0)) {
        iVar2 = *(int *)(lVar10 + 0x10 + lVar11);
        iVar3 = param_5 - *(int *)(lVar6 + 0x10);
        if (iVar3 < 0) {
          iVar3 = *(int *)(lVar6 + 0x10) - param_5;
        }
        iVar4 = param_5 - iVar2;
        if (iVar4 < 0) {
          iVar4 = iVar2 - param_5;
        }
        lVar7 = lVar6;
        if (iVar4 < iVar3) {
          lVar7 = lVar11 + lVar10;
        }
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
      lVar6 = lVar7;
    } while (uVar1 < *(uint *)(puVar8 + (extraout_x1 & 0xffffffff) * 0x4b));
  }
  return;
}

