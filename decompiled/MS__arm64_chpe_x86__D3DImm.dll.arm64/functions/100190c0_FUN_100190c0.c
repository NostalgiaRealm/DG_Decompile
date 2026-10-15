/*
 * FUN_100190c0 at 100190c0
 * undefined FUN_100190c0(void)
 * Address ranges: 100190c0-100196a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100190c0(undefined4 param_1,int param_2,int param_3,int *param_4,uint param_5,int param_6,
                 uint param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 extraout_x1;
  undefined4 *puVar10;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  int iVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 auVar12 [16];
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined1 auStack_58 [24];
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = param_3 * 6;
  if (uVar5 < 0x1001) {
    piVar1 = (int *)(param_2 + 0x1e58);
    if (*piVar1 != 0) {
      puVar10 = (undefined4 *)(param_2 + 0x1e7c);
      uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar8,*extraout_w8,*puVar10,0);
    }
    if (*(int *)(param_2 + 0x1e68) != 0) {
      puVar10 = (undefined4 *)(param_2 + 0x1e90);
      uVar8 = (*pcVar7)();
      (*extraout_w11_00)(uVar8,*extraout_w8_00,*puVar10,0);
    }
    iVar9 = 0;
    if (param_8 != 0) {
      uVar8 = (*pcVar7)();
      iVar9 = (*extraout_w11_01)(uVar8,0);
    }
    iVar2 = *piVar1;
    iVar6 = iVar2;
    if (iVar2 == 0) {
      iVar6 = *(int *)(param_2 + 0x1e68);
    }
    iVar11 = 0x1e8c;
    if (iVar2 != 0) {
      iVar11 = 0x1e6c;
    }
    if ((((param_8 == 0) && (iVar6 != 0 && param_3 == 1)) && (*param_4 == 0)) && (param_4[1] == 0))
    {
      uVar4 = *(uint *)(iVar6 + 0x14) >> (ulonglong)(*(uint *)(iVar11 + param_2) & 0x1f);
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (param_4[2] == uVar4) {
        uVar4 = *(uint *)(iVar6 + 0x18) >> (ulonglong)(*(uint *)(iVar11 + param_2) & 0x1f);
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        if (param_4[3] == uVar4) {
          FUN_10017a70(param_2,0,0,0);
          if ((param_5 & 1) != 0) {
            FUN_10033018(param_2,param_6,auStack_58);
            if (*(int *)(param_2 + 0x1eb4) != 0) {
              uVar5 = *(uint *)(param_2 + 0x1e6c);
              iVar9 = *piVar1;
              local_68 = 0;
              local_60 = *(uint *)(iVar9 + 0x14) >> (ulonglong)(uVar5 & 0x1f);
              if (local_60 == 0) {
                local_60 = 1;
              }
              local_5c = *(uint *)(iVar9 + 0x18) >> (ulonglong)(uVar5 & 0x1f);
              if (local_5c == 0) {
                local_5c = 1;
              }
              auVar12 = (*pcVar7)(iVar9,uVar5 + *(int *)(iVar9 + 0x2c) * *(int *)(param_2 + 0x1e7c))
              ;
              (*extraout_w11_02)(auVar12._0_8_ & 0xffffffff,auVar12._8_8_,&local_68);
              uVar8 = (*pcVar7)();
              (*extraout_w11_03)(uVar8,*(int *)(param_2 + 0x1eb4),auStack_58);
            }
          }
          if ((param_5 & 6) == 0) {
            return;
          }
          if (*(int *)(param_2 + 0x1ee4) == 0) {
            return;
          }
          FUN_10014900(param_2);
          uVar8 = (*pcVar7)(*(undefined4 *)(*(int *)(param_2 + 0x1d54) + 4),extraout_x1,
                            param_5 >> 1 & 3,param_7 & 0xff);
          (*extraout_w11_04)(param_1,uVar8,*(int *)(param_2 + 0x1ee4));
          return;
        }
      }
    }
    if ((((*(char *)(param_2 + 0x1905) == '\0') || (param_5 != *(uint *)(param_2 + 0x18e4))) ||
        ((param_6 != *(int *)(param_2 + 0x18e8) ||
         ((param_7 != *(uint *)(param_2 + 0x18ec) || (iVar9 != *(int *)(param_2 + 0x1e54))))))) ||
       ((uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50)) < uVar5)) {
      FUN_10017a70(param_2,(uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50)) <
                           uVar5,0,0x14);
      cVar3 = *(char *)(param_2 + 0x1905);
      if ((((cVar3 == '\0') || (param_5 != *(uint *)(param_2 + 0x18e4))) ||
          (iVar9 != *(int *)(param_2 + 0x1e54))) ||
         ((*(int *)(param_2 + 0x4b0) != 0x14 ||
          (*(int *)(param_2 + 0x4f4) != *(int *)(param_2 + 0x5c))))) {
        *(uint *)(param_2 + 0x18e4) = param_5;
        if (cVar3 == '\0') {
          *(undefined1 *)(param_2 + 0x1d3e) = 1;
        }
        if (*(int *)(param_2 + 0x1ef8) != *(int *)(param_2 + 0x1d74)) {
          *(int *)(param_2 + 0x1ef8) = *(int *)(param_2 + 0x1d74);
          *(undefined1 *)(param_2 + 0x1d3f) = 1;
        }
        if (*(int *)(param_2 + 0x4b0) != 0x14) {
          *(int *)(param_2 + 0x4b0) = 0x14;
          *(undefined1 *)(param_2 + 0x1d3f) = 1;
        }
        if (*(int *)(param_2 + 0x4f4) != *(int *)(param_2 + 0x5c)) {
          *(int *)(param_2 + 0x4f4) = *(int *)(param_2 + 0x5c);
          *(undefined1 *)(param_2 + 0x1d3f) = 1;
        }
        if ((iVar9 != 0) && (iVar9 != *(int *)(param_2 + 0x1e54))) {
          *(undefined1 *)(param_2 + 0x1d39) = 1;
          *(byte *)(param_2 + 0x1d34) = *(byte *)(param_2 + 0x1d34) | 1;
        }
        *(int *)(param_2 + 0x1e54) = iVar9;
        *(undefined4 *)(param_2 + 0x1ee8) = *(undefined4 *)(*(int *)(param_2 + 0x1d58) + 0x11c);
        uVar8 = *(undefined4 *)(*(int *)(param_2 + 0x1d58) + 0x120);
        *(undefined1 *)(param_2 + 0x1d38) = 1;
        *(undefined4 *)(param_2 + 0x1eec) = uVar8;
        *(undefined4 *)(param_2 + 0x1ef4) = 0;
        *(undefined4 *)(param_2 + 0x1f4c) = 4;
        *(undefined1 *)(param_2 + 0x2270) = 1;
        if (*(char *)(param_2 + 0x1905) == '\0') {
          *(undefined1 *)(param_2 + 0x1905) = 1;
          FUN_10032568(param_2);
        }
      }
    }
    FUN_100377d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (*(code *)PTR_FUN_100a100c)();
  }
  return;
}

