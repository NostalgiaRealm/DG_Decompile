/*
 * FUN_18008ffd8 at 18008ffd8
 * undefined8 __fastcall FUN_18008ffd8(longlong * param_1, int param_2, int param_3, longlong param_4, int param_5, int * param_6)
 * Address ranges: 18008ffd8-18009019f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18008ffd8(longlong *param_1,int param_2,int param_3,longlong param_4,int param_5,
                      int *param_6)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint7 extraout_var;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  int local_44;
  
  local_58 = 0;
  local_68 = 0;
  cVar3 = FUN_18008f558(param_1,param_2,param_3,2,'\x01',&local_58,&local_68);
  if ((int)CONCAT71(extraout_var,cVar3) == 0) {
    uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c);
    lVar8 = 0x180000000;
    local_64 = (uint)(byte)(&DAT_1800feb08)[uVar6];
    uVar10 = *(uint *)(&DAT_1800ff000 + uVar6 * 4);
    if (*(uint *)(&DAT_1800ff000 + uVar6 * 4) == 0x18) {
      uVar10 = 0x20;
    }
    local_60 = *(uint *)(&DAT_1800fea30 + uVar6 * 4);
    if (7 < uVar10) {
      local_60 = uVar10 >> 3;
    }
    local_5c = uVar10;
    uVar4 = FUN_1800ac71c((longlong)param_1,*(uint *)((longlong)param_1 + 0x24),(byte)param_2);
    uVar2 = local_60;
    if (uVar10 < 8) {
      uVar4 = uVar4 / *(byte *)(uVar6 + 0xfead8 + lVar8);
    }
    uVar9 = param_6[1];
    bVar11 = uVar9 == param_6[3];
    if (uVar9 <= (uint)param_6[3]) {
      iVar7 = *param_6;
      do {
        if (bVar11) {
          uVar4 = param_6[2];
        }
        uVar6 = (ulonglong)(iVar7 * uVar2);
        FUN_1800fbec0((undefined8 *)(uVar6 + uVar9 * local_68 + local_58),
                      (undefined8 *)(uVar9 * param_5 + uVar6 + param_4),
                      (ulonglong)((uVar4 - iVar7) * uVar2));
        iVar7 = 0;
        uVar9 = uVar9 + 1;
        bVar11 = uVar9 == param_6[3];
        uVar10 = local_5c;
      } while (uVar9 <= (uint)param_6[3]);
    }
    (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x78))
              (*(longlong **)(param_1[0xb] + 8),param_1[0x17],
               param_3 * *(int *)((longlong)param_1 + 0x3c) + param_2);
    local_4c = param_6[1];
    local_50 = 0;
    if (uVar10 < 8) {
      local_4c = local_4c * local_64;
    }
    bVar1 = (byte)param_2 & 0x1f;
    local_48 = *(uint *)((longlong)param_1 + 0x24) >> bVar1;
    if (*(uint *)((longlong)param_1 + 0x24) >> bVar1 == 0) {
      local_48 = 1;
    }
    local_44 = param_6[3] + 1;
    if (uVar10 < 8) {
      local_44 = local_44 * local_64;
    }
    uVar5 = (**(code **)(*param_1 + 0x10))
                      (param_1,param_2 + param_3 * *(int *)((longlong)param_1 + 0x3c),&local_50);
    lVar8 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  else {
    lVar8 = (ulonglong)extraout_var << 8;
  }
  return lVar8;
}

