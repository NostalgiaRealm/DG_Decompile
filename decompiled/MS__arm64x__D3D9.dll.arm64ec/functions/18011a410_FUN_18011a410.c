/*
 * FUN_18011a410 at 18011a410
 * undefined FUN_18011a410(void)
 * Address ranges: 18011a410-18011a597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18011a410(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint extraout_w15;
  uint uVar13;
  int iVar14;
  
  if ((*(int *)(param_1 + 0x7c) == 1) && (*(longlong *)(param_1 + 0x60) == 0)) {
    iVar14 = 0;
    uVar10 = (uint)*(ushort *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
      uVar10 = 1;
    }
    if (uVar10 != 0) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x68);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x6c);
      uVar12 = 0;
      do {
        uVar13 = (uint)uVar8 >> (ulonglong)(uVar12 & 0x1f);
        uVar2 = (uint)uVar7 >> (ulonglong)(uVar12 & 0x1f);
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        if (uVar2 == 0) {
          uVar2 = 1;
        }
        iVar4 = FUN_180116ed0(uVar2,uVar13);
        uVar12 = uVar12 + 1;
        iVar14 = iVar4 + iVar14;
      } while (uVar12 < uVar10);
    }
    iVar4 = *(int *)(param_1 + 0x80) * iVar14;
    lVar6 = FUN_1802229a8((ulonglong)(iVar4 + 0x28) + 8);
    uVar7 = lVar6 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar7 - 8) = lVar6;
    *(ulonglong *)(param_1 + 0x60) = uVar7;
    FUN_180222c50(uVar7,0,iVar4 + 8);
    uVar7 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        iVar4 = (int)uVar7;
        uVar12 = 0;
        lVar6 = *(longlong *)(param_1 + 0x60) + (ulonglong)(uint)(iVar4 * iVar14);
        if (uVar10 != 0) {
          do {
            uVar9 = (ulonglong)(uVar12 + (int)uVar7 * 0x10);
            uVar8 = 0;
            uVar13 = 0;
            if (uVar12 != 0) {
              uVar2 = *(uint *)(param_1 + 0x68);
              uVar1 = *(uint *)(param_1 + 0x6c);
              uVar12 = 0;
              do {
                iVar4 = (int)uVar8;
                uVar13 = uVar1 >> (ulonglong)(uVar12 & 0x1f);
                uVar3 = uVar2 >> (ulonglong)(uVar12 & 0x1f);
                if (uVar13 == 0) {
                  uVar13 = 1;
                }
                if (uVar3 == 0) {
                  uVar3 = 1;
                }
                iVar5 = FUN_180116ed0(uVar3,uVar13);
                uVar12 = uVar12 + 1;
                uVar8 = (ulonglong)(uint)(iVar5 + iVar4);
                uVar13 = extraout_w15;
              } while (uVar12 < extraout_w15);
            }
            iVar4 = (int)uVar7;
            uVar12 = uVar13 + 1;
            lVar11 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x40) + (uVar9 & 0xffffffff) * 8) + 8);
            *(ulonglong *)(lVar11 + 0x28) = lVar6 + uVar8;
            *(undefined8 *)(lVar11 + 0xf8) = 0;
            *(uint *)(lVar11 + 0x48) = *(uint *)(lVar11 + 0x48) | 0x28;
            lVar11 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x40) + (uVar9 & 0xffffffff) * 8) + 8);
            *(uint *)(lVar11 + 0x48) = *(uint *)(lVar11 + 0x48) | 1;
          } while (uVar12 < uVar10);
        }
        uVar7 = (ulonglong)(iVar4 + 1U);
      } while (iVar4 + 1U < *(uint *)(param_1 + 0x80));
    }
  }
  return 1;
}

