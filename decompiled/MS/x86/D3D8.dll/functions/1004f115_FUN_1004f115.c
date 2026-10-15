/*
 * FUN_1004f115 at 1004f115
 * undefined __fastcall FUN_1004f115(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4, int param_5, uint param_6, uint param_7, undefined4 param_8, char param_9, int param_10, char param_11)
 * Address ranges: 1004f115-1004f612
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_1004f115(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,
            uint param_6,uint param_7,undefined4 param_8,char param_9,int param_10,char param_11)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 extraout_CL;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar5;
  int *piVar6;
  int extraout_EDX_03;
  int extraout_EDX_04;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 local_b0 [8];
  undefined4 local_90 [8];
  undefined4 local_70 [8];
  int local_50;
  undefined1 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_24;
  undefined3 uStack_23;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  uVar7 = param_6 & 0xf000000;
  if ((((uVar7 == 0x1000000) || (uVar7 == 0x3000000)) || (uVar7 == 0x5000000)) ||
     ((uVar7 == 0x6000000 || (local_14 = 0, uVar7 == 0x8000000)))) {
    local_14 = 0x80000000;
  }
  local_1c = param_6 >> 0x10;
  local_18 = param_6 & 0x1fff;
  local_20 = uVar7;
  if ((param_10 != 0) && (param_9 == '\0')) {
    uVar3 = FUN_100a1889(CONCAT31((uint3)(byte)(param_6 >> 0x18),0xe4),
                         CONCAT31((int3)((uint)param_2 >> 8),param_11));
    local_1c = CONCAT31((int3)((uint)extraout_ECX >> 8),(char)uVar3);
  }
  uVar4 = local_18;
  _local_24 = CONCAT31(uStack_23,(char)local_1c);
  uVar10 = param_6 & 0x70000000;
  if (uVar10 == 0) {
    uVar7 = FUN_1004efd4((int)param_3,local_18);
LAB_1004f36c:
    puVar8 = (uint *)(param_3 + (param_5 + 0x13) * 8);
    *puVar8 = uVar7 | local_14;
    *(char *)(puVar8 + 1) = (char)local_1c;
    puVar8[4] = 0xffffffff;
    puVar8[5] = 0xffffffff;
    puVar8[6] = 0xffffffff;
    puVar8[7] = 0xffffffff;
    uVar7 = local_20;
  }
  else if (uVar10 == 0x10000000) {
    if (param_3[local_18 + 0x8a] == 0) {
      uVar4 = FUN_100a05ed((int)param_3,4,'\x01');
      param_3[local_18 + 0x8a] = uVar4;
      FUN_100a138c(param_3,param_4,0x2036);
    }
    puVar8 = (uint *)(param_3 + (param_5 + 0x13) * 8);
    *puVar8 = param_3[local_18 + 0x8a] | local_14;
    *(char *)(puVar8 + 1) = (char)local_1c;
    puVar8[4] = 0xffffffff;
    puVar8[7] = 0xffffffff;
    puVar8[6] = 0xffffffff;
    puVar8[5] = 0xffffffff;
  }
  else if (uVar10 == 0x20000000) {
    uVar10 = local_18;
    if (((char)param_3[0x38] == '\0') ||
       (uVar10 = param_3[0x39], *(char *)(uVar10 + 0x41 + local_18) == '\0')) {
      local_18 = uVar10;
      FUN_1004ee48(param_3 + param_5 * 8 + 0x98,param_3[0x18] | local_14,(char)local_1c,uVar4 << 4);
    }
    else {
      uVar7 = local_1c & 0xff;
      iVar9 = local_18 * 4;
      uVar3 = *(undefined4 *)(uVar10 + 0x4c + ((local_1c & 3) + iVar9) * 4);
      uVar1 = *(undefined4 *)(uVar10 + 0x4c + ((uVar7 >> 4 & 3) + iVar9) * 4);
      iVar5 = param_5 + 0x13;
      auVar11._4_4_ = uVar1;
      auVar11._0_4_ = uVar3;
      auVar11._8_4_ = uVar1;
      auVar11._12_4_ = *(undefined4 *)(uVar10 + 0x4c + ((uVar7 >> 6) + iVar9) * 4);
      auVar12._8_8_ = auVar11._8_8_;
      auVar12._4_4_ = *(undefined4 *)(uVar10 + 0x4c + ((uVar7 >> 2 & 3) + iVar9) * 4);
      auVar12._0_4_ = uVar3;
      auVar12 = minps(auVar12,_DAT_100b5cb0);
      param_3[iVar5 * 8] = param_3[0x25];
      auVar12 = maxps(auVar12,_DAT_100b5d80);
      *(undefined1 *)(param_3 + iVar5 * 8 + 1) = 0xe4;
      puVar8 = (uint *)(param_3 + iVar5 * 8 + 4);
      *puVar8 = auVar12._0_4_ ^ local_14;
      puVar8[1] = auVar12._4_4_ ^ local_14;
      puVar8[2] = auVar12._8_4_ ^ local_14;
      puVar8[3] = auVar12._12_4_ ^ local_14;
      uVar7 = local_20;
      local_18 = uVar10;
    }
  }
  else if (uVar10 == 0x30000000) {
    uVar7 = FUN_1004f004((int)param_3,local_18);
    goto LAB_1004f36c;
  }
  if (param_10 == 0) {
    return;
  }
  cVar2 = FUN_100a18e8(param_11);
  local_14 = CONCAT31(local_14._1_3_,cVar2);
  local_50 = param_10;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  local_38 = 0xffffffff;
  local_34 = 0xffffffff;
  local_4c = extraout_CL;
  FUN_1004a057(local_90,(int)param_3,cVar2);
  cVar2 = (char)local_14;
  uVar3 = extraout_ECX_00;
  iVar5 = extraout_EDX;
  if (uVar7 < 0x4000001) {
    if (uVar7 != 0x4000000) {
      if ((uVar7 == 0) || (uVar7 == 0x1000000)) {
        if (extraout_EDX == 0) {
LAB_1004f504:
          FUN_100a14a8(param_3,param_4,param_7 | 0x36);
          uVar3 = extraout_ECX_01;
          iVar5 = extraout_EDX_01;
          goto LAB_1004f55e;
        }
        if (extraout_EDX != 1) {
LAB_1004f480:
          param_7 = param_7 | 0x38;
        }
      }
      else {
        if ((uVar7 != 0x2000000) && (uVar7 != 0x3000000)) goto LAB_1004f55e;
        FUN_1004a057(local_70,(int)param_3,cVar2);
        if (extraout_EDX_00 != 0) goto LAB_1004f5f7;
      }
      goto LAB_1004f552;
    }
LAB_1004f5aa:
    FUN_1004a057(local_70,(int)param_3,cVar2);
    if (extraout_EDX_03 != -1) {
      FUN_1004a057(local_b0,(int)param_3,(char)local_14);
LAB_1004f5f7:
      FUN_100a14a8(param_3,param_4,param_7 | 0x32);
      uVar3 = extraout_ECX_03;
      iVar5 = extraout_EDX_04;
      goto LAB_1004f55e;
    }
  }
  else {
    if (uVar7 == 0x5000000) goto LAB_1004f5aa;
    if (uVar7 == 0x6000000) {
      if (extraout_EDX == 0) {
        FUN_1004a057(local_70,(int)param_3,cVar2);
        goto LAB_1004f552;
      }
      FUN_1004a057(local_70,(int)param_3,cVar2);
      goto LAB_1004f5f7;
    }
    if ((uVar7 != 0x7000000) && (uVar7 != 0x8000000)) goto LAB_1004f55e;
    if (extraout_EDX == -1) goto LAB_1004f504;
    if (extraout_EDX != 0) {
      FUN_1004a057(local_70,(int)param_3,cVar2);
      goto LAB_1004f480;
    }
  }
LAB_1004f552:
  FUN_100a14a8(param_3,param_4,param_7);
  uVar3 = extraout_ECX_02;
  iVar5 = extraout_EDX_02;
LAB_1004f55e:
  uVar3 = FUN_100a1889(CONCAT31((int3)((uint)uVar3 >> 8),0xe4),
                       CONCAT31((int3)((uint)iVar5 >> 8),local_4c));
  piVar6 = param_3 + (param_5 + 0x13) * 8;
  *(char *)(piVar6 + 1) = (char)uVar3;
  *piVar6 = local_50;
  piVar6[4] = -1;
  piVar6[7] = -1;
  piVar6[6] = -1;
  piVar6[5] = -1;
                    /* WARNING: Read-only address (ram,0x100b5cb0) is written */
                    /* WARNING: Read-only address (ram,0x100b5d80) is written */
  return;
}

