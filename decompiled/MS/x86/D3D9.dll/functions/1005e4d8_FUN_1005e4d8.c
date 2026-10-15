/*
 * FUN_1005e4d8 at 1005e4d8
 * undefined __thiscall FUN_1005e4d8(void * this, int * param_1, int * param_2, int param_3, uint param_4, uint param_5, int param_6, char param_7, int param_8, char param_9)
 * Address ranges: 1005e4d8-1005ea3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1005e4d8(void *this,int *param_1,int *param_2,int param_3,uint param_4,uint param_5,int param_6,
            char param_7,int param_8,char param_9)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 extraout_CL;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar6;
  undefined4 extraout_EDX_03;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  
  uVar7 = param_4 & 0xf000000;
  if ((((uVar7 == 0x1000000) || (uVar7 == 0x3000000)) || (uVar7 == 0x5000000)) ||
     ((uVar7 == 0x6000000 || (local_14 = 0, uVar7 == 0x8000000)))) {
    local_14 = 0x80000000;
  }
  local_18 = param_4 >> 0x10;
  local_1c = param_4 & 0x7ff;
  local_20 = uVar7;
  if ((param_8 != 0) && (param_7 == '\0')) {
    local_18 = FUN_100c40de(CONCAT31((int3)((uint)this >> 8),0xe4),
                            CONCAT31((int3)(local_1c >> 8),param_9));
  }
  _local_24 = CONCAT31(uStack_23,(char)local_18);
  uVar3 = FUN_1005da5e(param_4);
  if (uVar3 == 0) {
    uVar7 = FUN_1005e39a((int)param_1,extraout_EDX);
    param_1[param_3 * 8 + 0xd4] = uVar7 | local_14;
    *(char *)(param_1 + param_3 * 8 + 0xd5) = (char)local_18;
    param_1[param_3 * 8 + 0xd8] = -1;
    param_1[param_3 * 8 + 0xdb] = -1;
    param_1[param_3 * 8 + 0xda] = -1;
    param_1[param_3 * 8 + 0xd9] = -1;
    uVar7 = local_20;
  }
  else if (uVar3 == 1) {
    if (param_1[extraout_EDX + 0x8e] == 0) {
      uVar3 = FUN_100c2e34((int)param_1,4,'\x01');
      param_1[local_1c + 0x8e] = uVar3;
      FUN_100c3be1(param_1,param_2,0x2036);
    }
    param_1[param_3 * 8 + 0xd4] = param_1[local_1c + 0x8e] | local_14;
    *(char *)(param_1 + param_3 * 8 + 0xd5) = (char)local_18;
    param_1[param_3 * 8 + 0xd8] = -1;
    param_1[param_3 * 8 + 0xdb] = -1;
    param_1[param_3 * 8 + 0xda] = -1;
    param_1[param_3 * 8 + 0xd9] = -1;
  }
  else if (uVar3 == 2) {
    if (((char)param_1[0x3c] == '\0') ||
       (local_1c = param_1[0x3d], *(char *)(local_1c + 0x331 + extraout_EDX) == '\0')) {
      FUN_1005e1dc(param_1 + param_3 * 8 + 0xd4,param_1[0x1c] | local_14,(char)_local_24,
                   extraout_EDX << 4);
    }
    else {
      uVar7 = local_18 & 0xff;
      iVar4 = extraout_EDX * 4;
      uVar5 = *(undefined4 *)(local_1c + 0x414 + ((local_18 & 3) + iVar4) * 4);
      uVar6 = *(undefined4 *)(local_1c + 0x414 + ((uVar7 >> 4 & 3) + iVar4) * 4);
      auVar8._4_4_ = uVar6;
      auVar8._0_4_ = uVar5;
      auVar8._8_4_ = uVar6;
      auVar8._12_4_ = *(undefined4 *)(local_1c + 0x414 + ((uVar7 >> 6) + iVar4) * 4);
      auVar9._8_8_ = auVar8._8_8_;
      auVar9._4_4_ = *(undefined4 *)(local_1c + 0x414 + ((uVar7 >> 2 & 3) + iVar4) * 4);
      auVar9._0_4_ = uVar5;
      auVar9 = minps(auVar9,_DAT_100d9770);
      param_1[param_3 * 8 + 0xd4] = param_1[0x29];
      *(undefined1 *)(param_1 + param_3 * 8 + 0xd5) = 0xe4;
      auVar9 = maxps(auVar9,_DAT_100d9890);
      puVar1 = (uint *)(param_1 + param_3 * 8 + 0xd8);
      *puVar1 = auVar9._0_4_ ^ local_14;
      puVar1[1] = auVar9._4_4_ ^ local_14;
      puVar1[2] = auVar9._8_4_ ^ local_14;
      puVar1[3] = auVar9._12_4_ ^ local_14;
      uVar7 = local_20;
    }
  }
  else if (uVar3 == 3) {
    uVar7 = FUN_1005e3ca((int)param_1,extraout_EDX);
    param_1[param_3 * 8 + 0xd4] = uVar7 | local_14;
    *(char *)(param_1 + param_3 * 8 + 0xd5) = (char)local_18;
    param_1[param_3 * 8 + 0xd8] = -1;
    param_1[param_3 * 8 + 0xdb] = -1;
    param_1[param_3 * 8 + 0xda] = -1;
    param_1[param_3 * 8 + 0xd9] = -1;
    uVar7 = local_20;
  }
  if (param_8 == 0) {
    return;
  }
  iVar4 = (param_6 << 0x1c) >> 0x1c;
  cVar2 = FUN_100c413d(param_9);
  local_14 = CONCAT31(local_14._1_3_,cVar2);
  local_50 = param_8;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  local_38 = 0xffffffff;
  local_34 = 0xffffffff;
  local_4c = extraout_CL;
  FUN_10058f9a(local_90,(int)param_1,cVar2);
  cVar2 = (char)local_14;
  uVar5 = extraout_ECX;
  uVar6 = extraout_EDX_00;
  if (uVar7 < 0x4000001) {
    if (uVar7 != 0x4000000) {
      if ((uVar7 == 0) || (uVar7 == 0x1000000)) {
        if (iVar4 == 0) {
LAB_1005e91e:
          FUN_100c3cfd(param_1,param_2,param_5 | 0x36);
          uVar5 = extraout_ECX_00;
          uVar6 = extraout_EDX_01;
          goto LAB_1005e977;
        }
        if (iVar4 != 1) {
LAB_1005e897:
          param_5 = param_5 | 0x38;
        }
      }
      else {
        if ((uVar7 != 0x2000000) && (uVar7 != 0x3000000)) goto LAB_1005e977;
        FUN_10058f9a(local_70,(int)param_1,cVar2);
        if (iVar4 != 0) goto LAB_1005ea22;
      }
      goto LAB_1005e96b;
    }
LAB_1005e9d7:
    FUN_10058f9a(local_70,(int)param_1,cVar2);
    if (iVar4 != -1) {
      FUN_10058f9a(local_b0,(int)param_1,(char)local_14);
LAB_1005ea22:
      FUN_100c3cfd(param_1,param_2,param_5 | 0x32);
      uVar5 = extraout_ECX_02;
      uVar6 = extraout_EDX_03;
      goto LAB_1005e977;
    }
  }
  else {
    if (uVar7 == 0x5000000) goto LAB_1005e9d7;
    if (uVar7 == 0x6000000) {
      if (iVar4 == 0) {
        FUN_10058f9a(local_70,(int)param_1,cVar2);
        goto LAB_1005e96b;
      }
      FUN_10058f9a(local_70,(int)param_1,cVar2);
      goto LAB_1005ea22;
    }
    if ((uVar7 != 0x7000000) && (uVar7 != 0x8000000)) goto LAB_1005e977;
    if (iVar4 == -1) goto LAB_1005e91e;
    if (iVar4 != 0) {
      FUN_10058f9a(local_70,(int)param_1,cVar2);
      goto LAB_1005e897;
    }
  }
LAB_1005e96b:
  FUN_100c3cfd(param_1,param_2,param_5);
  uVar5 = extraout_ECX_01;
  uVar6 = extraout_EDX_02;
LAB_1005e977:
  uVar5 = FUN_100c40de(CONCAT31((int3)((uint)uVar5 >> 8),0xe4),
                       CONCAT31((int3)((uint)uVar6 >> 8),local_4c));
  *(char *)(param_1 + param_3 * 8 + 0xd5) = (char)uVar5;
  param_1[param_3 * 8 + 0xd4] = local_50;
  param_1[param_3 * 8 + 0xd8] = -1;
  param_1[param_3 * 8 + 0xdb] = -1;
  param_1[param_3 * 8 + 0xda] = -1;
  param_1[param_3 * 8 + 0xd9] = -1;
                    /* WARNING: Read-only address (ram,0x100d9770) is written */
                    /* WARNING: Read-only address (ram,0x100d9890) is written */
  return;
}

