/*
 * FUN_1802219f0 at 1802219f0
 * undefined FUN_1802219f0(void)
 * Address ranges: 1802219f0-180221a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1802219f0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  longlong lVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  uint auStack_50 [2];
  longlong alStack_48 [2];
  undefined1 auStack_38 [8];
  short sStack_30;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    alStack_48[0] = 0;
    alStack_48[1] = 0;
    uVar7 = thunk_FUN_1802239dc();
    iVar6 = thunk_FUN_1802239f0(uVar7,alStack_48 + 1,alStack_48);
    if (iVar6 != 0) {
      uVar7 = thunk_FUN_1802238d8();
      iVar6 = thunk_FUN_180223aa4(uVar7,auStack_38);
      if ((iVar6 != 0) && (alStack_48[0] != 0)) {
        auStack_50[0] = 0;
        thunk_FUN_1802239dc();
        puVar5 = __hybrid_os_arm64x_dispatch_icall;
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(0,0,auStack_50);
        auStack_50[0] = auStack_50[0] >> 5;
        if (auStack_50[0] != 0) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(0,auStack_50[0]);
          lVar12 = CONCAT44(0,auStack_50[0]) << 5;
          if (SUB168(auVar4 * ZEXT816(0x20),8) != 0) {
            lVar12 = -1;
          }
          lVar12 = FUN_1802229a8(lVar12);
          if (lVar12 != 0) {
            thunk_FUN_1802239dc();
            uVar9 = auStack_50[0];
            (*(code *)puVar5)(0x180224000);
            iVar6 = (*extraout_x11_00)(lVar12,uVar9 << 5,auStack_50);
            if (iVar6 != 0) {
              bVar11 = 0;
              auStack_50[0] = auStack_50[0] >> 5;
              uVar10 = 0;
              if (auStack_50[0] != 0) {
                do {
                  if ((*(short *)(lVar12 + 0xc + uVar10 * 0x20) == sStack_30) &&
                     (bVar3 = *(byte *)(lVar12 + 0x12 + uVar10 * 0x20), bVar11 <= bVar3)) {
                    bVar11 = bVar3;
                  }
                  uVar9 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar9;
                } while (uVar9 < auStack_50[0]);
              }
              uVar10 = 0;
              if (auStack_50[0] != 0) {
                do {
                  if (*(short *)(lVar12 + 0xc + uVar10 * 0x20) == sStack_30) {
                    lVar1 = lVar12 + uVar10 * 0x20;
                    uVar8 = 1L << ((ulonglong)*(byte *)(lVar1 + 0xe) & 0x3f);
                    uVar2 = uVar8;
                    if (bVar11 <= *(byte *)(lVar1 + 0x12)) {
                      uVar2 = 0;
                    }
                    *(ulonglong *)(param_1 + 0x68) = uVar2 | *(ulonglong *)(param_1 + 0x68);
                    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | uVar8;
                  }
                  uVar9 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar9;
                } while (uVar9 < auStack_50[0]);
              }
            }
          }
          FUN_1802229d8(lVar12,0x20);
        }
      }
    }
  }
  return;
}

