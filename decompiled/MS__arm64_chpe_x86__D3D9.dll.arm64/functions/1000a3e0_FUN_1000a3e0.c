/*
 * FUN_1000a3e0 at 1000a3e0
 * undefined FUN_1000a3e0(void)
 * Address ranges: 1000a3e0-1000a7ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1000a3e0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            int param_7,int param_8,uint param_9,undefined4 param_10,int param_11)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 local_128;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  undefined1 auStack_114 [4];
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
  
  uVar11 = 0x8876086c;
  if ((param_11 == 0) || (*(int *)(param_11 + 0x860) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if (2 < *(byte *)(*(int *)(param_11 + 0x85c) + 1)) {
      bVar4 = true;
      goto LAB_1000a460;
    }
  }
  bVar4 = false;
LAB_1000a460:
  if ((((*(int *)(param_8 + 4) != 4) &&
       ((uint)((param_3 + param_4) * *(int *)(param_8 + 0xc)) <= *(uint *)(param_5 + 0x10))) &&
      (*(char *)(param_8 + 0x15) == '\x04' || bVar4)) &&
     ((*(uint *)(param_7 + 0x10) & (*(uint *)(param_1 + 0x6650) ^ 0xffffffff)) == 0)) {
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
    local_124 = param_7;
    local_120 = param_2;
    local_11c = param_6;
    FUN_10157940(auStack_114);
    local_128 = 0;
    iVar6 = FUN_10021f00(param_5,0,0,&local_128,param_9 & 0xfffffffe);
    if (-1 < iVar6) {
      iVar6 = *(int *)(param_1 + 0x650);
      local_118 = iVar6;
      if (bVar5) {
        piVar1 = (int *)(param_11 + 8);
        iVar6 = *piVar1;
        uVar9 = 0;
        do {
          if ((*(char *)(iVar6 + 0x10 + uVar9) != '\0') && (*(uint *)(param_7 + 8) != 0)) {
            uVar10 = 0;
            do {
              bVar3 = *(byte *)(param_7 + 0x214 + uVar10);
              if (*(char *)(iVar6 + uVar9) == *(char *)(param_7 + 0x19 + (uint)bVar3 * 8)) {
                iVar8 = param_1 + *(char *)(param_7 + 0x14 + (uint)bVar3 * 8) * 4;
                iVar2 = local_124 + (uint)bVar3 * 8;
                local_110[uVar9 * 3] =
                     *(int *)(*(int *)(iVar8 + 26000) + 4) + (uint)*(byte *)(iVar2 + 0x17) * 4 +
                     *(int *)(iVar8 + 0x6610);
                *(undefined1 *)((int)&uStack_108 + uVar9 * 0xc) = *(undefined1 *)(iVar2 + 0x18);
                *(undefined1 *)((int)&uStack_108 + uVar9 * 0xc + 1) = *(undefined1 *)(iVar2 + 0x15);
                local_110[uVar9 * 3 + 1] = *(int *)(iVar8 + 0x65d0);
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(uint *)(param_7 + 8));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x10);
        uVar11 = *(undefined4 *)(param_11 + 0x860);
        iVar6 = *(int *)(param_11 + 0x864);
        if (iVar6 == 0) {
          iVar6 = FUN_10019ac0(uVar11);
          *(int *)(param_11 + 0x864) = iVar6;
        }
        if (*(byte *)(*(int *)(param_11 + 0x85c) + 1) < 3) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar1 + 0x4850;
        }
        FUN_1001ad70(param_1,uVar11,iVar6,*piVar1,local_110,local_11c,iVar8,local_128,param_8);
      }
      else {
        uVar7 = FUN_10010260(param_1,param_7,local_110);
        if ((uVar7 & 1) != 0) {
          uVar9 = 4;
          if (*(int *)(param_1 + 0x654) == 0) {
            uVar9 = 0;
          }
          uVar10 = 3;
          if (iVar6 == 0) {
            uVar10 = 1;
          }
          FUN_1002a410(param_1,local_110,local_128,param_8,uVar9 | uVar10,param_3,param_4,local_120,
                       param_9 == 1);
        }
      }
      FUN_100221f0(param_5);
      if (local_118 != 0) {
        *(byte *)(param_5 + 100) =
             ~(byte)(*(uint *)(param_5 + 0x34) >> 5) & 1 | *(byte *)(param_5 + 100);
      }
      uVar11 = 0;
    }
    FUN_101579f0(auStack_114);
  }
  return uVar11;
}

