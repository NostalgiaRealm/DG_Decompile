/*
 * FUN_1006e325 at 1006e325
 * int __fastcall FUN_1006e325(int * param_1)
 * Address ranges: 1006e325-1006e625
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1006e325(int *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  int local_64;
  int local_60;
  uint local_5c;
  void *local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  void *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  int *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = 0;
  local_5c = param_1[9];
  puVar8 = (uint *)(param_1 + 8);
  local_28 = CONCAT31(local_28._1_3_,local_5c != 1);
  local_2c = 1;
  puVar9 = (uint *)(param_1 + 10);
  local_20 = puVar8;
  local_1c = puVar9;
  local_18 = param_1;
  if (param_1[0x3f] == 0) {
    local_24 = param_1[7];
    uVar3 = 0x1c;
    if ((&DAT_100b069c)[local_24] != '\0') {
      uVar3 = 0x1f;
    }
    if (((local_5c == 1) || (*puVar9 == 0)) || (local_10 = uVar3, *puVar9 <= *puVar8)) {
      local_10 = 0;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      uVar7 = *puVar8;
    }
    FUN_1006b825(param_1 + 0x3c,param_1[5],param_1[6],uVar7,local_5c,1,0x1b,uVar3,local_10,
                 *(undefined4 *)(&DAT_100b0408 + local_24 * 4),
                 *(undefined4 *)(&DAT_100b0408 + local_24 * 4),0x1c,0,'\x01','\x01',local_5c != 1,0)
    ;
    FUN_1006c64a(param_1);
  }
  local_28 = param_1[0x42];
  if (param_1[0x3f] != 0) {
    local_8 = 0;
    uVar3 = 0;
    if (param_1[9] != 0) {
      do {
        local_10 = 0;
        if (*puVar8 != 0) {
          do {
            cVar2 = (**(code **)(*param_1 + 4))(local_10,local_8,1);
            if (cVar2 != '\0') {
              local_14 = local_14 | 1 << (local_8 & 0x1f);
            }
            uVar3 = *puVar9;
            if (uVar3 == 0) {
              uVar3 = *puVar8;
            }
            local_24 = uVar3 * local_8 + local_10;
            if (*(char *)((int)param_1 + 0x12d) == '\0') {
              local_c = local_24 * 0x20;
            }
            else {
              uVar3 = (uint)param_1[6] >> ((byte)local_10 & 0x1f);
              uVar7 = (uint)param_1[5] >> ((byte)local_10 & 0x1f);
              local_c = local_24 * 0x20;
              if (uVar3 == 0) {
                uVar3 = local_2c;
              }
              if (uVar7 == 0) {
                uVar7 = 1;
              }
              SetRect((LPRECT)(param_1[0x41] + local_c + 0x10),0,0,uVar7,uVar3);
            }
            BVar4 = IsRectEmpty((RECT *)((local_c | 0x10) + param_1[0x41]));
            if (BVar4 == 0) {
              piVar11 = (int *)param_1[0x15];
              iVar10 = param_1[0x49];
              local_50 = param_1[0xb] * local_8 + local_10;
              local_30 = param_1[0x43];
              local_34 = *(void **)(local_18[0x11] + 0x15dc);
              local_38 = local_18[0x3f];
              iVar1 = local_18[0x41];
              local_3c = *(int *)(local_c + 0x1c + iVar1);
              local_40 = *(int *)(local_c + 0x18 + iVar1);
              local_44 = *(int *)(local_c + 0x14 + iVar1);
              local_48 = *(int *)(local_c + 0x10 + iVar1);
              local_4c = local_18[2];
              local_54 = local_18[7];
              local_58 = (void *)local_18[0x38];
              piVar5 = FUN_10097b61(*(void **)(param_1[0x11] + 0x15d8),&local_60,local_18[0x18],0);
              iVar1 = local_24;
              piVar6 = FUN_10097b61(local_34,&local_64,local_30,local_24);
              FUN_10069057(local_58,local_54,local_10,local_8,local_50,iVar1,local_4c,local_48,
                           local_44,local_40,local_3c,local_38,piVar6,iVar10,piVar11,piVar5);
              param_1 = local_18;
              SetRectEmpty((LPRECT)((local_c | 0x10) + local_18[0x41]));
              local_14 = local_14 | 1 << (local_8 & 0x1f);
              puVar8 = local_20;
              puVar9 = local_1c;
            }
            local_10 = local_10 + 1;
          } while (local_10 < *puVar8);
        }
        uVar3 = param_1[9];
        local_8 = local_8 + 1;
      } while (local_8 < uVar3);
    }
    *(undefined1 *)((int)param_1 + 0x12d) = 0;
    if (*(char *)((int)param_1 + 0x3d) == '\x01') {
      FUN_1006bcc0(param_1 + 0x12,*puVar8,uVar3);
      *(undefined1 *)((int)param_1 + 0x3d) = 2;
    }
    if (local_14 != 0) {
      uVar3 = *puVar9;
      if (uVar3 == 0) {
        uVar3 = *puVar8;
      }
      FUN_1006cc6f(param_1,(int)(param_1 + 0x3c),local_14,param_1[0x42],(uint)(local_5c != 1),uVar3)
      ;
    }
  }
  return local_28;
}

