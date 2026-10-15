/*
 * FUN_140001344 at 140001344
 * undefined __fastcall FUN_140001344(longlong param_1, LPSTR param_2, uint param_3, ulonglong param_4, uint param_5)
 * Address ranges: 140001344-140001534
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140001344(longlong param_1,LPSTR param_2,uint param_3,ulonglong param_4,uint param_5)

{
  LPCSTR pCVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  CHAR local_e8 [32];
  longlong local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  undefined *local_90;
  char *local_88;
  longlong local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  
  uVar4 = (uint)param_4;
  if (((param_3 < 0xfffffff8) || (((param_3 != uVar4 || (param_3 == 0xfffffff9)) && (0xff < uVar4)))
      ) || (*(char *)(param_1 + 0x30) == '\0')) {
    if (param_3 != 0 || uVar4 != 0) {
      uVar3 = (ulonglong)param_3;
      if (param_5 != 0) {
        FUN_140024290(param_2,"%ux%u, %uHz",uVar3,param_4);
        return;
      }
      pcVar2 = "%ux%u";
      goto LAB_140001512;
    }
    uVar3 = (ulonglong)param_5;
    if (param_5 == 0) {
      FUN_140024290(param_2,(LPCSTR)(param_1 + 0x38),0,param_4);
      return;
    }
    pCVar1 = (LPCSTR)(param_1 + 0xb8);
  }
  else {
    local_78 = param_1 + 0xb8;
    local_70 = "Max%s, %uHz";
    local_68 = "Max ISF%s, %uHz";
    local_60 = "Max FHD%s, %uHz";
    local_58 = "Max FHD ISF%s, %uHz";
    local_50 = "Max QHD%s, %uHz";
    local_48 = "Max QHD ISF%s, %uHz";
    local_40 = "%ux, %uHz";
    local_38 = "Desktop%s, %uHz";
    local_c8 = param_1 + 0x38;
    local_c0 = "Max%s";
    local_b8 = "Max ISF%s";
    local_b0 = "Max FHD%s";
    local_a8 = "Max FHD ISF%s";
    local_a0 = "Max QHD%s";
    local_98 = "Max QHD ISF%s";
    local_90 = &DAT_140026578;
    local_88 = "Desktop%s";
    local_e8[0] = '\0';
    local_e8[1] = '\0';
    local_e8[2] = '\0';
    local_e8[3] = '\0';
    local_e8[4] = '\0';
    local_e8[5] = '\0';
    local_e8[6] = '\0';
    local_e8[7] = '\0';
    local_e8[8] = '\0';
    local_e8[9] = '\0';
    local_e8[10] = '\0';
    local_e8[0xb] = '\0';
    local_e8[0xc] = '\0';
    local_e8[0xd] = '\0';
    local_e8[0xe] = '\0';
    local_e8[0xf] = '\0';
    local_e8[0x10] = '\0';
    local_e8[0x11] = '\0';
    local_e8[0x12] = '\0';
    local_e8[0x13] = '\0';
    local_e8[0x14] = '\0';
    local_e8[0x15] = '\0';
    local_e8[0x16] = '\0';
    local_e8[0x17] = '\0';
    local_e8[0x18] = '\0';
    local_e8[0x19] = '\0';
    local_e8[0x1a] = '\0';
    local_e8[0x1b] = '\0';
    local_e8[0x1c] = '\0';
    local_e8[0x1d] = '\0';
    local_e8[0x1e] = '\0';
    local_e8[0x1f] = '\0';
    if (uVar4 - 2 < 0xfe) {
      FUN_140024290(local_e8," %ux",param_4 & 0xffffffff,param_4);
    }
    if (param_5 != 0) {
      pcVar2 = (char *)(&local_78)[-(longlong)(int)param_3];
      if (param_3 != 0xfffffff9) {
        FUN_140024290(param_2,pcVar2,local_e8,(ulonglong)param_5);
        return;
      }
      uVar3 = param_4 & 0xffffffff;
      param_4 = (ulonglong)param_5;
LAB_140001512:
      FUN_140024290(param_2,pcVar2,uVar3,param_4);
      return;
    }
    pCVar1 = (LPCSTR)(&local_c8)[-(longlong)(int)param_3];
    if (param_3 != 0xfffffff9) {
      FUN_140024290(param_2,pCVar1,local_e8,0);
      return;
    }
    uVar3 = param_4 & 0xffffffff;
    param_4 = 0;
  }
  FUN_140024290(param_2,pCVar1,uVar3,param_4);
  return;
}

