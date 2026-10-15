/*
 * FUN_10032658 at 10032658
 * undefined FUN_10032658(void)
 * Address ranges: 10032658-10032cbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032658(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  uint uVar15;
  uint uVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar17;
  uint uVar18;
  uint local_80;
  uint uStack_7c;
  undefined4 local_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  pcVar1 = (char *)(param_2 + 0x7c);
  cVar5 = *pcVar1;
  puVar2 = (uint *)(param_2 + 0x34);
  iVar7 = (*(code *)PTR_FUN_100a019c)(puVar2);
  if (iVar7 == 0) {
    piVar3 = (int *)(param_1 + 0x138);
    FUN_10014978(*piVar3);
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (*(char *)(param_2 + 0x81) == '\0') {
      if (*(char *)(param_2 + 0x7e) != '\0') {
        if (*(char *)(param_2 + 0x80) == '\0') {
          FUN_10031c08(param_1,param_2,0,0,0,0,cVar5);
        }
        else {
          uVar16 = *puVar2;
          uVar9 = (ulonglong)uVar16;
          iVar7 = *(int *)(param_2 + 0x40);
          uVar17 = *(uint *)(param_2 + 0x38);
          uVar10 = (ulonglong)uVar17;
          iVar14 = *(int *)(param_2 + 0x3c);
          *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + (iVar7 - uVar17 >> 4);
          if ((((uVar16 == 0) && (iVar14 == *(int *)(param_2 + 0x20) && uVar17 == 0)) &&
              (iVar7 == *(int *)(param_2 + 0x24))) && (*(char *)(param_2 + 0x49) == '\0')) {
            if (cVar5 == '\0') {
              puVar11 = (undefined4 *)(param_2 + 0xfc);
              puVar12 = (undefined4 *)(param_2 + 0xc4);
            }
            else {
              puVar11 = (undefined4 *)(param_2 + 0x100);
              puVar12 = (undefined4 *)(param_2 + 0xdc);
            }
            uVar8 = (*pcVar6)();
            (*extraout_w11_00)(uVar8,*puVar12,*puVar11);
          }
          else {
            uStack_6c = 1;
            local_78 = 0;
            local_80 = uVar16;
            uStack_7c = uVar17;
            iStack_74 = iVar14;
            local_70 = iVar7;
            if (cVar5 == '\0') {
              puVar11 = (undefined4 *)(param_2 + 0xfc);
              uVar8 = (*pcVar6)();
              (*extraout_w11_02)(uVar8,*extraout_w8_00,0,uVar9 & 0xffffffff,uVar10 & 0xffffffff,0,
                                 *puVar11,0,&local_80);
            }
            else {
              puVar11 = (undefined4 *)(param_2 + 0x100);
              uVar8 = (*pcVar6)();
              (*extraout_w11_01)(uVar8,*extraout_w8,0,uVar9 & 0xffffffff,uVar10 & 0xffffffff,0,
                                 *puVar11,0,&local_80);
            }
          }
        }
        FUN_10031650(param_1,param_2,param_3,cVar5,*puVar2,*(undefined4 *)(param_2 + 0x38),
                     *(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),param_4);
        *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) | 2;
      }
    }
    else {
      puVar4 = (uint *)(param_2 + 0x84);
      uVar13 = *puVar4;
      uVar16 = 0;
      uVar17 = uVar13;
      do {
        uVar15 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
        if ((1 - (uVar15 >> 5) & 0xff) != 0) {
          uVar18 = -1 << (ulonglong)(uVar15 + 1 & 0x1f);
          iVar7 = uVar16 + uVar15;
          uVar17 = uVar18 & ~uVar17;
          uVar18 = uVar18 & uVar13;
          if (iVar7 != -1) {
            goto LAB_100327c0;
          }
          break;
        }
        uVar16 = uVar16 + 0x20;
        if (uVar16 == 0x100) break;
        uVar13 = puVar4[uVar16 >> 5];
        uVar17 = 0;
        if (0x100 - uVar16 < 0x20) {
          uVar17 = 0xffffffff;
        }
        uVar17 = uVar17 | uVar13;
      } while (uVar16 < 0x100);
    }
LAB_10032974:
    FUN_10023e18(param_2);
    if (param_2 == param_1 + 0x13c) {
      (*pcVar6)();
      (*extraout_w11)(param_1,0);
    }
    if (((*(char *)(param_1 + 0x124) != '\0') || (**(char **)(*piVar3 + 0x32f0) != '\0')) &&
       (FUN_10033d98(param_1,1,0), *(char *)(*(int *)(*piVar3 + 0x32f0) + 3) != '\0')) {
      (*(code *)PTR_FUN_100a0030)();
    }
    if (*(char *)(param_1 + 0x125) != '\0') {
      FUN_10033d98(param_1,2,0);
    }
    (*(code *)PTR_FUN_100a0090)(*(int *)(*piVar3 + 0x3300) + 0x4a0);
  }
  return;
LAB_100327c0:
  uVar13 = (uVar17 & 0xaaaaaaaa) >> 1 | (uVar17 & 0x55555555) << 1;
  uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
  if ((1 - (uVar13 >> 5) & 0xff) == 0) {
    uVar16 = uVar16 + 0x20;
    if (uVar16 != 0x100) {
      uVar18 = puVar4[uVar16 >> 5];
      uVar17 = 0;
      if (0x100 - uVar16 < 0x20) {
        uVar17 = 0xffffffff;
      }
      uVar17 = ~(uVar17 | uVar18);
      if (uVar16 < 0x100) goto LAB_100327c0;
    }
    iVar14 = -1;
  }
  else {
    uVar15 = -1 << (ulonglong)(uVar13 + 1 & 0x1f);
    uVar17 = uVar15 & uVar17;
    uVar18 = uVar15 & uVar18;
    iVar14 = uVar16 + uVar13;
  }
  if (iVar14 == -1) {
    iVar14 = iVar7;
  }
  FUN_10031c08(param_1,param_2,iVar7 << 0xf,iVar14 << 0xf,*(undefined4 *)(param_2 + 0x50),
               *(undefined4 *)(param_2 + 0x58),*pcVar1);
  FUN_10023a58(iVar7 << 0xf,iVar14 << 0xf,*(undefined4 *)(param_2 + 0x20),
               *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x58),*pcVar1);
  local_68 = *puVar2;
  local_60 = *(undefined4 *)(param_2 + 0x3c);
  iStack_5c = (int)((ulonglong)extraout_x1 >> 0x20);
  if ((int)extraout_x1 != 0) {
    iStack_5c = iStack_5c + 1;
  }
  uStack_64 = extraout_var;
  (*(code *)PTR_FUN_100a0198)(&local_58,&local_68,puVar2);
  FUN_10031650(param_1,param_2,param_3,cVar5,local_58,uStack_54,local_50,uStack_4c,param_4);
  *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) | 2;
  while( true ) {
    if (0xff < uVar16) goto LAB_10032974;
    uVar13 = (uVar18 & 0xaaaaaaaa) >> 1 | (uVar18 & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
    if ((1 - (uVar13 >> 5) & 0xff) != 0) break;
    uVar16 = uVar16 + 0x20;
    if (uVar16 == 0x100) goto LAB_10032974;
    uVar18 = puVar4[uVar16 >> 5];
    uVar17 = 0;
    if (0x100 - uVar16 < 0x20) {
      uVar17 = 0xffffffff;
    }
    uVar17 = ~(uVar17 | uVar18);
  }
  uVar15 = -1 << (ulonglong)(uVar13 + 1 & 0x1f);
  iVar7 = uVar16 + uVar13;
  uVar17 = uVar17 & uVar15;
  uVar18 = uVar18 & uVar15;
  if (iVar7 == -1) goto LAB_10032974;
  goto LAB_100327c0;
}

