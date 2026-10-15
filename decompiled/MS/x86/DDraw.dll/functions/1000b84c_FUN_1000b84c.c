/*
 * FUN_1000b84c at 1000b84c
 * undefined FUN_1000b84c(void)
 * Address ranges: 1000b84c-1000ba96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1000b84c(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  uVar8 = 0;
  local_20 = 0;
  puVar1 = (uint *)(param_1 + 9);
  puVar2 = (uint *)(param_1 + 10);
  if (param_1[0x2e] == 0) {
    uVar7 = *puVar2;
    iVar6 = 0x1c;
    if ((&DAT_100629cc)[param_1[7]] != '\0') {
      iVar6 = 0x1f;
    }
    if (uVar7 == 0) {
      uVar7 = param_1[8];
    }
    FUN_1000ac9c(param_1[5],param_1[6],uVar7,*puVar1,1,0x1b,iVar6,0x1c,0,0,0x28,0,
                 -(uint)(*puVar1 != 1) & 4,0,*puVar1 != 1,'\0');
    FUN_1000b505(param_1);
  }
  iVar6 = param_1[0x30];
  if (param_1[0x2e] != 0) {
    local_18 = 0;
    if (*puVar1 != 0) {
      do {
        local_1c = 0;
        if (param_1[8] != 0) {
          do {
            cVar4 = (**(code **)(*param_1 + 4))(local_1c,local_18,1);
            if (cVar4 != '\0') {
              local_20 = uVar8 | 1 << (local_18 & 0x1f);
            }
            uVar8 = *puVar2;
            if (uVar8 == 0) {
              uVar8 = param_1[8];
            }
            iVar9 = (uVar8 * local_18 + local_1c) * 0x1c;
            if (*(char *)((int)param_1 + 0xd9) != '\0') {
              uVar8 = (uint)param_1[6] >> ((byte)local_1c & 0x1f);
              uVar7 = (uint)param_1[5] >> ((byte)local_1c & 0x1f);
              if (uVar8 == 0) {
                uVar8 = 1;
              }
              if (uVar7 == 0) {
                uVar7 = 1;
              }
              SetRect((LPRECT)(param_1[0x31] + 0xc + iVar9),0,0,uVar7,uVar8);
            }
            BVar5 = IsRectEmpty((RECT *)(param_1[0x31] + 0xc + iVar9));
            if (BVar5 == 0) {
              iVar3 = param_1[0x31];
              FUN_1000a036((void *)param_1[0x2a],param_1[7],local_1c,local_18,param_1[2],
                           *(int *)(iVar9 + 0xc + iVar3),*(int *)(iVar9 + 0x10 + iVar3),
                           *(int *)(iVar9 + 0x14 + iVar3),*(int *)(iVar9 + 0x18 + iVar3),
                           param_1[0x2e],*(undefined4 *)(iVar9 + iVar3),(int *)param_1[0x15],
                           param_1[0x17]);
              SetRectEmpty((LPRECT)(param_1[0x31] + 0xc + iVar9));
              FUN_10046f30((void *)param_1[0x10],param_1[4],param_1[0x30]);
              local_20 = local_20 | 1 << (local_18 & 0x1f);
            }
            local_1c = local_1c + 1;
            uVar8 = local_20;
          } while (local_1c < (uint)param_1[8]);
        }
        local_18 = local_18 + 1;
      } while (local_18 < *puVar1);
    }
    *(undefined1 *)((int)param_1 + 0xd9) = 0;
    if (*(char *)((int)param_1 + 0x3d) == '\x01') {
      FUN_1000ae4f(param_1 + 0x12,param_1[8],*puVar1);
      *(undefined1 *)((int)param_1 + 0x3d) = 2;
    }
    if (uVar8 != 0) {
      iVar9 = 0xac;
      if (param_1[0x30] == 0) {
        iVar9 = 0x48;
      }
      uVar7 = *puVar2;
      if (uVar7 == 0) {
        uVar7 = param_1[8];
      }
      FUN_1000be03(param_1,iVar9 + (int)param_1,0,uVar8,uVar7);
    }
  }
  return iVar6;
}

