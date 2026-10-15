/*
 * FUN_18000eb60 at 18000eb60
 * undefined FUN_18000eb60(void)
 * Address ranges: 18000eb60-18000ecdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000eb60(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint extraout_w13;
  uint uVar11;
  ulonglong uVar12;
  ulonglong extraout_x14;
  uint uVar13;
  int extraout_w15;
  int iVar14;
  
  if ((*(int *)(param_1 + 0x7c) == 1) && (*(longlong *)(param_1 + 0x60) == 0)) {
    iVar14 = 0;
    uVar9 = (uint)*(ushort *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
      uVar9 = 1;
    }
    if (uVar9 != 0) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x68);
      uVar12 = (ulonglong)*(uint *)(param_1 + 0x6c);
      uVar13 = 0;
      do {
        uVar11 = (uint)uVar12 >> (ulonglong)(uVar13 & 0x1f);
        uVar1 = (uint)uVar5 >> (ulonglong)(uVar13 & 0x1f);
        if (uVar11 == 0) {
          uVar11 = 1;
        }
        if (uVar1 == 0) {
          uVar1 = 1;
        }
        iVar2 = func_0x000180116ed0(uVar1,uVar11);
        uVar13 = uVar13 + 1;
        iVar14 = iVar2 + iVar14;
      } while (uVar13 < uVar9);
    }
    iVar2 = *(int *)(param_1 + 0x80) * iVar14;
    lVar4 = FUN_180102f80((ulonglong)(iVar2 + 0x28) + 8);
    uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar5 - 8) = lVar4;
    *(ulonglong *)(param_1 + 0x60) = uVar5;
    func_0x000180222c50(uVar5,0,iVar2 + 8);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        iVar2 = (int)uVar5;
        uVar13 = 0;
        lVar4 = *(longlong *)(param_1 + 0x60) + (ulonglong)(uint)(iVar2 * iVar14);
        if (uVar9 != 0) {
          do {
            uVar12 = (ulonglong)(uVar13 + (int)uVar5 * 0x10);
            uVar8 = 0;
            uVar11 = 0;
            if (uVar13 != 0) {
              uVar7 = (ulonglong)*(uint *)(param_1 + 0x68);
              uVar6 = (ulonglong)*(uint *)(param_1 + 0x6c);
              uVar13 = 0;
              do {
                iVar2 = (int)uVar8;
                uVar11 = (uint)uVar6 >> (ulonglong)(uVar13 & 0x1f);
                uVar13 = (uint)uVar7 >> (ulonglong)(uVar13 & 0x1f);
                if (uVar11 == 0) {
                  uVar11 = 1;
                }
                if (uVar13 == 0) {
                  uVar13 = 1;
                }
                iVar3 = func_0x000180116ed0(uVar13,uVar11);
                uVar13 = extraout_w15 + 1;
                uVar8 = (ulonglong)(uint)(iVar3 + iVar2);
                uVar12 = extraout_x14;
                uVar11 = extraout_w13;
              } while (uVar13 < extraout_w13);
            }
            iVar2 = (int)uVar5;
            uVar13 = uVar11 + 1;
            lVar10 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x40) + (uVar12 & 0xffffffff) * 8) + 8)
            ;
            *(ulonglong *)(lVar10 + 0x28) = lVar4 + uVar8;
            *(undefined8 *)(lVar10 + 0xf8) = 0;
            *(uint *)(lVar10 + 0x48) = *(uint *)(lVar10 + 0x48) | 0x28;
            lVar10 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x40) + (uVar12 & 0xffffffff) * 8) + 8)
            ;
            *(uint *)(lVar10 + 0x48) = *(uint *)(lVar10 + 0x48) | 1;
          } while (uVar13 < uVar9);
        }
        uVar5 = (ulonglong)(iVar2 + 1U);
      } while (iVar2 + 1U < *(uint *)(param_1 + 0x80));
    }
  }
  return 1;
}

