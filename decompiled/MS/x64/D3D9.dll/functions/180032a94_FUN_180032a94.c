/*
 * FUN_180032a94 at 180032a94
 * uint __fastcall FUN_180032a94(longlong * param_1, undefined4 param_2, undefined1 param_3, longlong * param_4, undefined4 * param_5, char param_6)
 * Address ranges: 180032a94-180032d01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180032a94(longlong *param_1,undefined4 param_2,undefined1 param_3,longlong *param_4,
                  undefined4 *param_5,char param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint local_res8;
  uint local_60 [8];
  
  uVar7 = 0;
  uVar3 = 0;
  if (param_1[6] == 0) {
    if (param_1[5] == 0) {
      uVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x58))
                        ((longlong *)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x94),
                         (int)param_1[0x13],param_2,param_3,param_4,param_5);
    }
    else {
      FUN_180031c40((longlong)param_1);
      cVar1 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))
                        ((longlong *)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x94),
                         (int)param_1[0x13]);
      uVar3 = 0;
      if (cVar1 != '\0') {
        bVar2 = FUN_180031f30(param_1,(char)param_1[0xc]);
        uVar3 = (bVar2 ^ 1) * 2;
        (**(code **)(*(longlong *)param_1[0xe] + 0x30))
                  ((longlong *)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x94),
                   (int)param_1[0x13],0);
        *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + 1;
        *(undefined1 *)((longlong)param_1 + 0xee) = 0;
      }
      *param_4 = param_1[5];
      *param_5 = (int)param_1[3];
    }
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))
                      ((longlong *)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x94),
                       (int)param_1[0x13]);
    if (cVar1 != '\0') {
      (**(code **)(*(longlong *)param_1[0xe] + 0x30))
                ((longlong *)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x94),
                 (int)param_1[0x13],0);
      if (param_1[6] != 0) {
        puVar9 = (undefined4 *)param_1[7];
        for (uVar4 = (ulonglong)(*(uint *)(param_1 + 8) >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        puVar10 = (undefined1 *)(param_1[7] + (ulonglong)(*(uint *)(param_1 + 8) >> 2) * 4);
        for (uVar4 = (ulonglong)(*(uint *)(param_1 + 8) & 3); uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      *(undefined1 *)((longlong)param_1 + 0xee) = 0;
    }
    *param_4 = param_1[5];
    *param_5 = (int)param_1[3];
    if (param_6 != '\0') {
      uVar4 = 0;
      uVar12 = 0x80808080;
      local_res8 = 0;
      uVar8 = (uint)*(ushort *)((longlong)param_1 + 0x14) * *(int *)((longlong)param_1 + 0x1c) +
              0xfff;
      uVar11 = uVar7;
      uVar6 = uVar7;
      if (uVar8 >> 0xc != 0) {
        do {
          bVar2 = (byte)uVar12;
          uVar5 = uVar4;
          if ((*(byte *)(uVar4 + param_1[7]) & bVar2) != 0) {
            if (uVar7 != uVar6) {
              if ((char)uVar11 == '\0') {
                FUN_180031c40((longlong)param_1);
                uVar11 = 1;
              }
              FUN_180032024((longlong)param_1,local_60,uVar7,uVar6);
              (**(code **)(*param_1 + 0x30))(param_1,local_60);
              uVar5 = (ulonglong)local_res8;
              uVar7 = uVar6;
            }
            uVar7 = uVar7 + 1;
          }
          uVar6 = uVar6 + 1;
          *(byte *)(uVar4 + param_1[7]) = *(byte *)(uVar4 + param_1[7]) | bVar2;
          *(byte *)(uVar4 + param_1[6]) = *(byte *)(uVar4 + param_1[6]) | bVar2;
          local_res8 = uVar12 & 1;
          uVar12 = uVar12 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f;
          local_res8 = (int)uVar5 + local_res8;
          uVar4 = (ulonglong)local_res8;
        } while (uVar6 < uVar8 >> 0xc);
        if (uVar7 != uVar6) {
          if ((char)uVar11 == '\0') {
            FUN_180031c40((longlong)param_1);
          }
          FUN_180032024((longlong)param_1,local_60,uVar7,uVar6);
          (**(code **)(*param_1 + 0x30))(param_1,local_60);
        }
      }
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 1;
    }
    *param_4 = param_1[5];
    *param_5 = (int)param_1[3];
  }
  return uVar3;
}

