/*
 * FUN_18012cea0 at 18012cea0
 * undefined FUN_18012cea0(void)
 * Address ranges: 18012cea0-18012cfb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012cea0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong extraout_x1;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  
  uVar5 = FUN_18012bcd8();
  if ((param_5 == 0) || ((uVar5 & 1) != 0)) {
    plVar12 = &DAT_18024ea78 + (extraout_x1 & 0xffffffff) * 0x4b;
    puVar9 = &DAT_18024ea80;
  }
  else {
    plVar12 = &DAT_18024ea68 + (extraout_x1 & 0xffffffff) * 0x4b;
    puVar9 = &DAT_18024ea70;
  }
  if (*(uint *)(puVar9 + (extraout_x1 & 0xffffffff) * 0x4b) != 0) {
    lVar11 = *plVar12;
    uVar10 = 0;
    lVar6 = 0;
    do {
      lVar8 = uVar10 * 0x18;
      lVar7 = lVar6;
      if ((((*(int *)(lVar8 + lVar11) == param_3) && (*(int *)(lVar11 + 4 + lVar8) == param_4)) &&
          ((param_5 == 0 ||
           (((uVar5 & 1) != 0 ||
            (uVar1 = *(uint *)(lVar11 + 0x10 + lVar8), uVar1 <= param_5 || uVar1 <= param_5 + 1)))))
          ) && (lVar7 = lVar8 + lVar11, lVar6 != 0)) {
        iVar2 = *(int *)(lVar11 + 0x10 + lVar8);
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
          lVar7 = lVar8 + lVar11;
        }
      }
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar1;
      lVar6 = lVar7;
    } while (uVar1 < *(uint *)(puVar9 + (extraout_x1 & 0xffffffff) * 0x4b));
  }
  return;
}

