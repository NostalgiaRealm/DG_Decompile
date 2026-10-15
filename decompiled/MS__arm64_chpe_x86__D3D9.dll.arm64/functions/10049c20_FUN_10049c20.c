/*
 * FUN_10049c20 at 10049c20
 * undefined FUN_10049c20(void)
 * Address ranges: 10049c20-1004a4e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10049c20(undefined4 param_1,int param_2,int param_3,int *param_4,uint param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 extraout_x1;
  undefined4 *puVar9;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  undefined4 *extraout_w8_01;
  undefined4 *extraout_w8_02;
  int iVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  undefined1 auVar11 [16];
  undefined1 local_80;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined1 auStack_58 [24];
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = param_3 * 6;
  if (uVar4 < 0x1001) {
    if (*(int *)(param_2 + 0xf830) != 0) {
      puVar9 = (undefined4 *)(param_2 + 0xf854);
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar7,*extraout_w8,*puVar9,0);
    }
    if (*(int *)(param_2 + 0xf834) != 0) {
      puVar9 = (undefined4 *)(param_2 + 0xf858);
      uVar7 = (*pcVar6)();
      (*extraout_w11_00)(uVar7,*extraout_w8_00,*puVar9,0);
    }
    if (*(int *)(param_2 + 0xf838) != 0) {
      puVar9 = (undefined4 *)(param_2 + 0xf85c);
      uVar7 = (*pcVar6)();
      (*extraout_w11_01)(uVar7,*extraout_w8_01,*puVar9,0);
    }
    if (*(int *)(param_2 + 0xf83c) != 0) {
      puVar9 = (undefined4 *)(param_2 + 0xf860);
      uVar7 = (*pcVar6)();
      (*extraout_w11_02)(uVar7,*extraout_w8_02,*puVar9,0);
    }
    if (*(int *)(param_2 + 0xf840) != 0) {
      puVar9 = (undefined4 *)(param_2 + 0xf864);
      uVar7 = (*pcVar6)();
      (*extraout_w11_03)(uVar7,*puVar9,*(undefined4 *)(param_2 + 0xf868),0);
    }
    iVar8 = 0;
    if (param_8 != 0) {
      uVar7 = (*pcVar6)();
      iVar8 = (*extraout_w11_04)(uVar7,0);
    }
    iVar1 = *(int *)(param_2 + 0xf830);
    iVar5 = iVar1;
    if (iVar1 == 0) {
      iVar5 = *(int *)(param_2 + 0xf840);
    }
    iVar10 = 0xf864;
    if (iVar1 != 0) {
      iVar10 = 0xf844;
    }
    if ((((param_8 == 0) && (iVar5 != 0 && param_3 == 1)) && (*param_4 == 0)) && (param_4[1] == 0))
    {
      uVar3 = *(uint *)(iVar5 + 0x14) >> (ulonglong)(*(uint *)(iVar10 + param_2) & 0x1f);
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      if (param_4[2] == uVar3) {
        uVar3 = *(uint *)(iVar5 + 0x18) >> (ulonglong)(*(uint *)(iVar10 + param_2) & 0x1f);
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        if (param_4[3] == uVar3) {
          FUN_10047f98(param_2,0,0,0);
          if ((param_5 & 1) != 0) {
            FUN_10075798(param_2,param_6,auStack_58);
            if (*(int *)(param_2 + 0xf8ec) != 0) {
              iVar8 = *(int *)(param_2 + 0xf830);
              uVar4 = *(uint *)(param_2 + 0xf844);
              local_68 = 0;
              local_60 = *(uint *)(iVar8 + 0x14) >> (ulonglong)(uVar4 & 0x1f);
              if (local_60 == 0) {
                local_60 = 1;
              }
              local_5c = *(uint *)(iVar8 + 0x18) >> (ulonglong)(uVar4 & 0x1f);
              if (local_5c == 0) {
                local_5c = 1;
              }
              auVar11 = (*pcVar6)(iVar8,uVar4 + *(int *)(param_2 + 0xf854) * *(int *)(iVar8 + 0x2c))
              ;
              (*extraout_w11_05)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_,&local_68);
              uVar7 = (*pcVar6)();
              (*extraout_w11_06)(uVar7,*(undefined4 *)(param_2 + 0xf8ec),auStack_58);
            }
            if (*(int *)(param_2 + 0xf8f0) != 0) {
              iVar8 = *(int *)(param_2 + 0xf834);
              uVar4 = *(uint *)(param_2 + 0xf848);
              local_68 = 0;
              local_60 = *(uint *)(iVar8 + 0x14) >> (ulonglong)(uVar4 & 0x1f);
              if (local_60 == 0) {
                local_60 = 1;
              }
              local_5c = *(uint *)(iVar8 + 0x18) >> (ulonglong)(uVar4 & 0x1f);
              if (local_5c == 0) {
                local_5c = 1;
              }
              auVar11 = (*pcVar6)(iVar8,uVar4 + *(int *)(param_2 + 0xf858) * *(int *)(iVar8 + 0x2c))
              ;
              (*extraout_w11_07)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_,&local_68);
              uVar7 = (*pcVar6)();
              (*extraout_w11_08)(uVar7,*(undefined4 *)(param_2 + 0xf8f0),auStack_58);
            }
            if (*(int *)(param_2 + 0xf8f4) != 0) {
              uVar4 = *(uint *)(param_2 + 0xf84c);
              iVar8 = *(int *)(param_2 + 0xf838);
              local_68 = 0;
              local_60 = *(uint *)(iVar8 + 0x14) >> (ulonglong)(uVar4 & 0x1f);
              if (local_60 == 0) {
                local_60 = 1;
              }
              local_5c = *(uint *)(iVar8 + 0x18) >> (ulonglong)(uVar4 & 0x1f);
              if (local_5c == 0) {
                local_5c = 1;
              }
              auVar11 = (*pcVar6)(iVar8,uVar4 + *(int *)(param_2 + 0xf85c) * *(int *)(iVar8 + 0x2c))
              ;
              (*extraout_w11_09)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_,&local_68);
              uVar7 = (*pcVar6)();
              (*extraout_w11_10)(uVar7,*(undefined4 *)(param_2 + 0xf8f4),auStack_58);
            }
            if (*(int *)(param_2 + 0xf8f8) != 0) {
              uVar4 = *(uint *)(param_2 + 0xf850);
              iVar8 = *(int *)(param_2 + 0xf83c);
              local_68 = 0;
              local_60 = *(uint *)(iVar8 + 0x14) >> (ulonglong)(uVar4 & 0x1f);
              if (local_60 == 0) {
                local_60 = 1;
              }
              local_5c = *(uint *)(iVar8 + 0x18) >> (ulonglong)(uVar4 & 0x1f);
              if (local_5c == 0) {
                local_5c = 1;
              }
              auVar11 = (*pcVar6)(iVar8,uVar4 + *(int *)(param_2 + 0xf860) * *(int *)(iVar8 + 0x2c))
              ;
              (*extraout_w11_11)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_,&local_68);
              uVar7 = (*pcVar6)();
              (*extraout_w11_12)(uVar7,*(undefined4 *)(param_2 + 0xf8f8),auStack_58);
            }
          }
          if ((param_5 & 6) == 0) {
            return;
          }
          if (*(int *)(param_2 + 0xf9c4) == 0) {
            return;
          }
          FUN_10042c90(param_2);
          local_80 = (undefined1)param_7;
          uVar7 = (*pcVar6)(*(undefined4 *)(*(int *)(param_2 + 0xf6b4) + 4),extraout_x1,
                            param_5 >> 1 & 3,local_80);
          (*extraout_w11_13)(param_1,uVar7,*(undefined4 *)(param_2 + 0xf9c4));
          return;
        }
      }
    }
    if ((((*(char *)(param_2 + 0x7642) == '\0') || (param_5 != *(uint *)(param_2 + 0x7620))) ||
        ((param_6 != *(int *)(param_2 + 0x7624) ||
         ((param_7 != *(int *)(param_2 + 0x7628) || (iVar8 != *(int *)(param_2 + 0xf82c))))))) ||
       ((uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50)) < uVar4)) {
      FUN_10047f98(param_2,(uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50)) <
                           uVar4,0,0x14);
      cVar2 = *(char *)(param_2 + 0x7642);
      if ((((cVar2 == '\0') || (param_5 != *(uint *)(param_2 + 0x7620))) ||
          (iVar8 != *(int *)(param_2 + 0xf82c))) ||
         ((*(int *)(param_2 + 0xfc8) != 0x14 ||
          (*(int *)(param_2 + 0x100c) != *(int *)(param_2 + 0x5c))))) {
        *(uint *)(param_2 + 0x7620) = param_5;
        if (cVar2 == '\0') {
          *(undefined1 *)(param_2 + 0xf66e) = 1;
        }
        if (*(int *)(param_2 + 0xf9d8) != *(int *)(param_2 + 0xf6d4)) {
          *(int *)(param_2 + 0xf9d8) = *(int *)(param_2 + 0xf6d4);
          *(undefined1 *)(param_2 + 0xf66f) = 1;
        }
        if (*(int *)(param_2 + 0xfc8) != 0x14) {
          *(int *)(param_2 + 0xfc8) = 0x14;
          *(undefined1 *)(param_2 + 0xf66f) = 1;
        }
        if (*(int *)(param_2 + 0x100c) != *(int *)(param_2 + 0x5c)) {
          *(int *)(param_2 + 0x100c) = *(int *)(param_2 + 0x5c);
          *(undefined1 *)(param_2 + 0xf66f) = 1;
        }
        if ((iVar8 != 0) && (iVar8 != *(int *)(param_2 + 0xf82c))) {
          *(undefined1 *)(param_2 + 0xf669) = 1;
          *(byte *)(param_2 + 0xf664) = *(byte *)(param_2 + 0xf664) | 1;
        }
        *(int *)(param_2 + 0xf82c) = iVar8;
        *(undefined4 *)(param_2 + 0xf9c8) = *(undefined4 *)(*(int *)(param_2 + 0xf6b8) + 0x134);
        uVar7 = *(undefined4 *)(*(int *)(param_2 + 0xf6b8) + 0x138);
        *(undefined4 *)(param_2 + 0xf9d4) = 0;
        *(undefined1 *)(param_2 + 0xf668) = 1;
        *(undefined4 *)(param_2 + 0xf9cc) = uVar7;
        *(undefined4 *)(param_2 + 0xfa2c) = 4;
        *(undefined1 *)(param_2 + 0x10230) = 1;
        *(undefined1 *)(param_2 + 0x7648) = 0;
        if (*(char *)(param_2 + 0x7642) == '\0') {
          *(undefined1 *)(param_2 + 0x7642) = 1;
          FUN_10074c68(param_2);
        }
      }
    }
    FUN_1007a6a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (*(code *)PTR_FUN_1016c068)();
  }
  return;
}

