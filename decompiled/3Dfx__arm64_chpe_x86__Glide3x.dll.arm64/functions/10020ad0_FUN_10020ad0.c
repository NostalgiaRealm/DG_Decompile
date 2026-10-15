/*
 * FUN_10020ad0 at 10020ad0
 * undefined FUN_10020ad0(void)
 * Address ranges: 10020ad0-10020fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020ad0(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  code *extraout_w11;
  uint uVar10;
  uint uVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  
  puVar1 = (undefined1 *)(param_2 + 0x7c);
  uVar4 = *puVar1;
  puVar2 = (undefined4 *)(param_2 + 0x34);
  iVar5 = (*(code *)PTR_FUN_100a019c)(puVar2);
  if (iVar5 == 0) {
    if (*(char *)(param_2 + 0x81) == '\0') {
      if (*(char *)(param_2 + 0x7e) != '\0') {
        if (*(char *)(param_2 + 0x80) == '\0') {
          FUN_1001fb20(param_1,param_2,0,0,0,0,uVar4);
        }
        else {
          local_58 = *puVar2;
          local_48 = *(int *)(param_2 + 0x40);
          iStack_54 = *(int *)(param_2 + 0x38);
          uStack_4c = *(undefined4 *)(param_2 + 0x3c);
          local_50 = 0;
          *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + ((uint)(local_48 - iStack_54) >> 4);
          uStack_44 = 1;
          FUN_1001f968(param_1,param_2,&local_58,uVar4);
        }
        FUN_1001f230(param_1,param_2,param_3,uVar4,*puVar2,*(undefined4 *)(param_2 + 0x38),
                     *(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),param_4);
        *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) | 2;
      }
    }
    else {
      puVar3 = (uint *)(param_2 + 0x84);
      uVar6 = *puVar3;
      uVar9 = 0;
      uVar10 = uVar6;
      do {
        uVar8 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
        if ((1 - (uVar8 >> 5) & 0xff) != 0) {
          uVar11 = -1 << (ulonglong)(uVar8 + 1 & 0x1f);
          iVar5 = uVar9 + uVar8;
          uVar10 = uVar11 & ~uVar10;
          uVar11 = uVar11 & uVar6;
          if (iVar5 != -1) {
            goto LAB_10020c24;
          }
          break;
        }
        uVar9 = uVar9 + 0x20;
        if (uVar9 == 0x100) break;
        uVar6 = puVar3[uVar9 >> 5];
        uVar10 = 0;
        if (0x100 - uVar9 < 0x20) {
          uVar10 = 0xffffffff;
        }
        uVar10 = uVar10 | uVar6;
      } while (uVar9 < 0x100);
    }
LAB_10020dd0:
    FUN_10023e18(param_2);
    if (param_2 == param_1 + 0x140) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_1,0);
    }
    if (((*(char *)(param_1 + 0x124) != '\0') ||
        (**(char **)(*(int *)(param_1 + 0x138) + 0x32f0) != '\0')) &&
       (FUN_100220b8(param_1,1,0),
       *(char *)(*(int *)(*(int *)(param_1 + 0x138) + 0x32f0) + 3) != '\0')) {
      (*(code *)PTR_FUN_100a0030)();
    }
    if (*(char *)(param_1 + 0x125) != '\0') {
      FUN_100220b8(param_1,2,0);
    }
  }
  return;
LAB_10020c24:
  uVar6 = (uVar10 & 0xaaaaaaaa) >> 1 | (uVar10 & 0x55555555) << 1;
  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
  if ((1 - (uVar6 >> 5) & 0xff) == 0) {
    uVar9 = uVar9 + 0x20;
    if (uVar9 != 0x100) {
      uVar11 = puVar3[uVar9 >> 5];
      uVar10 = 0;
      if (0x100 - uVar9 < 0x20) {
        uVar10 = 0xffffffff;
      }
      uVar10 = ~(uVar10 | uVar11);
      if (uVar9 < 0x100) goto LAB_10020c24;
    }
    iVar7 = -1;
  }
  else {
    uVar8 = -1 << (ulonglong)(uVar6 + 1 & 0x1f);
    uVar10 = uVar8 & uVar10;
    uVar11 = uVar8 & uVar11;
    iVar7 = uVar9 + uVar6;
  }
  if (iVar7 == -1) {
    iVar7 = iVar5;
  }
  FUN_10023a58(iVar5 << 0xf,iVar7 << 0xf,*(undefined4 *)(param_2 + 0x20),
               *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x58),*puVar1);
  local_78 = *puVar2;
  local_70 = *(undefined4 *)(param_2 + 0x3c);
  iStack_6c = (int)((ulonglong)extraout_x1 >> 0x20);
  if ((int)extraout_x1 != 0) {
    iStack_6c = iStack_6c + 1;
  }
  uStack_74 = extraout_var;
  (*(code *)PTR_FUN_100a0198)(&local_68,&local_78,puVar2);
  FUN_1001fb20(param_1,param_2,iVar5 << 0xf,iVar7 << 0xf,*(undefined4 *)(param_2 + 0x50),
               *(undefined4 *)(param_2 + 0x58),*puVar1);
  FUN_1001f230(param_1,param_2,param_3,uVar4,local_68,uStack_64,local_60,uStack_5c,param_4);
  *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) | 2;
  while( true ) {
    if (0xff < uVar9) goto LAB_10020dd0;
    uVar6 = (uVar11 & 0xaaaaaaaa) >> 1 | (uVar11 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
    if ((1 - (uVar6 >> 5) & 0xff) != 0) break;
    uVar9 = uVar9 + 0x20;
    if (uVar9 == 0x100) goto LAB_10020dd0;
    uVar11 = puVar3[uVar9 >> 5];
    uVar10 = 0;
    if (0x100 - uVar9 < 0x20) {
      uVar10 = 0xffffffff;
    }
    uVar10 = ~(uVar10 | uVar11);
  }
  uVar8 = -1 << (ulonglong)(uVar6 + 1 & 0x1f);
  iVar5 = uVar9 + uVar6;
  uVar10 = uVar8 & uVar10;
  uVar11 = uVar8 & uVar11;
  if (iVar5 == -1) goto LAB_10020dd0;
  goto LAB_10020c24;
}

