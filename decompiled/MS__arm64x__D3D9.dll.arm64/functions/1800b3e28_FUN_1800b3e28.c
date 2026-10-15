/*
 * FUN_1800b3e28 at 1800b3e28
 * undefined FUN_1800b3e28(void)
 * Address ranges: 1800b3e28-1800b4503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b3e28(longlong param_1,longlong param_2,longlong param_3)

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
  bool bVar12;
  longlong lVar13;
  int iVar14;
  code *pcVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined4 local_78;
  
  local_78 = 1;
  if (param_2 != 0) {
    FUN_1800015a0(param_2 + 0xc);
  }
  if (*(longlong *)(param_1 + 0xc490) != 0) {
    lVar13 = FUN_1800c0a50(param_1 + 0x68b8);
    if (lVar13 != 0) {
      if ((*(char *)(param_1 + 0x21) == '\0') ||
         (*(char *)(*(longlong *)(lVar13 + 0x10) + 0x44e) != '\0')) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
        if (*(uint *)(param_1 + 0x680c) < *(uint *)(param_1 + 0x6810)) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x128))();
          *(undefined4 *)(param_1 + 0x6814) = 0;
          *(undefined4 *)(param_1 + 0x6810) = 0;
          *(undefined4 *)(param_1 + 0x680c) = 0;
        }
      }
      psVar2 = (short *)(lVar13 + 0x18);
      bVar12 = *psVar2 != -1;
      if (bVar9) {
        if (bVar12) {
          iVar14 = 0;
          do {
            uVar8 = iVar14 * 2;
            uVar5 = psVar2[uVar8];
            uVar6 = psVar2[uVar8 + 1];
            uVar17 = (uint)uVar6;
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
              uVar16 = (uint)uVar5;
              if (uVar7 < uVar3) {
                uVar16 = (uint)uVar5;
                if (uVar3 < uVar16 || uVar6 < uVar7) {
                  pcVar15 = *(code **)(**(longlong **)(param_1 + 0x28) + 0x128);
                  goto LAB_1800b4068;
                }
                uVar17 = (uint)uVar6;
                if (uVar6 < uVar3) {
                  uVar17 = uVar3;
                }
                if (uVar7 < uVar16) {
                  uVar16 = uVar7;
                }
              }
            }
            else {
              if (uVar7 < uVar3) {
                pcVar15 = *(code **)(**(longlong **)(param_1 + 0x28) + 0x128);
LAB_1800b4068:
                (*pcVar15)();
              }
              *(undefined4 *)(param_1 + 0x6814) = 1;
              uVar16 = (uint)uVar5;
            }
            *(uint *)(param_1 + 0x680c) = uVar16;
            *(uint *)(param_1 + 0x6810) = uVar17;
            iVar14 = iVar14 + 1;
          } while (psVar2[uVar8 + 2] != -1);
        }
      }
      else {
        iVar14 = 0;
        while (bVar12) {
          uVar17 = iVar14 * 2;
          lVar1 = param_1 + (ulonglong)(ushort)psVar2[uVar17] * 0x10;
          uVar7 = (uint)(ushort)psVar2[uVar17 + 1] - (uint)(ushort)psVar2[uVar17] & 0x3fffffff;
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
          iVar14 = iVar14 + 1;
          bVar12 = psVar2[uVar17 + 2] != -1;
        }
      }
      psVar2 = (short *)(lVar13 + 0x81c);
      iVar14 = 0;
      sVar4 = *psVar2;
      while (sVar4 != -1) {
        uVar17 = iVar14 * 2;
        lVar1 = param_1 + (ulonglong)(ushort)psVar2[uVar17] * 0x10;
        uVar7 = (uint)(ushort)psVar2[uVar17 + 1] - (uint)(ushort)psVar2[uVar17] & 0x3fffffff;
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
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
        }
        iVar14 = iVar14 + 1;
        sVar4 = psVar2[uVar17 + 2];
      }
      psVar2 = (short *)(lVar13 + 0x840);
      iVar14 = 0;
      sVar4 = *psVar2;
      while (sVar4 != -1) {
        uVar17 = iVar14 * 2;
        uVar7 = (uint)(ushort)psVar2[uVar17 + 1] - (uint)(ushort)psVar2[uVar17];
        lVar13 = param_1 + (ulonglong)(ushort)psVar2[uVar17] * 4;
        puVar10 = (undefined8 *)(lVar13 + 0x6990);
        puVar11 = (undefined8 *)(lVar13 + 0xb330);
        for (uVar8 = uVar7 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
        }
        if (*(char *)(param_1 + 0x21) == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x188))();
        }
        iVar14 = iVar14 + 1;
        sVar4 = psVar2[uVar17 + 2];
      }
    }
    FUN_1800c8aa8(*(undefined8 *)(param_1 + 0xc490));
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xc490) = 0;
  }
  else if (param_3 == 0) {
    local_78 = 0;
  }
  else {
    *(longlong *)(param_1 + 0xc490) = param_2;
    if ((*(char *)(param_1 + 0x21) == '\0') ||
       (*(char *)(*(longlong *)(param_3 + 0x10) + 0x44e) != '\0')) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    plVar18 = (longlong *)(param_3 + 0x10);
    psVar2 = (short *)(param_3 + 0x18);
    if (*psVar2 != -1) {
      iVar14 = 0;
      do {
        if ((!bVar9) && (*(uint *)(param_1 + 0x680c) < *(uint *)(param_1 + 0x6810))) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x128))();
          *(undefined4 *)(param_1 + 0x6814) = 0;
          *(undefined4 *)(param_1 + 0x6810) = 0;
          *(undefined4 *)(param_1 + 0x680c) = 0;
        }
        uVar8 = iVar14 * 2;
        uVar5 = psVar2[uVar8];
        uVar6 = psVar2[uVar8 + 1];
        uVar17 = (uint)uVar6;
        uVar3 = (uint)uVar6 - (uint)uVar5 & 0x3fffffff;
        uVar7 = uVar3 << 1;
        puVar10 = (undefined8 *)(*plVar18 + (ulonglong)uVar5 * 0x10 + 0x850);
        puVar11 = (undefined8 *)(param_1 + (ulonglong)uVar5 * 0x10 + 0x71e0);
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
            uVar16 = (uint)uVar5;
            if (uVar7 < uVar3) {
              uVar16 = (uint)uVar5;
              if (uVar3 < uVar16 || uVar6 < uVar7) {
                pcVar15 = *(code **)(**(longlong **)(param_1 + 0x28) + 0x128);
                goto LAB_1800b4358;
              }
              uVar17 = (uint)uVar6;
              if (uVar6 < uVar3) {
                uVar17 = uVar3;
              }
              if (uVar7 < uVar16) {
                uVar16 = uVar7;
              }
            }
          }
          else {
            if (uVar7 < uVar3) {
              pcVar15 = *(code **)(**(longlong **)(param_1 + 0x28) + 0x128);
LAB_1800b4358:
              (*pcVar15)();
            }
            *(undefined4 *)(param_1 + 0x6814) = 1;
            uVar16 = (uint)uVar5;
          }
          *(uint *)(param_1 + 0x680c) = uVar16;
          *(uint *)(param_1 + 0x6810) = uVar17;
        }
        iVar14 = iVar14 + 1;
      } while (psVar2[uVar8 + 2] != -1);
    }
    psVar2 = (short *)(param_3 + 0x81c);
    iVar14 = 0;
    sVar4 = *psVar2;
    while (sVar4 != -1) {
      uVar17 = iVar14 * 2;
      uVar5 = psVar2[uVar17];
      uVar7 = (uint)(ushort)psVar2[uVar17 + 1] - (uint)uVar5 & 0x3fffffff;
      uVar8 = uVar7 << 1;
      puVar10 = (undefined8 *)(*plVar18 + (ulonglong)uVar5 * 0x10 + 0x48d8);
      puVar11 = (undefined8 *)(param_1 + (ulonglong)uVar5 * 0x10 + 0xb230);
      while (uVar7 != 0) {
        *puVar11 = *puVar10;
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        uVar7 = uVar8;
      }
      if (*(char *)(param_1 + 0x21) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
      }
      iVar14 = iVar14 + 1;
      sVar4 = psVar2[uVar17 + 2];
    }
    psVar2 = (short *)(param_3 + 0x840);
    iVar14 = 0;
    sVar4 = *psVar2;
    while (sVar4 != -1) {
      uVar17 = iVar14 * 2;
      uVar5 = psVar2[uVar17];
      uVar6 = psVar2[uVar17 + 1];
      puVar10 = (undefined8 *)(*plVar18 + (ulonglong)uVar5 * 4 + 0x49e8);
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
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x188))();
      }
      iVar14 = iVar14 + 1;
      sVar4 = psVar2[uVar17 + 2];
    }
  }
  *(undefined1 *)(param_1 + 0xc50a) = 1;
  return local_78;
}

