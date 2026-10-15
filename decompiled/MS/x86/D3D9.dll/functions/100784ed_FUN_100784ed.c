/*
 * FUN_100784ed at 100784ed
 * undefined FUN_100784ed(void)
 * Address ranges: 100784ed-1007875b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100784ed(int *param_1,byte param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_24 = 0;
  puVar1 = (uint *)(param_1 + 9);
  if (param_1[0x2e] == 0) {
    uVar5 = *puVar1;
    uVar8 = param_1[10];
    iVar7 = 0x1c;
    if ((&DAT_100d2914)[param_1[7]] != '\0') {
      iVar7 = 0x1f;
    }
    if (uVar8 == 0) {
      uVar8 = param_1[8];
    }
    FUN_100777a5(param_1[5],param_1[6],uVar8,uVar5,1,0x1b,iVar7,0x1c,0,0,0x28,0,
                 -(uint)(uVar5 != 1) & 4,0,uVar5 != 1,'\0');
    FUN_1007817e(param_1);
  }
  if ((param_2 != 0) || (*(char *)((int)param_1 + 0x3d) == '\x01')) {
    FUN_10077aad(param_1 + 0x2b,0);
  }
  iVar7 = param_1[(uint)param_2 * 2 + 0x30];
  if (param_1[0x2e] != 0) {
    puVar2 = (uint *)(param_1 + 8);
    local_1c = 0;
    if (*puVar1 != 0) {
      do {
        local_20 = 0;
        if (*puVar2 != 0) {
          do {
            cVar4 = (**(code **)(*param_1 + 4))(local_20,local_1c,1);
            if (cVar4 != '\0') {
              local_24 = local_24 | 1 << (local_1c & 0x1f);
            }
            uVar5 = param_1[10];
            if (uVar5 == 0) {
              uVar5 = *puVar2;
            }
            iVar9 = (uVar5 * local_1c + local_20) * 0x1c;
            if (*(char *)((int)param_1 + 0xd9) != '\0') {
              uVar5 = (uint)param_1[6] >> ((byte)local_20 & 0x1f);
              uVar8 = (uint)param_1[5] >> ((byte)local_20 & 0x1f);
              if (uVar5 == 0) {
                uVar5 = 1;
              }
              if (uVar8 == 0) {
                uVar8 = 1;
              }
              SetRect((LPRECT)(param_1[0x31] + 0xc + iVar9),0,0,uVar8,uVar5);
            }
            BVar6 = IsRectEmpty((RECT *)(param_1[0x31] + 0xc + iVar9));
            if (BVar6 == 0) {
              iVar3 = param_1[0x31];
              FUN_10076c7d((void *)param_1[0x2a],param_1[7],local_20,local_1c,param_1[2],
                           *(int *)(iVar9 + 0xc + iVar3),*(int *)(iVar9 + 0x10 + iVar3),
                           *(int *)(iVar9 + 0x14 + iVar3),*(int *)(iVar9 + 0x18 + iVar3),
                           param_1[0x2e],*(undefined4 *)(iVar9 + iVar3),(int *)param_1[0x15],
                           param_1[0x17]);
              SetRectEmpty((LPRECT)(param_1[0x31] + iVar9 + 0xc));
              FUN_100b5466((void *)param_1[0x10],param_1[4],param_1[0x30]);
              local_24 = local_24 | 1 << (local_1c & 0x1f);
            }
            local_20 = local_20 + 1;
          } while (local_20 < *puVar2);
        }
        local_1c = local_1c + 1;
      } while (local_1c < *puVar1);
    }
    *(undefined1 *)((int)param_1 + 0xd9) = 0;
    if (*(char *)((int)param_1 + 0x3d) == '\x01') {
      FUN_10077958(param_1 + 0x12,*puVar2,*puVar1);
      *(undefined1 *)((int)param_1 + 0x3d) = 2;
    }
    if (local_24 != 0) {
      iVar9 = 0xac;
      if (param_1[0x30] == 0) {
        iVar9 = 0x48;
      }
      uVar5 = param_1[10];
      if (uVar5 == 0) {
        uVar5 = *puVar2;
      }
      FUN_10078ac8(param_1,iVar9 + (int)param_1,0,local_24,uVar5);
    }
  }
  return iVar7;
}

