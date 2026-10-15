/*
 * FUN_18012c7d8 at 18012c7d8
 * undefined FUN_18012c7d8(void)
 * Address ranges: 18012c7d8-18012ca8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18012c7d8(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_70 [48];
  
  if (*(int *)*param_1 == -0x7fffffff) {
    iVar7 = FUN_1801042e0(DAT_180258900 + 0x30);
    if (iVar7 == 1) {
      while (*(int *)(DAT_180258900 + 0x2c) != 0) {
        thunk_FUN_180223c0c(auStack_70,0,0,0,0x400000);
      }
    }
    iVar7 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar7 == 0) {
      FUN_1801085c8();
    }
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    uVar8 = 0;
    if (DAT_18024e838 != 0) {
      do {
        lVar9 = *(longlong *)(DAT_18024e830 + uVar8 * 8);
        uVar10 = *(ulonglong *)(lVar9 + 0x28);
        if (((uVar10 != 0) && (uVar11 = *(ulonglong *)(*param_1 + 0x28), uVar10 <= uVar11)) &&
           (uVar11 < uVar10 + (uint)*(ushort *)(lVar9 + 0x14) * *(int *)(lVar9 + 0x1c))) {
          if (*(longlong *)(lVar9 + 0x30) == 0) {
            FUN_18012ff70(lVar9);
            puVar3 = __hybrid_os_arm64x_dispatch_icall;
            (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            (*extraout_x11_02)(lVar9);
            if ((*(uint *)(lVar9 + 0x48) & 1) == 0) {
              (*(code *)puVar3)(0x180224000);
              cVar6 = (*extraout_x11_03)(lVar9);
              if (cVar6 != '\0') {
                (*(code *)puVar3)(0x180224000);
                (*extraout_x11_04)(lVar9,0xffffffff);
              }
            }
          }
          else {
            (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            (*extraout_x11)(lVar9);
            uVar11 = (longlong)
                     ((uVar11 - uVar10) + ((ulonglong)((longlong)(uVar11 - uVar10) >> 0xb) >> 0x34))
                     >> 0xc;
            uVar10 = uVar11 >> 3;
            uVar8 = uVar11 & 7;
            if ((*(byte *)(*(longlong *)(lVar9 + 0x30) + uVar10) & (&DAT_18022a8d8)[uVar8]) == 0) {
              bVar2 = *(byte *)(*(longlong *)(lVar9 + 0x38) + uVar10) & (&DAT_18022a8d8)[uVar8];
              bVar5 = bVar2 != 0;
              if (bVar2 != 0) {
                (*(code *)puVar3)(0x180224000);
                cVar6 = (*extraout_x11_00)(lVar9);
                bVar5 = cVar6 == '\0' && bVar5;
              }
              if (!bVar5) {
                (*(code *)puVar3)(0x180224000);
                cVar6 = (*extraout_x11_01)(lVar9,uVar11 & 0xffffffff);
                if (cVar6 == '\0') goto LAB_18012ca5c;
              }
              *(byte *)(*(longlong *)(lVar9 + 0x30) + uVar10) =
                   *(byte *)(*(longlong *)(lVar9 + 0x30) + uVar10) | (&DAT_18022a8d8)[uVar8];
              *(byte *)(*(longlong *)(lVar9 + 0x38) + uVar10) =
                   *(byte *)(*(longlong *)(lVar9 + 0x38) + uVar10) | (&DAT_18022a8d8)[uVar8];
            }
          }
LAB_18012ca5c:
          lVar4 = DAT_180258900;
          *(uint *)(lVar9 + 0x48) = *(uint *)(lVar9 + 0x48) | 5;
          thunk_FUN_18022370c(lVar4);
          FUN_1801042d0(DAT_180258900 + 0x30);
          return 0xffffffff;
        }
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < DAT_18024e838);
    }
    thunk_FUN_18022370c(DAT_180258900);
    FUN_1801042d0(DAT_180258900 + 0x30);
  }
  return 0;
}

