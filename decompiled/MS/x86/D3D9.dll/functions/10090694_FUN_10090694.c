/*
 * FUN_10090694 at 10090694
 * uint __thiscall FUN_10090694(void * this, uint param_1, int param_2, HWND param_3, uint param_4, int param_5, int param_6, uint * param_7, uint * param_8)
 * Address ranges: 10090694-10090a72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __thiscall
FUN_10090694(void *this,uint param_1,int param_2,HWND param_3,uint param_4,int param_5,int param_6,
            uint *param_7,uint *param_8)

{
  byte *pbVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  HWND pHVar5;
  int *piVar6;
  BOOL BVar7;
  uint *puVar8;
  undefined *puVar9;
  int iVar10;
  void *this_00;
  void *this_01;
  int extraout_EDX;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  ushort in_FPUControlWord;
  int local_b4 [14];
  undefined4 local_7c;
  int local_78 [14];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  LPVOID local_28;
  uint local_24;
  undefined4 local_20;
  void *local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint *local_c;
  uint local_8;
  
  uVar11 = param_4 & 0xe0;
  uVar14 = 0x8876086c;
  local_1c = this;
  if (((param_7 != (uint *)0x0) && (param_1 < *(uint *)((int)this + 0x4c))) &&
     (uVar3 = FUN_100026d2(this,param_2), (char)uVar3 != '\0')) {
    uVar4 = 0xefff1009;
    if ((char)param_8 == '\0') {
      uVar4 = 0xfffff009;
    }
    if ((param_4 & uVar4) == 0) {
      if (uVar11 == 0x20) {
LAB_100906fb:
        if ((uVar11 != 0x40) && ((param_4 & 0x10) != 0)) goto LAB_10090738;
      }
      else if (uVar11 != 0x40) {
        if (uVar11 != 0x80) goto LAB_10090738;
        goto LAB_100906fb;
      }
      if ((param_5 != 0) &&
         (((param_4 & 0x200) == 0 ||
          (*(int *)(*(int *)((int)this + 0x54) + 4 + param_1 * 0x10) == 0)))) {
        uVar14 = 0;
        *param_7 = 0;
      }
    }
  }
LAB_10090738:
  if ((int)uVar14 < 0) {
    return uVar14;
  }
  iVar10 = *(int *)((int)this + 0x54);
  if ((param_4 & 0x200) == 0) {
    local_10 = 1;
  }
  else {
    local_10 = *(uint *)(iVar10 + 8 + param_1 * 0x10);
    this = local_1c;
  }
  local_2c = param_1 * 4;
  if ((param_4 & 0x200) == 0) {
    uVar11 = *(uint *)(local_2c + *(int *)((int)this + 0x48));
  }
  else {
    uVar11 = *(uint *)(iVar10 + param_1 * 0x10);
  }
  puVar8 = *(uint **)(iVar10 + 0xc + param_1 * 0x10);
  local_28 = (LPVOID)0x0;
  local_24 = 0;
  local_20 = 0;
  local_8 = 0;
  local_18 = (uint)puVar8;
  local_c = puVar8;
  do {
    if (local_10 <= local_8) break;
    uVar14 = 0x8876086c;
    local_40 = 0;
    local_7c = *(undefined4 *)(*(int *)((int)this + 0x48) + uVar11 * 4);
    pHVar5 = GetDesktopWindow();
    piVar6 = (int *)(local_8 * 0x38 + param_5);
    if (((piVar6[7] != 0) && ((HWND)piVar6[7] != pHVar5)) ||
       ((param_3 != (HWND)0x0 && (param_3 != pHVar5)))) {
      piVar6 = FUN_1000339a(local_b4,piVar6,param_3);
      piVar15 = local_78;
      for (iVar10 = 0xe; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar15 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar15 = piVar15 + 1;
      }
      uVar14 = 0;
      puVar8 = local_c;
    }
    if ((-1 < (int)uVar14) && (uVar3 = FUN_10008586(&local_28,&local_7c), (char)uVar3 == '\0')) {
      uVar14 = 0x80004005;
    }
    uVar11 = 0;
    if (puVar8 != (uint *)0x0) {
      for (; ((uint)puVar8 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (puVar8 == (uint *)0x0) {
      uVar11 = 0xffffffff;
    }
    else {
      pbVar1 = (byte *)((int)&local_18 + ((int)uVar11 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar11 & 7));
      uVar11 = uVar11 & 0xff;
      local_c = (uint *)local_18;
      puVar8 = (uint *)local_18;
    }
    local_8 = local_8 + 1;
  } while (-1 < (int)uVar14);
  if ((int)uVar14 < 0) goto LAB_10090a40;
  BVar7 = TryEnterCriticalSection(DAT_100deaa4);
  if (BVar7 == 0) {
    FUN_10003e00((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  local_c = &local_18;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_18 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_18 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  FUN_100035d8(this,param_2);
  local_3c = param_4;
  local_38 = FUN_100028d5(this_00,param_2);
  local_30 = local_30 & 0xffffff00;
  local_34 = CONCAT13((char)param_8,*(undefined3 *)(extraout_EDX + 0x159)) ^ 0x1000000;
  local_14 = *(undefined4 *)(&DAT_100db460 + *(int *)((int)this + 8) * 400);
  local_10 = CONCAT13(*(undefined1 *)(extraout_EDX + 0x15c),
                      CONCAT12(*(undefined1 *)(extraout_EDX + 0x15e),
                               CONCAT11(*(undefined1 *)(extraout_EDX + 0x15d),(char)param_8)));
  param_8 = (uint *)CONCAT31(param_8._1_3_,*(undefined1 *)(extraout_EDX + 0x158));
  uVar3 = *(undefined4 *)((int)local_28 + 8);
  local_c = *(uint **)((int)local_28 + 4);
  iVar10 = FUN_100cfd55(0xc314);
  pvVar2 = local_1c;
  this_01 = (void *)(iVar10 + 0x13U & 0xfffffff0);
  *(int *)((int)this_01 + -4) = iVar10;
  puVar8 = FUN_10091924(this_01,local_1c,param_1,param_2,param_3,local_c,uVar3,(char)param_8);
  uVar14 = 0x8007000e;
  if (puVar8 != (uint *)0x0) {
    param_8 = puVar8;
    uVar14 = FUN_10092040(puVar8,*(uint *)(*(int *)((int)pvVar2 + 0x48) + local_2c),local_24,
                          (int)local_28);
    if (-1 < (int)uVar14) {
      puVar9 = &DAT_100d1400;
      if (param_6 == 0) {
        puVar9 = &DAT_100d1310;
      }
      uVar14 = FUN_10090a86((int)(puVar8 + 0x19ad),(int)puVar9,param_7);
      if (-1 < (int)uVar14) {
        uVar3 = FUN_10003d8f((void *)((int)local_1c + 0xb4),&param_8);
        if ((char)uVar3 == '\0') {
          uVar14 = 0x8007000e;
        }
        else {
          uVar11 = 0;
          if (local_24 != 0) {
            do {
              iVar16 = uVar11 * 0x38;
              iVar12 = uVar11 * 0x40;
              uVar11 = uVar11 + 1;
              puVar13 = (undefined4 *)(iVar12 + 4 + (int)local_28);
              puVar17 = (undefined4 *)(iVar16 + param_5);
              for (iVar10 = 0xe; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar17 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar17 = puVar17 + 1;
              }
            } while (uVar11 < local_24);
          }
        }
        puVar8 = param_8;
        if (-1 < (int)uVar14) goto LAB_10090a0f;
      }
      FUN_100920cc((int *)puVar8);
    }
LAB_10090a0f:
    if ((int)uVar14 < 0) {
      FUN_1009202d(puVar8);
    }
  }
  param_8 = &local_18;
  LeaveCriticalSection(DAT_100deaa4);
LAB_10090a40:
  thunk_FUN_100cfd6c(local_28);
  return uVar14;
}

