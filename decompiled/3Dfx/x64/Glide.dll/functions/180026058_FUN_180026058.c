/*
 * FUN_180026058 at 180026058
 * undefined __fastcall FUN_180026058(longlong * param_1, longlong * param_2, byte param_3, byte param_4)
 * Address ranges: 180026058-180026490
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026058(longlong *param_1,longlong *param_2,byte param_3,byte param_4)

{
  RECT *lprc;
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong *puVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  RECT local_98;
  tagRECT local_88;
  uint local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  ulonglong *local_60;
  ulonglong local_58 [2];
  uint local_48;
  
  bVar1 = *(byte *)((longlong)param_2 + 0x94);
  lprc = (RECT *)((longlong)param_2 + 0x34);
  BVar5 = IsRectEmpty(lprc);
  if (BVar5 == 0) {
    if (*(char *)((longlong)param_2 + 0x99) != '\0') {
      local_60 = (ulonglong *)(param_2 + 0x14);
      local_58[1] = *local_60;
      local_48 = 0;
      local_58[0] = ~local_58[1];
LAB_1800260db:
      lVar2 = 0;
      if (local_58[1] != 0) {
        for (; (local_58[1] >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
        }
      }
      if (local_58[1] != 0) {
        lVar7 = 0;
        do {
          local_58[lVar7] = local_58[lVar7] & -1L << ((char)lVar2 + 1U & 0x3f);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 2);
        iVar10 = local_48 + (int)lVar2;
        while (puVar4 = local_60, iVar10 != -1) {
          if (local_48 < 0x100) {
LAB_180026163:
            lVar2 = 0;
            if (local_58[0] != 0) {
              for (; (local_58[0] >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
              }
            }
            if (local_58[0] != 0) {
              lVar7 = 0;
              do {
                local_58[lVar7] = local_58[lVar7] & -1L << ((char)lVar2 + 1U & 0x3f);
                lVar7 = lVar7 + 1;
              } while (lVar7 != 2);
              iVar6 = local_48 + (int)lVar2;
              goto LAB_1800261a9;
            }
            local_48 = local_48 + 0x40;
            if (local_48 != 0x100) goto code_r0x000180026177;
          }
LAB_1800261a6:
          iVar6 = -1;
LAB_1800261a9:
          uVar3 = local_48;
          iVar9 = iVar10;
          if (iVar6 != -1) {
            iVar9 = iVar6;
          }
          puVar8 = FUN_180027c20(&local_78,iVar10 << 0xf,iVar9 << 0xf,*(uint *)(param_2 + 4),
                                 *(uint *)((longlong)param_2 + 0x24),(int)param_2[0xd],
                                 *(byte *)((longlong)param_2 + 0x94));
          local_98.top = puVar8[1];
          local_98.left = lprc->left;
          local_98.right = *(LONG *)((longlong)param_2 + 0x3c);
          local_98.bottom = (uint)(puVar8[2] != 0) + puVar8[3];
          IntersectRect(&local_88,&local_98,lprc);
          FUN_180025ad8((longlong)param_1,(longlong)param_2,iVar10 << 0xf,iVar9 << 0xf,param_2[0xb],
                        (int)param_2[0xd],*(byte *)((longlong)param_2 + 0x94));
          FUN_180024c8c((longlong)param_1,(longlong)param_2,param_3,bVar1,local_88.left,local_88.top
                        ,local_88.right,local_88.bottom,param_4);
          *(byte *)((longlong)param_2 + 0x4a) = *(byte *)((longlong)param_2 + 0x4a) | 2;
          while( true ) {
            if (0xff < uVar3) goto LAB_1800263f5;
            lVar2 = 0;
            if (local_58[1] != 0) {
              for (; (local_58[1] >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
              }
            }
            if (local_58[1] != 0) break;
            local_48 = uVar3 + 0x40;
            if (local_48 == 0x100) goto LAB_1800263f5;
            local_58[1] = puVar4[local_48 >> 6];
            local_58[0] = ~(puVar4[local_48 >> 6] |
                           -(ulonglong)(0x100 - local_48 < 0x40) &
                           -1L << ((byte)(0x100 - local_48) & 0x3f));
            uVar3 = local_48;
          }
          lVar7 = 0;
          do {
            local_58[lVar7] = local_58[lVar7] & -1L << ((char)lVar2 + 1U & 0x3f);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 2);
          iVar10 = local_48 + (int)lVar2;
        }
      }
      else {
        local_48 = local_48 + 0x40;
        if (local_48 != 0x100) goto code_r0x0001800260f2;
      }
      goto LAB_1800263f5;
    }
    if (*(char *)((longlong)param_2 + 0x96) != '\0') {
      if ((char)param_2[0x13] == '\0') {
        FUN_180025ad8((longlong)param_1,(longlong)param_2,0,0,0,0,bVar1);
      }
      else {
        local_68 = (int)param_2[8];
        local_74 = (int)param_2[7];
        local_6c = *(undefined4 *)((longlong)param_2 + 0x3c);
        local_78 = lprc->left;
        *(int *)((longlong)param_2 + 0x44) =
             *(int *)((longlong)param_2 + 0x44) + ((uint)(local_68 - local_74) >> 4);
        local_70 = 0;
        local_64 = 1;
        FUN_1800258c4((longlong)param_1,(longlong)param_2,&local_78,bVar1);
      }
      FUN_180024c8c((longlong)param_1,(longlong)param_2,param_3,bVar1,lprc->left,
                    *(uint *)(param_2 + 7),*(uint *)((longlong)param_2 + 0x3c),
                    *(uint *)(param_2 + 8),param_4);
      *(byte *)((longlong)param_2 + 0x4a) = *(byte *)((longlong)param_2 + 0x4a) | 2;
    }
LAB_1800263f5:
    FUN_1800280c0((longlong)param_2);
    if (param_2 == param_1 + 0x29) {
      (**(code **)(*param_1 + 0x98))(param_1,0);
    }
    if (((*(char *)((longlong)param_1 + 300) != '\0') ||
        (**(char **)(param_1[0x28] + 0x31a8) != '\0')) &&
       (FUN_180027058((longlong)param_1,1,0),
       *(char *)(*(longlong *)(param_1[0x28] + 0x31a8) + 3) != '\0')) {
      DebugBreak();
    }
    if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
      FUN_180027058((longlong)param_1,2,0);
    }
  }
  return;
code_r0x0001800260f2:
  local_58[1] = local_60[local_48 >> 6];
  local_58[0] = ~(local_58[1] | -(ulonglong)(0x100 - local_48 < 0x40));
  if (0xff < local_48) goto LAB_1800263f5;
  goto LAB_1800260db;
code_r0x000180026177:
  local_58[1] = local_60[local_48 >> 6];
  local_58[0] = ~(local_60[local_48 >> 6] |
                 -(ulonglong)(0x100 - local_48 < 0x40) & -1L << ((byte)(0x100 - local_48) & 0x3f));
  if (0xff < local_48) goto LAB_1800261a6;
  goto LAB_180026163;
}

