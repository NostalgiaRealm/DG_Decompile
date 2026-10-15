/*
 * FUN_10003630 at 10003630
 * undefined FUN_10003630(void)
 * Address ranges: 10003630-100039cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003630(void)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined4 local_19c;
  undefined1 auStack_198 [320];
  int local_58;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar2 = (*extraout_w11)(uVar4);
  if (cVar2 != '\0') {
    uVar12 = 0;
    do {
      cVar2 = FUN_10002d50((&DAT_100be2a8)[uVar12 * 0x8a],0);
      (&DAT_100be338)[uVar12 * 0x228] = cVar2;
      if (((&DAT_100be150)[uVar12 * 0x8a] == 0) && (cVar2 == '\0')) {
        FUN_100917d0(&DAT_100be150 + uVar12 * 0x8a,0,0x228);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0x20);
    uVar13 = 0;
    uVar12 = 0;
    uVar4 = (*pcVar1)();
    uVar5 = (*extraout_w11_00)(uVar4);
    uVar14 = 0;
    if (uVar5 != 0) {
      do {
        uVar4 = (*pcVar1)();
        uVar6 = (*extraout_w11_01)(uVar4,uVar14);
        uVar11 = 0;
        if (uVar6 != 0) {
          do {
            if (((0x1f < uVar13) ||
                ((*(uint *)(DAT_100be0c0 + 0x953) & 1 << (ulonglong)(uVar13 & 0x1f)) != 0)) &&
               ((*(int *)(DAT_100be0c0 + 0x76c) == 0 ||
                (*(int *)(DAT_100be0c0 + 0x76c) - 1U == uVar11)))) {
              uVar4 = (*pcVar1)();
              iVar7 = (*extraout_w11_02)(uVar4,uVar14);
              uVar4 = (*pcVar1)();
              (*extraout_w11_03)(uVar4,auStack_198,uVar14,uVar11);
              uVar10 = 0;
              do {
                if (((iVar7 == (&DAT_100be160)[uVar10 * 0x8a]) &&
                    (uVar11 == (&DAT_100be164)[uVar10 * 0x8a])) &&
                   (uVar9 = FUN_10002d50((&DAT_100be2a8)[uVar10 * 0x8a],0), (uVar9 & 1) != 0))
                break;
                uVar10 = uVar10 + 1;
              } while (uVar10 < 0x20);
              if ((uVar10 == 0x20) && (local_58 != 0)) {
                local_1c0 = 0x28;
                iVar8 = (*(code *)PTR_FUN_100ba210)(local_58,&local_1c0);
                if (uVar12 < 0x20 && iVar8 != 0) {
                  do {
                    iVar8 = uVar12 * 0x228;
                    if ((&DAT_100be2a8)[uVar12 * 0x8a] == 0) {
                      uVar4 = (*pcVar1)();
                      (*extraout_w11_04)(uVar4,&local_1e0,iVar7,uVar11);
                      (&DAT_100be150)[uVar12 * 0x8a] = 0;
                      (&DAT_100be154)[uVar12 * 0x8a] = 0;
                      (&DAT_100be160)[uVar12 * 0x8a] = iVar7;
                      (&DAT_100be164)[uVar12 * 0x8a] = uVar11;
                      FUN_100917a0(&DAT_100be168 + uVar12 * 0x228,auStack_198,0x14c);
                      *(undefined8 *)(&DAT_100be320 + iVar8) = 0;
                      (&DAT_100be33a)[iVar8] = 0;
                      (&DAT_100be2bc)[uVar12 * 0x45] = uStack_1d8;
                      (&DAT_100be2b4)[uVar12 * 0x45] = local_1e0;
                      (&DAT_100be2c4)[uVar12 * 0x45] = local_1d0;
                      (&DAT_100be338)[iVar8] = 1;
                      *(undefined8 *)(iVar8 + 0x100be318) = uStack_1b4;
                      *(undefined8 *)(&DAT_100be310 + iVar8) = local_1bc;
                      (&DAT_100be339)[iVar8] = (byte)local_19c & 1;
                      uVar4 = (*pcVar1)();
                      uVar3 = (*extraout_w11_05)(uVar4,uVar14);
                      uVar12 = uVar12 + 1;
                      (&DAT_100be33b)[iVar8] = uVar3;
                      break;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < 0x20);
                }
              }
            }
            uVar11 = uVar11 + 1;
            uVar13 = uVar13 + 1;
          } while (uVar11 < uVar6);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar5);
    }
  }
  return;
}

