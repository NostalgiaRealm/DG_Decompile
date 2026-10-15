/*
 * FUN_10057a90 at 10057a90
 * undefined FUN_10057a90(void)
 * Address ranges: 10057a90-10057e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10057a90(int param_1,int param_2,int param_3,ulonglong param_4,uint param_5,int param_6,
                uint param_7,int param_8,char param_9)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_120;
  uint local_11c;
  uint *local_118;
  uint local_114;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  int *local_108;
  int *local_100;
  undefined1 auStack_f8 [184];
  
  uVar7 = param_4 & 0xffffffff;
  local_11c = param_7;
  iVar5 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar5 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_10c);
  iVar5 = -0x7ff8ffa9;
  uVar6 = (uint)param_4;
  if ((param_4 & 0xfffffbf2) != 0) goto LAB_10057e48;
  if (param_3 == 0) {
    if (((param_5 < *(uint *)(param_2 + 0x78)) && (param_5 + param_6 <= *(uint *)(param_2 + 0x78)))
       && ((*(char *)(param_2 + 0x134) == '\0' || (iVar5 = -0x7789f7f4, param_9 != '\0')))) {
      piVar1 = (int *)(param_2 + 0x1c);
      do {
        iVar5 = *piVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar3) {
          *piVar1 = iVar5 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if ((iVar5 + 1 == 1) || (iVar5 = -0x7789fe52, *(int *)(param_2 + 0xc) != 0)) {
        iVar5 = 0;
        FUN_100969a0(&local_120);
        FUN_100084d0(param_1,*(undefined4 *)(param_2 + 4),param_2 + 0x7c,
                     uVar6 & 9 | (uVar6 >> 7 & 8 | uVar6 & 4) >> 1,param_5,param_6);
        do {
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        FUN_10096a50(&local_120);
      }
    }
    goto LAB_10057e48;
  }
  if ((((param_4 & 1) == 0) ||
      ((((param_8 != 0 && (param_9 != '\0' || param_8 != 1)) ||
        (*(uint *)(param_3 + 0x78) <= local_11c)) ||
       ((*(uint *)(param_3 + 0x78) < param_6 + local_11c || (*(uint *)(param_2 + 0x78) <= param_5)))
       ))) || (local_114 = param_5 + param_6, *(uint *)(param_2 + 0x78) < local_114))
  goto LAB_10057e48;
  iVar5 = -0x7789f800;
  if (((*(uint *)(param_3 + 0x7c) >> 1 & 1) == 0) ||
     (local_118 = (uint *)(param_2 + 0x7c), (*local_118 >> 2 & 1) == 0)) goto LAB_10057e48;
  FUN_10007940(param_1,(uint *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 4),auStack_f8);
  iVar5 = FUN_10051220(param_1,auStack_f8,local_118,param_8);
  if ((iVar5 < 0) ||
     ((*(char *)(param_2 + 0x134) != '\0' && (iVar5 = -0x7789f7f4, param_9 == '\0'))))
  goto LAB_10057e48;
  local_100 = (int *)(param_2 + 0x1c);
  iVar5 = -0x7789fe52;
  do {
    iVar2 = *local_100;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(local_100),0x10);
    if (bVar3) {
      *local_100 = iVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if ((iVar2 + 1 == 1) || (*(int *)(param_2 + 0xc) != 0)) {
    local_108 = (int *)(param_3 + 0x1c);
    do {
      iVar2 = *local_108;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(local_108),0x10);
      if (bVar3) {
        *local_108 = iVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (((iVar2 + 1 == 1) || (*(int *)(param_3 + 0xc) != 0)) &&
       (((~*(uint *)(param_2 + 0x70) & 1) != 0 || (iVar5 = -0x7ff8ffa9, (uVar6 >> 2 & 1) == 0)))) {
      if (param_9 != '\0') {
        if (*(char *)(*(int *)(param_1 + 0x151c) + 0xd0) == '\0') {
          iVar5 = -0x7789fcfb;
          goto LAB_10057d34;
        }
        FUN_100514e0(param_1);
        cVar4 = FUN_100519d0(param_1);
        if (cVar4 == '\0') {
          uVar6 = uVar6 & 0xfffffbff;
        }
        uVar7 = (ulonglong)uVar6;
      }
      iVar5 = 0;
      FUN_100969a0(auStack_110);
      local_120 = (uint)uVar7 & 4;
      FUN_10007c20(param_1,auStack_f8,*(undefined4 *)(param_2 + 4),local_118,
                   (uint)uVar7 & 9 | ((uint)(uVar7 >> 7) & 8 | local_120) >> 1,param_5,param_6,
                   local_11c,(byte)param_8 & 1);
      FUN_10012bd0(param_2,*(int *)(param_2 + 0x88) * param_5,*(int *)(param_2 + 0x88) * local_114);
      if (local_120 != 0) {
        *(byte *)(param_2 + 0x136) =
             ~(byte)*(uint *)(param_2 + 0x70) & 1 | *(byte *)(param_2 + 0x136);
      }
      FUN_10096a50(auStack_110);
    }
LAB_10057d34:
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(local_108),0x10);
      if (bVar3) {
        *local_108 = *local_108 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  do {
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(local_100),0x10);
    if (bVar3) {
      *local_100 = *local_100 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
LAB_10057e48:
  FUN_10096790(auStack_10c);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar5;
}

