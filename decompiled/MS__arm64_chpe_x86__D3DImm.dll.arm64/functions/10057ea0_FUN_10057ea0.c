/*
 * FUN_10057ea0 at 10057ea0
 * undefined FUN_10057ea0(void)
 * Address ranges: 10057ea0-1005825b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10057ea0(int param_1,int param_2,int *param_3,ulonglong param_4,uint param_5,int param_6,
                undefined4 param_7,int param_8,char param_9)

{
  uint *puVar1;
  int *piVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_114 [4];
  int *local_110;
  undefined1 auStack_10c [12];
  int local_100;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined1 auStack_a3 [3];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  uVar11 = param_4 & 0xffffffff;
  iVar7 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar7 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_10c);
  iVar7 = -0x7ff8ffa9;
  uVar10 = (uint)param_4;
  if (((((param_4 & 0xfffffbf2) != 0) || ((param_4 & 1) == 0)) ||
      ((param_8 != 0 && (param_9 != '\0' || param_8 != 1)))) ||
     (((*(uint *)(param_2 + 0x78) <= param_5 || (*(uint *)(param_2 + 0x78) < param_5 + param_6)) ||
      ((*(char *)(param_2 + 0x134) != '\0' && (iVar7 = -0x7789f7f4, param_9 == '\0'))))))
  goto LAB_10058214;
  local_110 = (int *)(param_2 + 0x1c);
  iVar7 = -0x7789fe52;
  do {
    iVar8 = *local_110;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(local_110),0x10);
    if (bVar4) {
      *local_110 = iVar8 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  if (iVar8 + 1 == 1) {
    iVar7 = -0x7789f800;
    if ((*param_3 != 0) && (puVar1 = (uint *)(param_2 + 0x7c), (*puVar1 >> 2 & 1) != 0)) {
      iVar7 = -0x7ff8ffa9;
      if ((((~*(uint *)(param_2 + 0x70) & 1) != 0) || ((uVar10 >> 2 & 1) == 0)) &&
         ((param_3[2] != 0 || ((uVar10 >> 10 & 1) == 0)))) {
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d0 = 0;
        _local_100 = CONCAT44(param_3[1],*param_3);
        uStack_f8 = 0x302;
        _iStack_a8 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        local_e0 = (ulonglong)(uint)param_3[2] << 0x20;
        uStack_d8 = (ulonglong)CONCAT24(0x302,param_3[3]);
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        local_60 = 0;
        local_b0 = 0x404;
        local_50 = 0;
        uVar9 = 0;
        lStack_c8 = (ulonglong)(uint)param_3[4] << 0x20;
        local_c0 = (ulonglong)CONCAT24(0x404,param_3[5]);
        uStack_b8 = *(undefined8 *)(param_3 + 6);
        iVar7 = 0;
        iVar8 = 0;
        do {
          *(int *)((int)&local_b0 + iVar7 + 4) = param_3[uVar9 * 2 + 8];
          uVar3 = *(undefined1 *)(param_2 + 0xc9 + iVar8);
          auStack_a3[iVar7] = uVar3;
          switch(uVar3) {
          case 1:
            *(undefined1 *)(iVar8 + param_2 + 0xcc) = 0;
            break;
          case 2:
            *(undefined1 *)(iVar8 + param_2 + 0xcc) = 1;
            break;
          case 3:
            *(undefined1 *)(iVar8 + param_2 + 0xcc) = 2;
            break;
          case 4:
            *(undefined1 *)(iVar8 + param_2 + 0xcc) = 3;
          }
          iVar5 = uVar9 * 2;
          piVar2 = (int *)((int)&iStack_a8 + iVar7);
          uVar9 = uVar9 + 1;
          iVar7 = iVar7 + 0xc;
          iVar8 = iVar8 + 8;
          *piVar2 = param_3[iVar5 + 9];
        } while (uVar9 < 8);
        iVar7 = FUN_10051220(param_1,&local_100,puVar1,param_8);
        if (-1 < iVar7) {
          if (param_9 != '\0') {
            if (*(char *)(*(int *)(param_1 + 0x151c) + 0xd0) == '\0') {
              iVar7 = -0x7789fcfb;
              goto LAB_100581f8;
            }
            FUN_100514e0(param_1);
            cVar6 = FUN_100519d0(param_1);
            if (cVar6 == '\0') {
              uVar10 = uVar10 & 0xfffffbff;
            }
            uVar11 = (ulonglong)uVar10;
          }
          FUN_100969a0(auStack_114);
          FUN_10007c20(param_1,&local_100,*(undefined4 *)(param_2 + 4),puVar1,
                       (uint)uVar11 & 9 | ((uint)(uVar11 >> 7) & 8 | (uint)uVar11 & 4) >> 1,param_5,
                       param_6,param_7,(byte)param_8 & 1);
          if ((uVar11 & 4) != 0) {
            *(byte *)(param_2 + 0x136) =
                 ~(byte)*(uint *)(param_2 + 0x70) & 1 | *(byte *)(param_2 + 0x136);
          }
          FUN_10096a50(auStack_114);
        }
      }
    }
  }
LAB_100581f8:
  do {
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(local_110),0x10);
    if (bVar4) {
      *local_110 = *local_110 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
LAB_10058214:
  FUN_10096790(auStack_10c);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar7;
}

