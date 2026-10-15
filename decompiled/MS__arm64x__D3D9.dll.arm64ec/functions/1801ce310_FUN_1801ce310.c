/*
 * FUN_1801ce310 at 1801ce310
 * undefined FUN_1801ce310(void)
 * Address ranges: 1801ce310-1801ce9fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801ce310(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined4 uVar14;
  longlong lVar15;
  int iVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  undefined4 local_70;
  
  local_70 = 1;
  if (param_2 != 0) {
    FUN_1801042e0(param_2 + 0xc);
  }
  puVar12 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0xc490) != 0) {
    lVar15 = FUN_1801dbb48(param_1 + 0x68b8);
    if (lVar15 != 0) {
      if ((*(char *)(param_1 + 0x21) == '\0') ||
         (*(char *)(*(longlong *)(lVar15 + 0x10) + 0x44e) != '\0')) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
        if (*(uint *)(param_1 + 0x680c) < *(uint *)(param_1 + 0x6810)) {
          FUN_1801c3d90(param_1,*(undefined4 *)(param_1 + 0x6814));
          *(undefined4 *)(param_1 + 0x6810) = 0;
          *(undefined4 *)(param_1 + 0x6814) = 0;
          *(undefined4 *)(param_1 + 0x680c) = 0;
        }
      }
      psVar2 = (short *)(lVar15 + 0x18);
      bVar13 = *psVar2 != -1;
      if (bVar9) {
        if (bVar13) {
          iVar16 = 0;
          do {
            uVar8 = iVar16 * 2;
            uVar5 = psVar2[uVar8];
            uVar17 = (uint)uVar5;
            uVar6 = psVar2[uVar8 + 1];
            uVar19 = (uint)uVar6;
            lVar1 = param_1 + (ulonglong)uVar5 * 0x10;
            uVar3 = (uint)uVar6 - (uint)uVar5 & 0x3fffffff;
            uVar7 = uVar3 << 1;
            puVar10 = (undefined8 *)(lVar1 + 0x13e0);
            puVar11 = (undefined8 *)(lVar1 + 0x71e0);
            while (uVar3 != 0) {
              *puVar11 = *puVar10;
              uVar7 = uVar7 - 1;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
              uVar3 = uVar7;
            }
            uVar7 = *(uint *)(param_1 + 0x680c);
            uVar3 = *(uint *)(param_1 + 0x6810);
            if (*(int *)(param_1 + 0x6814) == 1) {
              if (uVar7 < uVar3) {
                uVar18 = (uint)uVar5;
                if (uVar3 < uVar18 || uVar6 < uVar7) {
                  FUN_1801c3d90(param_1);
                  *(undefined4 *)(param_1 + 0x6814) = 1;
                }
                else {
                  uVar19 = (uint)uVar6;
                  if (uVar6 < uVar3) {
                    uVar19 = uVar3;
                  }
                  uVar17 = uVar18;
                  if (uVar7 < uVar18) {
                    uVar17 = uVar7;
                  }
                }
              }
            }
            else {
              if (uVar7 < uVar3) {
                FUN_1801c3d90(param_1);
              }
              *(undefined4 *)(param_1 + 0x6814) = 1;
            }
            *(uint *)(param_1 + 0x680c) = uVar17;
            iVar16 = iVar16 + 1;
            *(uint *)(param_1 + 0x6810) = uVar19;
          } while (psVar2[uVar8 + 2] != -1);
        }
      }
      else {
        iVar16 = 0;
        while (bVar13) {
          uVar19 = iVar16 * 2;
          lVar1 = param_1 + (ulonglong)(ushort)psVar2[uVar19] * 0x10;
          uVar7 = (uint)(ushort)psVar2[uVar19 + 1] - (uint)(ushort)psVar2[uVar19] & 0x3fffffff;
          uVar8 = uVar7 << 1;
          puVar10 = (undefined8 *)(lVar1 + 0x13e0);
          puVar11 = (undefined8 *)(lVar1 + 0x71e0);
          while (uVar7 != 0) {
            *puVar11 = *puVar10;
            uVar8 = uVar8 - 1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
            uVar7 = uVar8;
          }
          iVar16 = iVar16 + 1;
          bVar13 = psVar2[uVar19 + 2] != -1;
        }
      }
      psVar2 = (short *)(lVar15 + 0x81c);
      iVar16 = 0;
      sVar4 = *psVar2;
      while (sVar4 != -1) {
        uVar19 = iVar16 * 2;
        lVar1 = param_1 + (ulonglong)(ushort)psVar2[uVar19] * 0x10;
        uVar7 = (uint)(ushort)psVar2[uVar19 + 1] - (uint)(ushort)psVar2[uVar19] & 0x3fffffff;
        uVar8 = uVar7 << 1;
        puVar10 = (undefined8 *)(lVar1 + 0x69d0);
        puVar11 = (undefined8 *)(lVar1 + 0xb230);
        while (uVar7 != 0) {
          *puVar11 = *puVar10;
          uVar8 = uVar8 - 1;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
          uVar7 = uVar8;
        }
        if (*(char *)(param_1 + 0x21) == '\0') {
          (*(code *)puVar12)(0x180224000);
          (*extraout_x11)();
        }
        iVar16 = iVar16 + 1;
        sVar4 = psVar2[uVar19 + 2];
      }
      psVar2 = (short *)(lVar15 + 0x840);
      iVar16 = 0;
      sVar4 = *psVar2;
      while (sVar4 != -1) {
        uVar19 = iVar16 * 2;
        uVar7 = (uint)(ushort)psVar2[uVar19 + 1] - (uint)(ushort)psVar2[uVar19];
        lVar15 = param_1 + (ulonglong)(ushort)psVar2[uVar19] * 4;
        puVar10 = (undefined8 *)(lVar15 + 0x6990);
        puVar11 = (undefined8 *)(lVar15 + 0xb330);
        for (uVar8 = uVar7 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
        }
        if (*(char *)(param_1 + 0x21) == '\0') {
          (*(code *)puVar12)(0x180224000);
          (*extraout_x11_00)();
        }
        iVar16 = iVar16 + 1;
        sVar4 = psVar2[uVar19 + 2];
      }
    }
    FUN_1801e40e8(*(undefined8 *)(param_1 + 0xc490));
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xc490) = 0;
  }
  else if (param_3 == 0) {
    local_70 = 0;
  }
  else {
    *(longlong *)(param_1 + 0xc490) = param_2;
    uVar14 = FUN_180224358();
    FUN_1802243a0(0x3fc0);
    if ((*(char *)(param_1 + 0x21) == '\0') ||
       (*(char *)(*(longlong *)(param_3 + 0x10) + 0x44e) != '\0')) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    plVar20 = (longlong *)(param_3 + 0x10);
    psVar2 = (short *)(param_3 + 0x18);
    if (*psVar2 != -1) {
      iVar16 = 0;
      do {
        if ((!bVar9) && (*(uint *)(param_1 + 0x680c) < *(uint *)(param_1 + 0x6810))) {
          FUN_1801c3d90(param_1,*(undefined4 *)(param_1 + 0x6814));
          *(undefined4 *)(param_1 + 0x6814) = 0;
          *(undefined4 *)(param_1 + 0x6810) = 0;
          *(undefined4 *)(param_1 + 0x680c) = 0;
        }
        uVar8 = iVar16 * 2;
        uVar5 = psVar2[uVar8 + 1];
        uVar19 = (uint)uVar5;
        uVar6 = psVar2[uVar8];
        uVar17 = (uint)uVar6;
        uVar3 = (uint)uVar5 - (uint)uVar6 & 0x3fffffff;
        uVar7 = uVar3 << 1;
        puVar10 = (undefined8 *)(*plVar20 + (ulonglong)uVar6 * 0x10 + 0x850);
        puVar11 = (undefined8 *)(param_1 + (ulonglong)uVar6 * 0x10 + 0x71e0);
        while (uVar3 != 0) {
          *puVar11 = *puVar10;
          uVar7 = uVar7 - 1;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
          uVar3 = uVar7;
        }
        if (bVar9) {
          uVar7 = *(uint *)(param_1 + 0x680c);
          uVar3 = *(uint *)(param_1 + 0x6810);
          if (*(int *)(param_1 + 0x6814) == 1) {
            if (uVar7 < uVar3) {
              uVar18 = (uint)uVar6;
              if (uVar3 < uVar18 || uVar5 < uVar7) {
                FUN_1801c3d90(param_1);
                *(undefined4 *)(param_1 + 0x6814) = 1;
              }
              else {
                uVar19 = (uint)uVar5;
                if (uVar5 < uVar3) {
                  uVar19 = uVar3;
                }
                uVar17 = uVar18;
                if (uVar7 < uVar18) {
                  uVar17 = uVar7;
                }
              }
            }
          }
          else {
            if (uVar7 < uVar3) {
              FUN_1801c3d90(param_1);
            }
            *(undefined4 *)(param_1 + 0x6814) = 1;
          }
          *(uint *)(param_1 + 0x680c) = uVar17;
          *(uint *)(param_1 + 0x6810) = uVar19;
        }
        iVar16 = iVar16 + 1;
      } while (psVar2[uVar8 + 2] != -1);
    }
    iVar16 = 0;
    psVar2 = (short *)(param_3 + 0x81c);
    sVar4 = *psVar2;
    while (sVar4 != -1) {
      uVar19 = iVar16 * 2;
      uVar5 = psVar2[uVar19];
      uVar7 = (uint)(ushort)psVar2[uVar19 + 1] - (uint)uVar5 & 0x3fffffff;
      uVar8 = uVar7 << 1;
      puVar10 = (undefined8 *)(*plVar20 + (ulonglong)uVar5 * 0x10 + 0x48d8);
      puVar11 = (undefined8 *)(param_1 + (ulonglong)uVar5 * 0x10 + 0xb230);
      while (uVar7 != 0) {
        *puVar11 = *puVar10;
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        uVar7 = uVar8;
      }
      if (*(char *)(param_1 + 0x21) == '\0') {
        (*(code *)puVar12)(0x180224000);
        (*extraout_x11_01)();
      }
      iVar16 = iVar16 + 1;
      sVar4 = psVar2[uVar19 + 2];
    }
    iVar16 = 0;
    psVar2 = (short *)(param_3 + 0x840);
    sVar4 = *psVar2;
    while (sVar4 != -1) {
      uVar19 = iVar16 * 2;
      uVar5 = psVar2[uVar19];
      uVar6 = psVar2[uVar19 + 1];
      puVar10 = (undefined8 *)(*plVar20 + (ulonglong)uVar5 * 4 + 0x49e8);
      puVar11 = (undefined8 *)(param_1 + (ulonglong)uVar5 * 4 + 0xb330);
      for (uVar8 = (uint)uVar6 - (uint)uVar5 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      if (((uint)uVar6 - (uint)uVar5 & 1) != 0) {
        *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
      }
      if (*(char *)(param_1 + 0x21) == '\0') {
        (*(code *)puVar12)(0x180224000);
        (*extraout_x11_02)();
      }
      iVar16 = iVar16 + 1;
      sVar4 = psVar2[uVar19 + 2];
    }
    FUN_1802243a0(uVar14);
  }
  *(undefined1 *)(param_1 + 0xc50a) = 1;
  return local_70;
}

