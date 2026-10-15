/*
 * FUN_18004b808 at 18004b808
 * undefined FUN_18004b808(void)
 * Address ranges: 18004b808-18004bb6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b808(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  
  lVar11 = *param_1;
  iVar16 = (int)param_1[1];
  lVar15 = *(longlong *)((longlong)param_1 + 0xc);
  lVar17 = *(longlong *)((longlong)param_1 + 0x14);
  iVar2 = *(int *)((longlong)param_1 + 0x1c);
  uVar14 = *(uint *)(param_1 + 4);
  lVar13 = lVar11 + 0x8000;
  lVar5 = param_1[5];
  FUN_18003dea0(lVar11);
  lVar10 = *(longlong *)(*(longlong *)(lVar11 + 0xf6e0) + 0x1508);
  lVar12 = *(longlong *)(lVar10 + 0xb48) + 1;
  *(longlong *)(lVar10 + 0xb48) = lVar12;
  uVar3 = *(undefined4 *)(lVar11 + 0x1028);
  uVar4 = *(undefined4 *)(lVar11 + 0x106c);
  *(longlong *)(lVar11 + 0xffd8) = lVar12;
  uVar7 = *(undefined8 *)(lVar11 + 0xff28);
  if (iVar16 == 6) {
    if (2 < uVar14) {
      uVar14 = uVar14 - 2;
      iVar16 = 0;
      if (uVar14 != 0) {
        local_80 = lVar11 + 0x10000;
        local_98 = lVar11 + 0x10000;
        local_90 = lVar13;
        local_88 = lVar17;
        local_78 = lVar11 + 0xf000;
        while( true ) {
          iVar8 = *(int *)(lVar11 + 0x94) + *(int *)(lVar11 + 0x90);
          if (0x1000U - iVar8 < 0x10) {
            FUN_18003feb0(lVar11,0,1,0);
            iVar8 = 0;
          }
          uVar1 = (0x1000U - iVar8) / 3;
          if (uVar14 < (0x1000U - iVar8) / 3) {
            uVar1 = uVar14;
          }
          if (local_88 == 0) {
            FUN_18003df60(lVar11,4,lVar15);
          }
          else {
            FUN_180042a10(lVar11,4,local_88 + -0x30,uVar7,*(undefined8 *)(local_90 + 0x7710),uVar4,
                          uVar3,0,uVar1 * 3,0,0);
          }
          *(byte *)(local_78 + 0x68f) =
               (*(uint *)(lVar15 + 0x10) & (*(uint *)(local_80 + 0x180) ^ 0xffffffff)) != 0 |
               *(byte *)(local_78 + 0x68f);
          *(undefined4 *)(local_80 + 0x180) = *(undefined4 *)(lVar15 + 0x10);
          *(undefined1 *)(local_98 + 0x184) = 1;
          uVar9 = 0;
          if (uVar1 != 0) {
            do {
              **(int **)(lVar11 + 0x88) = uVar9 + iVar2 + 1 + iVar16;
              iVar8 = uVar9 + iVar2 + 2 + iVar16;
              uVar9 = uVar9 + 1;
              *(int *)(*(longlong *)(lVar11 + 0x88) + 4) = iVar8;
              *(int *)(*(longlong *)(lVar11 + 0x88) + 8) = iVar2;
              *(longlong *)(lVar11 + 0x88) = *(longlong *)(lVar11 + 0x88) + 0xc;
            } while (uVar9 < uVar1);
          }
          uVar14 = uVar14 - uVar1;
          *(uint *)(lVar11 + 0x94) = *(int *)(lVar11 + 0x94) + uVar1 * 3;
          lVar13 = local_90;
          if (uVar14 == 0) break;
          iVar16 = uVar1 + iVar16;
          FUN_1800403c0(lVar11,lVar15);
        }
      }
      FUN_18003feb0(lVar11,0,0,0);
    }
  }
  else {
    if (lVar17 == 0) {
      FUN_18003df60(lVar11,iVar16,lVar15);
    }
    else {
      FUN_180042a10(lVar11,iVar16,lVar17 + -0x30,uVar7,*(undefined8 *)(lVar11 + 0xff30),uVar4,uVar3,
                    0,0,0,*(undefined1 *)(lVar17 + 0x1c));
    }
    *(byte *)(lVar11 + 0xf68f) =
         (*(uint *)(lVar15 + 0x10) & (*(uint *)(lVar11 + 0x10180) ^ 0xffffffff)) != 0 |
         *(byte *)(lVar11 + 0xf68f);
    *(undefined4 *)(lVar11 + 0x10180) = *(undefined4 *)(lVar15 + 0x10);
    *(undefined1 *)(lVar11 + 0x10184) = 0;
    uVar6 = FUN_18003ab70(lVar11);
    if ((uVar6 & 1) != 0) {
      FUN_1800ea670(*(undefined8 *)(*(longlong *)(lVar11 + 0xf6e0) + 0x1508),uVar14,1,iVar2,0);
    }
    FUN_18003de60(lVar11);
  }
  if ((char)lVar5 != '\0') {
    uVar7 = *(undefined8 *)(lVar13 + 0x7fd8);
    lVar12 = *(longlong *)(*(longlong *)(lVar13 + 0x76e0) + 0x1508);
    FUN_1800e8038(lVar12);
    FUN_1800e80d8(lVar12);
    uVar14 = *(uint *)(lVar12 + 0xb50);
    local_60 = (**(code **)(**(longlong **)(*(longlong *)(lVar12 + 0xb40) + 0x10) + 0x58))();
    uVar6 = (ulonglong)uVar14 * 8;
    local_58 = (undefined4)uVar7;
    local_70 = local_60 + (uVar6 | 4);
    local_68 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_60 = local_60 + uVar6;
    local_98 = 0x200000002;
    (**(code **)(**(longlong **)(lVar12 + 0x688) + 0x210))
              (*(longlong **)(lVar12 + 0x688),2,&local_70,&local_98);
  }
  return;
}

