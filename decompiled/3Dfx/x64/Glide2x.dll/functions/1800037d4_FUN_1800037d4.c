/*
 * FUN_1800037d4 at 1800037d4
 * undefined __fastcall FUN_1800037d4(longlong param_1)
 * Address ranges: 1800037d4-180003c48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800037d4(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  LPSTR pCVar10;
  char *pcVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined **local_e58;
  undefined4 local_e50;
  undefined4 local_e4c;
  undefined4 local_e48;
  char *local_e40;
  undefined4 local_e38;
  undefined8 local_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined1 local_e08;
  undefined4 local_e04;
  undefined8 local_e00;
  undefined8 local_df8;
  undefined4 local_df0;
  undefined8 local_de8;
  undefined8 local_de0;
  undefined8 local_dd8;
  undefined4 local_dd0;
  undefined8 local_dc8;
  undefined8 local_dc0;
  undefined4 local_db8;
  undefined ***local_da8;
  WCHAR *local_da0;
  undefined4 local_d98;
  WCHAR local_d88 [264];
  WCHAR local_b78 [264];
  WCHAR local_968 [264];
  WCHAR local_758 [264];
  CHAR local_548 [512];
  CHAR local_348 [784];
  
  uVar16 = 0;
  puVar1 = (uint *)(param_1 + 0xd0);
  bVar17 = DAT_18006c880 == '\0';
  *(char **)(param_1 + 0xe0) = "[dgVoodoo] ";
  *puVar1 = 1;
  *(undefined4 *)(param_1 + 0xd4) = 1;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (bVar17) {
    if (DAT_18006c878 != (HMODULE)0x0) {
      GetModuleFileNameW(DAT_18006c878,local_b78,0x104);
      PathRemoveFileSpecW(local_b78);
      PathAppendW(local_b78,L"dgVoodoo.conf");
      cVar5 = FUN_18000703c((int *)(param_1 + 0x800),local_b78,
                            (undefined4 *)(-(ulonglong)(param_1 != 0) & (ulonglong)puVar1));
      if (cVar5 != '\0') goto LAB_180003b68;
    }
    GetModuleFileNameW((HMODULE)0x0,local_968,0x104);
    PathRemoveFileSpecW(local_968);
    PathAppendW(local_968,L"dgVoodoo.conf");
    iVar7 = Ordinal_158(local_968,local_b78);
    if (((iVar7 == 0) ||
        (cVar5 = FUN_18000703c((int *)(param_1 + 0x800),local_968,
                               (undefined4 *)(-(ulonglong)(param_1 != 0) & (ulonglong)puVar1)),
        cVar5 == '\0')) && (iVar7 = SHGetFolderPathW(0,0x1a,0,0,local_d88), -1 < iVar7)) {
      PathAppendW(local_d88,L"dgVoodoo");
      local_e50 = 1;
      local_e40 = "[dgVoodoo IniParser] ";
      local_e4c = 1;
      local_e58 = &PTR_FUN_180061ca8;
      local_e48 = 1;
      local_e38 = 0;
      local_e30 = 0;
      local_e28 = 0;
      uStack_e20 = 0;
      local_e18 = 0;
      uStack_e10 = 0;
      local_e08 = 1;
      local_e04 = 0;
      local_e00 = 0;
      local_df8 = 0;
      local_df0 = 0;
      local_de8 = 0;
      local_de0 = 0;
      local_dd8 = 0;
      local_dd0 = 0;
      local_dc8 = 0;
      local_dc0 = 0;
      local_db8 = 0;
      FUN_18005db90(local_758,local_d88);
      PathAppendW(local_758,L"dgVoodooSettings.ini");
      WideCharToMultiByte(0,0x200,local_758,-1,local_348,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((code *)local_e58[3] == FUN_180008cfc) {
        bVar6 = FUN_180008cfc((longlong)&local_e58,local_758,1);
      }
      else {
        bVar6 = (*(code *)local_e58[3])();
      }
      if (bVar6 != 0) {
        local_da8 = &local_e58;
        local_d98 = 0x104;
        local_da0 = local_d88;
        while( true ) {
          if ((code *)local_e58[5] == FUN_180008d78) {
            uVar8 = (uint)local_dc0;
          }
          else {
            uVar8 = (*(code *)local_e58[5])(&local_e58);
          }
          uVar15 = (uint)uVar16;
          if (uVar8 <= uVar15) goto LAB_180003b2e;
          if ((code *)local_e58[6] == FUN_180008d80) {
            lVar14 = FUN_180008d80((longlong)&local_e58,uVar16);
          }
          else {
            lVar14 = (*(code *)local_e58[6])();
          }
          if (lVar14 == 0) break;
          uVar16 = (ulonglong)(uVar15 + 1);
        }
        FUN_180007458(&local_da8,uVar15);
      }
LAB_180003b2e:
      PathAppendW(local_d88,L"dgVoodoo.conf");
      FUN_18000703c((int *)(param_1 + 0x800),local_d88,
                    (undefined4 *)(-(ulonglong)(param_1 != 0) & (ulonglong)puVar1));
      FUN_1800079dc(&local_e58);
    }
  }
  else {
    lVar14 = 4;
    puVar3 = (undefined8 *)(param_1 + 0x800);
    puVar4 = (undefined8 *)&DAT_180061860;
    do {
      puVar13 = puVar4;
      puVar9 = puVar3;
      uVar2 = puVar13[1];
      *puVar9 = *puVar13;
      puVar9[1] = uVar2;
      uVar2 = puVar13[3];
      puVar9[2] = puVar13[2];
      puVar9[3] = uVar2;
      uVar2 = puVar13[5];
      puVar9[4] = puVar13[4];
      puVar9[5] = uVar2;
      uVar2 = puVar13[7];
      puVar9[6] = puVar13[6];
      puVar9[7] = uVar2;
      uVar2 = puVar13[9];
      puVar9[8] = puVar13[8];
      puVar9[9] = uVar2;
      uVar2 = puVar13[0xb];
      puVar9[10] = puVar13[10];
      puVar9[0xb] = uVar2;
      uVar2 = puVar13[0xd];
      puVar9[0xc] = puVar13[0xc];
      puVar9[0xd] = uVar2;
      uVar2 = puVar13[0xf];
      puVar9[0xe] = puVar13[0xe];
      puVar9[0xf] = uVar2;
      lVar14 = lVar14 + -1;
      puVar3 = puVar9 + 0x10;
      puVar4 = puVar13 + 0x10;
    } while (lVar14 != 0);
    uVar2 = *(undefined8 *)((longlong)puVar13 + 0x84);
    *(undefined8 *)((longlong)puVar9 + 0x7c) = *(undefined8 *)((longlong)puVar13 + 0x7c);
    *(undefined8 *)((longlong)puVar9 + 0x84) = uVar2;
  }
LAB_180003b68:
  GetModuleFileNameA((HMODULE)0x0,local_548,0x200);
  pCVar10 = PathFindFileNameA(local_548);
  if (((pCVar10 != local_548) && (FUN_18005d750(pCVar10), *(int *)(param_1 + 0x8be) == 0)) &&
     (pcVar11 = FUN_18005d7d4(pCVar10,"dosbox"), pcVar11 != (char *)0x0)) {
    *(undefined4 *)(param_1 + 0x8be) = 1;
  }
  uVar8 = 2;
  if (*(int *)(param_1 + 0x9fb) == 2) {
    uVar15 = 2;
  }
  else {
    uVar15 = (uint)(*(int *)(param_1 + 0x9fb) == 1);
  }
  if (*(int *)(param_1 + 0x9ff) == 2) {
    uVar12 = 2;
  }
  else {
    uVar12 = (uint)(*(int *)(param_1 + 0x9ff) == 1);
  }
  if (*(int *)(param_1 + 0xa03) != 2) {
    uVar8 = (uint)(*(int *)(param_1 + 0xa03) == 1);
  }
  *(uint *)(param_1 + 0xd8) = uVar8;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xa07);
  *puVar1 = uVar15;
  *(uint *)(param_1 + 0xd4) = uVar12;
  *(char **)(param_1 + 0xe0) = "[dgVoodoo] ";
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return;
}

