/*
 * FUN_100a9476 at 100a9476
 * undefined __fastcall FUN_100a9476(int param_1)
 * Address ranges: 100a9476-100a96e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100a9476(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  LPSTR pCVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int *extraout_ECX;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  CHAR local_894 [512];
  WCHAR local_694 [260];
  WCHAR local_48c [260];
  WCHAR local_284 [260];
  int local_7c [29];
  int local_8;
  
  bVar12 = DAT_100ba2c9 == '\0';
  puVar1 = (uint *)(param_1 + 0x9c);
  *puVar1 = 1;
  piVar11 = (int *)(param_1 + 0x764);
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  *(char **)(param_1 + 0xa8) = "[dgVoodoo] ";
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  local_8 = param_1;
  if (bVar12) {
    cVar2 = '\0';
    if (DAT_100ba710 != (HMODULE)0x0) {
      GetModuleFileNameW(DAT_100ba710,local_48c,0x104);
      PathRemoveFileSpecW(local_48c);
      PathAppendW(local_48c,L"dgVoodoo.conf");
      puVar3 = puVar1;
      if (param_1 == 0) {
        puVar3 = (uint *)0x0;
      }
      cVar2 = FUN_10082980(piVar11,local_48c,puVar3);
    }
    if (cVar2 == '\0') {
      GetModuleFileNameW((HMODULE)0x0,local_694,0x104);
      PathRemoveFileSpecW(local_694);
      PathAppendW(local_694,L"dgVoodoo.conf");
      iVar7 = Ordinal_158(local_694,local_48c);
      if (iVar7 != 0) {
        puVar3 = puVar1;
        if (param_1 == 0) {
          puVar3 = (uint *)0x0;
        }
        cVar2 = FUN_10082980(piVar11,local_694,puVar3);
        if (cVar2 != '\0') goto LAB_100a9628;
      }
      iVar7 = SHGetFolderPathW(0,0x1a,0,0,local_284);
      if (-1 < iVar7) {
        PathAppendW(local_284,L"dgVoodoo");
        FUN_10088b6a(local_7c,1,1,1);
        cVar2 = FUN_10089f2d(local_284,extraout_ECX);
        if (cVar2 != '\0') {
          FUN_10089f8f(local_7c,local_284);
        }
        PathAppendW(local_284,L"dgVoodoo.conf");
        puVar3 = puVar1;
        if (param_1 == 0) {
          puVar3 = (uint *)0x0;
        }
        FUN_10082980(piVar11,local_284,puVar3);
        FUN_10088bd7(local_7c);
      }
    }
  }
  else {
    piVar10 = &DAT_100bec20;
    for (iVar7 = 0x83; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    }
  }
LAB_100a9628:
  GetModuleFileNameA((HMODULE)0x0,local_894,0x200);
  pCVar4 = PathFindFileNameA(local_894);
  if (((pCVar4 != local_894) && (FUN_100ad564(pCVar4), *(int *)(param_1 + 0x822) == 0)) &&
     (pcVar5 = FUN_100ad616(pCVar4,"dosbox"), pcVar5 != (char *)0x0)) {
    *(undefined4 *)(param_1 + 0x822) = 1;
  }
  uVar6 = 2;
  uVar9 = uVar6;
  if (*(int *)(param_1 + 0x95f) != 2) {
    uVar9 = (uint)(*(int *)(param_1 + 0x95f) == 1);
  }
  uVar8 = uVar6;
  if (*(int *)(param_1 + 0x963) != 2) {
    uVar8 = (uint)(*(int *)(param_1 + 0x963) == 1);
  }
  if (*(int *)(param_1 + 0x967) != 2) {
    uVar6 = (uint)(*(int *)(param_1 + 0x967) == 1);
  }
  *(uint *)(param_1 + 0xa4) = uVar6;
  *puVar1 = uVar9;
  *(uint *)(param_1 + 0xa0) = uVar8;
  *(char **)(param_1 + 0xa8) = "[dgVoodoo] ";
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x96b);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}

