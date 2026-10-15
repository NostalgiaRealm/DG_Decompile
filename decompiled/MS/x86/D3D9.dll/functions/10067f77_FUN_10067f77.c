/*
 * FUN_10067f77 at 10067f77
 * undefined1 __stdcall FUN_10067f77(uint param_1, undefined4 param_2, undefined4 * param_3, int param_4, int param_5, int * param_6)
 * Address ranges: 10067f77-100681bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
FUN_10067f77(uint param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5,
            int *param_6)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 local_5310 [4764];
  int local_8a0 [4];
  int local_890;
  int local_888 [12];
  undefined1 *local_858;
  undefined2 local_854;
  undefined1 local_83c;
  undefined1 local_83a [1050];
  int local_420 [36];
  uint local_390;
  undefined4 local_38c;
  uint local_388;
  undefined1 local_374;
  char local_372;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [4];
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x10067f96;
  FUN_1006743f(local_5310,param_3,param_1);
  local_48[0] = param_4;
  local_38 = local_5310;
  local_34 = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  piVar7 = local_48;
  piVar8 = local_8a0;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  local_888[1] = 0;
  local_888[2] = 0;
  FUN_100cfed0(local_888 + 3,0,0x45c);
  FUN_100cfed0(local_420,0,0x3c0);
  FUN_100cfed0(local_888,0,0x38);
  local_888[0] = param_5;
  local_858 = local_83a;
  local_390 = param_1;
  local_38c = param_2;
  local_83c = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48[0] = 0;
  local_38 = (undefined4 *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_854 = 0x40;
  local_58 = 0x43425844;
  local_48[1] = 1;
  local_48[2] = 0;
  local_48[3] = 3;
  FUN_100c3d16(param_6,&local_58,0x2c);
  uStack_14 = uStack_14 & 0xffffff;
  *(int *)(*param_6 + 0x20) = param_6[1] - *param_6;
  local_372 = '\0';
  uVar4 = 0;
  if ((local_390 >> 9 & 1) != 0) {
    uVar9 = 0xffffffff;
    local_20 = 0xffffffff;
    do {
      cVar3 = *(char *)(uVar4 + local_890);
      uStack_14 = (uint)CONCAT12(cVar3,(undefined2)uStack_14);
      if (cVar3 == '\0') {
        if (*(char *)(uVar4 + 0x10 + local_890) != '\0') {
          uVar9 = uVar4;
        }
      }
      else if (cVar3 == '0') {
        local_20 = uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
    if ((uVar9 != 0xffffffff) && (local_20 != 0xffffffff)) {
      bVar2 = true;
      local_372 = '\x01';
      local_388 = local_20;
      goto LAB_10068124;
    }
  }
  bVar2 = false;
LAB_10068124:
  local_374 = 0;
  if (bVar2) {
    local_374 = *(undefined1 *)(local_388 + 0x10 + local_890);
    pbVar1 = (byte *)(local_388 + 0x10 + local_890);
    *pbVar1 = *pbVar1 | 7;
  }
  cVar3 = FUN_10070483(param_6,local_8a0);
  if (cVar3 != '\0') {
    *(int *)(*param_6 + 0x24) = param_6[1] - *param_6;
    if (local_372 != '\0') {
      *(undefined1 *)(local_388 + 0x10 + local_890) = local_374;
    }
    uVar5 = FUN_10067504(param_6,local_8a0);
    if ((char)uVar5 != '\0') {
      *(int *)(*param_6 + 0x28) = param_6[1] - *param_6;
      uVar5 = FUN_1006767e(param_6,(int)local_8a0);
      if ((char)uVar5 != '\0') {
        FUN_100c3dfb(param_6);
        return 1;
      }
    }
  }
  return uStack_14._3_1_;
}

