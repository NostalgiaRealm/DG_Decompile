/*
 * FUN_140002050 at 140002050
 * undefined8 * __cdecl FUN_140002050(longlong param_1, uint param_2, ulonglong param_3, ulonglong param_4, ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140002050-1400022d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_140002050(longlong param_1,uint param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  LPCSTR pCVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_170 [8];
  longlong local_150;
  char *apcStack_148 [8];
  longlong local_108;
  char *apcStack_100 [8];
  CHAR aCStack_c0 [128];
  
  uVar10 = param_3 & 0xffffffff;
  uVar12 = param_4 & 0xffffffff;
  uVar4 = param_3;
  uVar7 = param_4;
  uVar8 = param_5;
  puVar3 = (undefined8 *)FUN_14000fd38(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  uVar13 = 0;
  uVar2 = 0;
  uVar1 = (uint)puVar3;
  uVar9 = (uint)param_3;
  iVar11 = (int)param_4;
  if (uVar1 != 0) {
    do {
      uVar4 = FUN_14000fd78(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),uVar13);
      puVar3 = FUN_140001b50(param_1,(undefined8 *)local_170,(uint)uVar4);
      uVar2 = (uint)uVar13;
      if (((local_170[0] == param_2) && (local_170[1] == uVar9)) &&
         (((param_5 & 1) == 0 || (local_170[4] == iVar11)))) {
        puVar3 = (undefined8 *)
                 FUN_14000fff0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),uVar2);
        uVar4 = uVar13;
        break;
      }
      uVar2 = uVar2 + 1;
      uVar13 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  if (uVar2 != uVar1) {
    return puVar3;
  }
  if (((param_2 < 0xfffffff8) || ((param_2 != uVar9 || param_2 == 0xfffffff9) && 0xff < uVar9)) ||
     (*(char *)(param_1 + 0x30) == '\0')) {
    if (param_2 != 0 || uVar9 != 0) {
      if (iVar11 != 0) {
        FUN_140024880(aCStack_c0,"%ux%u, %uHz",(ulonglong)param_2,uVar10,uVar12,param_6,param_7,
                      param_8);
        goto LAB_1400022ac;
      }
      pcVar6 = "%ux%u";
      uVar4 = (ulonglong)param_2;
      uVar12 = uVar10;
      goto LAB_140002294;
    }
    if (iVar11 == 0) {
      FUN_140024880(aCStack_c0,(LPCSTR)(param_1 + 0x38),uVar4,uVar7,uVar8,param_6,param_7,param_8);
      goto LAB_1400022ac;
    }
    pCVar5 = (LPCSTR)(param_1 + 0xb8);
    uVar10 = uVar12;
  }
  else {
    local_108 = param_1 + 0xb8;
    apcStack_100[0] = "Max%s, %uHz";
    local_170[2] = 0;
    local_170[3] = 0;
    local_170[0] = 0;
    local_170[1] = 0;
    local_170[6] = 0;
    local_170[7] = 0;
    local_170[4] = 0;
    local_170[5] = 0;
    apcStack_100[1] = "Max ISF%s, %uHz";
    apcStack_100[2] = "Max FHD%s, %uHz";
    apcStack_100[3] = "Max FHD ISF%s, %uHz";
    apcStack_100[4] = "Max QHD%s, %uHz";
    apcStack_100[5] = "Max QHD ISF%s, %uHz";
    apcStack_100[6] = "%ux, %uHz";
    apcStack_100[7] = "Desktop%s, %uHz";
    local_150 = param_1 + 0x38;
    apcStack_148[0] = "Max%s";
    apcStack_148[1] = "Max ISF%s";
    apcStack_148[2] = "Max FHD%s";
    apcStack_148[3] = "Max FHD ISF%s";
    apcStack_148[4] = "Max QHD%s";
    apcStack_148[5] = "Max QHD ISF%s";
    apcStack_148[6] = "%ux";
    apcStack_148[7] = "Desktop%s";
    if (uVar9 - 2 < 0xfe) {
      FUN_140024880((LPSTR)local_170," %ux",uVar10,uVar7,uVar8,param_6,param_7,param_8);
    }
    if (iVar11 != 0) {
      pcVar6 = apcStack_100[(longlong)(int)-param_2 + -1];
      uVar4 = uVar10;
      if (param_2 != 0xfffffff9) {
        FUN_140024880(aCStack_c0,pcVar6,local_170,uVar12,uVar8,param_6,param_7,param_8);
        goto LAB_1400022ac;
      }
LAB_140002294:
      FUN_140024880(aCStack_c0,pcVar6,uVar4,uVar12,uVar8,param_6,param_7,param_8);
      goto LAB_1400022ac;
    }
    pCVar5 = apcStack_148[(longlong)(int)-param_2 + -1];
    if (param_2 != 0xfffffff9) {
      FUN_140024880(aCStack_c0,pCVar5,local_170,uVar7,uVar8,param_6,param_7,param_8);
      goto LAB_1400022ac;
    }
  }
  FUN_140024880(aCStack_c0,pCVar5,uVar10,uVar7,uVar8,param_6,param_7,param_8);
LAB_1400022ac:
  uVar2 = FUN_14000fc58(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),aCStack_c0);
  return (undefined8 *)(ulonglong)uVar2;
}

