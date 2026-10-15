/*
 * FUN_100095f0 at 100095f0
 * undefined FUN_100095f0(void)
 * Address ranges: 100095f0-1000993f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100095f0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            int param_7,int param_8,uint param_9,undefined4 param_10,int param_11)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  undefined1 auStack_118 [8];
  int local_110 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar10 = 0x8876086c;
  if ((param_11 == 0) || (*(int *)(param_11 + 0x980) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if (2 < *(byte *)(*(int *)(param_11 + 0x97c) + 1)) {
      bVar3 = true;
      goto LAB_10009670;
    }
  }
  bVar3 = false;
LAB_10009670:
  if ((((*(int *)(param_8 + 4) != 3) &&
       ((uint)((param_3 + param_4) * *(int *)(param_8 + 0xc)) <= *(uint *)(param_5 + 0x10))) &&
      (*(char *)(param_8 + 0x15) == '\x04' || bVar3)) &&
     ((*(uint *)(param_7 + 0x10) & (*(uint *)(param_1 + 0x587c) ^ 0xffffffff)) == 0)) {
    uStack_108 = 0;
    local_110[0] = 0;
    local_110[1] = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_50 = 0;
    local_48 = 0;
    local_124 = param_2;
    local_120 = param_6;
    FUN_10120e20(auStack_118);
    local_128 = 0;
    iVar5 = FUN_1001c8a0(param_5,0,0,&local_128,param_9 & 0xfffffffe);
    if (-1 < iVar5) {
      iVar5 = *(int *)(param_1 + 0x4ac);
      local_11c = iVar5;
      if (bVar4) {
        uVar9 = *(uint *)(param_7 + 8);
        uVar8 = 0;
        if (uVar9 != 0) {
          do {
            bVar1 = *(byte *)(param_7 + 0x9c + uVar8);
            uVar8 = uVar8 + 1;
            uVar7 = (uint)bVar1;
            iVar5 = (int)*(char *)(param_7 + 0x14 + (uint)bVar1 * 8);
            local_110[uVar7 * 3] =
                 *(int *)(*(int *)(param_1 + 0x57bc + iVar5 * 4) + 4) +
                 (uint)*(byte *)(param_7 + 0x17 + (uint)bVar1 * 8) * 4;
            uVar2 = *(undefined1 *)(param_7 + 0x15 + uVar7 * 8);
            *(undefined1 *)((int)&uStack_108 + uVar7 * 0xc) =
                 *(undefined1 *)(param_7 + 0x18 + uVar7 * 8);
            *(undefined1 *)((int)&uStack_108 + uVar7 * 0xc + 1) = uVar2;
            local_110[uVar7 * 3 + 1] = *(int *)(param_1 + 0x57fc + iVar5 * 4);
          } while (uVar8 < uVar9);
        }
        uVar10 = *(undefined4 *)(param_11 + 0x980);
        iVar5 = *(int *)(param_11 + 0x984);
        if (iVar5 == 0) {
          iVar5 = FUN_10014330(uVar10);
          *(int *)(param_11 + 0x984) = iVar5;
        }
        FUN_10015f70(param_1,uVar10,iVar5,*(undefined4 *)(param_11 + 0x168),local_110,local_120,
                     local_128,param_8,param_3);
      }
      else {
        uVar6 = FUN_1000ef20(param_1,param_7,local_110);
        if ((uVar6 & 1) != 0) {
          uVar8 = 4;
          if (*(int *)(param_1 + 0x4b0) == 0) {
            uVar8 = 0;
          }
          uVar9 = 3;
          if (iVar5 == 0) {
            uVar9 = 1;
          }
          FUN_10024980(param_1,local_110,local_128,param_8,uVar8 | uVar9,param_3,param_4,local_124,
                       param_9 == 1);
        }
      }
      FUN_1001cb90(param_5);
      if (local_11c != 0) {
        *(byte *)(param_5 + 100) =
             ~(byte)(*(uint *)(param_5 + 0x34) >> 5) & 1 | *(byte *)(param_5 + 100);
      }
      uVar10 = 0;
    }
    FUN_10120ed0(auStack_118);
  }
  return uVar10;
}

