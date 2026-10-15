/*
 * FUN_1003e0a0 at 1003e0a0
 * undefined FUN_1003e0a0(void)
 * Address ranges: 1003e0a0-1003e617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e0a0(undefined4 param_1,int param_2,int param_3,int *param_4,uint param_5,int param_6,
                 uint param_7,int param_8)

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
  int iVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 auVar11 [16];
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined1 auStack_58 [24];
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = param_3 * 6;
  if (uVar4 < 0x1001) {
    if (*(int *)(param_2 + 0xdacc) != 0) {
      puVar9 = (undefined4 *)(param_2 + 0xdaf0);
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar7,*extraout_w8,*puVar9,0);
    }
    if (*(int *)(param_2 + 0xdadc) != 0) {
      uVar7 = (*pcVar6)();
      (*extraout_w11_00)(uVar7,*extraout_w8_00,*(undefined4 *)(param_2 + 0xdb04),0);
    }
    iVar8 = 0;
    if (param_8 != 0) {
      uVar7 = (*pcVar6)();
      iVar8 = (*extraout_w11_01)(uVar7,0);
    }
    iVar1 = *(int *)(param_2 + 0xdacc);
    iVar5 = iVar1;
    if (iVar1 == 0) {
      iVar5 = *(int *)(param_2 + 0xdadc);
    }
    iVar10 = 0xdb00;
    if (iVar1 != 0) {
      iVar10 = 0xdae0;
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
          FUN_1003c678(param_2,0,0,0);
          if (((param_5 & 1) != 0) &&
             (FUN_1005fcb8(param_2,param_6,auStack_58), *(int *)(param_2 + 0xdb48) != 0)) {
            iVar8 = *(int *)(param_2 + 0xdacc);
            uVar4 = *(uint *)(param_2 + 0xdae0);
            local_68 = 0;
            local_60 = *(uint *)(iVar8 + 0x14) >> (ulonglong)(uVar4 & 0x1f);
            if (local_60 == 0) {
              local_60 = 1;
            }
            local_5c = *(uint *)(iVar8 + 0x18) >> (ulonglong)(uVar4 & 0x1f);
            if (local_5c == 0) {
              local_5c = 1;
            }
            auVar11 = (*pcVar6)(iVar8,uVar4 + *(int *)(iVar8 + 0x2c) * *(int *)(param_2 + 0xdaf0));
            (*extraout_w11_02)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_,&local_68);
            uVar7 = (*pcVar6)();
            (*extraout_w11_03)(uVar7,*(undefined4 *)(param_2 + 0xdb48),auStack_58);
          }
          if ((param_5 & 6) == 0) {
            return;
          }
          if (*(int *)(param_2 + 0xdb78) == 0) {
            return;
          }
          FUN_10038e08(param_2);
          uVar7 = (*pcVar6)(*(undefined4 *)(*(int *)(param_2 + 0xd9b4) + 4),extraout_x1,
                            param_5 >> 1 & 3,param_7 & 0xff);
          (*extraout_w11_04)(param_1,uVar7,*(undefined4 *)(param_2 + 0xdb78));
          return;
        }
      }
    }
    if (((*(char *)(param_2 + 0x5955) == '\0') || (param_5 != *(uint *)(param_2 + 0x5934))) ||
       ((param_6 != *(int *)(param_2 + 0x5938) ||
        (((param_7 != *(uint *)(param_2 + 0x593c) || (iVar8 != *(int *)(param_2 + 0xdac8))) ||
         ((uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50)) < uVar4)))))) {
      FUN_1003c678(param_2,(uint)((0x1000 - *(int *)(param_2 + 0x54)) - *(int *)(param_2 + 0x50)) <
                           uVar4,0,0x14);
      cVar2 = *(char *)(param_2 + 0x5955);
      if (((cVar2 == '\0') || (param_5 != *(uint *)(param_2 + 0x5934))) ||
         ((iVar8 != *(int *)(param_2 + 0xdac8) ||
          ((*(int *)(param_2 + 0x6a8) != 0x14 ||
           (*(int *)(param_2 + 0x6ec) != *(int *)(param_2 + 0x5c))))))) {
        *(uint *)(param_2 + 0x5934) = param_5;
        if (cVar2 == '\0') {
          *(undefined1 *)(param_2 + 0xd97e) = 1;
        }
        if (*(int *)(param_2 + 0xdb8c) != *(int *)(param_2 + 0xd9d4)) {
          *(int *)(param_2 + 0xdb8c) = *(int *)(param_2 + 0xd9d4);
          *(undefined1 *)(param_2 + 0xd97f) = 1;
        }
        if (*(int *)(param_2 + 0x6a8) != 0x14) {
          *(int *)(param_2 + 0x6a8) = 0x14;
          *(undefined1 *)(param_2 + 0xd97f) = 1;
        }
        if (*(int *)(param_2 + 0x6ec) != *(int *)(param_2 + 0x5c)) {
          *(int *)(param_2 + 0x6ec) = *(int *)(param_2 + 0x5c);
          *(undefined1 *)(param_2 + 0xd97f) = 1;
        }
        if ((iVar8 != 0) && (iVar8 != *(int *)(param_2 + 0xdac8))) {
          *(undefined1 *)(param_2 + 0xd979) = 1;
          *(byte *)(param_2 + 0xd974) = *(byte *)(param_2 + 0xd974) | 1;
        }
        *(int *)(param_2 + 0xdac8) = iVar8;
        *(undefined4 *)(param_2 + 0xdb7c) = *(undefined4 *)(*(int *)(param_2 + 0xd9b8) + 0x134);
        uVar7 = *(undefined4 *)(*(int *)(param_2 + 0xd9b8) + 0x138);
        *(undefined4 *)(param_2 + 0xdb88) = 0;
        *(undefined1 *)(param_2 + 0xd978) = 1;
        *(undefined1 *)(param_2 + 0xdf04) = 1;
        *(undefined4 *)(param_2 + 0xdb80) = uVar7;
        *(undefined4 *)(param_2 + 0xdbe0) = 4;
        *(undefined1 *)(param_2 + 0x595b) = 0;
        if (*(char *)(param_2 + 0x5955) == '\0') {
          *(undefined1 *)(param_2 + 0x5955) = 1;
          FUN_1005f298(param_2);
        }
      }
    }
    FUN_10064088(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (*(code *)PTR_FUN_10134064)();
  }
  return;
}

