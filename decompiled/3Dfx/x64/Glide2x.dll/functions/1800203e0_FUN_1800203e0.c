/*
 * FUN_1800203e0 at 1800203e0
 * undefined8 __fastcall FUN_1800203e0(longlong * param_1, ulonglong param_2)
 * Address ranges: 1800203e0-18002062e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800203e0(longlong *param_1,ulonglong param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  SIZE_T SVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  DWORD local_res8 [2];
  uint local_78 [4];
  _MEMORY_BASIC_INFORMATION local_68;
  
  (**(code **)(*param_1 + 0x88))();
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (*(char *)((longlong)param_1 + 0x12d) != '\0')
     ) {
    (**(code **)(*param_1 + 0x50))(param_1,1);
  }
  uVar12 = 0;
  do {
    uVar5 = (**(code **)(*param_1 + 0x58))(param_1,uVar12);
    uVar6 = uVar5;
    if (*(ulonglong *)(uVar5 + 0x60) <= param_2) {
      iVar9 = *(int *)(param_1[1] + 0xac) * 2;
      if (*(char *)(uVar5 + 0x94) != '\0') {
        iVar9 = *(int *)(param_1[1] + 0xac) << 2;
      }
      uVar6 = (ulonglong)(uint)(iVar9 * *(int *)(uVar5 + 0x68)) + *(longlong *)(uVar5 + 0x60);
      if (param_2 < uVar6) {
        uVar13 = (int)param_2 - *(int *)(uVar5 + 0x60);
        uVar14 = uVar13 & 0xffff8000;
        if ((*(char *)(uVar5 + 0x99) != '\0') &&
           (SVar7 = VirtualQuery(*(LPCVOID *)(uVar5 + 0x60),&local_68,0x30), SVar7 != 0)) {
          VirtualProtect((LPVOID)((longlong)(int)uVar14 + *(longlong *)(uVar5 + 0x60)),0x8000,
                         local_68.Protect & 0xfffffeff,local_res8);
        }
        (**(code **)(**(longlong **)(param_1[1] + 0x3188) + 8))
                  (*(longlong **)(param_1[1] + 0x3188),0,0);
        if ((*(byte *)(uVar5 + 0x9a) & 2) != 0) {
          FUN_180027c18(uVar5);
        }
        uVar4 = uVar13 >> 0xf;
        uVar6 = (ulonglong)uVar4;
        uVar15 = (ulonglong)(uVar4 & 0x3f);
        if ((*(byte *)(uVar5 + 0xa0 + (ulonglong)(uVar13 >> 0x15) * 8 + ((longlong)uVar15 >> 3)) >>
             (uVar15 & 7) & 1) == 0) {
          local_res8[0] = *(DWORD *)(uVar5 + 0x68);
          uVar2 = *(uint *)(uVar5 + 0x20);
          bVar1 = *(byte *)(uVar5 + 0x94);
          puVar8 = FUN_180027778(local_78,uVar14,uVar14 + 0x8000,uVar2,*(uint *)(uVar5 + 0x24),
                                 local_res8[0],bVar1);
          uVar11 = puVar8[1];
          if ((uVar13 >> 0xf != 0) &&
             (uVar6 = (ulonglong)(uVar4 - 1 & 0x3f),
             (*(byte *)(uVar5 + 0xa0 + (ulonglong)(uVar4 - 1 >> 6) * 8 + ((longlong)uVar6 >> 3)) >>
              (uVar6 & 7) & 1) == 0)) {
            uVar11 = uVar11 - 2;
          }
          iVar10 = (puVar8[2] != 0) + 1 + puVar8[3];
          iVar9 = *(int *)(param_1[1] + 0xac);
          if (iVar10 <= *(int *)(param_1[1] + 0xac)) {
            iVar9 = iVar10;
          }
          uVar4 = 0;
          if (-1 < (int)uVar11) {
            uVar4 = uVar11;
          }
          uVar6 = (**(code **)(*param_1 + 0x70))
                            (param_1,uVar12,0,uVar4,uVar2,iVar9,uVar14,uVar14 + 0x8000,
                             *(undefined8 *)(uVar5 + 0x60),local_res8[0],bVar1);
          pbVar3 = (byte *)(uVar5 + 0xa0 + (ulonglong)(uVar13 >> 0x15) * 8 + ((longlong)uVar15 >> 3)
                           );
          *pbVar3 = *pbVar3 | '\x01' << (uVar15 & 7);
        }
        *(byte *)(uVar5 + 0x9a) = *(byte *)(uVar5 + 0x9a) & 0xfd;
        *(byte *)(uVar5 + 0x9a) = *(byte *)(uVar5 + 0x9a) | 1;
        return CONCAT71((int7)(uVar6 >> 8),1);
      }
    }
    uVar12 = uVar12 + 1;
    if (2 < uVar12) {
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}

