/*
 * FUN_18004d7fc at 18004d7fc
 * undefined __fastcall FUN_18004d7fc(longlong param_1, int param_2, undefined * param_3, longlong param_4, longlong param_5, undefined4 param_6, uint param_7, uint param_8, char param_9, byte param_10, char param_11)
 * Address ranges: 18004d7fc-18004dc21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d7fc(longlong param_1,int param_2,undefined *param_3,longlong param_4,longlong param_5
                  ,undefined4 param_6,uint param_7,uint param_8,char param_9,byte param_10,
                  char param_11)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  byte *pbVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int local_res8;
  uint local_res10 [2];
  uint *local_48;
  
  FUN_180048cf0(param_1);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  plVar2 = (longlong *)(lVar3 + 0xb48);
  *plVar2 = *plVar2 + 1;
  *(undefined8 *)(param_1 + 0xffd8) = *(undefined8 *)(lVar3 + 0xb48);
  if ((param_2 == 6) && (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0')) {
    if (2 < param_8) {
      uVar14 = param_8 - 2;
      if (uVar14 != 0) {
        local_res8 = 0;
        while( true ) {
          iVar7 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
          if (0x1000U - iVar7 < 0x10) {
            FUN_180049b30(param_1,0,1,0);
            iVar7 = 0;
          }
          uVar12 = (0x1000U - iVar7) / 3;
          uVar9 = uVar14;
          if (uVar12 <= uVar14) {
            uVar9 = uVar12;
          }
          if (param_4 == 0) {
            FUN_180048db0(param_1,4,param_3,*(longlong *)(param_1 + 0xff28),
                          *(longlong *)(param_1 + 0xf710),*(int *)(param_1 + 0x106c),
                          *(int *)(param_1 + 0x1028),0,uVar9 * 3,param_10);
          }
          else {
            FUN_18004c9cc(param_1,4,(undefined8 *)(param_4 + -0x30),*(longlong *)(param_1 + 0xff28),
                          *(longlong *)(param_1 + 0xf710),*(int *)(param_1 + 0x106c),
                          *(int *)(param_1 + 0x1028),0,uVar9 * 3,'\0','\0');
          }
          *(byte *)(param_1 + 0xf68f) =
               *(byte *)(param_1 + 0xf68f) |
               (*(uint *)(param_1 + 0x10180) & *(uint *)(param_3 + 0x10)) !=
               *(uint *)(param_3 + 0x10);
          *(undefined4 *)(param_1 + 0x10180) = *(undefined4 *)(param_3 + 0x10);
          *(undefined1 *)(param_1 + 0x10184) = 1;
          if (uVar9 != 0) {
            uVar12 = 0;
            local_48 = *(uint **)(param_1 + 0x88);
            do {
              uVar6 = (ulonglong)(uVar12 + local_res8 + param_7 + 1);
              if (param_9 == '\0') {
                uVar13 = (uint)*(ushort *)(param_5 + uVar6 * 2);
              }
              else {
                uVar13 = *(uint *)(param_5 + uVar6 * 4);
              }
              uVar6 = (ulonglong)(uVar12 + local_res8 + param_7 + 2);
              if (param_9 == '\0') {
                uVar8 = (uint)*(ushort *)(param_5 + (ulonglong)param_7 * 2);
                uVar11 = (uint)*(ushort *)(param_5 + uVar6 * 2);
              }
              else {
                uVar8 = *(uint *)(param_5 + (ulonglong)param_7 * 4);
                uVar11 = *(uint *)(param_5 + uVar6 * 4);
              }
              uVar12 = uVar12 + 1;
              *local_48 = uVar13;
              *(uint *)(*(longlong *)(param_1 + 0x88) + 4) = uVar11;
              *(uint *)(*(longlong *)(param_1 + 0x88) + 8) = uVar8;
              local_48 = (uint *)(*(longlong *)(param_1 + 0x88) + 0xc);
              *(uint **)(param_1 + 0x88) = local_48;
            } while (uVar12 < uVar9);
          }
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar9 * 3;
          uVar14 = uVar14 - uVar9;
          if (uVar14 == 0) break;
          local_res10[0] = *(uint *)(param_3 + 0x10);
          local_res8 = local_res8 + uVar9;
          uVar12 = 0;
          if (local_res10[0] != 0) {
            for (; (local_res10[0] >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
          if (local_res10[0] != 0) {
            pbVar4 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar12 >> 3));
            *pbVar4 = *pbVar4 & ~('\x01' << (uVar12 & 7));
            while( true ) {
              lVar3 = *(longlong *)(param_1 + 0xff38 + (ulonglong)(uVar12 & 0xff) * 8);
              if (lVar3 != 0) {
                LOCK();
                piVar1 = (int *)(lVar3 + 0x38);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              uVar12 = 0;
              if (local_res10[0] != 0) {
                for (; (local_res10[0] >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                }
              }
              if (local_res10[0] == 0) break;
              pbVar4 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar12 >> 3));
              *pbVar4 = *pbVar4 & ~('\x01' << (uVar12 & 7));
            }
          }
          *(undefined4 *)(param_1 + 0x98) = param_6;
        }
        *(undefined4 *)(param_1 + 0x98) = param_6;
      }
      FUN_180049b30(param_1,0,0,0);
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xff30);
    if (lVar3 != 0) {
      if (param_4 == 0) {
        FUN_180048db0(param_1,param_2,param_3,*(longlong *)(param_1 + 0xff28),lVar3,
                      *(int *)(param_1 + 0x106c),*(int *)(param_1 + 0x1028),0,0,param_10);
        uVar10 = 1;
      }
      else {
        FUN_18004c9cc(param_1,param_2,(undefined8 *)(param_4 + -0x30),
                      *(longlong *)(param_1 + 0xff28),lVar3,*(int *)(param_1 + 0x106c),
                      *(int *)(param_1 + 0x1028),0,0,'\0',*(char *)(param_4 + 0x1c));
        uVar10 = 1;
        if (*(int *)(param_4 + 0x2c) != 0) {
          uVar10 = *(undefined4 *)(param_4 + 0x2c);
        }
      }
      *(byte *)(param_1 + 0xf68f) =
           *(byte *)(param_1 + 0xf68f) |
           (*(uint *)(param_3 + 0x10) & *(uint *)(param_1 + 0x10180)) != *(uint *)(param_3 + 0x10);
      *(undefined4 *)(param_1 + 0x10180) = *(undefined4 *)(param_3 + 0x10);
      *(undefined1 *)(param_1 + 0x10184) = 1;
      bVar5 = FUN_180047a50(param_1);
      if ((bVar5 != 0) && (param_7 != 0xffffffff)) {
        FUN_1800e4094(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),param_8,uVar10,param_7
                      ,param_6,0);
      }
      FUN_180048cb0(param_1);
    }
  }
  if (param_11 != '\0') {
    FUN_1800e2fd8(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
                  *(undefined8 *)(param_1 + 0xffd8));
  }
  return;
}

