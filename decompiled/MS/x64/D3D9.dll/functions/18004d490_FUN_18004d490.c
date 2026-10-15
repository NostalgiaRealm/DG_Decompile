/*
 * FUN_18004d490 at 18004d490
 * undefined __fastcall FUN_18004d490(longlong param_1, int param_2, undefined * param_3, longlong param_4, int param_5, uint param_6, byte param_7, char param_8)
 * Address ranges: 18004d490-18004d7fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d490(longlong param_1,int param_2,undefined *param_3,longlong param_4,int param_5,
                  uint param_6,byte param_7,char param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint local_res8 [2];
  int local_res10;
  
  FUN_180048cf0(param_1);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  plVar2 = (longlong *)(lVar5 + 0xb48);
  *plVar2 = *plVar2 + 1;
  iVar3 = *(int *)(param_1 + 0x1028);
  iVar4 = *(int *)(param_1 + 0x106c);
  lVar6 = *(longlong *)(param_1 + 0xff28);
  *(undefined8 *)(param_1 + 0xffd8) = *(undefined8 *)(lVar5 + 0xb48);
  if (param_2 == 6) {
    if (2 < param_6) {
      uVar14 = param_6 - 2;
      if (uVar14 != 0) {
        local_res10 = 0;
        while( true ) {
          iVar9 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
          if (0x1000U - iVar9 < 0x10) {
            FUN_180049b30(param_1,0,1,0);
            iVar9 = 0;
          }
          uVar13 = (0x1000U - iVar9) / 3;
          uVar10 = uVar14;
          if (uVar13 <= uVar14) {
            uVar10 = uVar13;
          }
          if (param_4 == 0) {
            FUN_180048db0(param_1,4,param_3,lVar6,*(longlong *)(param_1 + 0xf710),iVar4,iVar3,0,
                          uVar10 * 3,param_7);
          }
          else {
            FUN_18004c9cc(param_1,4,(undefined8 *)(param_4 + -0x30),lVar6,
                          *(longlong *)(param_1 + 0xf710),iVar4,iVar3,0,uVar10 * 3,'\0','\0');
          }
          uVar13 = 0;
          *(byte *)(param_1 + 0xf68f) =
               *(byte *)(param_1 + 0xf68f) |
               (*(uint *)(param_1 + 0x10180) & *(uint *)(param_3 + 0x10)) !=
               *(uint *)(param_3 + 0x10);
          *(undefined4 *)(param_1 + 0x10180) = *(undefined4 *)(param_3 + 0x10);
          *(undefined1 *)(param_1 + 0x10184) = 1;
          if (uVar10 != 0) {
            do {
              uVar12 = 0;
              do {
                *(uint *)(*(longlong *)(param_1 + 0x88) + uVar12 * 4) =
                     (int)uVar12 + local_res10 + 1 + param_5 + uVar13;
                uVar11 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
              } while ((int)uVar11 < 2);
              uVar13 = uVar13 + 1;
              *(int *)(*(longlong *)(param_1 + 0x88) + 8) = param_5;
              *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 0xc;
            } while (uVar13 < uVar10);
          }
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar10 * 3;
          uVar14 = uVar14 - uVar10;
          if (uVar14 == 0) break;
          local_res8[0] = *(uint *)(param_3 + 0x10);
          local_res10 = local_res10 + uVar10;
          uVar13 = 0;
          if (local_res8[0] != 0) {
            for (; (local_res8[0] >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
            }
          }
          if (local_res8[0] != 0) {
            pbVar7 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar13 >> 3));
            *pbVar7 = *pbVar7 & ~('\x01' << (uVar13 & 7));
            while( true ) {
              lVar5 = *(longlong *)(param_1 + 0xff38 + (ulonglong)(uVar13 & 0xff) * 8);
              if (lVar5 != 0) {
                LOCK();
                piVar1 = (int *)(lVar5 + 0x38);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              uVar13 = 0;
              if (local_res8[0] != 0) {
                for (; (local_res8[0] >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                }
              }
              if (local_res8[0] == 0) break;
              pbVar7 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar13 >> 3));
              *pbVar7 = *pbVar7 & ~('\x01' << (uVar13 & 7));
            }
          }
        }
      }
      FUN_180049b30(param_1,0,0,0);
    }
  }
  else {
    if (param_4 == 0) {
      FUN_180048db0(param_1,param_2,param_3,lVar6,*(longlong *)(param_1 + 0xff30),iVar4,iVar3,0,0,
                    param_7);
    }
    else {
      FUN_18004c9cc(param_1,param_2,(undefined8 *)(param_4 + -0x30),lVar6,
                    *(longlong *)(param_1 + 0xff30),iVar4,iVar3,0,0,'\0',*(char *)(param_4 + 0x1c));
    }
    *(byte *)(param_1 + 0xf68f) =
         *(byte *)(param_1 + 0xf68f) |
         (*(uint *)(param_3 + 0x10) & *(uint *)(param_1 + 0x10180)) != *(uint *)(param_3 + 0x10);
    *(undefined4 *)(param_1 + 0x10180) = *(undefined4 *)(param_3 + 0x10);
    *(undefined1 *)(param_1 + 0x10184) = 0;
    bVar8 = FUN_180047a50(param_1);
    if (bVar8 != 0) {
      FUN_1800e4040(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),param_6,1,param_5,0);
    }
    FUN_180048cb0(param_1);
  }
  if (param_8 != '\0') {
    FUN_1800e2fd8(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
                  *(undefined8 *)(param_1 + 0xffd8));
  }
  return;
}

