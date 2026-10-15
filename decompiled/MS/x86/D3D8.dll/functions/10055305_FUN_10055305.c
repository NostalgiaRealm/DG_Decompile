/*
 * FUN_10055305 at 10055305
 * undefined1 __stdcall FUN_10055305(uint param_1, undefined4 param_2, undefined4 * param_3, int param_4, int param_5, int * param_6)
 * Address ranges: 10055305-10055547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
FUN_10055305(uint param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5,
            int *param_6)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 local_5058 [4630];
  int local_800 [4];
  int local_7f0;
  int local_7e8 [12];
  undefined1 *local_7b8;
  undefined2 local_7b4;
  undefined1 local_79c;
  undefined1 local_79a [906];
  int local_410 [36];
  uint local_380;
  undefined4 local_37c;
  uint local_378;
  undefined1 local_364;
  char local_362;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [4];
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x10055324;
  FUN_10054904(local_5058,param_3,param_1);
  local_40[0] = param_4;
  local_30 = local_5058;
  local_2c = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  piVar7 = local_40;
  piVar8 = local_800;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  local_7e8[1] = 0;
  local_7e8[2] = 0;
  FUN_100ada8e(local_7e8 + 3,0,0x3cc);
  FUN_100ada8e(local_410,0,0x3c0);
  FUN_100ada8e(local_7e8,0,0x38);
  local_7e8[0] = param_5;
  local_7b8 = local_79a;
  local_380 = param_1;
  local_37c = param_2;
  local_79c = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40[0] = 0;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_7b4 = 0x40;
  local_50 = 0x43425844;
  local_40[1] = 1;
  local_40[2] = 0;
  local_40[3] = 3;
  FUN_100a14c1(param_6,&local_50,0x2c);
  uStack_14 = uStack_14 & 0xffffff;
  *(int *)(*param_6 + 0x20) = param_6[1] - *param_6;
  local_362 = '\0';
  uVar4 = 0;
  if ((local_380 >> 9 & 1) != 0) {
    uVar9 = 0xffffffff;
    local_20 = 0xffffffff;
    do {
      cVar2 = *(char *)(uVar4 + local_7f0);
      uStack_14 = (uint)CONCAT12(cVar2,(undefined2)uStack_14);
      if (cVar2 == '\0') {
        if (*(char *)(uVar4 + 0x10 + local_7f0) != '\0') {
          uVar9 = uVar4;
        }
      }
      else if (cVar2 == '0') {
        local_20 = uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
    if ((uVar9 != 0xffffffff) && (local_20 != 0xffffffff)) {
      bVar3 = true;
      local_362 = '\x01';
      local_378 = local_20;
      goto LAB_100554af;
    }
  }
  bVar3 = false;
LAB_100554af:
  local_364 = 0;
  if (bVar3) {
    local_364 = *(undefined1 *)(local_378 + 0x10 + local_7f0);
    pbVar1 = (byte *)(local_378 + 0x10 + local_7f0);
    *pbVar1 = *pbVar1 | 7;
  }
  uVar5 = FUN_1005aa2c(param_6,local_800);
  if ((char)uVar5 != '\0') {
    *(int *)(*param_6 + 0x24) = param_6[1] - *param_6;
    if (local_362 != '\0') {
      *(undefined1 *)(local_378 + 0x10 + local_7f0) = local_364;
    }
    uVar5 = FUN_100549c9(param_6,local_800);
    if ((char)uVar5 != '\0') {
      *(int *)(*param_6 + 0x28) = param_6[1] - *param_6;
      uVar5 = FUN_10054b43(param_6,(int)local_800);
      if ((char)uVar5 != '\0') {
        FUN_100a15a6(param_6);
        return 1;
      }
    }
  }
  return uStack_14._3_1_;
}

