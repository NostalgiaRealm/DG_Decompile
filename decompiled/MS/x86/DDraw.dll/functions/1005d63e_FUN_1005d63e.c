/*
 * FUN_1005d63e at 1005d63e
 * int __stdcall FUN_1005d63e(undefined4 param_1, byte * param_2, short param_3, int param_4)
 * Address ranges: 1005d63e-1005d804
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005d63e(undefined4 param_1,byte *param_2,short param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  FARPROC pFVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  undefined1 local_1c4 [287];
  byte bStack_a5;
  byte local_a4 [10];
  byte abStack_9a [118];
  uint local_24;
  HMODULE local_1c;
  FARPROC local_18;
  int *local_14;
  int *local_10;
  int local_c;
  byte local_5;
  
  local_c = 0;
  local_1c = GetModuleHandleA("user32.dll");
  if ((local_1c != (HMODULE)0x0) &&
     (local_18 = (FARPROC)FUN_1005d54e((int)local_1c,param_2), local_18 != (FARPROC)0x0)) {
    local_10 = (int *)0x0;
    FUN_10060d45((int *)local_a4,0,0x84);
    pbVar9 = param_2;
    do {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
    pbVar12 = &bStack_a5;
    do {
      pbVar13 = pbVar12 + 1;
      pbVar12 = pbVar12 + 1;
    } while (*pbVar13 != 0);
    pbVar13 = param_2;
    for (uVar7 = (uint)((int)pbVar9 - (int)param_2) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar13;
      pbVar13 = pbVar13 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar7 = (int)pbVar9 - (int)param_2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar12 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      pbVar12 = pbVar12 + 1;
    }
    pbVar9 = &bStack_a5;
    do {
      pbVar12 = pbVar9;
      pbVar9 = pbVar12 + 1;
    } while (pbVar12[1] != 0);
    uVar7 = 0;
    pbVar9[0] = 'u';
    pbVar9[1] = 's';
    pbVar9[2] = 'e';
    pbVar9[3] = 'r';
    pbVar12[5] = '3';
    pbVar12[6] = '2';
    pbVar12[7] = '.';
    pbVar12[8] = 'd';
    pbVar12[9] = 'l';
    pbVar12[10] = 'l';
    pbVar12[0xb] = '\0';
    piVar2 = local_14;
    piVar11 = (int *)0;
    if (local_14[1] != 0) {
      iVar8 = *local_14;
      do {
        pbVar9 = local_a4;
        pbVar13 = (byte *)(uVar7 * 0x84 + iVar8);
        pbVar12 = pbVar13;
        do {
          local_5 = *pbVar9;
          bVar15 = local_5 < *pbVar12;
          if (local_5 != *pbVar12) {
LAB_1005d726:
            uVar3 = -(uint)bVar15 | 1;
            goto LAB_1005d72b;
          }
          if (local_5 == (byte)local_10) break;
          local_5 = pbVar9[1];
          bVar15 = local_5 < pbVar12[1];
          if (local_5 != pbVar12[1]) goto LAB_1005d726;
          pbVar9 = pbVar9 + 2;
          pbVar12 = pbVar12 + 2;
        } while (local_5 != (byte)local_10);
        uVar3 = 0;
LAB_1005d72b:
        if (uVar3 == 0) {
          iVar8 = *(int *)(pbVar13 + 0x80) + 1;
          piVar11 = (int *)0x0;
          if (iVar8 != 0) {
            iVar10 = iVar8 * 0x120 + local_14[6];
            uVar7 = 0;
            goto LAB_1005d75f;
          }
          break;
        }
        iVar8 = *local_14;
        uVar7 = uVar7 + 1;
        piVar11 = local_10;
      } while (uVar7 < (uint)local_14[1]);
    }
    do {
      if (*(char *)((int)local_14 + (int)piVar11 + 0x1cU) == '\0') {
        local_24 = (uint)piVar11;
        uVar4 = FUN_1005d951(local_14,(undefined4 *)local_a4);
        if ((char)uVar4 == '\0') {
          return local_c;
        }
        local_c = (int)piVar11 + 1;
        piVar14 = (int *)((int)piVar11 * 0x120 + piVar2[6]);
        local_10 = piVar14;
        piVar5 = FUN_1005f280(local_1c4,param_4,local_c,param_3);
        piVar2 = local_10;
        for (iVar8 = 0x48; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar14 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar14 = piVar14 + 1;
        }
        FUN_1005f315(local_14,(undefined8 *)local_18,(int)local_10,0);
        pFVar6 = GetProcAddress(local_1c,(LPCSTR)param_2);
        if (local_18 != pFVar6) {
          FUN_1005f315(local_14,(undefined8 *)pFVar6,(int)piVar2,1);
        }
        *(undefined1 *)((int)piVar11 + 0x1cU + (int)local_14) = 1;
        return local_c;
      }
      piVar11 = (int *)((int)piVar11 + 1);
    } while (piVar11 < 0x20);
  }
  return local_c;
  while (uVar7 = uVar7 + 1, uVar7 < 4) {
LAB_1005d75f:
    if (*(int *)(iVar10 + -0x110 + uVar7 * 4) == 0) {
      *(int *)(iVar10 + -0x110 + uVar7 * 4) = param_4;
      break;
    }
  }
  if (uVar7 != 4) {
    return iVar8;
  }
  return 0;
}

