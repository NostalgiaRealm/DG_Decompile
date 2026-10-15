/* Ghidra-generated C-like pseudocode for inspection. Not original source and not a buildable reconstruction. */
/*
 * __chkstk at 140001010
 * undefined __fastcall __chkstk(void)
 * Address ranges: 140001010-14000105d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __chkstk  Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012
 */


/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}


/*
 * FUN_140001064 at 140001064
 * undefined __fastcall FUN_140001064(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140001064-140001083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140001064(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14000e070((longlong *)(param_1 + 0x68),param_1,param_2,param_4,param_4);
  return;
}


/*
 * FUN_140001084 at 140001084
 * undefined4 __fastcall FUN_140001084(longlong param_1)
 * Address ranges: 140001084-140001132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_140001084(longlong param_1)

{
  int iVar1;
  HMODULE hInst;
  HANDLE lParam;
  tagRECT local_18;
  
  hInst = GetModuleHandleW((LPCWSTR)0x0);
  lParam = LoadImageW(hInst,(LPCWSTR)0x70,1,0,0,0x8040);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,1,(LPARAM)lParam);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,0,(LPARAM)lParam);
  iVar1 = FUN_14000f670((undefined8 *)(param_1 + 0x70));
  if (iVar1 != *(int *)(param_1 + 0x100)) {
    GetWindowRect(*(HWND *)(param_1 + 0x18),&local_18);
    iVar1 = FUN_14000f960(param_1 + 0x70,iVar1,&local_18.left);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


/*
 * FUN_140001144 at 140001144
 * ulonglong __fastcall FUN_140001144(longlong param_1, int param_2)
 * Address ranges: 140001144-140001176
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140001144(longlong param_1,int param_2)

{
  BOOL BVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  if (param_2 == 1) {
    (**(code **)(*(longlong *)(param_1 + -0x68) + 0x70))();
    BVar1 = EndDialog(*(HWND *)(param_1 + -0x50),1);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
  }
  else {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  return uVar2;
}


/*
 * FUN_140001178 at 140001178
 * undefined1 __fastcall FUN_140001178(longlong param_1, int param_2, int * param_3)
 * Address ranges: 140001178-14000118b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_140001178(longlong param_1,int param_2,int *param_3)

{
  FUN_14000f960(param_1 + 0x70,param_2,param_3);
  return 1;
}


/*
 * FUN_14000118c at 14000118c
 * bool __fastcall FUN_14000118c(longlong param_1, int param_2, HDC param_3)
 * Address ranges: 14000118c-140001276
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_14000118c(longlong param_1,int param_2,HDC param_3)

{
  int iVar1;
  HWND hWnd;
  HBRUSH pHVar2;
  RECT local_58;
  RECT local_48;
  tagRECT local_38;
  
  if (param_2 == 0x14) {
    hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),1);
    GetWindowRect(hWnd,&local_38);
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_38,2);
    iVar1 = MulDiv(8,*(int *)(param_1 + 0x100),0x60);
    iVar1 = local_38.top - iVar1;
    GetClientRect(*(HWND *)(param_1 + 0x18),&local_38);
    GetClientRect(*(HWND *)(param_1 + 0x18),&local_38);
    pHVar2 = GetStockObject(0);
    local_58.left = 0;
    local_58.top = 0;
    local_58.right = local_38.right - local_38.left;
    local_58.bottom = iVar1;
    FillRect(param_3,&local_58,pHVar2);
    local_48.bottom = local_38.bottom - local_38.top;
    local_48.left = 0;
    local_48.top = iVar1;
    local_48.right = local_38.right - local_38.left;
    pHVar2 = GetSysColorBrush(0xf);
    FillRect(param_3,&local_48,pHVar2);
  }
  return param_2 == 0x14;
}


/*
 * FUN_140001298 at 140001298
 * undefined __fastcall FUN_140001298(undefined8 * param_1)
 * Address ranges: 140001298-1400012d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140001298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1400263d0;
  param_1[0xd] = &PTR_FUN_1400263b8;
  FUN_14000f590(param_1 + 0xe);
  *param_1 = &PTR_FUN_140028860;
                    /* WARNING: Could not recover jumptable at 0x0001400012d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroyWindow((HWND)param_1[3]);
  return;
}


/*
 * FUN_1400012dc at 1400012dc
 * undefined8 * __fastcall FUN_1400012dc(undefined8 * param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 * param_5)
 * Address ranges: 1400012dc-140001341
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 *
FUN_1400012dc(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = param_4;
  *(undefined4 *)(param_1 + 2) = param_3;
  uVar1 = param_5[1];
  param_1[5] = *param_5;
  param_1[6] = uVar1;
  FUN_140024290((LPSTR)(param_1 + 7),"%s",*param_5,param_4);
  FUN_140024290((LPSTR)(param_1 + 0x17),"%s, %%uHz",*param_5,param_4);
  return param_1;
}


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


/*
 * FUN_140001538 at 140001538
 * bool __fastcall FUN_140001538(longlong param_1, uint * param_2)
 * Address ranges: 140001538-1400017a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_140001538(longlong param_1,uint *param_2)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte *pbVar9;
  byte bVar10;
  undefined1 local_res8 [16];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_1c8 [4];
  byte local_1b8 [128];
  byte local_138 [128];
  byte local_b8 [128];
  
  FUN_14002511c(local_1b8,0,0x80);
  FUN_14000e1c0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(LPARAM)local_1b8,0x80);
  CharLowerA((LPSTR)local_1b8);
  local_res20[0] = 0;
  local_res18[0] = 0;
  local_1c8[0] = 0;
  FUN_14002511c(local_b8,0,0x80);
  FUN_14002511c(local_138,0,0x80);
  bVar1 = true;
  pbVar9 = local_1b8;
  pbVar2 = local_b8;
  while (local_1b8[0] != 0) {
    bVar10 = *pbVar9;
    if ((bVar10 == 0x2c) && (bVar1)) {
      bVar1 = false;
      pbVar6 = local_138;
      bVar10 = 0;
    }
    else {
      pbVar6 = pbVar2 + 1;
    }
    pbVar9 = pbVar9 + 1;
    *pbVar2 = bVar10;
    pbVar2 = pbVar6;
    local_1b8[0] = *pbVar9;
  }
  bVar1 = false;
  uVar7 = FUN_140013fb8(local_b8,(int *)local_res20,(int *)local_res18);
  if ((char)uVar7 == '\0') {
    local_res8[0] = 0;
    iVar3 = FUN_1400242b4(local_1b8,(byte *)" %u x %u %c",local_res20,local_res18);
    iVar4 = FUN_1400242b4(local_1b8,(byte *)" %u x %u , %u hz %c",local_res20,local_res18);
    iVar5 = FUN_1400242b4(local_1b8,(byte *)" %u x %u , %u %c",local_res20,local_res18);
    if (((iVar3 != 2) && (iVar4 != 3)) && (iVar5 != 3)) {
      bVar1 = true;
    }
  }
  else {
    lVar8 = FUN_140024d20((char *)local_138);
    if (lVar8 != 0) {
      local_res8[0] = 0;
      iVar3 = FUN_1400242b4(local_138,(byte *)" %u hz %c",local_1c8,local_res8);
      iVar4 = FUN_1400242b4(local_138,(byte *)" %u %c",local_1c8,local_res8);
      if ((iVar3 != 1) && (iVar4 != 1)) {
        bVar1 = true;
      }
    }
  }
  if (((0xfffffff7 < local_res20[0]) &&
      (((local_res20[0] == local_res18[0] && (local_res20[0] != 0xfffffff9)) ||
       (local_res18[0] < 0x100)))) && (*(char *)(param_1 + 0x30) == '\0')) {
    bVar1 = true;
  }
  if (!bVar1) {
    *param_2 = local_res20[0];
    param_2[4] = local_1c8[0];
    param_2[2] = local_1c8[0];
    param_2[1] = local_res18[0];
    param_2[3] = 1;
  }
  return !bVar1;
}


/*
 * FUN_1400017a4 at 1400017a4
 * undefined __fastcall FUN_1400017a4(longlong * param_1, undefined4 param_2, int param_3, undefined4 param_4, char param_5)
 * Address ranges: 1400017a4-140001b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400017a4(longlong *param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  uint uVar7;
  HWND hWnd;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  CHAR local_b8 [128];
  
  iVar13 = param_3 + -1;
  if (param_3 == 0) {
    iVar13 = 0;
  }
  hWnd = GetDlgItem(*(HWND *)(param_1[1] + 0x18),(int)param_1[2]);
  SendMessageW(hWnd,0x14b,0,0);
  FUN_14000e340(param_1[1],(int)param_1[2],param_1[5],-1);
  if ((char)param_1[6] != '\0') {
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026604,-0xe);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026608,-0xf);
    FUN_14000e340(param_1[1],(int)param_1[2],0x14002660c,-0x10);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026610,-8);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026618,-9);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026620,-10);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026628,-0xb);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026638,-0xc);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026640,-0xd);
    FUN_14000e340(param_1[1],(int)param_1[2],0x14002664c,-0x12);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026658,-0x13);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026668,-0x11);
  }
  iVar2 = *(int *)(*param_1 + 600);
  if (iVar2 != -1) {
    plVar3 = *(longlong **)(*param_1 + 0x210 + (longlong)iVar2 * 8);
    uVar7 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,iVar13,param_4);
    FUN_140024260((LPVOID)param_1[3]);
    uVar14 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    if (uVar7 != 0) {
      do {
        local_c8 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        plVar3 = *(longlong **)(*param_1 + 0x210 + (longlong)*(int *)(*param_1 + 600) * 8);
        cVar6 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2,iVar13,param_4,uVar14,&local_d8);
        uVar12 = 0;
        if (cVar6 != '\0') {
          if ((int)param_1[4] != 0) {
            lVar4 = param_1[3];
            do {
              if ((((uint)local_d8 == *(uint *)(lVar4 + uVar12 * 0x14)) &&
                  (local_d8._4_4_ == *(uint *)(lVar4 + 4 + uVar12 * 0x14))) &&
                 ((param_5 == '\0' || (local_c8 == *(uint *)(lVar4 + 0x10 + uVar12 * 0x14)))))
              goto LAB_140001af2;
              uVar10 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar10;
            } while (uVar10 < *(uint *)(param_1 + 4));
          }
          FUN_140001344((longlong)param_1,local_b8,(uint)local_d8,(ulonglong)local_d8._4_4_,
                        -(uint)(param_5 != '\0') & local_c8);
          FUN_14000e340(param_1[1],(int)param_1[2],(LPARAM)local_b8,
                        (ulonglong)*(uint *)(param_1 + 4));
          iVar2 = *(int *)((longlong)param_1 + 0x24);
          if ((int)param_1[4] == iVar2) {
            if (iVar2 == 0) {
              uVar10 = 0x10;
            }
            else {
              uVar10 = iVar2 * 2;
            }
            uVar12 = CONCAT44(0,uVar10);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar12;
            uVar8 = SUB168(ZEXT816(0x14) * auVar5,0);
            if (SUB168(ZEXT816(0x14) * auVar5,8) != 0) {
              uVar8 = 0xffffffffffffffff;
            }
            puVar9 = (undefined8 *)thunk_FUN_14002423c(uVar8);
            if (puVar9 == (undefined8 *)0x0) goto LAB_140001af2;
            puVar11 = puVar9;
            if (uVar10 != 0) {
              do {
                *puVar11 = 0;
                puVar11[1] = 0;
                *(undefined4 *)(puVar11 + 2) = 0;
                puVar11 = (undefined8 *)((longlong)puVar11 + 0x14);
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            FUN_140024620(puVar9,(undefined8 *)param_1[3],
                          (ulonglong)*(uint *)((longlong)param_1 + 0x24) * 0x14);
            FUN_140024260((LPVOID)param_1[3]);
            param_1[3] = (longlong)puVar9;
            *(uint *)((longlong)param_1 + 0x24) = uVar10;
          }
          uVar10 = *(uint *)(param_1 + 4);
          lVar4 = param_1[3];
          puVar1 = (undefined4 *)(lVar4 + (ulonglong)uVar10 * 0x14);
          *puVar1 = (uint)local_d8;
          puVar1[1] = local_d8._4_4_;
          puVar1[2] = (undefined4)uStack_d0;
          puVar1[3] = uStack_d0._4_4_;
          *(uint *)(lVar4 + 0x10 + (ulonglong)uVar10 * 0x14) = local_c8;
          *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        }
LAB_140001af2:
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar7);
    }
  }
  return;
}


/*
 * FUN_140001b14 at 140001b14
 * undefined8 * __fastcall FUN_140001b14(longlong param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 140001b14-140001c12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140001b14(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  switch(param_3) {
  case 0xffffffed:
    *(undefined4 *)param_2 = 0xfffffffe;
    goto LAB_140001b93;
  case 0xffffffee:
    *(undefined4 *)param_2 = 0xffffffff;
    goto LAB_140001b93;
  case 0xffffffef:
    uVar2 = 0xfffffff8;
    goto LAB_140001b6b;
  case 0xfffffff0:
    *(undefined4 *)param_2 = 0xfffffff9;
    *(undefined4 *)((longlong)param_2 + 4) = 4;
    break;
  case 0xfffffff1:
    *(undefined4 *)param_2 = 0xfffffff9;
    *(undefined4 *)((longlong)param_2 + 4) = 3;
    break;
  case 0xfffffff2:
    *(undefined4 *)param_2 = 0xfffffff9;
LAB_140001b93:
    *(undefined4 *)((longlong)param_2 + 4) = 2;
    break;
  case 0xfffffff3:
    uVar2 = 0xfffffffa;
    goto LAB_140001b6b;
  case 0xfffffff4:
    uVar2 = 0xfffffffb;
    goto LAB_140001b6b;
  case 0xfffffff5:
    uVar2 = 0xfffffffc;
    goto LAB_140001b6b;
  case 0xfffffff6:
    uVar2 = 0xfffffffd;
LAB_140001b6b:
    *(undefined4 *)param_2 = uVar2;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    break;
  case 0xfffffff7:
    *(undefined4 *)param_2 = 0xfffffffe;
    *(undefined4 *)((longlong)param_2 + 4) = 0xfffffffe;
    break;
  case 0xfffffff8:
    *param_2 = 0xffffffffffffffff;
    break;
  default:
    if (param_3 != 0xffffffff) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      uVar3 = (ulonglong)param_3;
      *(undefined4 *)param_2 = *(undefined4 *)(lVar1 + uVar3 * 0x14);
      *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(lVar1 + 4 + uVar3 * 0x14);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 0x10 + uVar3 * 0x14);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 8 + uVar3 * 0x14);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar1 + 0xc + uVar3 * 0x14);
    }
  }
  return param_2;
}


/*
 * FUN_140001c44 at 140001c44
 * undefined8 __fastcall FUN_140001c44(longlong param_1, uint * param_2)
 * Address ranges: 140001c44-140001cba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140001c44(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  undefined8 local_28 [4];
  ulonglong uVar5;
  
  uVar3 = FUN_14000e460(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  if (uVar3 == 0xffffffff) {
    bVar2 = FUN_140001538(param_1,param_2);
    uVar5 = CONCAT71(extraout_var,bVar2);
  }
  else {
    bVar2 = true;
    uVar3 = FUN_14000e270(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(ulonglong)uVar3);
    puVar4 = FUN_140001b14(param_1,local_28,uVar3);
    uVar1 = puVar4[1];
    *(undefined8 *)param_2 = *puVar4;
    *(undefined8 *)(param_2 + 2) = uVar1;
    uVar5 = (ulonglong)*(uint *)(puVar4 + 2);
    param_2[4] = *(uint *)(puVar4 + 2);
  }
  return CONCAT71((int7)(uVar5 >> 8),bVar2);
}


/*
 * FUN_140001cbc at 140001cbc
 * undefined __fastcall FUN_140001cbc(longlong param_1, uint param_2, uint param_3, uint param_4, char param_5)
 * Address ranges: 140001cbc-140001d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140001cbc(longlong param_1,uint param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  LRESULT LVar3;
  uint uVar4;
  uint local_d8;
  uint local_d4;
  uint local_c8;
  CHAR local_b8 [136];
  
  LVar3 = FUN_14000e230(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  uVar4 = 0;
  uVar1 = (uint)LVar3;
  if (uVar1 != 0) {
    do {
      uVar2 = FUN_14000e270(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(ulonglong)uVar4);
      FUN_140001b14(param_1,(undefined8 *)&local_d8,uVar2);
      if (((local_d8 == param_2) && (local_d4 == param_3)) &&
         ((param_5 == '\0' || (local_c8 == param_4)))) {
        FUN_14000e4a0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),uVar4);
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (uVar4 == uVar1) {
    FUN_140001344(param_1,local_b8,param_2,(ulonglong)param_3,param_4);
    FUN_14000e180(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),local_b8);
  }
  return;
}


/*
 * FUN_140001d7c at 140001d7c
 * undefined __fastcall FUN_140001d7c(longlong * param_1)
 * Address ranges: 140001d7c-140001e6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140001d7c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  HWND hWnd;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  CHAR local_38 [16];
  
  hWnd = GetDlgItem(*(HWND *)(param_1[1] + 0x18),(int)param_1[2]);
  SendMessageW(hWnd,0x14b,0,0);
  FUN_14000e340(param_1[1],(int)param_1[2],0x140026670,1);
  FUN_14000e340(param_1[1],(int)param_1[2],0x140026678,0);
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 600) != -1) {
    uVar5 = -(uint)(*(int *)(lVar6 + 4) != 0) & *(int *)(lVar6 + 4) - 1U;
    plVar1 = *(longlong **)(lVar6 + 0x210 + (longlong)*(int *)(lVar6 + 600) * 8);
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar5);
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        plVar1 = *(longlong **)(*param_1 + 0x210 + (longlong)*(int *)(*param_1 + 600) * 8);
        lVar6 = *plVar1;
        uVar3 = (**(code **)(lVar6 + 0x58))(plVar1,uVar5,uVar4);
        FUN_140024290(local_38,"%ux",(ulonglong)uVar3,lVar6);
        FUN_14000e340(param_1[1],(int)param_1[2],(LPARAM)local_38,(ulonglong)uVar3);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  return;
}


/*
 * FUN_140001e70 at 140001e70
 * undefined __fastcall FUN_140001e70(longlong param_1, int param_2)
 * Address ranges: 140001e70-140001ec4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140001e70(longlong param_1,int param_2)

{
  int iVar1;
  LRESULT LVar2;
  uint uVar3;
  
  LVar2 = FUN_14000e230(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  uVar3 = 0;
  if ((uint)LVar2 != 0) {
    do {
      iVar1 = FUN_14000e270(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(ulonglong)uVar3);
      if (iVar1 == param_2) {
        FUN_14000e4a0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),uVar3);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)LVar2);
  }
  return;
}


/*
 * FUN_140001ec8 at 140001ec8
 * undefined8 __fastcall FUN_140001ec8(longlong param_1, int param_2, undefined8 param_3, undefined4 param_4)
 * Address ranges: 140001ec8-140001f45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140001ec8(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  HWND hWnd;
  undefined8 uVar2;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41e);
  iVar1 = GetScrollPos(hWnd,2);
  uVar2 = FUN_14000ed90(param_1,0x41e,iVar1 - (param_2 * 10) / 0x78,
                        CONCAT31((int3)((uint)param_4 >> 8),1));
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    uVar2 = FUN_14000f1e0(*(longlong **)(param_1 + 0x68),(int)uVar2);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}


/*
 * FUN_140001fa4 at 140001fa4
 * undefined4 __fastcall FUN_140001fa4(longlong param_1, int param_2, int param_3)
 * Address ranges: 140001fa4-140001fd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_140001fa4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_14000ed90(param_1 + -0x70,param_2,param_3,0);
  if (*(longlong **)(param_1 + -8) != (longlong *)0x0) {
    iVar1 = FUN_14000f1e0(*(longlong **)(param_1 + -8),iVar1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


/*
 * FUN_140001fd4 at 140001fd4
 * undefined4 __fastcall FUN_140001fd4(longlong param_1, int param_2)
 * Address ranges: 140001fd4-140002060
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_140001fd4(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  HWND pHVar3;
  tagSCROLLINFO local_28;
  
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
  local_28.cbSize = 0x1c;
  local_28.fMask = 6;
  GetScrollInfo(pHVar3,2,&local_28);
  uVar1 = FUN_14000ed90(param_1 + -0x70,param_2,local_28.nPos - local_28.nPage,0);
  if (*(longlong *)(param_1 + -8) != 0) {
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
    iVar2 = GetScrollPos(pHVar3,2);
    uVar1 = FUN_14000f1e0(*(longlong **)(param_1 + -8),iVar2);
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


/*
 * FUN_140002064 at 140002064
 * undefined4 __fastcall FUN_140002064(longlong param_1, int param_2)
 * Address ranges: 140002064-1400020f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_140002064(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  HWND pHVar3;
  tagSCROLLINFO local_28;
  
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
  local_28.cbSize = 0x1c;
  local_28.fMask = 6;
  GetScrollInfo(pHVar3,2,&local_28);
  uVar1 = FUN_14000ed90(param_1 + -0x70,param_2,local_28.nPage + local_28.nPos,0);
  if (*(longlong *)(param_1 + -8) != 0) {
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
    iVar2 = GetScrollPos(pHVar3,2);
    uVar1 = FUN_14000f1e0(*(longlong **)(param_1 + -8),iVar2);
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


/*
 * FUN_140002100 at 140002100
 * undefined __fastcall FUN_140002100(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140002100-140002119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140002100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14000e110((longlong *)(param_1 + 0x78),param_1,param_3,param_4,param_4);
  return;
}


/*
 * FUN_14000211c at 14000211c
 * undefined __fastcall FUN_14000211c(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 14000211c-14000213b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000211c(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14000e070((longlong *)(param_1 + 0x70),param_1,param_2,param_4,param_4);
  return;
}


/*
 * FUN_14000214c at 14000214c
 * undefined8 __fastcall FUN_14000214c(longlong param_1)
 * Address ranges: 14000214c-140002314
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_14000214c(longlong param_1)

{
  ulonglong uVar1;
  HWND pHVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40f);
  SendMessageW(pHVar2,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x40f,(LPARAM)(&PTR_s_Message_disabled_140026800)[lVar4],
                  (ulonglong)(uint)(&DAT_1400267e0)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x410);
  SendMessageW(pHVar2,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x410,(LPARAM)(&PTR_s_Message_disabled_140026800)[lVar4],
                  (ulonglong)(uint)(&DAT_1400267e0)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x411);
  SendMessageW(pHVar2,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x411,(LPARAM)(&PTR_s_Message_disabled_140026800)[lVar4],
                  (ulonglong)(uint)(&DAT_1400267e0)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x412);
  SendMessageW(pHVar2,0x14b,0,0);
  uVar1 = 0;
  do {
    uVar5 = uVar1;
    FUN_14000e340(param_1,0x412,(LPARAM)(&PTR_s_Disable_140026818)[uVar5],
                  (ulonglong)(uint)(&DAT_1400267f0)[uVar5]);
    uVar1 = uVar5 + 1;
  } while (uVar5 + 1 != 3);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,uVar5 & 0xffffffff,20000);
  FUN_14000eea0(param_1,0x40f);
  FUN_14000eea0(param_1,0x410);
  FUN_14000eea0(param_1,0x411);
  FUN_14000eea0(param_1,0x412);
  uVar3 = FUN_14000eea0(param_1,0x413);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}


/*
 * FUN_140002324 at 140002324
 * undefined4 __fastcall FUN_140002324(longlong param_1, int param_2)
 * Address ranges: 140002324-140002413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_140002324(longlong param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x40f) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x40f);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x40f,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1fb) = uVar2;
  }
  else if (param_2 == 0x410) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x410);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x410,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1ff) = uVar2;
  }
  else if (param_2 == 0x411) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x411);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x411,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x203) = uVar2;
  }
  else if (param_2 == 0x412) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x412);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x412,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x207) = uVar2;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


/*
 * FUN_140002414 at 140002414
 * undefined1 __fastcall FUN_140002414(longlong param_1, int param_2)
 * Address ranges: 140002414-14000243e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_140002414(longlong param_1,int param_2)

{
  undefined4 in_register_00000014;
  longlong lVar1;
  
  lVar1 = CONCAT44(in_register_00000014,param_2);
  if (param_2 == 0x413) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(byte *)(lVar1 + 0x20b) = *(byte *)(lVar1 + 0x20b) ^ 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
            (*(longlong **)(param_1 + 0x18),CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
  return 1;
}


/*
 * FUN_140002440 at 140002440
 * undefined __fastcall FUN_140002440(longlong param_1)
 * Address ranges: 140002440-140002663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140002440(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  LRESULT LVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x2b7) != '\0') {
    uVar7 = 0;
    uVar6 = 0;
    LVar4 = FUN_14000e230(param_1,0x40f);
    uVar2 = (uint)LVar4;
    if (uVar2 != 0) {
      do {
        iVar5 = (int)uVar7;
        iVar3 = FUN_14000e270(param_1,0x40f,uVar7);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x1fb)) goto LAB_1400024a2;
        uVar6 = iVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar2);
    }
    if (uVar6 == uVar2) {
      iVar5 = -1;
LAB_1400024a2:
      FUN_14000e4a0(param_1,0x40f,iVar5);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x2b7) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x2b8) != '\0') {
    uVar7 = 0;
    uVar6 = 0;
    LVar4 = FUN_14000e230(param_1,0x410);
    uVar2 = (uint)LVar4;
    if (uVar2 != 0) {
      do {
        iVar5 = (int)uVar7;
        iVar3 = FUN_14000e270(param_1,0x410,uVar7);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x1ff)) goto LAB_140002513;
        uVar6 = iVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar2);
    }
    if (uVar6 == uVar2) {
      iVar5 = -1;
LAB_140002513:
      FUN_14000e4a0(param_1,0x410,iVar5);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x2b8) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x2b9) != '\0') {
    uVar7 = 0;
    uVar6 = 0;
    LVar4 = FUN_14000e230(param_1,0x411);
    uVar2 = (uint)LVar4;
    if (uVar2 != 0) {
      do {
        iVar5 = (int)uVar7;
        iVar3 = FUN_14000e270(param_1,0x411,uVar7);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x203)) goto LAB_140002584;
        uVar6 = iVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar2);
    }
    if (uVar6 == uVar2) {
      iVar5 = -1;
LAB_140002584:
      FUN_14000e4a0(param_1,0x411,iVar5);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x2b9) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x2ba) != '\0') {
    uVar6 = 0;
    LVar4 = FUN_14000e230(param_1,0x412);
    uVar2 = (uint)LVar4;
    if (uVar2 != 0) {
      do {
        iVar3 = FUN_14000e270(param_1,0x412,(ulonglong)uVar6);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x207)) goto LAB_1400025f1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
    if (uVar6 == uVar2) {
      uVar6 = 0xffffffff;
LAB_1400025f1:
      FUN_14000e4a0(param_1,0x412,uVar6);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x2ba) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar1 + 699) != '\0') {
    FUN_14000e200(param_1,0x413,
                  CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x20b)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 699) = 0;
  }
  return;
}


/*
 * FUN_140002664 at 140002664
 * undefined __fastcall FUN_140002664(longlong param_1)
 * Address ranges: 140002664-140002711
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140002664(longlong param_1)

{
  char cVar1;
  HWND pHVar2;
  bool bVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  bVar3 = cVar1 != '\0';
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40f);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x410);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x411);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x412);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x413);
                    /* WARNING: Could not recover jumptable at 0x00014000270b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(pHVar2,(uint)bVar3);
  return;
}


/*
 * FUN_140002714 at 140002714
 * undefined8 __fastcall FUN_140002714(undefined8 param_1, undefined4 param_2)
 * Address ranges: 140002714-140002867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140002714(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  switch(param_2) {
  case 0x422:
    uVar1 = 0;
    break;
  case 0x423:
    uVar1 = 1;
    break;
  case 0x424:
    uVar1 = 2;
    break;
  case 0x425:
    uVar1 = 3;
    break;
  case 0x426:
    uVar1 = 4;
    break;
  case 0x427:
    uVar1 = 5;
    break;
  case 0x428:
    uVar1 = 6;
    break;
  case 0x429:
    uVar1 = 7;
    break;
  case 0x42a:
    uVar1 = 8;
    break;
  case 0x42b:
    uVar1 = 9;
    break;
  case 0x42c:
    uVar1 = 10;
    break;
  case 0x42d:
    uVar1 = 0xb;
    break;
  case 0x42e:
    uVar1 = 0xc;
    break;
  case 0x42f:
    uVar1 = 0xd;
    break;
  case 0x430:
    uVar1 = 0xe;
    break;
  case 0x431:
    uVar1 = 0xf;
    break;
  case 0x432:
    uVar1 = 0x12;
    break;
  case 0x433:
    uVar1 = 0x13;
    break;
  case 0x434:
    uVar1 = 0x10;
    break;
  case 0x435:
    uVar1 = 0x11;
    break;
  case 0x436:
    uVar1 = 0x14;
    break;
  case 0x437:
    uVar1 = 0x15;
    break;
  case 0x438:
    uVar1 = 0x16;
    break;
  case 0x439:
    uVar1 = 0x17;
    break;
  case 0x43a:
    uVar1 = 0x18;
    break;
  case 0x43b:
    uVar1 = 0x19;
    break;
  case 0x43c:
    uVar1 = 0x1a;
    break;
  case 0x43d:
    uVar1 = 0x1b;
    break;
  case 0x43e:
    uVar1 = 0x1c;
    break;
  case 0x43f:
    uVar1 = 0x1d;
    break;
  case 0x440:
    uVar1 = 0x1e;
    break;
  case 0x441:
    uVar1 = 0x1f;
  }
  return uVar1;
}


/*
 * FUN_140002910 at 140002910
 * bool __fastcall FUN_140002910(longlong param_1, int param_2, LPWSTR param_3, int param_4)
 * Address ranges: 140002910-140002a0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Inspection export repair: Ghidra originally failed with overlapping input varnodes. Relaxed inferred signature source. Original inferred signature: bool __fastcall FUN_140002910(longlong param_1, int param_2, LPWSTR param_3, int param_4). Machine code unchanged; new types remain inferred.
 */


/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Inspection export repair: Ghidra originally failed with overlapping input varnodes. Relaxed
   inferred signature source. Original inferred signature: bool __fastcall FUN_140002910(longlong
   param_1, int param_2, LPWSTR param_3, int param_4). Machine code unchanged; new types remain
   inferred. */

bool FUN_140002910(longlong param_1,int param_2,LPWSTR param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  tagMONITORINFO local_188;
  undefined1 local_158 [64];
  undefined1 local_118 [256];
  HMONITOR local_18;
  
  uVar4 = FUN_140002714(param_1,param_2);
  if ((int)uVar4 == -1) {
    bVar3 = FUN_140023e70((HINSTANCE)0x0,param_2 + 0x4300,param_3,param_4);
  }
  else {
    bVar3 = false;
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x88) + 0x210 +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
    cVar2 = (**(code **)(*plVar1 + 0x48))
                      (plVar1,*(undefined4 *)(param_1 + 0x138 + (uVar4 & 0xffffffff) * 8),
                       *(undefined4 *)(param_1 + 0x13c + (uVar4 & 0xffffffff) * 8),local_158);
    if (cVar2 != '\0') {
      local_188.cbSize = 0x28;
      local_188.rcMonitor.left = 0;
      local_188.rcMonitor.top = 0;
      local_188.rcMonitor.right = 0;
      local_188.rcMonitor.bottom = 0;
      local_188.dwFlags = 0;
      local_188.rcWork.left = 0;
      local_188.rcWork.top = 0;
      local_188.rcWork.right = 0;
      local_188.rcWork.bottom = 0;
      GetMonitorInfoW(local_18,&local_188);
      wsprintfW(param_3,L"Adapter: %s\nDisplay output: %s\nDisplay output rect: (%d, %d, %d, %d)",
                local_158,local_118);
      bVar3 = true;
    }
  }
  return bVar3;
}


/*
 * FUN_140002a10 at 140002a10
 * undefined8 __fastcall FUN_140002a10(undefined8 param_1, byte * param_2, undefined8 * param_3)
 * Address ranges: 140002a10-140002c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140002a10(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined1 uVar5;
  undefined8 local_res8;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8 [128];
  
  local_b8 = 0;
  uVar5 = 1;
  local_res8 = param_1;
  iVar1 = FUN_1400242b4(param_2,(byte *)" max @ %d %c",&local_b8,&local_res8);
  iVar2 = FUN_1400242b4(param_2,(byte *)" max_4_3 @ %d %c",&local_b8,&local_res8);
  iVar3 = FUN_1400242b4(param_2,(byte *)" max_16_9 @ %d %c",&local_b8,&local_res8);
  if (iVar1 == 1) {
    *param_3 = 0xffffffffffffffff;
  }
  else {
    if (iVar2 == 1) {
      *(undefined4 *)((longlong)param_3 + 4) = 0x100;
    }
    else {
      if (iVar3 != 1) {
        iVar1 = FUN_1400242b4(param_2,(byte *)" %s %c",local_a8,&local_res8);
        if (iVar1 == 1) {
          iVar1 = FUN_140024ce8(local_a8,&DAT_1400272d4);
          uVar4 = CONCAT44(extraout_var,iVar1);
          if (iVar1 == 0) {
            *param_3 = 0xffffffffffffffff;
            *(undefined4 *)(param_3 + 1) = 0;
            goto LAB_140002bee;
          }
        }
        iVar1 = FUN_1400242b4(param_2,(byte *)" %s %c",local_a8,&local_res8);
        if (iVar1 == 1) {
          iVar1 = FUN_140024ce8(local_a8,(byte *)"max_4_3");
          uVar4 = CONCAT44(extraout_var_00,iVar1);
          if (iVar1 == 0) {
            *(undefined4 *)param_3 = 0xffffffff;
            *(undefined8 *)((longlong)param_3 + 4) = 0x100;
            goto LAB_140002bee;
          }
        }
        iVar1 = FUN_1400242b4(param_2,(byte *)" %s %c",local_a8,&local_res8);
        if (iVar1 == 1) {
          iVar1 = FUN_140024ce8(local_a8,(byte *)"max_16_9");
          uVar4 = CONCAT44(extraout_var_01,iVar1);
          if (iVar1 == 0) {
            *(undefined4 *)param_3 = 0xffffffff;
            *(undefined8 *)((longlong)param_3 + 4) = 0x101;
            goto LAB_140002bee;
          }
        }
        local_ac = 0;
        iVar1 = FUN_1400242b4(param_2,(byte *)"%d x %d %c",&local_b4,&local_b0);
        uVar4 = CONCAT44(extraout_var_02,iVar1);
        if (iVar1 != 2) {
          iVar1 = FUN_1400242b4(param_2,(byte *)"%d x %d @ %d %c",&local_b4,&local_b0);
          uVar4 = CONCAT44(extraout_var_03,iVar1);
          if (iVar1 != 3) {
            uVar5 = 0;
            goto LAB_140002bee;
          }
        }
        *(undefined4 *)param_3 = local_b4;
        *(undefined4 *)((longlong)param_3 + 4) = local_b0;
        *(undefined4 *)(param_3 + 1) = local_ac;
        goto LAB_140002bee;
      }
      *(undefined4 *)((longlong)param_3 + 4) = 0x101;
    }
    *(undefined4 *)param_3 = 0xffffffff;
  }
  uVar4 = (ulonglong)local_b8;
  *(uint *)(param_3 + 1) = local_b8;
LAB_140002bee:
  return CONCAT71((int7)(uVar4 >> 8),uVar5);
}


/*
 * FUN_140002c08 at 140002c08
 * undefined8 __fastcall FUN_140002c08(longlong param_1)
 * Address ranges: 140002c08-1400030df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140002c08(longlong param_1)

{
  HWND pHVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x419);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x419,(LPARAM)(&PTR_s__undefined__1400269a8)[lVar3],
                  (ulonglong)(uint)(&DAT_140026970)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x3f6,(LPARAM)(&PTR_s_0x0000__unknown__140026880)[lVar3],
                  (ulonglong)(uint)(&DAT_140026840)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xb);
  FUN_14000e4d0(param_1,0x3f6);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x3fa,(LPARAM)(&PTR_DAT_1400268f8)[lVar3],
                  (ulonglong)(uint)(&DAT_1400268d8)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x411);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x411,(LPARAM)(&PTR_s_Disabled_140026a68)[lVar3],
                  (ulonglong)(uint)(&DAT_1400268e8)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  FUN_14000e4d0(param_1,0x411);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41b);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x41b,(LPARAM)(&PTR_s_High_quality_140026a28)[lVar3],
                  (ulonglong)(uint)(&DAT_140026870)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  FUN_14000e4d0(param_1,0x41b);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41c);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x41c,(LPARAM)(&PTR_s_Automatic_1400269e8)[lVar3],
                  (ulonglong)(uint)(&DAT_140026a50)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 5);
  FUN_14000e4d0(param_1,0x41c);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41d);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x41d,(LPARAM)(&PTR_s_App_driven_140026958)[lVar3],
                  (ulonglong)(uint)(&DAT_140026a88)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  FUN_14000e4d0(param_1,0x41d);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41e);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x41e,(LPARAM)(&PTR_s_Automatic_1400269c8)[lVar3],
                  (ulonglong)(uint)(&DAT_140026830)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  FUN_14000e4d0(param_1,0x41e);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x410);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x410,(LPARAM)(&PTR_DAT_140026a10)[lVar3],
                  (ulonglong)(uint)(&DAT_140026a40)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  FUN_14000e4d0(param_1,0x410);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41f);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    lVar4 = lVar3;
    FUN_14000e340(param_1,0x41f,(LPARAM)(&PTR_s_Disable_140026910)[lVar4],
                  (ulonglong)(uint)(&DAT_140026980)[lVar4]);
    lVar3 = lVar4 + 1;
  } while (lVar4 + 1 != 9);
  FUN_14000e4d0(param_1,0x41f);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,(ulonglong)((int)lVar4 - 6),20000);
  FUN_14000eea0(param_1,0x419);
  FUN_14000eea0(param_1,0x3f6);
  FUN_14000eea0(param_1,0x3fa);
  FUN_14000eea0(param_1,0x41a);
  FUN_14000eea0(param_1,0x406);
  FUN_14000eea0(param_1,0x407);
  FUN_14000eea0(param_1,0x415);
  FUN_14000eea0(param_1,0x411);
  FUN_14000eea0(param_1,0x41b);
  FUN_14000eea0(param_1,0x41c);
  FUN_14000eea0(param_1,0x41d);
  FUN_14000eea0(param_1,0x41e);
  FUN_14000eea0(param_1,0x410);
  FUN_14000eea0(param_1,0x41f);
  FUN_14000eea0(param_1,0x408);
  FUN_14000eea0(param_1,0x409);
  FUN_14000eea0(param_1,0x40a);
  FUN_14000eea0(param_1,0x40b);
  FUN_14000eea0(param_1,0x40f);
  FUN_14000eea0(param_1,0x40c);
  FUN_14000eea0(param_1,0x420);
  FUN_14000eea0(param_1,0x421);
  lVar3 = 0;
  do {
    uVar2 = FUN_14000eea0(param_1,(uint)(ushort)(&DAT_140027340)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x20);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}


/*
 * FUN_1400030ec at 1400030ec
 * undefined8 __fastcall FUN_1400030ec(longlong param_1, int param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 1400030ec-14000336a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1400030ec(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (0x41b < param_2) {
    if (param_2 == 0x41c) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x41c);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x41c,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1d3) = uVar2;
    }
    else if (param_2 == 0x41d) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x41d);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x41d,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1d7) = uVar2;
    }
    else if (param_2 == 0x41e) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x41e);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x41e,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1db) = uVar2;
    }
    else if (param_2 == 0x41f) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x41f);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x41f,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1eb) = uVar2;
    }
    goto LAB_14000334c;
  }
  if (param_2 == 0x41b) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x41b);
    uVar5 = (ulonglong)uVar1;
    lVar4 = FUN_14000e270(param_1 + -0x78,0x41b,uVar5);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x1cb) = (int)lVar4;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a9) = 1;
  }
  else {
    if (param_2 == 0x3f6) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x3f6);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x3f6,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xfb) = uVar2;
      goto LAB_14000334c;
    }
    if (param_2 == 0x3fa) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x3fa);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x3fa,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1df) = uVar2;
      goto LAB_14000334c;
    }
    if (param_2 == 0x410) {
      uVar1 = FUN_14000e460(param_1 + -0x78,0x410);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x410,(ulonglong)uVar1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1e7) = uVar2;
      goto LAB_14000334c;
    }
    if (param_2 != 0x411) {
      if (param_2 == 0x419) {
        uVar1 = FUN_14000e460(param_1 + -0x78,0x419);
        uVar2 = FUN_14000e270(param_1 + -0x78,0x419,(ulonglong)uVar1);
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xf7) = uVar2;
      }
      goto LAB_14000334c;
    }
    uVar1 = FUN_14000e460(param_1 + -0x78,0x411);
    uVar5 = (ulonglong)uVar1;
    uVar2 = FUN_14000e270(param_1 + -0x78,0x411,uVar5);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1cf) = uVar2;
    lVar4 = 0;
    do {
      *(undefined1 *)(lVar4 + 0x2a8 + *(longlong *)(param_1 + 0x10)) = 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2);
  }
  FUN_1400034d8(param_1 + -0x78,lVar4,uVar5,param_4);
LAB_14000334c:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}


/*
 * FUN_14000336c at 14000336c
 * undefined1 __fastcall FUN_14000336c(longlong param_1, int param_2)
 * Address ranges: 14000336c-14000338b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_14000336c(longlong param_1,int param_2)

{
  if (param_2 == 0x3f6) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),0x301);
  }
  return 1;
}


/*
 * FUN_14000338c at 14000338c
 * undefined8 __fastcall FUN_14000338c(longlong param_1, int param_2)
 * Address ranges: 14000338c-1400034a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_14000338c(longlong param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_2 < 0x40c) {
    if (param_2 == 0x40b) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f6);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (param_2 == 0x406) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1e3);
      *puVar2 = *puVar2 ^ 2;
      goto LAB_140003494;
    }
    if (param_2 == 0x407) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1e3);
      *puVar2 = *puVar2 ^ 4;
      goto LAB_140003494;
    }
    if (param_2 == 0x408) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 499);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    uVar4 = param_2 - 0x409;
    if (uVar4 == 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 500);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (uVar4 == 1) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f5);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
  }
  else {
    if (param_2 == 0x40c) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f8);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (param_2 == 0x40f) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f7);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (param_2 == 0x41a) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1e3);
      *puVar2 = *puVar2 ^ 1;
      goto LAB_140003494;
    }
    uVar4 = param_2 - 0x420;
    if (uVar4 == 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1f9);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
    if (uVar4 == 1) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x1fa);
      *pbVar1 = *pbVar1 ^ 1;
      goto LAB_140003494;
    }
  }
  uVar3 = FUN_140002714((ulonglong)uVar4,param_2);
  if ((int)uVar3 != -1) {
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x1ef);
    *puVar2 = *puVar2 ^ 1 << ((byte)uVar3 & 0x1f);
  }
LAB_140003494:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}


/*
 * FUN_1400034a8 at 1400034a8
 * undefined1 __fastcall FUN_1400034a8(longlong param_1, int param_2)
 * Address ranges: 1400034a8-1400034d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_1400034a8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(param_2 - 0x415U);
  if ((param_2 - 0x415U != 0) && (uVar2 = (ulonglong)(param_2 - 0x416U), param_2 - 0x416U != 0)) {
    uVar1 = param_2 - 0x417;
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 != 0) && (uVar1 != 1)) {
      return 1;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),CONCAT71((int7)(uVar2 >> 8),1));
  return 1;
}


/*
 * FUN_1400034d8 at 1400034d8
 * undefined __fastcall FUN_1400034d8(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 1400034d8-140004139
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400034d8(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  ushort uVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  LRESULT LVar9;
  HWND pHVar10;
  char *pcVar11;
  LPCSTR pCVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  BOOL BVar20;
  LPCSTR pCVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  CHAR local_488 [32];
  CHAR local_468 [31];
  char cStack_449;
  CHAR local_448 [2];
  char local_446 [1030];
  char *pcVar12;
  
  uVar24 = 0;
  uVar8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x29f) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x419);
    uVar19 = (uint)LVar9;
    uVar25 = uVar24;
    uVar18 = uVar8;
    if (uVar19 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x419,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0xf7)) goto LAB_14000355e;
        uVar18 = iVar17 + 1;
        uVar25 = (ulonglong)uVar18;
      } while (uVar18 < uVar19);
    }
    if (uVar18 == uVar19) {
      iVar17 = -1;
LAB_14000355e:
      FUN_14000e4a0(param_1,0x419,iVar17);
    }
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x419);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x29f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a0) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x3f6);
    uVar19 = (uint)LVar9;
    uVar25 = uVar24;
    uVar18 = uVar8;
    if (uVar19 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x3f6,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0xfb)) goto LAB_14000363d;
        uVar18 = iVar17 + 1;
        uVar25 = (ulonglong)uVar18;
      } while (uVar18 < uVar19);
    }
    if (uVar18 == uVar19) {
      uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0xfb);
      if (uVar18 == 0xffffffff) {
        iVar17 = -1;
LAB_14000363d:
        FUN_14000e4a0(param_1,0x3f6,iVar17);
      }
      else {
        FUN_140024290(local_488,"0x%x",(ulonglong)uVar18,param_4);
        FUN_14000e180(param_1,0x3f6,local_488);
      }
    }
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a0) = 0;
  }
  pCVar21 = "";
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a1) != '\0') {
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0xff);
    pCVar13 = "";
    if (uVar18 != 0xffffffff) {
      pCVar13 = "0x%X";
    }
    FUN_140024290(local_488,pCVar13,(ulonglong)uVar18,param_4);
    FUN_14000e180(param_1,0x416,local_488);
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x416);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a1) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a2) != '\0') {
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x103);
    pCVar13 = "";
    if (uVar18 != 0xffffffff) {
      pCVar13 = "0x%X";
    }
    FUN_140024290(local_488,pCVar13,(ulonglong)uVar18,param_4);
    FUN_14000e180(param_1,0x417,local_488);
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x417);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a2) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a3) != '\0') {
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x107);
    if (uVar18 != 0xffffffff) {
      pCVar21 = "0x%X";
    }
    FUN_140024290(local_488,pCVar21,(ulonglong)uVar18,param_4);
    FUN_14000e180(param_1,0x418,local_488);
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x418);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a3) = 0;
  }
  uVar18 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a4) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x3fa);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x3fa,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1df)) goto LAB_14000384f;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_14000384f:
      FUN_14000e4a0(param_1,0x3fa,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a4) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2a6) != '\0') {
    FUN_14000e200(param_1,0x41a,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1e3)) &
                  0xffffffffffffff01);
    uVar19 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x1e3);
    FUN_14000e200(param_1,0x406,
                  (ulonglong)(CONCAT31((uint3)(uVar19 >> 9),(char)(uVar19 >> 1)) & 0xffffff01));
    FUN_14000e200(param_1,0x407,
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1e3) >> 2 & 0xffffff01));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a6) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a5) != '\0') {
    local_448[0] = '\0';
    uVar25 = uVar24;
    uVar23 = uVar24;
    do {
      lVar15 = *(longlong *)(param_1 + 0x88);
      if ((*(int *)(lVar15 + 0x10b + uVar25 * 0xc) != 0) ||
         (*(int *)(lVar15 + 0x10f + uVar25 * 0xc) != 0)) {
        iVar6 = (int)uVar23;
        uVar23 = (ulonglong)(iVar6 + 1);
        if (iVar6 != 0) {
          pcVar11 = &cStack_449;
          do {
            pcVar12 = pcVar11;
            pcVar11 = pcVar12 + 1;
          } while (*pcVar11 != '\0');
          pcVar11[0] = ',';
          pcVar11[1] = ' ';
          pcVar12[3] = '\0';
        }
        uVar19 = *(uint *)(lVar15 + 0x10b + uVar25 * 0xc);
        if (uVar19 == 0xffffffff) {
          iVar6 = *(int *)(lVar15 + 0x10f + uVar25 * 0xc);
          if (iVar6 == -1) {
            pcVar11 = "max";
          }
          else if (iVar6 == 0x100) {
            pcVar11 = "max_4_3";
          }
          else {
            if (iVar6 != 0x101) goto LAB_1400039a5;
            pcVar11 = "max_16_9";
          }
          FUN_140024290(local_468,pcVar11,0xffffffff,param_4);
        }
        else {
LAB_1400039a5:
          param_4 = (ulonglong)*(uint *)(lVar15 + 0x10f + uVar25 * 0xc);
          FUN_140024290(local_468,"%dx%d",(ulonglong)uVar19,param_4);
        }
        pcVar11 = &cStack_449;
        do {
          pcVar11 = pcVar11 + 1;
        } while (*pcVar11 != '\0');
        lVar14 = 0;
        do {
          cVar1 = local_468[lVar14];
          pcVar11[lVar14] = cVar1;
          lVar14 = lVar14 + 1;
        } while (cVar1 != '\0');
        uVar19 = *(uint *)(lVar15 + 0x113 + uVar25 * 0xc);
        if (uVar19 != 0) {
          FUN_140024290(local_468,"@%d",(ulonglong)uVar19,param_4);
          pcVar11 = &cStack_449;
          do {
            pcVar11 = pcVar11 + 1;
          } while (*pcVar11 != '\0');
          lVar15 = 0;
          do {
            cVar1 = local_468[lVar15];
            pcVar11[lVar15] = cVar1;
            lVar15 = lVar15 + 1;
          } while (cVar1 != '\0');
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != 0x10);
    FUN_14000e180(param_1,0x415,local_448);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a5) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a7) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x411);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x411,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf)) goto LAB_140003aad;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003aad:
      FUN_14000e4a0(param_1,0x411,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a7) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a8) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41b);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41b,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cb)) goto LAB_140003b24;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003b24:
      FUN_14000e4a0(param_1,0x41b,iVar17);
    }
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41b);
    EnableWindow(pHVar10,(uint)(iVar6 != 0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a8) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a9) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41c);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        uVar19 = (uint)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41c,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1d3)) {
          FUN_14000e4a0(param_1,0x41c,uVar19);
          break;
        }
        uVar19 = uVar19 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      FUN_140024290(local_488,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1d3),
                    param_4);
      FUN_14000e180(param_1,0x41c,local_488);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf) == 0) ||
       (BVar20 = 1, *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cb) == 0)) {
      BVar20 = 0;
    }
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41c);
    EnableWindow(pHVar10,BVar20);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a9) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2aa) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41d);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41d,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1d7)) goto LAB_140003cad;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003cad:
      FUN_14000e4a0(param_1,0x41d,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2aa) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ab) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41e);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41e,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1db)) goto LAB_140003d20;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003d20:
      FUN_14000e4a0(param_1,0x41e,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ab) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ac) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x410);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x410,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1e7)) goto LAB_140003d93;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003d93:
      FUN_14000e4a0(param_1,0x410,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ac) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ad) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41f);
    uVar19 = (uint)LVar9;
    uVar25 = uVar24;
    if (uVar19 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41f,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1eb)) goto LAB_140003e06;
        uVar18 = iVar17 + 1;
        uVar25 = (ulonglong)uVar18;
      } while (uVar18 < uVar19);
    }
    if (uVar18 == uVar19) {
      iVar17 = -1;
LAB_140003e06:
      FUN_14000e4a0(param_1,0x41f,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ac) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2ae) != '\0') {
    FUN_14000e200(param_1,0x408,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 499)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ae) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2af) != '\0') {
    FUN_14000e200(param_1,0x409,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 500)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2af) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b0) != '\0') {
    FUN_14000e200(param_1,0x40a,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f5)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b0) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b1) != '\0') {
    FUN_14000e200(param_1,0x40b,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f6)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b1) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b2) != '\0') {
    FUN_14000e200(param_1,0x40f,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f7)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b2) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b3) != '\0') {
    FUN_14000e200(param_1,0x40c,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f8)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b3) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b4) != '\0') {
    FUN_14000e200(param_1,0x420,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f9)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b4) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b5) != '\0') {
    FUN_14000e200(param_1,0x421,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1fa)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b5) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b6) != '\0') {
    uVar18 = (**(code **)(**(longlong **)(lVar15 + 0x210 + (longlong)*(int *)(lVar15 + 600) * 8) +
                         0x28))();
    uVar25 = uVar24;
    uVar23 = uVar24;
    if (uVar18 != 0) {
      do {
        uVar8 = (uint)uVar23;
        if (0x1f < uVar8) break;
        plVar3 = *(longlong **)
                  (*(longlong *)(param_1 + 0x88) + 0x210 +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
        uVar8 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar25);
        uVar16 = uVar24;
        uVar22 = uVar23;
        if (uVar8 != 0) {
          do {
            uVar23 = uVar22;
            if (0x1f < (uint)uVar22) break;
            uVar23 = (ulonglong)((uint)uVar22 + 1);
            *(int *)(param_1 + 0x13c + uVar22 * 8) = (int)uVar16;
            uVar19 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar19;
            *(int *)(param_1 + 0x138 + uVar22 * 8) = (int)uVar25;
            uVar22 = uVar23;
          } while (uVar19 < uVar8);
        }
        uVar8 = (uint)uVar23;
        uVar19 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar18);
    }
    *(undefined4 *)(param_1 + 0x238) = 0;
    do {
      lVar15 = *(longlong *)(param_1 + 0x88);
      uVar2 = (&DAT_140027340)[uVar24];
      if ((*(int *)(lVar15 + 4) == 0) ||
         (bVar4 = 0, *(int *)(lVar15 + 4) == *(int *)(param_1 + 0x138 + uVar24 * 8) + 1)) {
        bVar4 = 1;
      }
      if ((*(int *)(lVar15 + 8) == 0) ||
         (bVar5 = 0, *(int *)(lVar15 + 8) == *(int *)(param_1 + 0x13c + uVar24 * 8) + 1)) {
        bVar5 = 1;
      }
      if (((uint)uVar24 < uVar8) && ((bool)(bVar5 & bVar4))) {
        uVar18 = 1 << ((byte)uVar24 & 0x1f);
        *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | uVar18;
        BVar20 = 1;
      }
      else {
        uVar18 = 1 << ((byte)uVar24 & 0x1f);
        BVar20 = 0;
      }
      pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),(uint)uVar2);
      EnableWindow(pHVar10,BVar20);
      FUN_14000e200(param_1,(uint)uVar2,
                    CONCAT71((int7)((ulonglong)lVar15 >> 8),
                             (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1ef) & uVar18) != 0));
      uVar18 = (uint)uVar24 + 1;
      uVar24 = (ulonglong)uVar18;
    } while (uVar18 < 0x20);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b6) = 0;
  }
  return;
}


/*
 * FUN_14000413c at 14000413c
 * undefined __fastcall FUN_14000413c(longlong param_1)
 * Address ranges: 14000413c-14000463a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000413c(longlong param_1)

{
  char cVar1;
  char cVar2;
  HWND pHVar3;
  BOOL BVar4;
  uint uVar5;
  ulonglong uVar6;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x80);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x419);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x416);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x417);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (cVar2 != '\0')) && (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x58) < 2))
  {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x418);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41a);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x415);
  EnableWindow(pHVar3,BVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x411);
  EnableWindow(pHVar3,(uint)(cVar1 == '\0'));
  if ((cVar1 == '\0') && (*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf) != 0)) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41b);
  EnableWindow(pHVar3,BVar4);
  if (((cVar1 == '\0') && (*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cb) != 0)) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41c);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41d);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x410);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41e);
  EnableWindow(pHVar3,BVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41f);
  EnableWindow(pHVar3,(uint)(cVar1 == '\0'));
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40a);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40b);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40f);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40c);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x420);
  EnableWindow(pHVar3,BVar4);
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    BVar4 = 1;
  }
  else {
    BVar4 = 0;
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x421);
  EnableWindow(pHVar3,BVar4);
  uVar6 = 0;
  do {
    if (((cVar1 == '\0') && (cVar2 != '\0')) &&
       ((*(uint *)(param_1 + 0x238) >> ((uint)uVar6 & 0x1f) & 1) != 0)) {
      BVar4 = 1;
    }
    else {
      BVar4 = 0;
    }
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x18),(uint)(ushort)(&DAT_140027340)[uVar6]);
    EnableWindow(pHVar3,BVar4);
    uVar5 = (uint)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < 0x20);
  return;
}


/*
 * FUN_14000463c at 14000463c
 * undefined __fastcall FUN_14000463c(longlong param_1)
 * Address ranges: 14000463c-140004a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000463c(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined8 local_838;
  undefined4 local_830;
  byte local_828 [1024];
  byte local_428 [1024];
  undefined7 uVar5;
  
  iVar2 = FUN_14000e460(param_1,0x3f6);
  if (iVar2 == -1) {
    FUN_14002511c(local_828,0,0x100);
    FUN_14000e1c0(param_1,0x3f6,(LPARAM)local_828,0x100);
    local_res18[0] = 0xffffffff;
    iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10);
    if ((((iVar2 == 1) ||
         (iVar2 = FUN_1400242b4(local_828,(byte *)" 0x%x %c",local_res18,local_res10), iVar2 == 1))
        || (iVar2 = FUN_1400242b4(local_828,(byte *)" 0X%x %c",local_res18,local_res10), iVar2 == 1)
        ) || (local_828[0] == 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xfb) = local_res18[0];
    }
  }
  local_res18[0] = 0xffffffff;
  FUN_14000e1c0(param_1,0x416,(LPARAM)local_828,0x100);
  iVar2 = FUN_1400242b4(local_828,(byte *)" 0x%x %c",local_res18,local_res10);
  if (((iVar2 == 1) ||
      (iVar2 = FUN_1400242b4(local_828,(byte *)" 0X%x %c",local_res18,local_res10), iVar2 == 1)) ||
     ((iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10), iVar2 == 1 ||
      (local_828[0] == 0)))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xff) = local_res18[0];
  }
  local_res18[0] = 0xffffffff;
  FUN_14000e1c0(param_1,0x417,(LPARAM)local_828,0x100);
  iVar2 = FUN_1400242b4(local_828,(byte *)" 0x%x %c",local_res18,local_res10);
  if (((iVar2 == 1) ||
      (iVar2 = FUN_1400242b4(local_828,(byte *)" 0X%x %c",local_res18,local_res10), iVar2 == 1)) ||
     ((iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10), iVar2 == 1 ||
      (local_828[0] == 0)))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x103) = local_res18[0];
  }
  local_res18[0] = 0xffffffff;
  FUN_14000e1c0(param_1,0x418,(LPARAM)local_828,0x100);
  iVar2 = FUN_1400242b4(local_828,(byte *)" 0x%x %c",local_res18,local_res10);
  if ((((iVar2 == 1) ||
       (iVar2 = FUN_1400242b4(local_828,(byte *)" 0X%x %c",local_res18,local_res10), iVar2 == 1)) ||
      (iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10), iVar2 == 1)) ||
     (local_828[0] == 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x107) = local_res18[0];
  }
  lVar4 = param_1;
  FUN_14000e1c0(param_1,0x415,(LPARAM)local_428,0x400);
  pbVar7 = local_428;
  uVar11 = 0;
  uVar9 = 0;
  do {
    uVar10 = uVar9;
    if (*pbVar7 == 0) break;
    local_828[0] = 0;
    uVar6 = 0;
    do {
      bVar1 = *pbVar7;
      uVar5 = (undefined7)((ulonglong)lVar4 >> 8);
      lVar4 = CONCAT71(uVar5,bVar1);
      pbVar8 = pbVar7;
      if (bVar1 == 0x2c) break;
      pbVar7 = pbVar7 + 1;
      local_828[uVar6] = bVar1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      lVar4 = CONCAT71(uVar5,*pbVar7);
      pbVar8 = pbVar7;
    } while (*pbVar7 != 0);
    local_828[uVar6] = 0;
    pbVar7 = pbVar8 + 1;
    if ((char)lVar4 != ',') {
      pbVar7 = pbVar8;
    }
    uVar3 = FUN_140002a10(lVar4,local_828,&local_838);
    if ((char)uVar3 != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x88);
      uVar10 = (ulonglong)((int)uVar9 + 1);
      *(undefined8 *)(lVar4 + 0x10b + uVar9 * 0xc) = local_838;
      *(undefined4 *)(lVar4 + 0x113 + uVar9 * 0xc) = local_830;
    }
    uVar11 = uVar11 + 1;
    uVar9 = uVar10;
  } while (uVar11 < 0x10);
  for (; (uint)uVar10 < 0x10; uVar10 = (ulonglong)((uint)uVar10 + 1)) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    *(undefined8 *)(lVar4 + 0x10b + uVar10 * 0xc) = 0;
    *(undefined4 *)(lVar4 + 0x113 + uVar10 * 0xc) = 0;
  }
  iVar2 = FUN_14000e460(param_1,0x41c);
  if (iVar2 == -1) {
    FUN_14002511c(local_828,0,0x100);
    FUN_14000e1c0(param_1,0x41c,(LPARAM)local_828,0x100);
    local_res18[0] = 0;
    iVar2 = FUN_1400242b4(local_828,(byte *)" %d %c",local_res18,local_res10);
    if (iVar2 == 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x1d3) = local_res18[0];
    }
  }
  return;
}


/*
 * FUN_140004a5c at 140004a5c
 * undefined __fastcall FUN_140004a5c(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140004a5c-140004a75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140004a5c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14000e110((longlong *)(param_1 + 0x70),param_1,param_3,param_4,param_4);
  return;
}


/*
 * FUN_140004a78 at 140004a78
 * undefined __fastcall FUN_140004a78(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140004a78-140004a97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140004a78(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14000e070((longlong *)(param_1 + 0x78),param_1,param_2,param_4,param_4);
  return;
}


/*
 * FUN_140004aa8 at 140004aa8
 * undefined8 __fastcall FUN_140004aa8(longlong param_1)
 * Address ranges: 140004aa8-140004c47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140004aa8(longlong param_1)

{
  BOOL BVar1;
  HWND hWnd;
  undefined4 extraout_var;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    FUN_14000e340(param_1,0x406,(LPARAM)(&PTR_s_dgVoodoo_Virtual_SVGA_Card_1400276d0)[lVar2],
                  (longlong)(int)(&DAT_140027618)[lVar2]);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  lVar2 = 0;
  do {
    FUN_14000e340(param_1,0x40b,(LPARAM)(&PTR_s_App_driven_140027640)[lVar2],
                  (longlong)(int)(&DAT_1400276a8)[lVar2]);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  lVar2 = 0;
  do {
    FUN_14000e340(param_1,0x40c,(LPARAM)(&PTR_s_Disabled_1400277d0)[lVar2],
                  (longlong)(int)(&DAT_1400277c0)[lVar2]);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x401);
  FUN_14000eea0(param_1,0x406);
  FUN_14000eea0(param_1,0x402);
  FUN_14000eea0(param_1,0x40b);
  FUN_14000eea0(param_1,0x40c);
  FUN_14000eea0(param_1,0x40e);
  FUN_14000eea0(param_1,0x407);
  FUN_14000eea0(param_1,0x408);
  FUN_14000eea0(param_1,0x403);
  FUN_14000eea0(param_1,0x404);
  FUN_14000eea0(param_1,0x409);
  FUN_14000eea0(param_1,0x40a);
  FUN_14000eea0(param_1,0x3f8);
  FUN_14000eea0(param_1,0x40f);
  FUN_14000eea0(param_1,0x40d);
  FUN_14000eea0(param_1,0x405);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  BVar1 = EnableWindow(hWnd,0);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}


/*
 * FUN_140004c48 at 140004c48
 * undefined __fastcall FUN_140004c48(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 140004c48-140005203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140004c48(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  LRESULT LVar9;
  HWND pHVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar16;
  CHAR local_d8 [32];
  CHAR local_b8 [136];
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  uVar15 = 0;
  if (*(char *)(lVar3 + 0x27b) != '\0') {
    FUN_14000e200(param_1,0x401,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x80)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27b) = 0;
  }
  uVar8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x27c) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x406);
    uVar13 = uVar15;
    uVar12 = uVar8;
    if ((uint)LVar9 != 0) {
      do {
        uVar12 = (uint)uVar13;
        iVar5 = FUN_14000e270(param_1,0x406,uVar13);
        if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x58)) break;
        uVar12 = uVar12 + 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < (uint)LVar9);
    }
    FUN_14000e4a0(param_1,0x406,uVar12);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27c) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x27d) != '\0') {
    uVar12 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x58);
    uVar13 = (ulonglong)uVar12;
    if (6 < uVar12) {
      uVar13 = 1;
    }
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
    param_4 = 0;
    SendMessageW(pHVar10,0x14b,0,0);
    uVar14 = uVar15;
    do {
      uVar12 = *(uint *)(&DAT_14002c160 + uVar14 * 4 + uVar13 * 0x28);
      if (uVar12 != 0) {
        FUN_140024290(local_d8,"%d MB",(ulonglong)uVar12,param_4);
        param_4 = (ulonglong)*(uint *)(&DAT_14002c160 + uVar14 * 4 + uVar13 * 0x28);
        FUN_14000e340(param_1,0x402,(LPARAM)local_d8,param_4);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x263) = 0;
  }
  LVar9 = FUN_14000e230(param_1,0x402);
  uVar6 = (uint)LVar9;
  uVar13 = uVar15;
  uVar12 = uVar8;
  if (uVar6 != 0) {
    do {
      uVar12 = (uint)uVar13;
      uVar7 = FUN_14000e270(param_1,0x402,uVar13);
      if ((ulonglong)uVar7 == *(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x5c) >> 0x14) {
        FUN_14000e4a0(param_1,0x402,uVar12);
        break;
      }
      uVar12 = uVar12 + 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < uVar6);
  }
  if (uVar12 == uVar6) {
    FUN_140024290(local_b8,"%d MB",*(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x5c) >> 0x14,
                  param_4);
    FUN_14000e180(param_1,0x402,local_b8);
  }
  piVar4 = *(int **)(param_1 + 0x80);
  if ((((*(int *)(param_1 + 0x128) != *piVar4) || (*(int *)(param_1 + 300) != piVar4[1])) ||
      (*(int *)(param_1 + 0x130) != piVar4[2])) ||
     ((*(int *)(param_1 + 0x134) != piVar4[6] ||
      (cVar16 = *(char *)(param_1 + 0x138), cVar16 != *(char *)((longlong)piVar4 + 0x22))))) {
    *(int *)(param_1 + 0x128) = *piVar4;
    iVar5 = piVar4[1];
    *(int *)(param_1 + 300) = iVar5;
    iVar1 = piVar4[2];
    *(int *)(param_1 + 0x130) = iVar1;
    iVar2 = piVar4[6];
    *(int *)(param_1 + 0x134) = iVar2;
    cVar16 = *(char *)((longlong)piVar4 + 0x22);
    iVar11 = iVar5 + -1;
    if (iVar5 < 1) {
      iVar11 = 0;
    }
    *(char *)(param_1 + 0x138) = cVar16;
    FUN_1400017a4((longlong *)(param_1 + 0x140),iVar11,iVar1,iVar2,cVar16);
    cVar16 = *(char *)(param_1 + 0x138);
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if ((*(uint *)(lVar3 + 0x70) != 0) && (*(int *)(lVar3 + 0x74) != 0)) {
    uVar8 = *(uint *)(lVar3 + 0x70) / *(uint *)(lVar3 + 0x74);
  }
  FUN_140001cbc(param_1 + 0x140,*(uint *)(lVar3 + 100),*(uint *)(lVar3 + 0x68),uVar8,cVar16);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x260) != '\0') {
    FUN_140001d7c((longlong *)(param_1 + 0x278));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x281) = 1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x281) != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x281) = 0;
    FUN_140001e70(param_1 + 0x278,*(int *)(*(longlong *)(param_1 + 0x80) + 0x6c));
  }
  uVar8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x27f) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x40b);
    uVar13 = uVar15;
    uVar12 = uVar8;
    if ((uint)LVar9 != 0) {
      do {
        uVar12 = (uint)uVar13;
        iVar5 = FUN_14000e270(param_1,0x40b,uVar13);
        if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x78)) break;
        uVar12 = uVar12 + 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < (uint)LVar9);
    }
    FUN_14000e4a0(param_1,0x40b,uVar12);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x280) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x40c);
    if ((uint)LVar9 != 0) {
      do {
        uVar8 = (uint)uVar15;
        iVar5 = FUN_14000e270(param_1,0x40c,uVar15);
        if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x7c)) break;
        uVar8 = uVar8 + 1;
        uVar15 = (ulonglong)uVar8;
      } while (uVar8 < (uint)LVar9);
    }
    FUN_14000e4a0(param_1,0x40c,uVar8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x280) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x27e) != '\0') {
    FUN_14000e200(param_1,0x40e,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x87)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27e) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x283) != '\0') {
    FUN_14000e200(param_1,0x403,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x81)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x283) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x284) != '\0') {
    FUN_14000e200(param_1,0x404,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x82)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x284) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x285) != '\0') {
    FUN_14000e200(param_1,0x409,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x84)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x285) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x286) != '\0') {
    FUN_14000e200(param_1,0x40a,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x85)));
    iVar5 = **(int **)(param_1 + 0x80);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40a);
    EnableWindow(pHVar10,(uint)(iVar5 != 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x286) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x287) != '\0') {
    FUN_14000e200(param_1,0x3f8,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x86)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x287) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x282) != '\0') {
    FUN_14000e200(param_1,0x405,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x83)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x282) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x288) != '\0') {
    FUN_14000e200(param_1,0x40f,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x88)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x288) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x289) != '\0') {
    FUN_14000e200(param_1,0x40d,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x89)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x289) = 0;
  }
  FUN_1400055bc(param_1);
  return;
}


/*
 * FUN_140005204 at 140005204
 * undefined8 __fastcall FUN_140005204(longlong param_1, int param_2)
 * Address ranges: 140005204-140005301
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140005204(longlong param_1,int param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x40a) {
    if (param_2 == 0x409) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x84);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (param_2 == 0x3f8) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x86);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (param_2 == 0x401) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x80);
      *pbVar1 = *pbVar1 ^ 1;
      (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    }
    else if (param_2 == 0x403) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x81);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (param_2 == 0x404) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x82);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (param_2 == 0x405) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x83);
      *pbVar1 = *pbVar1 ^ 1;
    }
  }
  else if (param_2 == 0x40a) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x85);
    *pbVar1 = *pbVar1 ^ 1;
  }
  else if (param_2 == 0x40d) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x89);
    *pbVar1 = *pbVar1 ^ 1;
  }
  else if (param_2 == 0x40e) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x87);
    *pbVar1 = *pbVar1 ^ 1;
    FUN_1400055bc(param_1 + -0x78);
  }
  else if (param_2 == 0x40f) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x88);
    *pbVar1 = *pbVar1 ^ 1;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}


/*
 * FUN_140005304 at 140005304
 * undefined8 __fastcall FUN_140005304(longlong param_1, int param_2)
 * Address ranges: 140005304-140005587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140005304(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  if (param_2 == 0x402) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x402);
    iVar4 = FUN_14000e270(param_1 + -0x70,0x402,(ulonglong)uVar2);
    *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x5c) = (ulonglong)(uint)(iVar4 << 0x14);
  }
  else if (param_2 == 0x406) {
    lVar7 = param_1 + -0x70;
    uVar2 = FUN_14000e460(lVar7,0x406);
    uVar2 = FUN_14000e270(lVar7,0x406,(ulonglong)uVar2);
    uVar9 = 0;
    iVar4 = -1;
    uVar10 = 0xffffffff;
    *(uint *)(*(longlong *)(param_1 + 0x10) + 0x58) = uVar2;
    uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x5c) >> 0x14;
    uVar8 = 0;
    lVar1 = (ulonglong)uVar2 * 0x28;
    do {
      uVar2 = *(uint *)(&DAT_14002c160 + uVar8 * 4 + lVar1);
      uVar6 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        if (uVar6 < uVar10) {
          uVar10 = (ulonglong)uVar2;
        }
        else if (uVar9 < uVar6) {
          uVar9 = uVar6;
        }
        if (uVar2 == *(uint *)(&DAT_14002c184 + lVar1)) {
          iVar4 = (int)uVar8;
        }
      }
      uVar2 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar2;
    } while (uVar2 < 9);
    if ((uVar10 <= uVar11) && (uVar11 <= uVar9)) {
      iVar4 = -1;
    }
    if (iVar4 != -1) {
      FUN_14000e4a0(lVar7,0x402,iVar4);
      *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x5c) =
           (ulonglong)(uint)(*(int *)(&DAT_14002c184 + lVar1) << 0x14);
    }
    lVar7 = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x27d) = 1;
    do {
      *(undefined1 *)(lVar7 + 0x29f + *(longlong *)(param_1 + 0x10)) = 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2);
    lVar7 = 0;
    do {
      *(undefined1 *)(lVar7 + 0x2a2 + *(longlong *)(param_1 + 0x10)) = 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2);
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a1) = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
  }
  else if (param_2 == 0x407) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x407);
    uVar2 = FUN_14000e270(param_1 + -0x70,0x407,(ulonglong)uVar2);
    FUN_140001b14(param_1 + 0xd0,(undefined8 *)&local_58,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100) = local_58;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x68) = local_54;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x70) = local_50;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x74) = local_4c;
  }
  else if (param_2 == 0x408) {
    uVar2 = FUN_14000e460(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218));
    uVar3 = FUN_14000e270(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218),(ulonglong)uVar2)
    ;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x6c) = uVar3;
  }
  else if (param_2 == 0x40b) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x40b);
    uVar3 = FUN_14000e270(param_1 + -0x70,0x40b,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x78) = uVar3;
  }
  else if (param_2 == 0x40c) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x40c);
    uVar3 = FUN_14000e270(param_1 + -0x70,0x40c,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x7c) = uVar3;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}


/*
 * FUN_140005588 at 140005588
 * undefined8 __fastcall FUN_140005588(longlong param_1, int param_2)
 * Address ranges: 140005588-1400055ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140005588(longlong param_1,int param_2)

{
  undefined8 in_RAX;
  
  if (param_2 == 0x402) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1)
    ;
  }
  else if (param_2 == 0x407) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),0)
    ;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


/*
 * FUN_1400055bc at 1400055bc
 * undefined __fastcall FUN_1400055bc(longlong param_1)
 * Address ranges: 1400055bc-1400058b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400055bc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  HWND pHVar4;
  BOOL BVar5;
  BOOL bEnable;
  BOOL BVar6;
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x401);
  EnableWindow(pHVar4,(uint)(cVar3 != '\0'));
  plVar1 = (longlong *)(param_1 + 0x80);
  bEnable = 1;
  if ((cVar3 == '\0') || (BVar6 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar6 = 0;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
  EnableWindow(pHVar4,BVar6);
  BVar6 = 0;
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
  EnableWindow(pHVar4,BVar5);
  cVar2 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40e);
  EnableWindow(pHVar4,(uint)(cVar2 == '\0'));
  cVar2 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40b);
  EnableWindow(pHVar4,(uint)(cVar2 == '\0'));
  cVar2 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40c);
  EnableWindow(pHVar4,(uint)(cVar2 == '\0'));
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  EnableWindow(pHVar4,BVar5);
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
  EnableWindow(pHVar4,BVar5);
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x403);
  EnableWindow(pHVar4,BVar5);
  if ((cVar3 == '\0') || (BVar5 = bEnable, *(char *)(*plVar1 + 0x80) != '\0')) {
    BVar5 = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x404);
  EnableWindow(pHVar4,BVar5);
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  if (((char)((int *)*plVar1)[0x20] != '\0') || (*(int *)*plVar1 == 1)) {
    bEnable = BVar6;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40a);
  EnableWindow(pHVar4,bEnable);
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f8);
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40f);
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40d);
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  cVar3 = *(char *)(*plVar1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x405);
                    /* WARNING: Could not recover jumptable at 0x0001400058af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(pHVar4,(uint)(cVar3 == '\0'));
  return;
}


/*
 * FUN_1400058b8 at 1400058b8
 * undefined __fastcall FUN_1400058b8(ulonglong param_1)
 * Address ranges: 1400058b8-14000595d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400058b8(ulonglong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_a8 [8];
  byte local_88 [128];
  
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  uVar1 = FUN_140001c44(param_1 + 0x140,local_a8);
  if ((char)uVar1 != '\0') {
    *(uint *)(*(longlong *)(param_1 + 0x80) + 100) = local_a8[0];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x68) = local_a8[1];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x70) = local_a8[2];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x74) = local_a8[3];
  }
  uVar3 = param_1;
  FUN_14000e1c0(param_1,0x402,(LPARAM)local_88,0x80);
  lVar2 = FUN_140009b58(uVar3,local_88);
  if (lVar2 != 0) {
    *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x5c) = lVar2;
  }
  return;
}


/*
 * FUN_140005970 at 140005970
 * char __fastcall FUN_140005970(undefined8 param_1, byte * param_2, int * param_3, uint * param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 140005970-140005b0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char FUN_140005970(undefined8 param_1,byte *param_2,int *param_3,uint *param_4,undefined4 *param_5,
                  undefined4 *param_6)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 local_res8;
  byte local_1a8 [128];
  byte local_128 [128];
  byte local_a8 [128];
  
  uVar4 = 0;
  cVar3 = '\0';
  if (*param_2 == 0) {
    bVar2 = 0;
  }
  else {
    do {
      bVar2 = *param_2;
      if (bVar2 == 0x2c) goto LAB_1400059c4;
      param_2 = param_2 + 1;
      local_1a8[uVar4] = bVar2;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (*param_2 != 0);
    bVar2 = 0;
  }
LAB_1400059c4:
  local_1a8[uVar4] = 0;
  local_res8 = param_1;
  if (bVar2 == 0x2c) {
    uVar4 = 0;
    while (param_2 = param_2 + 1, *param_2 != 0) {
      local_128[uVar4] = *param_2;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    }
    local_128[uVar4] = 0;
    cVar5 = '\x02';
  }
  else {
    cVar5 = (int)uVar4 != 0;
    if ((int)uVar4 == 0) goto LAB_140005a68;
  }
  iVar1 = FUN_1400242b4(local_1a8,(byte *)" %d_%d %c",param_3,param_4);
  if (iVar1 == 2) {
    *param_4 = *param_4 | *param_3 << 0x10;
    *param_3 = -1;
    cVar3 = '\x01';
  }
  else {
    iVar1 = FUN_1400242b4(local_1a8,(byte *)" ( %d | %d ) %c",param_3,param_4);
    if (iVar1 == 2) {
      cVar3 = '\x01';
    }
  }
LAB_140005a68:
  *param_6 = 0xffffffff;
  *param_5 = 0xffffffff;
  if ((cVar3 != '\0') && (cVar5 == '\x02')) {
    iVar1 = FUN_1400242b4(local_128,(byte *)" pos:%s %c",local_a8,&local_res8);
    if ((iVar1 == 1) && (iVar1 = FUN_140024ce8(local_a8,(byte *)"centered"), iVar1 == 0)) {
      *param_6 = 0xffffffff;
      *param_5 = 0xffffffff;
      return cVar3;
    }
    iVar1 = FUN_1400242b4(local_128,(byte *)" pos:(%d|%d) %c",param_5,param_6);
    if (iVar1 != 2) {
      cVar3 = '\0';
    }
  }
  return cVar3;
}


/*
 * FUN_140005b10 at 140005b10
 * undefined8 __fastcall FUN_140005b10(longlong param_1)
 * Address ranges: 140005b10-140005f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140005b10(longlong param_1)

{
  HWND pHVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  CHAR local_48 [32];
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f2,(LPARAM)(&PTR_s_Max_available_140026c00)[lVar4],
                  (ulonglong)(uint)(&DAT_140026da8)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 6);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f3);
  uVar5 = 0;
  SendMessageW(pHVar1,0x14b,0,0);
  uVar3 = 0;
  do {
    while (uVar3 == 0) {
      uVar5 = 0;
      FUN_14000e340(param_1,0x3f3,0x140027068,0);
      uVar3 = 1;
    }
    FUN_140024290(local_48,"%d",(ulonglong)uVar3,uVar5);
    uVar5 = (ulonglong)uVar3;
    FUN_14000e340(param_1,0x3f3,(LPARAM)local_48,uVar5);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x11);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f5);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f5,(LPARAM)(&PTR_s_Whole_image_140026bc8)[lVar4],lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 7);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f6,(LPARAM)(&PTR_s_Point_sampled_140026b90)[lVar4],
                  (ulonglong)(uint)(&DAT_140026b78)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f7);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f7,(LPARAM)(&PTR_s_Automatic_140026d78)[lVar4],
                  (ulonglong)(uint)(&DAT_140026da8)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 6);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f9);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f9,(LPARAM)(&PTR_s_Automatic_140026b30)[lVar4],
                  (ulonglong)(uint)(&DAT_140026cc8)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3fa,(LPARAM)(&PTR_s_App_driven_140026ad0)[lVar4],
                  (ulonglong)(uint)(&DAT_140026ab8)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  FUN_14000e4d0(param_1,0x3fa);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3fb,(LPARAM)(&PTR_s_Infinite_140026d40)[lVar4],
                  (ulonglong)(uint)(&DAT_140026d20)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 7);
  FUN_14000e4d0(param_1,0x3fb);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f4);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f4,(LPARAM)(&PTR_s_Unspecified_140026b18)[lVar4],lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f8);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3f8,(LPARAM)(&PTR_s_Unlimited_140026c30)[lVar4],
                  (ulonglong)(uint)(&DAT_140026ce0)[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0xf);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x40b);
  FUN_14000eea0(param_1,0x3f1);
  FUN_14000eea0(param_1,0x3f2);
  FUN_14000eea0(param_1,0x3f3);
  FUN_14000eea0(param_1,0x3f5);
  FUN_14000eea0(param_1,0x3f6);
  FUN_14000eea0(param_1,0x3f9);
  FUN_14000eea0(param_1,0x3fa);
  FUN_14000eea0(param_1,0x3fb);
  FUN_14000eea0(param_1,0x3f7);
  FUN_14000eea0(param_1,0x403);
  FUN_14000eea0(param_1,0x405);
  FUN_14000eea0(param_1,0x404);
  FUN_14000eea0(param_1,0x406);
  FUN_14000eea0(param_1,0x3f4);
  FUN_14000eea0(param_1,0x3f8);
  FUN_14000eea0(param_1,0x407);
  FUN_14000eea0(param_1,0x408);
  uVar2 = FUN_14000eea0(param_1,0x409);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}


/*
 * FUN_140005f5c at 140005f5c
 * undefined8 __fastcall FUN_140005f5c(longlong param_1, int param_2)
 * Address ranges: 140005f5c-1400062e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140005f5c(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 < 0x3f8) {
    if (param_2 == 0x3f7) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f7);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f7,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xaa) = uVar3;
    }
    else if (param_2 == 0x3f1) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f1);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f1,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9a) = uVar3;
    }
    else if (param_2 == 0x3f2) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f2);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f2,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa6) = uVar3;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa2) = uVar3;
    }
    else if (param_2 == 0x3f3) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f3);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f3,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9e) = uVar3;
    }
    else if (param_2 == 0x3f4) {
      lVar1 = param_1 + -0x78;
      uVar2 = FUN_14000e460(lVar1,0x3f4);
      uVar3 = FUN_14000e270(lVar1,0x3f4,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xbe) = uVar3;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x299) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29a) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29b) = 1;
      FUN_1400063f4(lVar1);
    }
    else if (param_2 == 0x3f5) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f5);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x3f5,(ulonglong)uVar2);
      uVar5 = (ulonglong)uVar2;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb2) =
           *(undefined4 *)(&DAT_140026ca8 + uVar5 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xae) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb6) =
           *(undefined4 *)(&DAT_140026a98 + uVar5 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xba) =
           *(undefined4 *)(&DAT_140026b58 + uVar5 * 4);
    }
    else if (param_2 == 0x3f6) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f6);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f6,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xca) = uVar3;
    }
  }
  else if (param_2 == 0x3f8) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x3f8);
    uVar3 = FUN_14000e270(param_1 + -0x78,0x3f8,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xda) = uVar3;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xde) = 1;
  }
  else if (param_2 == 0x3f9) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x3f9);
    uVar3 = FUN_14000e270(param_1 + -0x78,0x3f9,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xce) = uVar3;
  }
  else if (param_2 == 0x3fa) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x3fa);
    uVar3 = FUN_14000e270(param_1 + -0x78,0x3fa,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd2) = uVar3;
  }
  else if (param_2 == 0x3fb) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x3fb);
    uVar3 = FUN_14000e270(param_1 + -0x78,0x3fb,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd6) = uVar3;
  }
  else if (param_2 == 0x40b) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x40b);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x40b,(ulonglong)uVar2);
    FUN_140001b14(param_1 + 0xd0,(undefined8 *)&local_28,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8a) = local_28;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8a) = local_24;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x92) = local_20;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x96) = local_1c;
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}


/*
 * FUN_1400062ec at 1400062ec
 * undefined8 __fastcall FUN_1400062ec(longlong param_1, int param_2)
 * Address ranges: 1400062ec-14000634a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1400062ec(longlong param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  
  if ((((param_2 != 0x3f2) && (param_2 != 0x3f3)) && (param_2 != 0x3f5)) &&
     ((param_2 != 0x3f7 && (param_2 != 0x3f8)))) {
    if ((param_2 != 0x3fb) && (param_2 != 0x40b)) {
      return in_RAX & 0xffffffffffffff00;
    }
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  if (cVar1 == '\0') {
    FUN_1400072c0(param_1 - 0x78);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}


/*
 * FUN_14000634c at 14000634c
 * undefined8 __fastcall FUN_14000634c(longlong param_1, int param_2)
 * Address ranges: 14000634c-1400063f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_14000634c(longlong param_1,int param_2)

{
  uint *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  
  if (param_2 == 0x403) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xc2);
    *puVar1 = *puVar1 ^ 1;
  }
  else if (param_2 == 0x404) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xc2);
    *puVar1 = *puVar1 ^ 2;
  }
  else if (param_2 == 0x405) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xc2);
    *puVar1 = *puVar1 ^ 4;
  }
  else if (param_2 == 0x406) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xc6);
    *puVar1 = *puVar1 ^ 1;
  }
  else {
    if (param_2 == 0x407) {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x10) + 0xe6);
      *pbVar2 = *pbVar2 ^ 1;
    }
    else if (param_2 == 0x408) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xe2);
      *puVar1 = *puVar1 ^ 1;
    }
    else {
      if (param_2 != 0x409) goto LAB_1400063dd;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0xe2);
      *puVar1 = *puVar1 ^ 2;
    }
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
  }
LAB_1400063dd:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}


/*
 * FUN_1400063f4 at 1400063f4
 * undefined __fastcall FUN_1400063f4(longlong param_1)
 * Address ranges: 1400063f4-14000700a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400063f4(longlong param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  HWND pHVar6;
  LRESULT LVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  BOOL bEnable;
  ulonglong uVar15;
  ulonglong uVar16;
  char cVar17;
  uint *puVar18;
  int iVar19;
  CHAR local_1c8 [64];
  uint local_188 [8];
  CHAR local_168 [31];
  char cStack_149;
  CHAR local_148 [14];
  char local_13a [114];
  CHAR local_c8 [136];
  
  piVar2 = *(int **)(param_1 + 0x80);
  uVar16 = 0;
  uVar14 = 0;
  if ((((*(int *)(param_1 + 0x130) != *piVar2) || (*(int *)(param_1 + 0x134) != piVar2[1])) ||
      (*(int *)(param_1 + 0x138) != piVar2[2])) ||
     ((*(int *)(param_1 + 0x13c) != piVar2[6] ||
      (cVar17 = *(char *)(param_1 + 0x140), cVar17 != *(char *)((longlong)piVar2 + 0x22))))) {
    *(int *)(param_1 + 0x130) = *piVar2;
    iVar4 = piVar2[1];
    *(int *)(param_1 + 0x134) = iVar4;
    iVar11 = piVar2[2];
    *(int *)(param_1 + 0x138) = iVar11;
    iVar1 = piVar2[6];
    *(int *)(param_1 + 0x13c) = iVar1;
    cVar17 = *(char *)((longlong)piVar2 + 0x22);
    iVar19 = iVar4 + -1;
    if (iVar4 < 1) {
      iVar19 = 0;
    }
    *(char *)(param_1 + 0x140) = cVar17;
    FUN_1400017a4((longlong *)(param_1 + 0x148),iVar19,iVar11,iVar1,cVar17);
    FUN_14000e4d0(param_1,0x40b);
    FUN_14000e4d0(param_1,0x3f1);
    cVar17 = *(char *)(param_1 + 0x140);
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  uVar12 = uVar14;
  if ((*(uint *)(lVar10 + 0x92) != 0) && (*(uint *)(lVar10 + 0x96) != 0)) {
    uVar12 = *(uint *)(lVar10 + 0x92) / *(uint *)(lVar10 + 0x96);
  }
  puVar18 = (uint *)(ulonglong)uVar12;
  FUN_140001cbc(param_1 + 0x148,*(uint *)(lVar10 + 0x8a),*(uint *)(lVar10 + 0x8e),uVar12,cVar17);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28a) != '\0') {
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f1);
    SendMessageW(pHVar6,0x14b,0,0);
    uVar15 = uVar16;
    do {
      puVar18 = (uint *)(ulonglong)(uint)(&DAT_140026bb8)[uVar15];
      FUN_14000e340(param_1,0x3f1,(LPARAM)(&PTR_s_Current_desktop_bit_depth_140026af8)[uVar15],
                    (LPARAM)puVar18);
      uVar15 = uVar15 + 1;
    } while (uVar15 != 4);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28a) = 0;
    LVar7 = FUN_14000e230(param_1,0x3f1);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar12 = uVar14;
    if (uVar13 != 0) {
      do {
        iVar11 = (int)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3f1,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x9a)) goto LAB_1400065c4;
        uVar12 = iVar11 + 1;
        uVar15 = (ulonglong)uVar12;
      } while (uVar12 < uVar13);
    }
    if (uVar12 == uVar13) {
      iVar11 = -1;
LAB_1400065c4:
      FUN_14000e4a0(param_1,0x3f1,iVar11);
    }
  }
  uVar12 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28b) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f2);
    uVar5 = (uint)LVar7;
    uVar15 = uVar16;
    uVar13 = uVar12;
    if (uVar5 != 0) {
      do {
        uVar13 = (uint)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3f2,uVar15);
        if ((iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xa2)) &&
           (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xa6))) {
          FUN_14000e4a0(param_1,0x3f2,uVar13);
          break;
        }
        uVar13 = uVar13 + 1;
        uVar15 = (ulonglong)uVar13;
      } while (uVar13 < uVar5);
    }
    if (uVar13 == uVar5) {
      uVar13 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa2);
      if (uVar13 == *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa6)) {
        FUN_140024290(local_c8,"%d",(ulonglong)uVar13,puVar18);
      }
      else {
        if (uVar13 == 0) {
          FUN_140024290(local_1c8,"%s",&DAT_1400272d4,puVar18);
        }
        else {
          FUN_140024290(local_1c8,"%d",(ulonglong)uVar13,puVar18);
        }
        uVar13 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa6);
        if (uVar13 == 0) {
          FUN_140024290((LPSTR)local_188,"%s",&DAT_1400272d4,puVar18);
        }
        else {
          FUN_140024290((LPSTR)local_188,"%d",(ulonglong)uVar13,puVar18);
        }
        puVar18 = local_188;
        FUN_140024290(local_c8,"x:%s, y:%s",local_1c8,puVar18);
      }
      FUN_14000e180(param_1,0x3f2,local_c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28b) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28d) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f3);
    uVar5 = (uint)LVar7;
    uVar15 = uVar16;
    uVar13 = uVar12;
    if (uVar5 != 0) {
      do {
        uVar13 = (uint)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3f3,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x9e)) {
          FUN_14000e4a0(param_1,0x3f3,uVar13);
          break;
        }
        uVar13 = uVar13 + 1;
        uVar15 = (ulonglong)uVar13;
      } while (uVar13 < uVar5);
    }
    if (uVar13 == uVar5) {
      FUN_140024290(local_1c8,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0x9e),
                    puVar18);
      FUN_14000e180(param_1,0x3f3,local_1c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28c) != '\0') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f7);
    EnableWindow(pHVar6,(uint)(iVar4 - 3U < 6));
    LVar7 = FUN_14000e230(param_1,0x3f7);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    if (uVar13 != 0) {
      do {
        uVar14 = (uint)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3f7,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xaa)) {
          FUN_14000e4a0(param_1,0x3f7,uVar14);
          break;
        }
        uVar14 = uVar14 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_140024290(local_1c8,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0xaa),
                    puVar18);
      FUN_14000e180(param_1,0x3f7,local_1c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28e) == '\0') goto LAB_140006a49;
  LVar7 = FUN_14000e230(param_1,0x3f5);
  uVar13 = (uint)LVar7;
  uVar15 = uVar16;
  uVar14 = uVar12;
  if (uVar13 != 0) {
    do {
      uVar14 = (uint)uVar15;
      uVar5 = FUN_14000e270(param_1,0x3f5,uVar15);
      lVar10 = *(longlong *)(param_1 + 0x80);
      uVar15 = (ulonglong)uVar5;
      if ((((*(int *)(&DAT_140026ca8 + uVar15 * 4) == *(int *)(lVar10 + 0xae)) &&
           (*(int *)(&DAT_140026ca8 + uVar15 * 4) == *(int *)(lVar10 + 0xb2))) &&
          (*(int *)(&DAT_140026a98 + uVar15 * 4) == *(int *)(lVar10 + 0xb6))) &&
         (*(int *)(&DAT_140026b58 + uVar15 * 4) == *(int *)(lVar10 + 0xba))) {
        FUN_14000e4a0(param_1,0x3f5,uVar14);
        break;
      }
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
    } while (uVar14 < uVar13);
  }
  if (uVar14 == uVar13) {
    lVar10 = *(longlong *)(param_1 + 0x80);
    uVar14 = *(uint *)(lVar10 + 0xb6);
    if (uVar14 == 0xffffffff) {
      pcVar9 = "%d_%d";
      puVar18 = (uint *)(ulonglong)(*(uint *)(lVar10 + 0xba) & 0xffff);
      uVar14 = *(uint *)(lVar10 + 0xba) >> 0x10;
LAB_14000695d:
      FUN_140024290(local_148,pcVar9,(ulonglong)uVar14,puVar18);
      uVar14 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xae);
      puVar18 = (uint *)(*(longlong *)(param_1 + 0x80) + 0xb2);
      if ((uVar14 == 0xffffffff) && (*puVar18 == 0xffffffff)) {
        pcVar9 = &cStack_149;
        do {
          pcVar8 = pcVar9;
          pcVar9 = pcVar8 + 1;
        } while (*pcVar9 != '\0');
        builtin_strncpy(pcVar8 + 1,", pos:centered",0xf);
      }
      else {
        puVar18 = (uint *)(ulonglong)*puVar18;
        FUN_140024290(local_168,", pos:(%d|%d)",(ulonglong)uVar14,puVar18);
        pcVar9 = &cStack_149;
        do {
          pcVar9 = pcVar9 + 1;
        } while (*pcVar9 != '\0');
        lVar10 = 0;
        do {
          cVar17 = local_168[lVar10];
          pcVar9[lVar10] = cVar17;
          lVar10 = lVar10 + 1;
        } while (cVar17 != '\0');
      }
    }
    else if ((uVar14 != 0) &&
            (puVar18 = (uint *)(ulonglong)*(uint *)(lVar10 + 0xba), *(uint *)(lVar10 + 0xba) != 0))
    {
      pcVar9 = "(%d|%d)";
      goto LAB_14000695d;
    }
    FUN_14000e180(param_1,0x3f5,local_148);
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (((*(int *)(lVar10 + 0x1c) == 6) || (*(int *)(lVar10 + 0x1c) < 3)) ||
     (bEnable = 1, 8 < *(int *)(lVar10 + 0x1c))) {
    bEnable = 0;
  }
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f5);
  EnableWindow(pHVar6,bEnable);
  *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28e) = 0;
LAB_140006a49:
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28f) != '\0') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
    EnableWindow(pHVar6,(uint)(iVar4 - 3U < 6));
    LVar7 = FUN_14000e230(param_1,0x3f6);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        iVar4 = FUN_14000e270(param_1,0x3f6,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xca)) {
          FUN_14000e4a0(param_1,0x3f6,(int)uVar15);
          goto LAB_140006adf;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_14000e180(param_1,0x3f6,"");
    }
LAB_140006adf:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x290) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f9);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        iVar4 = FUN_14000e270(param_1,0x3f9,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xce)) {
          FUN_14000e4a0(param_1,0x3f9,(int)uVar15);
          goto LAB_140006b51;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_14000e180(param_1,0x3f9,"");
    }
LAB_140006b51:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x290) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x291) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3fa);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        iVar4 = FUN_14000e270(param_1,0x3fa,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xd2)) {
          FUN_14000e4a0(param_1,0x3fa,(int)uVar15);
          goto LAB_140006bc3;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_14000e180(param_1,0x3fa,"");
    }
LAB_140006bc3:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x291) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x292) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3fb);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        uVar14 = (uint)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3fb,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xd6)) {
          FUN_14000e4a0(param_1,0x3fb,uVar14);
          break;
        }
        uVar14 = uVar14 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_140024290(local_1c8,"%d sec",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0xd6),
                    puVar18);
      FUN_14000e180(param_1,0x3fb,local_1c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x292) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar10 + 0x293) != '\0') {
    FUN_14000e200(param_1,0x403,
                  CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0xc2)) &
                  0xffffffffffffff01);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x293) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x294) != '\0') {
    uVar14 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xc2);
    FUN_14000e200(param_1,0x404,
                  (ulonglong)(CONCAT31((uint3)(uVar14 >> 9),(char)(uVar14 >> 1)) & 0xffffff01));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x294) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x295) != '\0') {
    FUN_14000e200(param_1,0x405,
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xc2) >> 2 & 0xffffff01));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x295) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar10 + 0x296) != '\0') {
    FUN_14000e200(param_1,0x406,
                  CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0xc6)) &
                  0xffffffffffffff01);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x296) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x297) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f4);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        iVar4 = FUN_14000e270(param_1,0x3f4,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe)) {
          FUN_14000e4a0(param_1,0x3f4,(int)uVar15);
          goto LAB_140006dec;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_14000e180(param_1,0x3f4,"");
    }
LAB_140006dec:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x297) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x298) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f8);
    uVar14 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xde);
    uVar15 = (ulonglong)uVar14;
    if (uVar14 == 0) {
      uVar15 = 1;
    }
    uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0xda);
    uVar14 = (uint)LVar7;
    if (uVar14 != 0) {
      do {
        uVar12 = (uint)uVar16;
        iVar4 = FUN_14000e270(param_1,0x3f8,uVar16);
        if (((int)(uVar3 % uVar15) == 0) && (iVar4 == (int)(uVar3 / uVar15))) {
          FUN_14000e4a0(param_1,0x3f8,uVar12);
          break;
        }
        uVar12 = uVar12 + 1;
        uVar16 = (ulonglong)uVar12;
      } while (uVar12 < uVar14);
    }
    if (uVar12 == uVar14) {
      FUN_1400143b0(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xda),
                    *(uint *)(*(longlong *)(param_1 + 0x80) + 0xde),local_1c8);
      FUN_14000e180(param_1,0x3f8,local_1c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x298) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar10 + 0x299) != '\0') {
    FUN_14000e200(param_1,0x407,
                  CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0xe6)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x299) = 0;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
    EnableWindow(pHVar6,(uint)(iVar4 == 0));
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar10 + 0x29a) != '\0') {
    FUN_14000e200(param_1,0x408,
                  CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0xe2)) &
                  0xffffffffffffff01);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x29a) = 0;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
    EnableWindow(pHVar6,(uint)(iVar4 == 0));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x29b) != '\0') {
    uVar14 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xe2);
    FUN_14000e200(param_1,0x409,
                  (ulonglong)(CONCAT31((uint3)(uVar14 >> 9),(char)(uVar14 >> 1)) & 0xffffff01));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x29b) = 0;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
    EnableWindow(pHVar6,(uint)(iVar4 == 0));
  }
  return;
}


/*
 * FUN_14000700c at 14000700c
 * undefined __fastcall FUN_14000700c(longlong param_1)
 * Address ranges: 14000700c-1400072bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000700c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  HWND pHVar4;
  BOOL bEnable;
  BOOL BVar5;
  bool bVar6;
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  bVar6 = cVar3 != '\0';
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40b);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f1);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f3);
  bEnable = 1;
  BVar5 = 1;
  EnableWindow(pHVar4,1);
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (((*(int *)(lVar2 + 0x1c) == 6) || (*(int *)(lVar2 + 0x1c) < 3)) ||
     (8 < *(int *)(lVar2 + 0x1c))) {
    BVar5 = 0;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f5);
  EnableWindow(pHVar4,BVar5);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
  EnableWindow(pHVar4,(uint)(iVar1 - 3U < 6));
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f9);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  EnableWindow(pHVar4,(uint)bVar6);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f7);
  EnableWindow(pHVar4,(uint)(iVar1 - 3U < 6));
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x403);
  EnableWindow(pHVar4,1);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x404);
  EnableWindow(pHVar4,1);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x405);
  EnableWindow(pHVar4,1);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f4);
  EnableWindow(pHVar4,(uint)bVar6);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f8);
  EnableWindow(pHVar4,1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
  EnableWindow(pHVar4,(uint)(iVar1 == 0));
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40a);
  EnableWindow(pHVar4,(uint)bVar6);
  if ((cVar3 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x80) + 0xbe) != 0)) {
    BVar5 = 0;
  }
  else {
    BVar5 = 1;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
  EnableWindow(pHVar4,BVar5);
  if ((cVar3 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x80) + 0xbe) != 0)) {
    bEnable = 0;
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
                    /* WARNING: Could not recover jumptable at 0x0001400072b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(pHVar4,bEnable);
  return;
}


/*
 * FUN_1400072c0 at 1400072c0
 * undefined __fastcall FUN_1400072c0(ulonglong param_1)
 * Address ranges: 1400072c0-1400076bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400072c0(ulonglong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  uint local_158 [8];
  byte local_138 [256];
  
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  uVar5 = FUN_140001c44(param_1 + 0x148,local_158);
  if ((char)uVar5 != '\0') {
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x8a) = local_158[0];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x8e) = local_158[1];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x92) = local_158[2];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x96) = local_158[3];
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  iVar3 = FUN_14000e460(param_1,0x3f2);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3f2,(LPARAM)local_138,0x100);
    local_res10[0] = 0;
    local_res18[0] = 0;
    iVar3 = FUN_1400242b4(local_138,(byte *)" x : %d, y : %d %c",local_res10,local_res18);
    if (iVar3 == 2) {
      *(uint *)(*plVar1 + 0xa2) = local_res10[0];
      *(undefined4 *)(*plVar1 + 0xa6) = local_res18[0];
    }
    else {
      iVar3 = FUN_1400242b4(local_138,(byte *)" %d %c",local_res10,local_res8);
      if (iVar3 == 1) {
        *(uint *)(*plVar1 + 0xa6) = local_res10[0];
        *(uint *)(*plVar1 + 0xa2) = local_res10[0];
      }
    }
  }
  plVar7 = (longlong *)(param_1 + 0x80);
  iVar3 = FUN_14000e460(param_1,0x3f3);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3f3,(LPARAM)local_138,0x100);
    local_res10[0] = 0;
    iVar3 = FUN_1400242b4(local_138,(byte *)" %d %c",local_res10,local_res8);
    if (iVar3 == 1) {
      *(uint *)(*plVar1 + 0x9e) = local_res10[0];
    }
  }
  iVar3 = FUN_14000e460(param_1,0x3f7);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3f7,(LPARAM)local_138,0x100);
    local_res10[0] = 0;
    iVar3 = FUN_1400242b4(local_138,(byte *)" %d %c",local_res10,local_res8);
    if (iVar3 == 1) {
      *(uint *)(*(longlong *)(param_1 + 0x80) + 0xaa) = local_res10[0];
    }
  }
  iVar3 = FUN_14000e460(param_1,0x3f5);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    uVar6 = param_1;
    FUN_14000e1c0(param_1,0x3f5,(LPARAM)local_138,0x100);
    local_res8[0] = 0;
    local_res10[0] = 0;
    local_res18[0] = 0;
    local_res20[0] = 0;
    cVar2 = FUN_140005970(uVar6,local_138,(int *)local_res8,local_res10,local_res18,local_res20);
    if (cVar2 != '\0') {
      *(uint *)(*plVar7 + 0xb6) = local_res8[0];
      *(uint *)(*plVar7 + 0xba) = local_res10[0];
      *(undefined4 *)(*plVar7 + 0xae) = local_res18[0];
      *(undefined4 *)(*plVar7 + 0xb2) = local_res20[0];
    }
  }
  iVar3 = FUN_14000e460(param_1,0x3f8);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3f8,(LPARAM)local_138,0x100);
    local_res8[0] = 0;
    local_res10[0] = 0;
    uVar5 = FUN_14001418c(local_138,local_res8,local_res10);
    if ((char)uVar5 != '\0') {
      *(uint *)(*plVar7 + 0xda) = local_res8[0];
      *(uint *)(*plVar7 + 0xde) = local_res10[0];
    }
  }
  iVar3 = FUN_14000e460(param_1,0x3fb);
  if (iVar3 == -1) {
    FUN_14002511c(local_138,0,0x100);
    FUN_14000e1c0(param_1,0x3fb,(LPARAM)local_138,0x100);
    uVar4 = FUN_140009c70(param_1,local_138);
    *(undefined4 *)(*plVar7 + 0xd6) = uVar4;
  }
  return;
}


/*
 * FUN_1400076e4 at 1400076e4
 * undefined __fastcall FUN_1400076e4(longlong param_1)
 * Address ranges: 1400076e4-140007737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400076e4(longlong param_1)

{
  uint uVar1;
  HWND hWnd;
  
  uVar1 = MulDiv(0xe6,*(int *)(param_1 + 0x128),0x60);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ef);
                    /* WARNING: Could not recover jumptable at 0x000140007731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW(hWnd,0x160,(ulonglong)uVar1,0);
  return;
}


/*
 * FUN_140007738 at 140007738
 * undefined8 __fastcall FUN_140007738(longlong param_1)
 * Address ranges: 140007738-1400078d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140007738(longlong param_1)

{
  int iVar1;
  LPARAM LVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FUN_14000e340(param_1,0x3eb,0x140027d10,0);
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (*(int *)(lVar4 + 0x250) != 0) {
    uVar6 = 0;
    do {
      iVar1 = (**(code **)(**(longlong **)(lVar4 + 0x210 + uVar6 * 8) + 8))();
      LVar2 = (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 0x88) + 0x210 + uVar6 * 8))();
      FUN_14000e340(param_1,0x3eb,LVar2,(longlong)iVar1);
      lVar4 = *(longlong *)(param_1 + 0x88);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(lVar4 + 0x250));
  }
  lVar4 = 0;
  do {
    FUN_14000e340(param_1,0x3ef,(LPARAM)(&PTR_s_Unspecified_140027d90)[lVar4 * 2],
                  (longlong)(int)(&DAT_140027d98)[lVar4 * 4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 9);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x3eb);
  FUN_14000eea0(param_1,0x3ec);
  FUN_14000eea0(param_1,0x3ee);
  FUN_14000eea0(param_1,0x3ed);
  FUN_14000eea0(param_1,0x3f0);
  FUN_14000eea0(param_1,0x3ef);
  FUN_14000eea0(param_1,0x401);
  FUN_14000eea0(param_1,0x402);
  FUN_14000eea0(param_1,0x3f3);
  FUN_14000eea0(param_1,0x3f4);
  FUN_14000eea0(param_1,0x3f5);
  FUN_14000eea0(param_1,0x406);
  FUN_14000eea0(param_1,0x3fe);
  FUN_14000eea0(param_1,0x403);
  FUN_14000eea0(param_1,0x404);
  FUN_14000eea0(param_1,0x40a);
  uVar3 = FUN_1400076e4(param_1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}


/*
 * FUN_1400078dc at 1400078dc
 * undefined8 __fastcall FUN_1400078dc(longlong param_1, int param_2)
 * Address ranges: 1400078dc-140007915
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1400078dc(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = param_2 + -0x3ed;
  if (iVar2 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x20) = 0;
  }
  else if (iVar2 == 3) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x20) = 1;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                    (*(longlong **)(param_1 + 0x20),CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}


/*
 * FUN_140007918 at 140007918
 * undefined8 __fastcall FUN_140007918(longlong param_1, int param_2)
 * Address ranges: 140007918-140007a5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140007918(longlong param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == 0x3eb) {
    uVar1 = FUN_14000e460(param_1 + -0x78,0x3eb);
    if (uVar1 <= *(uint *)(*(longlong *)(param_1 + 0x10) + 0x250)) {
      uVar2 = FUN_14000e270(param_1 + -0x78,0x3eb,(ulonglong)uVar1);
      **(undefined4 **)(param_1 + 0x10) = uVar2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x260) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x26a) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x286) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2b6) = 1;
      (**(code **)**(undefined8 **)(param_1 + 0x18))();
    }
    goto LAB_140007a43;
  }
  if (param_2 == 0x3ec) {
    iVar3 = FUN_14000e460(param_1 + -0x78,0x3ec);
    *(int *)(*(longlong *)(param_1 + 0x10) + 4) = iVar3;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x260) = 1;
LAB_1400079cc:
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2b6) = 1;
  }
  else {
    if (param_2 == 0x3ee) {
      iVar3 = FUN_14000e460(param_1 + -0x78,0x3ee);
      *(int *)(*(longlong *)(param_1 + 0x10) + 8) = iVar3;
      goto LAB_1400079cc;
    }
    if (param_2 != 0x3ef) goto LAB_140007a43;
    uVar1 = FUN_14000e460(param_1 + -0x78,0x3ef);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x3ef,(ulonglong)uVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1c) = uVar2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x28f) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x28e) = 1;
  }
  (**(code **)**(undefined8 **)(param_1 + 0x18))();
LAB_140007a43:
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}


/*
 * FUN_140007a60 at 140007a60
 * undefined8 __fastcall FUN_140007a60(longlong param_1, int param_2)
 * Address ranges: 140007a60-140007b6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140007a60(longlong param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  CHAR local_88 [128];
  
  if (param_2 == 0x3f3) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3f3);
    uVar3 = 0;
    LVar2 = SendMessageW(pHVar1,0x400,0,0);
    *(int *)(*(longlong *)(param_1 + 8) + 0xc) = (int)LVar2;
    FUN_140024290(local_88,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0xc),uVar3);
    iVar4 = 0x3ff;
  }
  else {
    if (param_2 == 0x3f4) {
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3f4);
      uVar6 = 0;
      uVar5 = 0;
      uVar3 = 0x400;
      LVar2 = SendMessageW(pHVar1,0x400,0,0);
      *(int *)(*(longlong *)(param_1 + 8) + 0x10) = (int)LVar2;
      FUN_140007c14(param_1 + -0x80,uVar3,uVar5,uVar6);
      goto LAB_140007b57;
    }
    if (param_2 != 0x3f5) goto LAB_140007b57;
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3f5);
    uVar3 = 0;
    LVar2 = SendMessageW(pHVar1,0x400,0,0);
    *(int *)(*(longlong *)(param_1 + 8) + 0x14) = (int)LVar2;
    FUN_140024290(local_88,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x14),uVar3);
    iVar4 = 0x405;
  }
  FUN_14000e180(param_1 + -0x80,iVar4,local_88);
LAB_140007b57:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}


/*
 * FUN_140007b70 at 140007b70
 * undefined8 __fastcall FUN_140007b70(longlong param_1, int param_2)
 * Address ranges: 140007b70-140007c12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140007b70(longlong param_1,int param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0x3fe) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x21);
    *pbVar1 = *pbVar1 ^ 1;
  }
  else {
    if (param_2 == 0x401) {
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x18) =
           (uint)(*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 0);
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    else {
      if (param_2 != 0x402) {
        if (param_2 == 0x403) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x23);
          *pbVar1 = *pbVar1 ^ 1;
        }
        else if (param_2 == 0x404) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x24);
          *pbVar1 = *pbVar1 ^ 1;
        }
        else if (param_2 == 0x406) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x26);
          *pbVar1 = *pbVar1 ^ 1;
        }
        else if (param_2 == 0x40a) {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x25);
          *pbVar1 = *pbVar1 ^ 1;
        }
        goto LAB_140007bfe;
      }
      *(bool *)(*(longlong *)(param_1 + 0x18) + 0x22) =
           *(char *)(*(longlong *)(param_1 + 0x18) + 0x22) == '\0';
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)();
  }
LAB_140007bfe:
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}


/*
 * FUN_140007c14 at 140007c14
 * undefined __fastcall FUN_140007c14(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140007c14-140007c8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140007c14(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  LPCSTR pCVar2;
  CHAR local_88 [128];
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x10);
  if (uVar1 == 0) {
    pCVar2 = "B&&W";
  }
  else if (uVar1 == 100) {
    pCVar2 = "Norm";
  }
  else {
    if (uVar1 != 400) {
      FUN_140024290(local_88,"%d%%",(ulonglong)uVar1,param_4);
      goto LAB_140007c70;
    }
    pCVar2 = "Full";
  }
  FUN_140024290(local_88,pCVar2,(ulonglong)uVar1,param_4);
LAB_140007c70:
  FUN_14000e180(param_1,0x400,local_88);
  return;
}


/*
 * FUN_140007c8c at 140007c8c
 * undefined __fastcall FUN_140007c8c(longlong param_1, undefined8 param_2, wchar_t * param_3)
 * Address ranges: 140007c8c-140008684
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140007c8c(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  HWND pHVar6;
  LRESULT LVar7;
  int *piVar8;
  BOOL bEnable;
  undefined8 uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  undefined8 uVar18;
  BOOL bEnable_00;
  int iVar19;
  CHAR local_2c8 [128];
  wchar_t local_248 [32];
  wchar_t local_208 [228];
  
  pwVar13 = (wchar_t *)0x0;
  piVar8 = *(int **)(param_1 + 0x88);
  bVar3 = false;
  uVar18 = 1;
  bEnable_00 = 1;
  uVar10 = 0;
  if (piVar8[0x95] != *piVar8) {
    uVar5 = uVar10;
    if (*piVar8 == 0) {
      pwVar11 = pwVar13;
      pwVar12 = pwVar13;
      pwVar14 = pwVar13;
      if (piVar8[0x94] != 0) {
        do {
          uVar5 = (**(code **)(**(longlong **)(piVar8 + (longlong)pwVar11 * 2 + 0x84) + 8))();
          piVar8 = *(int **)(param_1 + 0x88);
          if ((byte)pwVar12[0xa0013ebc] < (byte)(&DAT_140027d78)[uVar5]) {
            pwVar12 = (wchar_t *)(ulonglong)uVar5;
            uVar16 = (uint)pwVar11;
          }
          else {
            uVar16 = (uint)pwVar14;
          }
          uVar5 = (uint)pwVar11 + 1;
          pwVar11 = (wchar_t *)(ulonglong)uVar5;
          pwVar14 = (wchar_t *)(ulonglong)uVar16;
        } while (uVar5 < (uint)piVar8[0x94]);
        if (uVar16 != 0) {
          uVar5 = uVar16;
        }
      }
    }
    else {
      pwVar12 = pwVar13;
      if (piVar8[0x94] != 0) {
        do {
          uVar5 = (uint)pwVar12;
          iVar19 = (**(code **)(**(longlong **)(piVar8 + (longlong)pwVar12 * 2 + 0x84) + 8))();
          piVar8 = *(int **)(param_1 + 0x88);
          if (*piVar8 == iVar19) break;
          uVar5 = uVar5 + 1;
          pwVar12 = (wchar_t *)(ulonglong)uVar5;
        } while (uVar5 < (uint)piVar8[0x94]);
      }
    }
    bVar3 = false;
    if (uVar5 == piVar8[0x94]) {
      param_3 = (wchar_t *)0xffffffff;
      FUN_14000e4a0(param_1,0x3eb,-1);
    }
    else {
      uVar16 = piVar8[0x96];
      if (uVar5 != uVar16) {
        if (uVar16 != 0xffffffff) {
          (**(code **)(**(longlong **)(piVar8 + (longlong)(int)uVar16 * 2 + 0x84) + 0x20))();
          *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8) = 0;
        }
        uVar16 = -(uint)(**(int **)(param_1 + 0x88) != 0) & uVar5 + 1;
        param_3 = (wchar_t *)(ulonglong)uVar16;
        FUN_14000e4a0(param_1,0x3eb,uVar16);
        uVar15 = (ulonglong)uVar5;
        cVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x210 + uVar15 * 8) +
                            0x18))();
        if (cVar4 != '\0') {
          *(uint *)(*(longlong *)(param_1 + 0x88) + 600) = uVar5;
          pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
          SendMessageW(pHVar6,0x14b,0,0);
          uVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x210 + uVar15 * 8) +
                              0x28))();
          param_3 = L"All of them";
          FUN_14000e3d0(param_1,0x3ec,0x140027d48,0);
          pwVar12 = pwVar13;
          if (uVar5 != 0) {
            do {
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x210 + uVar15 * 8);
              (**(code **)(*plVar1 + 0x30))(plVar1,pwVar12,local_248);
              uVar16 = (int)pwVar12 + 1;
              pwVar12 = (wchar_t *)(ulonglong)uVar16;
              param_3 = local_248;
              FUN_14000e3d0(param_1,0x3ec,(LPARAM)param_3,(ulonglong)uVar16);
            } while (uVar16 < uVar5);
          }
        }
        bVar3 = true;
      }
    }
    (*(undefined4 **)(param_1 + 0x88))[0x95] = **(undefined4 **)(param_1 + 0x88);
    iVar19 = **(int **)(param_1 + 0x88);
    if (((iVar19 == 1) || (iVar19 == 2)) || (iVar19 == 4)) {
      pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
      bEnable = bEnable_00;
    }
    else {
      pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
      bEnable = 0;
    }
    EnableWindow(pHVar6,bEnable);
  }
  iVar19 = *(int *)(*(longlong *)(param_1 + 0x88) + 600);
  if (iVar19 == -1) {
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
    SendMessageW(pHVar6,0x14b,0,0);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
    SendMessageW(pHVar6,0x14b,0,0);
    FUN_14000e340(param_1,0x3ec,0x140027d68,0);
    FUN_14000e340(param_1,0x3ee,0x140027d68,0);
    FUN_14000e4a0(param_1,0x3ec,0);
    param_3 = (wchar_t *)0x0;
    FUN_14000e4a0(param_1,0x3ee,0);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
    EnableWindow(pHVar6,0);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
    EnableWindow(pHVar6,0);
    if (*(int *)(*(longlong *)(param_1 + 0x88) + 0x250) != 0) goto LAB_1400081f6;
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3eb);
    SendMessageW(pHVar6,0x14b,0,0);
    FUN_14000e340(param_1,0x3eb,0x140027d68,0);
    pcVar17 = (char *)0x0;
    FUN_14000e4a0(param_1,0x3eb,0);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3eb);
    bEnable_00 = 0;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)
                           (*(longlong *)(param_1 + 0x88) + 0x210 + (longlong)iVar19 * 8) + 0x28))()
    ;
    lVar2 = *(longlong *)(param_1 + 0x88);
    pwVar12 = pwVar13;
    do {
      uVar16 = (uint)pwVar12;
      if (*(uint *)(lVar2 + 4) == uVar16) break;
      uVar16 = uVar16 + 1;
      pwVar12 = (wchar_t *)(ulonglong)uVar16;
    } while (uVar16 <= uVar5);
    if (((uVar16 == uVar5 + 1) || (uVar16 == *(uint *)(lVar2 + 0x25c))) && (!bVar3))
    goto LAB_1400081f6;
    *(uint *)(lVar2 + 0x25c) = uVar16;
    FUN_14000e4a0(param_1,0x3ec,uVar16);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
    SendMessageW(pHVar6,0x14b,0,0);
    pcVar17 = "Default";
    FUN_14000e340(param_1,0x3ee,0x140027d60,0);
    if (uVar16 != 0) {
      iVar19 = uVar16 - 1;
      plVar1 = *(longlong **)
                (*(longlong *)(param_1 + 0x88) + 0x210 +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
      cVar4 = (**(code **)(*plVar1 + 0x38))(plVar1,iVar19);
      uVar5 = 0;
      if (cVar4 == '\0') {
        plVar1 = *(longlong **)
                  (*(longlong *)(param_1 + 0x88) + 0x210 +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
        uVar5 = (**(code **)(*plVar1 + 0x40))(plVar1,iVar19);
      }
      pwVar12 = pwVar13;
      if (uVar5 != 0) {
        do {
          plVar1 = *(longlong **)
                    (*(longlong *)(param_1 + 0x88) + 0x210 +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
          (**(code **)(*plVar1 + 0x48))(plVar1,iVar19,pwVar12,local_248);
          uVar10 = (int)pwVar12 + 1;
          pwVar12 = (wchar_t *)(ulonglong)uVar10;
          pcVar17 = (char *)local_208;
          FUN_14000e3d0(param_1,0x3ee,(LPARAM)pcVar17,(ulonglong)uVar10);
        } while (uVar10 < uVar5);
      }
      uVar10 = 0;
      if (uVar5 != 0xffffffff) {
        pwVar12 = pwVar13;
        do {
          uVar10 = (uint)pwVar12;
          if (*(uint *)(*(longlong *)(param_1 + 0x88) + 8) == uVar10) break;
          uVar10 = uVar10 + 1;
          pwVar12 = (wchar_t *)(ulonglong)uVar10;
        } while (uVar10 < uVar5 + 1);
      }
    }
    if (uVar10 != uVar5 + 1) {
      pcVar17 = (char *)(ulonglong)uVar10;
      FUN_14000e4a0(param_1,0x3ee,uVar10);
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3eb);
    EnableWindow(pHVar6,(uint)(cVar4 != '\0'));
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
    EnableWindow(pHVar6,(uint)(cVar4 != '\0'));
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
  }
  EnableWindow(pHVar6,bEnable_00);
  param_3 = (wchar_t *)pcVar17;
LAB_1400081f6:
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x265) != '\0') {
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x20);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ed);
    SendMessageW(pHVar6,0xf1,(ulonglong)(cVar4 == '\0'),0);
    param_3 = (wchar_t *)(ulonglong)(*(char *)(*(longlong *)(param_1 + 0x88) + 0x20) != '\0');
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f0);
    SendMessageW(pHVar6,0xf1,(WPARAM)param_3,0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x265) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x266) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3ef);
    if ((uint)LVar7 != 0) {
      do {
        param_3 = pwVar13;
        iVar19 = FUN_14000e270(param_1,0x3ef,(ulonglong)pwVar13);
        if (iVar19 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1c)) {
          FUN_14000e4a0(param_1,0x3ef,(int)pwVar13);
          param_3 = pwVar13;
          break;
        }
        uVar10 = (int)pwVar13 + 1;
        pwVar13 = (wchar_t *)(ulonglong)uVar10;
      } while (uVar10 < (uint)LVar7);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x266) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x267) != '\0') {
    FUN_14000e200(param_1,0x401,
                  CONCAT71((int7)((ulonglong)param_3 >> 8),
                           *(int *)(*(longlong *)(param_1 + 0x88) + 0x18) == 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x267) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x268) != '\0') {
    FUN_14000e200(param_1,0x402,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x22)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x268) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26b) != '\0') {
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f3);
    SendMessageW(pHVar6,0x406,0,0x1900000);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f3);
    SendMessageW(pHVar6,0x414,100,0);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0xc);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f3);
    uVar15 = (ulonglong)uVar10;
    SendMessageW(pHVar6,0x405,1,uVar15);
    FUN_140024290(local_2c8,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0xc),uVar15)
    ;
    FUN_14000e180(param_1,0x3ff,local_2c8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26b) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26c) != '\0') {
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f4);
    SendMessageW(pHVar6,0x406,0,0x1900000);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f4);
    SendMessageW(pHVar6,0x414,100,0);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x10);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f4);
    uVar15 = (ulonglong)uVar10;
    uVar9 = 0x405;
    SendMessageW(pHVar6,0x405,1,uVar15);
    FUN_140007c14(param_1,uVar9,uVar18,uVar15);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26c) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26d) != '\0') {
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f5);
    SendMessageW(pHVar6,0x406,0,0x1900000);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f5);
    SendMessageW(pHVar6,0x414,100,0);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x14);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f5);
    uVar15 = (ulonglong)uVar10;
    SendMessageW(pHVar6,0x405,1,uVar15);
    FUN_140024290(local_2c8,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0x14),uVar15
                 );
    FUN_14000e180(param_1,0x405,local_2c8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26d) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x26e) != '\0') {
    FUN_14000e200(param_1,0x406,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x26)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26e) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x26f) != '\0') {
    FUN_14000e200(param_1,0x3fe,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x21)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26f) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x270) != '\0') {
    FUN_14000e200(param_1,0x403,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x23)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x270) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x271) != '\0') {
    FUN_14000e200(param_1,0x404,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x24)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x271) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x272) != '\0') {
    FUN_14000e200(param_1,0x40a,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x25)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x272) = 0;
  }
  return;
}


/*
 * FUN_140008698 at 140008698
 * undefined8 __fastcall FUN_140008698(longlong param_1)
 * Address ranges: 140008698-1400087f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140008698(longlong param_1)

{
  HWND pHVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40c);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x40c,(LPARAM)(&PTR_s_Disabled_140026de8)[lVar3],
                  (ulonglong)(uint)(&DAT_140026e00)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40d);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    FUN_14000e340(param_1,0x40d,(LPARAM)(&PTR_s_Pure_32_bit_140026e20)[lVar3],
                  (ulonglong)(uint)(&DAT_140026e10)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40e);
  SendMessageW(pHVar1,0x14b,0,0);
  lVar3 = 0;
  do {
    lVar4 = lVar3;
    FUN_14000e340(param_1,0x40e,(LPARAM)(&PTR_s_Automatic_140026dc0)[lVar4],lVar4);
    lVar3 = lVar4 + 1;
  } while (lVar4 + 1 != 5);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,(ulonglong)((int)lVar4 - 2),20000);
  FUN_14000eea0(param_1,0x40c);
  FUN_14000eea0(param_1,0x40d);
  uVar2 = FUN_14000eea0(param_1,0x40e);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}


/*
 * FUN_140008804 at 140008804
 * undefined8 __fastcall FUN_140008804(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140008804-1400088f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140008804(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0x40c) {
    uVar1 = FUN_14000e460(param_1 + -0x70,0x40c);
    uVar5 = (ulonglong)uVar1;
    uVar2 = FUN_14000e270(param_1 + -0x70,0x40c,uVar5);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xeb) = uVar2;
    lVar3 = 0;
    do {
      *(undefined1 *)(lVar3 + 0x29d + *(longlong *)(param_1 + 8)) = 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2);
  }
  else {
    if (param_2 != 0x40d) {
      if (param_2 == 0x40e) {
        uVar1 = FUN_14000e460(param_1 + -0x70,0x40e);
        uVar2 = FUN_14000e270(param_1 + -0x70,0x40e,(ulonglong)uVar1);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xef) = uVar2;
      }
      goto LAB_1400088e0;
    }
    uVar1 = FUN_14000e460(param_1 + -0x70,0x40d);
    uVar5 = (ulonglong)uVar1;
    lVar3 = FUN_14000e270(param_1 + -0x70,0x40d,uVar5);
    *(int *)(*(longlong *)(param_1 + 8) + 0xe7) = (int)lVar3;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29e) = 1;
  }
  FUN_1400088fc(param_1 + -0x70,lVar3,uVar5,param_4);
LAB_1400088e0:
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}


/*
 * FUN_1400088fc at 1400088fc
 * undefined __fastcall FUN_1400088fc(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1400088fc-140008aed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400088fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  LRESULT LVar3;
  HWND pHVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  BOOL bEnable;
  CHAR local_48 [32];
  
  bEnable = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x29c) != '\0') {
    uVar7 = 0;
    uVar6 = 0;
    LVar3 = FUN_14000e230(param_1,0x40c);
    uVar1 = (uint)LVar3;
    if (uVar1 != 0) {
      do {
        iVar5 = (int)uVar7;
        iVar2 = FUN_14000e270(param_1,0x40c,uVar7);
        if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 0xeb)) goto LAB_14000895e;
        uVar6 = iVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar1);
    }
    if (uVar6 == uVar1) {
      iVar5 = -1;
LAB_14000895e:
      FUN_14000e4a0(param_1,0x40c,iVar5);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x28a) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x29d) != '\0') {
    uVar6 = 0;
    LVar3 = FUN_14000e230(param_1,0x40d);
    uVar1 = (uint)LVar3;
    if (uVar1 != 0) {
      do {
        iVar2 = FUN_14000e270(param_1,0x40d,(ulonglong)uVar6);
        if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 0xe7)) goto LAB_1400089ca;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    if (uVar6 == uVar1) {
      uVar6 = 0xffffffff;
LAB_1400089ca:
      FUN_14000e4a0(param_1,0x40d,uVar6);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0xeb);
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40d);
    EnableWindow(pHVar4,(uint)(iVar2 == 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x29d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x29e) != '\0') {
    uVar6 = 0;
    LVar3 = FUN_14000e230(param_1,0x40e);
    uVar1 = (uint)LVar3;
    if (uVar1 != 0) {
      do {
        iVar2 = FUN_14000e270(param_1,0x40e,(ulonglong)uVar6);
        if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 0xef)) {
          FUN_14000e4a0(param_1,0x40e,uVar6);
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    if (uVar6 == uVar1) {
      FUN_140024290(local_48,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x78) + 0xef),param_4
                   );
      FUN_14000e180(param_1,0x40e,local_48);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0xeb);
    if ((iVar2 != 1) && ((iVar2 != 2 || (*(int *)(*(longlong *)(param_1 + 0x78) + 0xe7) == 0)))) {
      bEnable = 0;
    }
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40e);
    EnableWindow(pHVar4,bEnable);
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x29e) = 0;
  }
  return;
}


/*
 * FUN_140008af0 at 140008af0
 * undefined __fastcall FUN_140008af0(longlong param_1)
 * Address ranges: 140008af0-140008b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140008af0(longlong param_1)

{
  int iVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  byte local_88 [128];
  
  iVar1 = FUN_14000e460(param_1,0x40e);
  if (iVar1 == -1) {
    FUN_14002511c(local_88,0,0x80);
    FUN_14000e1c0(param_1,0x40e,(LPARAM)local_88,0x80);
    local_res18[0] = 0;
    iVar1 = FUN_1400242b4(local_88,(byte *)" %d %c",local_res18,local_res10);
    if (iVar1 == 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xef) = local_res18[0];
    }
  }
  return;
}


/*
 * FUN_140008b90 at 140008b90
 * undefined8 __fastcall FUN_140008b90(longlong param_1)
 * Address ranges: 140008b90-140008d3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140008b90(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_14000e340(param_1,0x3f9,0x140027fd8,0);
  FUN_14000e340(param_1,0x3f9,0x140028000,1);
  FUN_14000e340(param_1,0x3f9,0x140028028,2);
  FUN_14000e340(param_1,0x3f9,0x140028050,3);
  FUN_14000e340(param_1,0x3f9,0x140028078,4);
  FUN_14000e340(param_1,0x401,0x140026678,0);
  FUN_14000e340(param_1,0x401,0x140027510,0x100);
  FUN_14000e340(param_1,0x401,0x140027528,0x200);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x3f9);
  FUN_14000eea0(param_1,0x3fa);
  FUN_14000eea0(param_1,0x3f2);
  FUN_14000eea0(param_1,0x3f7);
  FUN_14000eea0(param_1,0x401);
  FUN_14000eea0(param_1,0x3f1);
  FUN_14000eea0(param_1,0x3f4);
  FUN_14000eea0(param_1,0x3f6);
  FUN_14000eea0(param_1,0x3f5);
  FUN_14000eea0(param_1,0x3f8);
  FUN_14000eea0(param_1,0x3fb);
  FUN_14000eea0(param_1,0x3fd);
  FUN_14000eea0(param_1,0x3fe);
  FUN_14000eea0(param_1,0x3ff);
  FUN_14000eea0(param_1,0x3fc);
  uVar1 = FUN_14000eea0(param_1,0x400);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}


/*
 * FUN_140008d40 at 140008d40
 * undefined8 __fastcall FUN_140008d40(longlong param_1, int param_2)
 * Address ranges: 140008d40-140008f51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140008d40(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 == 0x3f2) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x3f2);
    iVar4 = FUN_14000e270(param_1 + -0x70,0x3f2,(ulonglong)uVar2);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x2f) = iVar4 << 10;
  }
  else if (param_2 == 0x3f4) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x3f4);
    uVar2 = FUN_14000e270(param_1 + -0x70,0x3f4,(ulonglong)uVar2);
    FUN_140001b14(param_1 + 0xd0,(undefined8 *)&local_28,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x37) = local_28;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x3b) = local_24;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x43) = local_20;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x47) = local_1c;
  }
  else if (param_2 == 0x3f6) {
    uVar2 = FUN_14000e460(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218));
    uVar3 = FUN_14000e270(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218),(ulonglong)uVar2)
    ;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x3f) = uVar3;
  }
  else if (param_2 == 0x3f7) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x3f7);
    uVar3 = FUN_14000e270(param_1 + -0x70,0x3f7,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x33) = uVar3;
  }
  else if (param_2 == 0x3f9) {
    lVar1 = param_1 + -0x70;
    uVar2 = FUN_14000e460(lVar1,0x3f9);
    uVar3 = FUN_14000e270(lVar1,0x3f9,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x27) = uVar3;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x261) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x262) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x263) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x279) = 1;
    FUN_14000902c(lVar1);
  }
  else if (param_2 == 0x3fa) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x3fa);
    iVar4 = FUN_14000e270(param_1 + -0x70,0x3fa,(ulonglong)uVar2);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x2b) = iVar4 << 0x14;
  }
  else if (param_2 == 0x401) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x401);
    uVar3 = FUN_14000e270(param_1 + -0x70,0x401,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4b) = uVar3;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}


/*
 * FUN_140008f54 at 140008f54
 * undefined8 __fastcall FUN_140008f54(longlong param_1, int param_2)
 * Address ranges: 140008f54-140008f86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140008f54(longlong param_1,int param_2)

{
  undefined8 in_RAX;
  
  if (param_2 == 0x3f2) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1)
    ;
  }
  else if (param_2 == 0x3f4) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),0)
    ;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


/*
 * FUN_140008f88 at 140008f88
 * undefined8 __fastcall FUN_140008f88(longlong param_1, int param_2)
 * Address ranges: 140008f88-140009029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140008f88(longlong param_1,int param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 == 0x3f1) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x4f);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3f5) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x50);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3f8) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x52);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3fb) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x53);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3fc) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x51);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3fd) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x54);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else if (param_2 == 0x3fe) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x55);
    *pbVar1 = *pbVar1 ^ 1;
    uVar4 = 0;
  }
  else {
    uVar3 = param_2 - 0x3ff;
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x56);
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (uVar3 == 1) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 0x57);
      *pbVar1 = *pbVar1 ^ 1;
    }
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                    (*(longlong **)(param_1 + 0x10),CONCAT71((int7)(uVar4 >> 8),1));
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}


/*
 * FUN_14000902c at 14000902c
 * undefined __fastcall FUN_14000902c(longlong param_1)
 * Address ranges: 14000902c-1400097fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000902c(longlong param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  HWND pHVar7;
  LRESULT LVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  char cVar18;
  CHAR local_d8 [32];
  CHAR local_b8 [136];
  ulonglong uVar17;
  
  FUN_14000e4a0(param_1,0x3f9,*(int *)(*(longlong *)(param_1 + 0x80) + 0x27));
  uVar17 = 0;
  uVar13 = 0;
  uVar15 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x261) != '\0') {
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
    uVar9 = 0;
    SendMessageW(pHVar7,0x14b,0,0);
    uVar16 = uVar17;
    do {
      if ((&DAT_1400280c0)[uVar16 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 8] !=
          0) {
        FUN_140024290(local_d8,"%d MB",
                      (ulonglong)
                      (byte)(&DAT_1400280c0)
                            [uVar16 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 8],
                      uVar9);
        uVar9 = (ulonglong)
                (byte)(&DAT_1400280c0)
                      [uVar16 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 8];
        FUN_14000e340(param_1,0x3fa,(LPARAM)local_d8,uVar9);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != 8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x261) = 0;
  }
  uVar12 = 0;
  LVar8 = FUN_14000e230(param_1,0x3fa);
  uVar14 = (uint)LVar8;
  uVar16 = uVar17;
  if (uVar14 != 0) {
    do {
      iVar5 = FUN_14000e270(param_1,0x3fa,uVar16);
      uVar12 = (uint)uVar16;
      if (iVar5 << 0x14 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x2b)) goto LAB_14000915e;
      uVar12 = (uint)uVar16 + 1;
      uVar16 = (ulonglong)uVar12;
    } while (uVar12 < uVar14);
  }
  if (uVar12 == uVar14) {
    iVar5 = FUN_14000e270(param_1,0x3fa,0);
    *(int *)(*(longlong *)(param_1 + 0x80) + 0x2b) = iVar5 << 0x14;
    uVar12 = uVar15;
  }
LAB_14000915e:
  FUN_14000e4a0(param_1,0x3fa,uVar12);
  piVar3 = *(int **)(param_1 + 0x80);
  if ((((*(int *)(param_1 + 0x128) != *piVar3) || (*(int *)(param_1 + 300) != piVar3[1])) ||
      (*(int *)(param_1 + 0x130) != piVar3[2])) ||
     ((*(int *)(param_1 + 0x134) != piVar3[6] ||
      (cVar18 = *(char *)(param_1 + 0x138), cVar18 != *(char *)((longlong)piVar3 + 0x22))))) {
    *(int *)(param_1 + 0x128) = *piVar3;
    iVar5 = piVar3[1];
    *(int *)(param_1 + 300) = iVar5;
    iVar1 = piVar3[2];
    *(int *)(param_1 + 0x130) = iVar1;
    iVar2 = piVar3[6];
    *(int *)(param_1 + 0x134) = iVar2;
    cVar18 = *(char *)((longlong)piVar3 + 0x22);
    iVar10 = iVar5 + -1;
    if (iVar5 < 1) {
      iVar10 = 0;
    }
    *(char *)(param_1 + 0x138) = cVar18;
    FUN_1400017a4((longlong *)(param_1 + 0x140),iVar10,iVar1,iVar2,cVar18);
    cVar18 = *(char *)(param_1 + 0x138);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  uVar14 = 0;
  uVar12 = uVar14;
  if ((*(uint *)(lVar4 + 0x43) != 0) && (*(int *)(lVar4 + 0x47) != 0)) {
    uVar12 = *(uint *)(lVar4 + 0x43) / *(uint *)(lVar4 + 0x47);
  }
  uVar16 = (ulonglong)uVar12;
  FUN_140001cbc(param_1 + 0x140,*(uint *)(lVar4 + 0x37),*(uint *)(lVar4 + 0x3b),uVar12,cVar18);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x260) != '\0') {
    FUN_140001d7c((longlong *)(param_1 + 0x278));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x264) = 1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x264) != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x264) = 0;
    FUN_140001e70(param_1 + 0x278,*(int *)(*(longlong *)(param_1 + 0x80) + 0x3f));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x262) != '\0') {
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f7);
    uVar16 = 0;
    SendMessageW(pHVar7,0x14b,0,0);
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) != 2) {
      uVar16 = 1;
      FUN_14000e340(param_1,0x3f7,0x1400270e4,1);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) - 2U & 0xfffffffd) == 0) {
      uVar16 = 2;
      FUN_14000e340(param_1,0x3f7,0x1400270e8,2);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) == 4) {
      uVar16 = 3;
      FUN_14000e340(param_1,0x3f7,0x1400270ec,3);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x262) = 0;
  }
  LVar8 = FUN_14000e230(param_1,0x3f7);
  uVar12 = (uint)LVar8;
  uVar9 = uVar17;
  if (uVar12 != 0) {
    do {
      iVar5 = FUN_14000e270(param_1,0x3f7,uVar9);
      uVar13 = (uint)uVar9;
      if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x33)) goto LAB_14000939a;
      uVar13 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar13;
    } while (uVar13 < uVar12);
  }
  if (uVar13 == uVar12) {
    uVar6 = FUN_14000e270(param_1,0x3f7,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x33) = uVar6;
    uVar13 = 0;
  }
LAB_14000939a:
  FUN_14000e4a0(param_1,0x3f7,uVar13);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x263) != '\0') {
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
    uVar16 = 0;
    SendMessageW(pHVar7,0x14b,0,0);
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
    uVar9 = GetWindowLongPtrW(pHVar7,-0x10);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x27);
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
    SetWindowLongPtrW(pHVar7,-0x10,(ulonglong)(-(uint)(iVar5 != 4) & 3) | uVar9 & 0xfffffffffffffffc
                     );
    uVar9 = uVar17;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) == 4) {
LAB_14000947c:
        FUN_140024290(local_d8,"%d kB",(ulonglong)(uint)(&DAT_1400281a0)[uVar9],uVar16);
        uVar16 = (ulonglong)(uint)(&DAT_1400281a0)[uVar9];
        FUN_14000e340(param_1,0x3f2,(LPARAM)local_d8,uVar16);
      }
      else {
        uVar11 = uVar17;
        do {
          if ((&DAT_1400281a0)[uVar9] ==
              (uint)(byte)(&DAT_1400281d8)
                          [uVar11 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 3] <<
              10) goto LAB_14000947c;
          uVar13 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar13;
        } while (uVar13 < 3);
        if (uVar13 != 3) goto LAB_14000947c;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0xe);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x263) = 0;
  }
  LVar8 = FUN_14000e230(param_1,0x3f2);
  uVar13 = (uint)LVar8;
  uVar9 = uVar17;
  if (uVar13 != 0) {
    do {
      uVar14 = (uint)uVar9;
      uVar12 = FUN_14000e270(param_1,0x3f2,uVar9);
      if (uVar12 == *(uint *)(*(longlong *)(param_1 + 0x80) + 0x2f) >> 10) {
        FUN_14000e4a0(param_1,0x3f2,uVar14);
        break;
      }
      uVar14 = uVar14 + 1;
      uVar9 = (ulonglong)uVar14;
    } while (uVar14 < uVar13);
  }
  if (uVar14 == uVar13) {
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) != 4) {
      iVar5 = FUN_14000e270(param_1,0x3f2,0);
      *(int *)(*(longlong *)(param_1 + 0x80) + 0x2f) = iVar5 << 10;
      FUN_14000e4a0(param_1,0x3f2,0);
    }
    FUN_140024290(local_b8,"%d kB",
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0x2f) >> 10),uVar16);
    FUN_14000e180(param_1,0x3f2,local_b8);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x269) != '\0') {
    LVar8 = FUN_14000e230(param_1,0x401);
    if ((uint)LVar8 != 0) {
      do {
        uVar15 = (uint)uVar17;
        iVar5 = FUN_14000e270(param_1,0x401,uVar17);
        if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x4b)) {
          FUN_14000e4a0(param_1,0x401,uVar15);
          break;
        }
        uVar15 = uVar15 + 1;
        uVar17 = (ulonglong)uVar15;
      } while (uVar15 < (uint)LVar8);
    }
    if (uVar15 == uVar13) {
      FUN_14000e4a0(param_1,0x401,uVar15);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x269) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x26a) != '\0') {
    FUN_14000e200(param_1,0x3f1,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x4f)));
    iVar5 = **(int **)(param_1 + 0x80);
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f1);
    EnableWindow(pHVar7,(uint)(iVar5 != 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x26a) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x273) != '\0') {
    FUN_14000e200(param_1,0x3f5,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x50)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x273) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x274) != '\0') {
    FUN_14000e200(param_1,0x3f8,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x52)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x274) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x275) != '\0') {
    FUN_14000e200(param_1,0x3fb,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x53)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x275) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x276) != '\0') {
    FUN_14000e200(param_1,0x3fd,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x54)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x276) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x277) != '\0') {
    FUN_14000e200(param_1,0x3fe,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x55)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x277) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x278) != '\0') {
    FUN_14000e200(param_1,0x3ff,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x56)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x278) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x279) != '\0') {
    FUN_14000e200(param_1,0x3fc,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x51)));
    cVar18 = (&DAT_140026e38)[*(int *)(*(longlong *)(param_1 + 0x80) + 0x27)];
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fc);
    EnableWindow(pHVar7,(uint)(cVar18 == '\0'));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x279) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x27a) != '\0') {
    FUN_14000e200(param_1,0x400,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x57)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27a) = 0;
  }
  return;
}


/*
 * FUN_140009800 at 140009800
 * undefined __fastcall FUN_140009800(ulonglong param_1)
 * Address ranges: 140009800-1400098a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140009800(ulonglong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_a8 [8];
  byte local_88 [128];
  
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  uVar1 = FUN_140001c44(param_1 + 0x140,local_a8);
  if ((char)uVar1 != '\0') {
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x37) = local_a8[0];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x3b) = local_a8[1];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x43) = local_a8[2];
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x47) = local_a8[3];
  }
  uVar3 = param_1;
  FUN_14000e1c0(param_1,0x3f2,(LPARAM)local_88,0x80);
  lVar2 = FUN_140009b58(uVar3,local_88);
  if (lVar2 != 0) {
    *(int *)(*(longlong *)(param_1 + 0x80) + 0x2f) = (int)lVar2;
  }
  return;
}


/*
 * FUN_1400098a8 at 1400098a8
 * undefined8 * __fastcall FUN_1400098a8(undefined8 * param_1)
 * Address ranges: 1400098a8-140009a65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_1400098a8(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x1000100;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 100;
  *(undefined4 *)(param_1 + 2) = 100;
  *(undefined8 *)((longlong)param_1 + 0x14) = 100;
  *(undefined4 *)((longlong)param_1 + 0x27) = 2;
  *(undefined8 *)((longlong)param_1 + 0x33) = 2;
  *(undefined8 *)((longlong)param_1 + 0xeb) = 2;
  *(undefined4 *)((longlong)param_1 + 0x1df) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2b) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0x2f) = 0x400000;
  *(undefined8 *)((longlong)param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f) = 0x1000100;
  *(undefined4 *)((longlong)param_1 + 0x53) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x10000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0x1010100;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9e) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa2) = 1;
  *(undefined8 *)((longlong)param_1 + 0xa6) = 1;
  *(undefined8 *)((longlong)param_1 + 0xae) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xca) = 1;
  *(undefined8 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe7) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf3) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xff) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x103) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x107) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cf) = 3;
  *(undefined8 *)((longlong)param_1 + 0x1d7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e3) = 7;
  *(undefined8 *)((longlong)param_1 + 0x1e7) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 499) = 0x10100;
  *(undefined4 *)((longlong)param_1 + 0x1f7) = 0x10000;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  *(undefined1 *)((longlong)param_1 + 0x20b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1ff) = 1;
  *(undefined8 *)((longlong)param_1 + 0x203) = 1;
  return param_1;
}


/*
 * FUN_140009a68 at 140009a68
 * undefined __fastcall FUN_140009a68(longlong param_1)
 * Address ranges: 140009a68-140009b55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140009a68(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x260) = 0x1010101;
  *(undefined4 *)(param_1 + 0x264) = 0x1010101;
  *(undefined4 *)(param_1 + 0x268) = 0x1010101;
  *(undefined4 *)(param_1 + 0x26c) = 0x1010101;
  *(undefined4 *)(param_1 + 0x270) = 0x1010101;
  *(undefined4 *)(param_1 + 0x274) = 0x1010101;
  *(undefined4 *)(param_1 + 0x278) = 0x1010101;
  *(undefined4 *)(param_1 + 0x27c) = 0x1010101;
  *(undefined4 *)(param_1 + 0x280) = 0x1010101;
  *(undefined4 *)(param_1 + 0x284) = 0x1010101;
  *(undefined4 *)(param_1 + 0x288) = 0x1010101;
  *(undefined4 *)(param_1 + 0x28c) = 0x1010101;
  *(undefined4 *)(param_1 + 0x290) = 0x1010101;
  *(undefined4 *)(param_1 + 0x294) = 0x1010101;
  *(undefined4 *)(param_1 + 0x298) = 0x1010101;
  *(undefined4 *)(param_1 + 0x29c) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2a0) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2a4) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2a8) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2ac) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2b0) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2b4) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2b8) = 0x1010101;
  *(undefined1 *)(param_1 + 700) = 1;
  return;
}


/*
 * FUN_140009b58 at 140009b58
 * longlong __fastcall FUN_140009b58(ulonglong param_1, byte * param_2)
 * Address ranges: 140009b58-140009c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


longlong FUN_140009b58(ulonglong param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulonglong local_res8;
  char local_408 [1024];
  
  local_res8 = param_1;
  FUN_14002511c(local_408,0,0x400);
  local_res8 = local_res8 & 0xffffffff00000000;
  iVar2 = FUN_1400242b4(param_2,(byte *)"%d %s",&local_res8,local_408);
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      return 0;
    }
    pcVar3 = local_408;
    cVar1 = local_408[0];
    while (cVar1 != '\0') {
      iVar2 = FUN_140024604((int)*pcVar3);
      *pcVar3 = (char)iVar2;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    if (((local_408[0] == 'k') && (local_408[1] == '\0')) ||
       ((local_408[0] == 'k' && ((local_408[1] == 'b' && (local_408[2] == '\0')))))) {
      return (longlong)(int)local_res8 << 10;
    }
    if ((local_408[0] != 'm') ||
       ((local_408[1] != '\0' && ((local_408[1] != 'b' || (local_408[2] != '\0')))))) {
      if (local_408[0] != 'g') {
        return 0;
      }
      if (local_408[1] != '\0') {
        if (local_408[1] != 'b') {
          return 0;
        }
        if (local_408[2] != '\0') {
          return 0;
        }
      }
      return (longlong)(int)local_res8 << 0x1e;
    }
  }
  return (longlong)(int)local_res8 << 0x14;
}


/*
 * FUN_140009c70 at 140009c70
 * undefined4 __fastcall FUN_140009c70(ulonglong param_1, byte * param_2)
 * Address ranges: 140009c70-140009d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_140009c70(ulonglong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong local_res8;
  byte local_408 [1024];
  
  local_res8 = param_1;
  FUN_14002511c(local_408,0,0x400);
  local_res8 = local_res8 & 0xffffffff00000000;
  iVar3 = FUN_1400242b4(param_2,(byte *)"%d %s",&local_res8,local_408);
  if (iVar3 == 2) {
    pbVar4 = local_408;
    bVar2 = local_408[0];
    bVar1 = local_408[0];
    while (bVar1 != 0) {
      local_408[0] = bVar2;
      iVar3 = FUN_140024604((int)(char)*pbVar4);
      *pbVar4 = (byte)iVar3;
      pbVar4 = pbVar4 + 1;
      bVar2 = local_408[0];
      bVar1 = *pbVar4;
    }
    iVar3 = FUN_140024ce8(local_408,&DAT_1400281fc);
    if (((iVar3 != 0) && (iVar3 = FUN_140024ce8(local_408,&DAT_140028200), iVar3 != 0)) &&
       ((bVar2 != 0x73 || (local_408[1] != '\0')))) {
      return 0;
    }
  }
  return (undefined4)local_res8;
}


/*
 * FUN_140009d3c at 140009d3c
 * undefined __fastcall FUN_140009d3c(longlong param_1)
 * Address ranges: 140009d3c-140009f34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140009d3c(longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  ulonglong uVar3;
  
  uVar3 = -(ulonglong)(param_1 != 0) & param_1 + 0x88U;
  puVar2 = FUN_140010000(3,uVar3);
  *(undefined **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) = puVar2;
  cVar1 = (**(code **)(**(longlong **)
                         (param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) + 0x18))();
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar2 = FUN_140010000(1,uVar3);
  *(undefined **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) = puVar2;
  cVar1 = (**(code **)(**(longlong **)
                         (param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) + 0x18))();
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar2 = FUN_140010000(2,uVar3);
  *(undefined **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) = puVar2;
  cVar1 = (**(code **)(**(longlong **)
                         (param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) + 0x18))();
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar2 = FUN_140010000(4,uVar3);
  *(undefined **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) = puVar2;
  cVar1 = (**(code **)(**(longlong **)
                         (param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) + 0x18))();
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar2 = FUN_140010000(5,uVar3);
  *(undefined **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) = puVar2;
  cVar1 = (**(code **)(**(longlong **)
                         (param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) + 0x18))();
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  puVar2 = FUN_140010000(6,uVar3);
  *(undefined **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) = puVar2;
  cVar1 = (**(code **)(**(longlong **)
                         (param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) + 0x18))();
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1d70 + (ulonglong)*(uint *)(param_1 + 0x1db0) * 8) +
                0x20))();
    *(int *)(param_1 + 0x1db0) = *(int *)(param_1 + 0x1db0) + 1;
  }
  return;
}


/*
 * FUN_140009f38 at 140009f38
 * undefined __fastcall FUN_140009f38(longlong param_1, undefined8 param_2, wchar_t * param_3, ulonglong param_4)
 * Address ranges: 140009f38-140009faa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140009f38(longlong param_1,undefined8 param_2,wchar_t *param_3,ulonglong param_4)

{
  FUN_140007c8c(param_1 + 0x528,param_2,param_3);
  FUN_14000902c(param_1 + 0x660);
  FUN_140004c48(param_1 + 0x8f0,param_2,param_3,param_4);
  if (*(char *)(param_1 + 0x410) != '\0') {
    FUN_1400063f4(param_1 + 0xb80);
    FUN_1400088fc(param_1 + 0xe00,param_2,param_3,param_4);
    FUN_1400034d8(param_1 + 0xf28,param_2,param_3,param_4);
    FUN_140002440(param_1 + 0x1168);
  }
  *(undefined1 *)(param_1 + 0x1d40) = 0;
  return;
}


/*
 * FUN_140009fac at 140009fac
 * undefined __fastcall FUN_140009fac(longlong param_1)
 * Address ranges: 140009fac-14000a156
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140009fac(longlong param_1)

{
  char cVar1;
  HWND pHVar2;
  BOOL bEnable;
  BOOL bEnable_00;
  bool bVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5b8) + 0x18))();
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x540),0x3eb);
  EnableWindow(pHVar2,(uint)(cVar1 != '\0'));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x540),0x3ec);
  EnableWindow(pHVar2,(uint)(cVar1 != '\0'));
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x18))();
  bVar3 = cVar1 != '\0';
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f9);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3fa);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f2);
  EnableWindow(pHVar2,(uint)bVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f7);
  EnableWindow(pHVar2,(uint)bVar3);
  bEnable_00 = 1;
  if ((cVar1 == '\0') || ((&DAT_140026e38)[*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x27)] != '\0')
     ) {
    bEnable = 0;
  }
  else {
    bEnable = 1;
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3fc);
  EnableWindow(pHVar2,bEnable);
  if ((cVar1 == '\0') || (**(int **)(param_1 + 0x6e0) == 1)) {
    bEnable_00 = 0;
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x678),0x3f1);
  EnableWindow(pHVar2,bEnable_00);
  FUN_1400055bc(param_1 + 0x8f0);
  if (*(char *)(param_1 + 0x410) != '\0') {
    FUN_14000700c(param_1 + 0xb80);
    (**(code **)(**(longlong **)(param_1 + 0xe80) + 0x18))();
    FUN_14000413c(param_1 + 0xf28);
    FUN_140002664(param_1 + 0x1168);
  }
  return;
}


/*
 * FUN_14000a158 at 14000a158
 * undefined __fastcall FUN_14000a158(longlong param_1, char param_2, ulonglong param_3)
 * Address ranges: 14000a158-14000a21a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000a158(longlong param_1,char param_2,ulonglong param_3)

{
  DWORD DVar1;
  HWND hWnd;
  longlong local_28 [4];
  
  if ((*(longlong *)(param_1 + 0x1ac8) != 0) && (param_2 != '\0')) {
    FUN_140023f00(local_28,*(undefined8 *)(param_1 + 0x1ad8));
    FUN_14001dbfc((undefined8 *)(param_1 + 0x1ae0),local_28,param_3);
    FUN_140024020(local_28);
    SetLastError(0);
    SendMessageW(*(HWND *)(param_1 + 0x1ac8),0x406,0,*(LPARAM *)(param_1 + -0x68));
    DVar1 = GetLastError();
    if ((DVar1 != 0) && (*(char *)(param_1 + 0x1d9c) != '\0')) {
      MessageBoxA(*(HWND *)(param_1 + -0x68),"Cannot communicate to the specified application!",
                  (LPCSTR)0x0,0x10);
      *(undefined1 *)(param_1 + 0x1d9c) = 0;
    }
  }
  hWnd = GetDlgItem(*(HWND *)(param_1 + -0x68),0x3ed);
                    /* WARNING: Could not recover jumptable at 0x00014000a214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(hWnd,1);
  return;
}


/*
 * FUN_14000a228 at 14000a228
 * undefined __fastcall FUN_14000a228(longlong param_1, LPWSTR param_2)
 * Address ranges: 14000a228-14000a2de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000a228(longlong param_1,LPWSTR param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  LPWSTR pWVar8;
  longlong lVar9;
  
  uVar6 = FUN_14000e460(param_1,0x402);
  uVar6 = FUN_14000e270(param_1,0x402,(ulonglong)uVar6);
  lVar9 = 2;
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x1b38) + 0x10 + (ulonglong)uVar6 * 0x218);
  pWVar8 = param_2;
  do {
    uVar5 = puVar7[1];
    *(undefined8 *)pWVar8 = *puVar7;
    *(undefined8 *)(pWVar8 + 4) = uVar5;
    uVar5 = puVar7[3];
    *(undefined8 *)(pWVar8 + 8) = puVar7[2];
    *(undefined8 *)(pWVar8 + 0xc) = uVar5;
    uVar5 = puVar7[5];
    *(undefined8 *)(pWVar8 + 0x10) = puVar7[4];
    *(undefined8 *)(pWVar8 + 0x14) = uVar5;
    uVar5 = puVar7[7];
    *(undefined8 *)(pWVar8 + 0x18) = puVar7[6];
    *(undefined8 *)(pWVar8 + 0x1c) = uVar5;
    uVar5 = puVar7[9];
    *(undefined8 *)(pWVar8 + 0x20) = puVar7[8];
    *(undefined8 *)(pWVar8 + 0x24) = uVar5;
    uVar5 = puVar7[0xb];
    *(undefined8 *)(pWVar8 + 0x28) = puVar7[10];
    *(undefined8 *)(pWVar8 + 0x2c) = uVar5;
    uVar2 = *(undefined4 *)((longlong)puVar7 + 100);
    uVar3 = *(undefined4 *)(puVar7 + 0xd);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x6c);
    *(undefined4 *)(pWVar8 + 0x30) = *(undefined4 *)(puVar7 + 0xc);
    *(undefined4 *)(pWVar8 + 0x32) = uVar2;
    *(undefined4 *)(pWVar8 + 0x34) = uVar3;
    *(undefined4 *)(pWVar8 + 0x36) = uVar4;
    puVar1 = puVar7 + 0xe;
    uVar2 = *(undefined4 *)((longlong)puVar7 + 0x74);
    uVar3 = *(undefined4 *)(puVar7 + 0xf);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x7c);
    puVar7 = puVar7 + 0x10;
    *(undefined4 *)(pWVar8 + 0x38) = *(undefined4 *)puVar1;
    *(undefined4 *)(pWVar8 + 0x3a) = uVar2;
    *(undefined4 *)(pWVar8 + 0x3c) = uVar3;
    *(undefined4 *)(pWVar8 + 0x3e) = uVar4;
    pWVar8 = pWVar8 + 0x40;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined4 *)pWVar8 = *(undefined4 *)puVar7;
                    /* WARNING: Could not recover jumptable at 0x00014000a2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PathAppendW(param_2,L"dgVoodoo.conf");
  return;
}


/*
 * FUN_14000a2e0 at 14000a2e0
 * undefined __fastcall FUN_14000a2e0(longlong param_1)
 * Address ranges: 14000a2e0-14000a706
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000a2e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  LPARAM LVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  char cVar16;
  uint uVar17;
  DWORD DVar18;
  HWND pHVar19;
  LRESULT LVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  longlong lVar24;
  uint local_508 [132];
  undefined8 local_2f8 [8];
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined4 local_2ac;
  WCHAR local_248 [268];
  
  if (*(char *)(param_1 + 0x1e28) == '\0') {
    return;
  }
  if (*(HWND *)(param_1 + 0x1b48) != (HWND)0x0) {
    SendMessageW(*(HWND *)(param_1 + 0x1b48),0x402,0,*(LPARAM *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x1b50) = 0;
    *(undefined8 *)(param_1 + 7000) = 0;
    *(undefined8 *)(param_1 + 0x1b48) = 0;
  }
  uVar17 = FUN_14000e460(param_1,0x402);
  uVar17 = FUN_14000e270(param_1,0x402,(ulonglong)uVar17);
  iVar2 = *(int *)((ulonglong)uVar17 * 0x218 + *(longlong *)(param_1 + 0x1b38));
  pHVar19 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  EnableWindow(pHVar19,(uint)(iVar2 == 0));
  FUN_1400098a8((undefined8 *)local_508);
  local_2b4 = 0xffffffffffffffff;
  local_2ac = 0xffffffff;
  FUN_14002511c((undefined1 *)local_2f8,0,0x40);
  FUN_140009a68((longlong)local_508);
  local_2b8 = *(undefined4 *)(param_1 + 0x1db0);
  FUN_140024620(local_2f8,(undefined8 *)(param_1 + 0x1d70),0x40);
  uVar17 = FUN_14000e460(param_1,0x402);
  uVar17 = FUN_14000e270(param_1,0x402,(ulonglong)uVar17);
  pHVar19 = *(HWND *)((ulonglong)uVar17 * 0x218 + 8 + *(longlong *)(param_1 + 0x1b38));
  if (pHVar19 != (HWND)0x0) {
    LVar20 = SendMessageW(pHVar19,0x40a,0,0);
    if ((int)LVar20 == 0) {
      LVar20 = SendMessageW(pHVar19,0x401,0,(LPARAM)*(HWND *)(param_1 + 0x18));
      if (LVar20 != 0) {
        LVar3 = *(LPARAM *)(param_1 + 0x18);
        DVar18 = GetCurrentProcessId();
        LVar20 = SendMessageW(pHVar19,0x403,(ulonglong)DVar18,LVar3);
        LVar3 = *(LPARAM *)(param_1 + 0x18);
        *(LRESULT *)(param_1 + 0x1b50) = LVar20;
        DVar18 = GetCurrentProcessId();
        LVar20 = SendMessageW(pHVar19,0x404,(ulonglong)DVar18,LVar3);
        *(LRESULT *)(param_1 + 7000) = LVar20;
        if ((*(longlong *)(param_1 + 0x1b50) != 0) && (LVar20 != 0)) {
          *(HWND *)(param_1 + 0x1b48) = pHVar19;
          LVar20 = SendMessageW(pHVar19,0x405,0,*(LPARAM *)(param_1 + 0x18));
          if (LVar20 == 0) goto LAB_14000a566;
          cVar16 = FUN_140014680((int *)local_508,*(undefined8 *)(param_1 + 0x1b50),
                                 (undefined4 *)(-(ulonglong)(param_1 != 0) & param_1 + 0x88U));
          goto LAB_14000a55e;
        }
      }
      MessageBoxA(*(HWND *)(param_1 + 0x18),"Cannot attach to the specified application!",
                  (LPCSTR)0x0,0x10);
      FUN_14000e4a0(param_1,0x402,0);
    }
    else {
      cVar16 = '\0';
      MessageBoxA(*(HWND *)(param_1 + 0x18),
                  "Another instance of setup is already attached to this application!",(LPCSTR)0x0,
                  0x10);
      FUN_14000e4a0(param_1,0x402,0);
LAB_14000a55e:
      if (cVar16 != '\0') goto LAB_14000a62b;
    }
  }
LAB_14000a566:
  FUN_14000a228(param_1,local_248);
  cVar16 = FUN_140014464((int *)local_508,local_248,
                         (undefined4 *)(-(ulonglong)(param_1 != 0) & param_1 + 0x88U));
  if (cVar16 == '\0') {
    FUN_14002511c((undefined1 *)local_248,0,0x20c);
    puVar21 = FUN_1400098a8((undefined8 *)local_248);
    lVar24 = 4;
    puVar15 = local_508;
    do {
      puVar23 = puVar15;
      puVar22 = puVar21;
      uVar11 = puVar22[1];
      *(undefined8 *)puVar23 = *puVar22;
      *(undefined8 *)(puVar23 + 2) = uVar11;
      uVar11 = puVar22[3];
      *(undefined8 *)(puVar23 + 4) = puVar22[2];
      *(undefined8 *)(puVar23 + 6) = uVar11;
      uVar11 = puVar22[5];
      *(undefined8 *)(puVar23 + 8) = puVar22[4];
      *(undefined8 *)(puVar23 + 10) = uVar11;
      uVar11 = puVar22[7];
      *(undefined8 *)(puVar23 + 0xc) = puVar22[6];
      *(undefined8 *)(puVar23 + 0xe) = uVar11;
      uVar11 = puVar22[9];
      *(undefined8 *)(puVar23 + 0x10) = puVar22[8];
      *(undefined8 *)(puVar23 + 0x12) = uVar11;
      uVar11 = puVar22[0xb];
      *(undefined8 *)(puVar23 + 0x14) = puVar22[10];
      *(undefined8 *)(puVar23 + 0x16) = uVar11;
      uVar11 = puVar22[0xd];
      *(undefined8 *)(puVar23 + 0x18) = puVar22[0xc];
      *(undefined8 *)(puVar23 + 0x1a) = uVar11;
      uVar11 = puVar22[0xf];
      *(undefined8 *)(puVar23 + 0x1c) = puVar22[0xe];
      *(undefined8 *)(puVar23 + 0x1e) = uVar11;
      lVar24 = lVar24 + -1;
      puVar21 = puVar22 + 0x10;
      puVar15 = puVar23 + 0x20;
    } while (lVar24 != 0);
    uVar11 = *(undefined8 *)((longlong)puVar22 + 0x84);
    *(undefined8 *)(puVar23 + 0x1f) = *(undefined8 *)((longlong)puVar22 + 0x7c);
    *(undefined8 *)(puVar23 + 0x21) = uVar11;
  }
  else {
    FUN_14001dcd4(local_508);
  }
LAB_14000a62b:
  if (*(int *)(param_1 + 0x1db8) != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x1d70 + (longlong)*(int *)(param_1 + 0x1db8) * 8) + 0x20
                ))();
  }
  lVar24 = 5;
  puVar21 = (undefined8 *)(param_1 + 0x1b60);
  puVar15 = local_508;
  do {
    puVar23 = puVar15;
    puVar22 = puVar21;
    uVar11 = *(undefined8 *)(puVar23 + 2);
    uVar12 = *(undefined8 *)(puVar23 + 4);
    uVar13 = *(undefined8 *)(puVar23 + 6);
    *puVar22 = *(undefined8 *)puVar23;
    puVar22[1] = uVar11;
    uVar11 = *(undefined8 *)(puVar23 + 8);
    uVar14 = *(undefined8 *)(puVar23 + 10);
    puVar22[2] = uVar12;
    puVar22[3] = uVar13;
    uVar12 = *(undefined8 *)(puVar23 + 0xc);
    uVar13 = *(undefined8 *)(puVar23 + 0xe);
    puVar22[4] = uVar11;
    puVar22[5] = uVar14;
    uVar11 = *(undefined8 *)(puVar23 + 0x10);
    uVar14 = *(undefined8 *)(puVar23 + 0x12);
    puVar22[6] = uVar12;
    puVar22[7] = uVar13;
    uVar12 = *(undefined8 *)(puVar23 + 0x14);
    uVar13 = *(undefined8 *)(puVar23 + 0x16);
    puVar22[8] = uVar11;
    puVar22[9] = uVar14;
    uVar11 = *(undefined8 *)(puVar23 + 0x18);
    uVar14 = *(undefined8 *)(puVar23 + 0x1a);
    puVar22[10] = uVar12;
    puVar22[0xb] = uVar13;
    uVar12 = *(undefined8 *)(puVar23 + 0x1c);
    uVar13 = *(undefined8 *)(puVar23 + 0x1e);
    puVar22[0xc] = uVar11;
    puVar22[0xd] = uVar14;
    puVar22[0xe] = uVar12;
    puVar22[0xf] = uVar13;
    lVar24 = lVar24 + -1;
    puVar21 = puVar22 + 0x10;
    puVar15 = puVar23 + 0x20;
  } while (lVar24 != 0);
  uVar11 = *(undefined8 *)(puVar23 + 0x22);
  plVar1 = (longlong *)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(puVar23 + 0x24);
  uVar13 = *(undefined8 *)(puVar23 + 0x26);
  puVar22[0x10] = *(undefined8 *)(puVar23 + 0x20);
  puVar22[0x11] = uVar11;
  uVar17 = puVar23[0x28];
  uVar4 = puVar23[0x29];
  uVar5 = puVar23[0x2a];
  uVar6 = puVar23[0x2b];
  puVar22[0x12] = uVar12;
  puVar22[0x13] = uVar13;
  uVar7 = puVar23[0x2c];
  uVar8 = puVar23[0x2d];
  uVar9 = puVar23[0x2e];
  uVar10 = puVar23[0x2f];
  *(uint *)(puVar22 + 0x14) = uVar17;
  *(uint *)((longlong)puVar22 + 0xa4) = uVar4;
  *(uint *)(puVar22 + 0x15) = uVar5;
  *(uint *)((longlong)puVar22 + 0xac) = uVar6;
  *(uint *)(puVar22 + 0x16) = uVar7;
  *(uint *)((longlong)puVar22 + 0xb4) = uVar8;
  *(uint *)(puVar22 + 0x17) = uVar9;
  *(uint *)((longlong)puVar22 + 0xbc) = uVar10;
  (**(code **)*plVar1)(plVar1);
  (**(code **)(*plVar1 + 8))(plVar1);
  pHVar19 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ed);
  EnableWindow(pHVar19,0);
  *(undefined1 *)(param_1 + 0x1e1c) = 1;
  return;
}


/*
 * FUN_14000a708 at 14000a708
 * uint __fastcall FUN_14000a708(longlong param_1, ushort * param_2)
 * Address ranges: 14000a708-14000a806
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_14000a708(longlong param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  LPWSTR pWVar3;
  LPWSTR pWVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x1b40);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = FUN_14000e270(param_1,0x402,(ulonglong)uVar6);
      if (uVar2 < uVar1) {
        uVar5 = 0;
        lVar7 = (ulonglong)uVar2 * 0x218 + *(longlong *)(param_1 + 0x1b38);
        pWVar3 = CharUpperW((LPWSTR)(ulonglong)*(ushort *)(lVar7 + 0x10));
        pWVar4 = CharUpperW((LPWSTR)(ulonglong)*param_2);
        if (pWVar3 == pWVar4) {
          do {
            if (*(short *)(lVar7 + 0x10 + uVar5 * 2) == 0) break;
            uVar5 = (ulonglong)((int)uVar5 + 1);
            pWVar3 = CharUpperW((LPWSTR)(ulonglong)*(ushort *)(lVar7 + 0x10 + uVar5 * 2));
            pWVar4 = CharUpperW((LPWSTR)(ulonglong)param_2[uVar5]);
          } while (pWVar3 == pWVar4);
        }
        if ((*(short *)(lVar7 + 0x10 + uVar5 * 2) == 0) && (param_2[uVar5] == 0)) {
          return uVar6;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return 0xffffffff;
}


/*
 * FUN_14000a808 at 14000a808
 * undefined __fastcall FUN_14000a808(longlong param_1, uint param_2, char param_3)
 * Address ranges: 14000a808-14000a9b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000a808(longlong param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  LRESULT LVar5;
  HWND pHVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar10 = *(uint *)(param_1 + 0x1b40);
  uVar3 = FUN_14000e270(param_1,0x402,(ulonglong)param_2);
  if (uVar3 < uVar10) {
    uVar10 = *(uint *)(param_1 + 0x1b40);
    if (uVar3 < uVar10) {
      uVar12 = uVar3 + 1;
      if (uVar12 < uVar10) {
        do {
          lVar9 = *(longlong *)(param_1 + 0x1b38);
          lVar8 = (ulonglong)(uVar12 - 1) * 0x218;
          lVar11 = (ulonglong)uVar12 * 0x218;
          puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar8);
          *(undefined4 *)(lVar9 + lVar8) = *(undefined4 *)(lVar9 + lVar11);
          *(undefined8 *)(lVar9 + 8 + lVar8) = *(undefined8 *)(lVar9 + 8 + lVar11);
          puVar4 = (undefined8 *)(lVar9 + 0x10 + lVar11);
          lVar9 = 2;
          do {
            uVar2 = puVar4[1];
            *puVar7 = *puVar4;
            puVar7[1] = uVar2;
            uVar2 = puVar4[3];
            puVar7[2] = puVar4[2];
            puVar7[3] = uVar2;
            uVar2 = puVar4[5];
            puVar7[4] = puVar4[4];
            puVar7[5] = uVar2;
            uVar2 = puVar4[7];
            puVar7[6] = puVar4[6];
            puVar7[7] = uVar2;
            uVar2 = puVar4[9];
            puVar7[8] = puVar4[8];
            puVar7[9] = uVar2;
            uVar2 = puVar4[0xb];
            puVar7[10] = puVar4[10];
            puVar7[0xb] = uVar2;
            uVar2 = puVar4[0xd];
            puVar7[0xc] = puVar4[0xc];
            puVar7[0xd] = uVar2;
            puVar1 = puVar4 + 0xe;
            uVar2 = puVar4[0xf];
            puVar4 = puVar4 + 0x10;
            puVar7[0xe] = *puVar1;
            puVar7[0xf] = uVar2;
            puVar7 = puVar7 + 0x10;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          uVar12 = uVar12 + 1;
          *(undefined4 *)puVar7 = *(undefined4 *)puVar4;
          uVar10 = *(uint *)(param_1 + 0x1b40);
        } while (uVar12 < uVar10);
      }
      *(uint *)(param_1 + 0x1b40) = uVar10 - 1;
    }
    uVar10 = 0;
    LVar5 = FUN_14000e230(param_1,0x402);
    if ((int)LVar5 != 0) {
      do {
        uVar12 = FUN_14000e270(param_1,0x402,(ulonglong)uVar10);
        if (uVar3 < uVar12) {
          pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
          SendMessageW(pHVar6,0x151,(ulonglong)uVar10,(ulonglong)(uVar12 - 1));
        }
        uVar10 = uVar10 + 1;
        LVar5 = FUN_14000e230(param_1,0x402);
      } while (uVar10 < (uint)LVar5);
    }
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
    SendMessageA(pHVar6,0x144,(ulonglong)param_2,0);
    if (param_3 == '\0') {
      FUN_14000e4a0(param_1,0x402,0);
      FUN_14000a2e0(param_1);
    }
  }
  return;
}


/*
 * FUN_14000a9b8 at 14000a9b8
 * undefined __fastcall FUN_14000a9b8(longlong param_1, ushort * param_2, longlong param_3, char param_4)
 * Address ranges: 14000a9b8-14000ad32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000a9b8(longlong param_1,ushort *param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  LPWSTR pWVar9;
  LPWSTR pWVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  HWND hWnd;
  longlong lVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined8 local_248 [66];
  
  uVar16 = 0;
  uVar15 = 0;
  pWVar9 = CharUpperW((LPWSTR)(ulonglong)*(ushort *)(param_1 + 0x288));
  pWVar10 = CharUpperW((LPWSTR)(ulonglong)*param_2);
  if (pWVar10 == pWVar9) {
    do {
      if (param_2[uVar16] == 0) break;
      uVar16 = (ulonglong)((int)uVar16 + 1);
      pWVar9 = CharUpperW((LPWSTR)(ulonglong)*(ushort *)(param_1 + 0x288 + uVar16 * 2));
      pWVar10 = CharUpperW((LPWSTR)(ulonglong)param_2[uVar16]);
    } while (pWVar10 == pWVar9);
  }
  bVar6 = false;
  if ((param_2[uVar16] == 0) && (*(short *)(param_1 + 0x288 + uVar16 * 2) == 0)) {
    bVar6 = true;
    uVar15 = 1;
  }
  bVar19 = false;
  if (*(int *)(param_1 + 0x1b40) != 0) {
    uVar7 = FUN_14000e270(param_1,0x402,0);
    bVar19 = *(int *)((ulonglong)uVar7 * 0x218 + *(longlong *)(param_1 + 0x1b38)) == 1;
  }
  lVar18 = 2;
  puVar13 = local_248;
  lVar11 = 2;
  if (param_3 != 0) {
    uVar15 = 2;
  }
  do {
    uVar12 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0xc);
    *puVar13 = *(undefined8 *)param_2;
    puVar13[1] = uVar12;
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x14);
    puVar13[2] = uVar3;
    puVar13[3] = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(param_2 + 0x1c);
    puVar13[4] = uVar12;
    puVar13[5] = uVar5;
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x24);
    puVar13[6] = uVar3;
    puVar13[7] = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x2c);
    puVar13[8] = uVar12;
    puVar13[9] = uVar5;
    uVar12 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x34);
    puVar13[10] = uVar3;
    puVar13[0xb] = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_2 + 0x3c);
    param_2 = param_2 + 0x40;
    puVar13[0xc] = uVar12;
    puVar13[0xd] = uVar5;
    puVar13[0xe] = uVar3;
    puVar13[0xf] = uVar4;
    puVar13 = puVar13 + 0x10;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *(undefined4 *)puVar13 = *(undefined4 *)param_2;
  iVar8 = *(int *)(param_1 + 0x1b44);
  if (*(int *)(param_1 + 0x1b40) == iVar8) {
    uVar7 = 0x10;
    if (iVar8 != 0) {
      uVar7 = iVar8 * 2;
    }
    uVar16 = CONCAT44(0,uVar7);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16;
    uVar12 = SUB168(ZEXT816(0x218) * auVar2,0);
    if (SUB168(ZEXT816(0x218) * auVar2,8) != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    puVar13 = (undefined8 *)thunk_FUN_14002423c(uVar12);
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    puVar17 = puVar13;
    if (uVar7 != 0) {
      do {
        *(undefined4 *)puVar17 = 0;
        puVar17[1] = 0;
        FUN_14002511c((undefined1 *)(puVar17 + 2),0,0x208);
        puVar17 = puVar17 + 0x43;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    FUN_140024620(puVar13,*(undefined8 **)(param_1 + 0x1b38),
                  (ulonglong)*(uint *)(param_1 + 0x1b44) * 0x218);
    FUN_140024260(*(LPVOID *)(param_1 + 0x1b38));
    *(uint *)(param_1 + 0x1b44) = uVar7;
    *(undefined8 **)(param_1 + 0x1b38) = puVar13;
  }
  iVar8 = 0;
  lVar11 = *(longlong *)(param_1 + 0x1b38);
  lVar14 = (ulonglong)*(uint *)(param_1 + 0x1b40) * 0x218;
  *(uint *)(param_1 + 0x1b40) = *(uint *)(param_1 + 0x1b40) + 1;
  puVar17 = (undefined8 *)(lVar11 + 0x10 + lVar14);
  *(undefined4 *)(lVar14 + lVar11) = uVar15;
  *(longlong *)(lVar14 + 8 + lVar11) = param_3;
  puVar13 = local_248;
  do {
    uVar12 = puVar13[1];
    *puVar17 = *puVar13;
    puVar17[1] = uVar12;
    uVar12 = puVar13[3];
    puVar17[2] = puVar13[2];
    puVar17[3] = uVar12;
    uVar12 = puVar13[5];
    puVar17[4] = puVar13[4];
    puVar17[5] = uVar12;
    uVar12 = puVar13[7];
    puVar17[6] = puVar13[6];
    puVar17[7] = uVar12;
    uVar12 = puVar13[9];
    puVar17[8] = puVar13[8];
    puVar17[9] = uVar12;
    uVar12 = puVar13[0xb];
    puVar17[10] = puVar13[10];
    puVar17[0xb] = uVar12;
    uVar12 = puVar13[0xd];
    puVar17[0xc] = puVar13[0xc];
    puVar17[0xd] = uVar12;
    puVar1 = puVar13 + 0xe;
    uVar12 = puVar13[0xf];
    puVar13 = puVar13 + 0x10;
    puVar17[0xe] = *puVar1;
    puVar17[0xf] = uVar12;
    puVar17 = puVar17 + 0x10;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  *(undefined4 *)puVar17 = *(undefined4 *)puVar13;
  uVar16 = (ulonglong)(*(int *)(param_1 + 0x1b40) - 1);
  if (bVar6) {
    FUN_14000e2a0(param_1,lVar14,puVar17,(LPARAM)local_248,uVar16);
  }
  else {
    uVar16 = FUN_14000e3d0(param_1,0x402,(LPARAM)local_248,uVar16);
    iVar8 = (int)uVar16;
    if ((iVar8 == 0) && (bVar19)) {
      uVar16 = FUN_14000e270(param_1,0x402,1);
      hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
      uVar12 = 0x144;
      SendMessageA(hWnd,0x144,1,0);
      uVar16 = uVar16 & 0xffffffff;
      FUN_14000e2a0(param_1,uVar12,uVar16,uVar16 * 0x218 + *(longlong *)(param_1 + 0x1b38) + 0x10,
                    uVar16);
      iVar8 = 1;
    }
  }
  if ((param_4 != '\0') && (iVar8 != -1)) {
    FUN_14000e4a0(param_1,0x402,iVar8);
  }
  return;
}


/*
 * FUN_14000ad34 at 14000ad34
 * undefined __fastcall FUN_14000ad34(longlong param_1)
 * Address ranges: 14000ad34-14000ae88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000ad34(longlong param_1)

{
  DWORD DVar1;
  int iVar2;
  HWND hWnd;
  LRESULT LVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar7;
  WCHAR local_838 [1028];
  ulonglong uVar6;
  
  hWnd = FindWindowExW((HWND)0xfffffffffffffffd,(HWND)0x0,L"DGVOODOOCOMM",(LPCWSTR)0x0);
  do {
    if (hWnd == (HWND)0x0) {
      return;
    }
    SetLastError(0);
    SendMessageW(hWnd,0x407,0,0);
    DVar1 = GetLastError();
    uVar5 = 0;
    if (DVar1 == 0) {
      do {
        uVar4 = (int)uVar5 + 1;
        uVar6 = (ulonglong)uVar4;
        local_838[uVar5] = L"[Running] "[uVar5];
        uVar5 = uVar6;
      } while (L"[Running] "[uVar6] != L'\0');
      local_838[uVar6] = L'\0';
      iVar2 = GetWindowTextW(hWnd,local_838 + uVar6,0x400 - uVar4);
      if (hWnd == (HWND)0x0) {
        uVar4 = FUN_14000a708(param_1,(ushort *)local_838);
        if (uVar4 != 0xffffffff) goto LAB_14000ae56;
      }
      else {
        LVar3 = SendMessageW(hWnd,0x40a,0,0);
        if ((int)LVar3 != 0) {
          uVar5 = 0;
          do {
            uVar7 = (int)uVar5 + 1;
            local_838[iVar2 + uVar4 + (int)uVar5] = L" (already attached)"[uVar5];
            uVar5 = (ulonglong)uVar7;
          } while (L" (already attached)"[uVar7] != L'\0');
          local_838[iVar2 + uVar4 + uVar7] = L'\0';
        }
      }
      FUN_14000a9b8(param_1,(ushort *)local_838,(longlong)hWnd,'\0');
    }
LAB_14000ae56:
    hWnd = FindWindowExW((HWND)0xfffffffffffffffd,hWnd,L"DGVOODOOCOMM",(LPCWSTR)0x0);
  } while( true );
}


/*
 * FUN_14000ae8c at 14000ae8c
 * undefined __fastcall FUN_14000ae8c(longlong param_1, uint param_2, int * param_3)
 * Address ranges: 14000ae8c-14000b104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000ae8c(longlong param_1,uint param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  LPARAM lParam;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  HWND hWnd;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 local_58;
  int local_54;
  uint local_50;
  
  uVar15 = 0;
  do {
    if (param_2 <= (uint)(&DAT_140028568)[uVar15 * 4]) goto LAB_14000aece;
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
  } while (uVar14 < 3);
  uVar15 = (ulonglong)uVar14;
  if (uVar14 == 3) {
    uVar15 = 2;
  }
LAB_14000aece:
  uVar14 = *(uint *)(param_1 + 0x13c);
  plVar1 = (longlong *)(param_1 + 0x130);
  uVar6 = 0;
  local_58 = *(undefined4 *)(&DAT_14002856c + uVar15 * 0x10);
  local_54 = (&DAT_140028568)[uVar15 * 4];
  uVar15 = CONCAT44(local_58,local_54 << 0x10) + (ulonglong)param_2;
  local_50 = param_2;
  if (uVar14 != 0) {
    uVar10 = 0;
    uVar13 = uVar14;
    do {
      uVar6 = uVar13 + uVar10 >> 1;
      uVar11 = *(ulonglong *)(*plVar1 + (ulonglong)uVar6 * 0x20);
      uVar5 = uVar6;
      if (uVar11 <= uVar15) {
        if (uVar15 <= uVar11) break;
        uVar10 = uVar6 + 1;
        uVar6 = uVar10;
        uVar5 = uVar13;
      }
      uVar13 = uVar5;
    } while (uVar13 != uVar10);
    if ((uVar6 != uVar14) && (*(ulonglong *)((ulonglong)uVar6 * 0x20 + *plVar1) == uVar15))
    goto LAB_14000b00a;
  }
  if (uVar14 == *(uint *)(param_1 + 0x138)) {
    auVar4 = ZEXT816(0x20) * ZEXT416(*(uint *)(param_1 + 0x138) * 2);
    uVar7 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = thunk_FUN_14002423c(uVar7);
    if (lVar8 != 0) {
      uVar14 = 0;
      if (*(int *)(param_1 + 0x138) != 0) {
        do {
          lVar9 = *plVar1;
          uVar11 = (ulonglong)uVar14;
          uVar14 = uVar14 + 1;
          lVar12 = uVar11 * 0x20;
          puVar2 = (undefined8 *)(lVar9 + lVar12);
          uVar7 = puVar2[1];
          *(undefined8 *)(lVar12 + lVar8) = *puVar2;
          ((undefined8 *)(lVar12 + lVar8))[1] = uVar7;
          puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar12);
          uVar7 = puVar2[1];
          puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar8);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
        } while (uVar14 < *(uint *)(param_1 + 0x138));
      }
      FUN_140024260((LPVOID)*plVar1);
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) << 1;
      *plVar1 = lVar8;
    }
  }
  uVar14 = *(uint *)(param_1 + 0x13c);
  while (uVar6 < uVar14) {
    lVar8 = *plVar1;
    lVar9 = (ulonglong)(uVar14 - 1) * 0x20;
    puVar2 = (undefined8 *)(lVar8 + lVar9);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar8 + (ulonglong)uVar14 * 0x20);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar8 + 0x10 + (ulonglong)uVar14 * 0x20);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    uVar14 = uVar14 - 1;
  }
  FUN_14000ff10(plVar1,uVar6,uVar15,(ushort *)&local_58);
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
LAB_14000b00a:
  lParam = *(LPARAM *)((ulonglong)uVar6 * 0x20 + 0x18 + *plVar1);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  SendMessageA(hWnd,0x172,0,lParam);
  FUN_14000f960(param_1 + 0xb8,param_2,param_3);
  FUN_14000f960(param_1 + 0x510,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0x640,param_2,(int *)0x0);
  FUN_1400076e4(param_1 + 0x5a8);
  FUN_14000f960(param_1 + 0x770,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0xa00,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0xc90,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0xf08,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0x1040,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0x1278,param_2,(int *)0x0);
  FUN_14000f030((longlong *)(param_1 + 0x150));
  return;
}


/*
 * FUN_14000b108 at 14000b108
 * undefined __fastcall FUN_14000b108(longlong param_1, undefined8 param_2)
 * Address ranges: 14000b108-14000b1b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000b108(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 uStack_14;
  
  cVar4 = (char)param_2;
  local_28 = 0;
  local_24 = 1;
  local_44 = 1;
  local_1c = 0;
  uStack_14 = 0;
  local_48 = 0;
  local_20 = 2;
  local_40 = 2;
  local_3c = 0;
  uStack_34 = 0;
  uVar1 = *(uint *)(param_1 + 600) | 8;
  if (cVar4 == '\0') {
    uVar1 = *(uint *)(param_1 + 600) & 0xfffffff7;
  }
  uVar2 = uVar1 | 0x10;
  if (cVar4 == '\0') {
    uVar2 = uVar1 & 0xffffffef;
  }
  uVar1 = uVar2 | 0x20;
  if (cVar4 == '\0') {
    uVar1 = uVar2 & 0xffffffdf;
  }
  uVar2 = uVar1 | 0x40;
  if (cVar4 == '\0') {
    uVar2 = uVar1 & 0xffffffbf;
  }
  *(uint *)(param_1 + 600) = uVar2;
  puVar3 = &local_48;
  if (cVar4 != '\0') {
    puVar3 = &local_28;
  }
  FUN_14000e660(param_1,param_2,(longlong *)(param_1 + 0x150),puVar3[*(uint *)(param_1 + 0x260)]);
  return;
}


/*
 * FUN_14000b1b4 at 14000b1b4
 * undefined __fastcall FUN_14000b1b4(longlong param_1)
 * Address ranges: 14000b1b4-14000b628
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000b1b4(longlong param_1)

{
  ushort *puVar1;
  LPCWSTR pszPath;
  uint *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  DWORD DVar17;
  uint uVar18;
  ushort *puVar19;
  HWND pHVar20;
  undefined8 uVar21;
  LPVOID pvVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  LPCWSTR pWVar25;
  LPWSTR pWVar26;
  uint uVar27;
  uint *puVar28;
  longlong lVar29;
  uint uVar30;
  undefined4 *puVar31;
  longlong lVar32;
  undefined8 local_698 [4];
  WCHAR local_678 [264];
  WCHAR local_468 [264];
  int local_258 [134];
  
  lVar32 = 4;
  lVar29 = 4;
  puVar1 = (ushort *)(param_1 + 0x288);
  puVar19 = puVar1;
  pWVar26 = (LPWSTR)(param_1 + 0x1520);
  do {
    uVar21 = *(undefined8 *)(puVar19 + 4);
    uVar13 = *(undefined8 *)(puVar19 + 8);
    uVar14 = *(undefined8 *)(puVar19 + 0xc);
    *(undefined8 *)pWVar26 = *(undefined8 *)puVar19;
    *(undefined8 *)(pWVar26 + 4) = uVar21;
    uVar21 = *(undefined8 *)(puVar19 + 0x10);
    uVar15 = *(undefined8 *)(puVar19 + 0x14);
    *(undefined8 *)(pWVar26 + 8) = uVar13;
    *(undefined8 *)(pWVar26 + 0xc) = uVar14;
    uVar13 = *(undefined8 *)(puVar19 + 0x18);
    uVar14 = *(undefined8 *)(puVar19 + 0x1c);
    *(undefined8 *)(pWVar26 + 0x10) = uVar21;
    *(undefined8 *)(pWVar26 + 0x14) = uVar15;
    uVar21 = *(undefined8 *)(puVar19 + 0x20);
    uVar15 = *(undefined8 *)(puVar19 + 0x24);
    *(undefined8 *)(pWVar26 + 0x18) = uVar13;
    *(undefined8 *)(pWVar26 + 0x1c) = uVar14;
    uVar13 = *(undefined8 *)(puVar19 + 0x28);
    uVar14 = *(undefined8 *)(puVar19 + 0x2c);
    *(undefined8 *)(pWVar26 + 0x20) = uVar21;
    *(undefined8 *)(pWVar26 + 0x24) = uVar15;
    uVar5 = *(undefined4 *)(puVar19 + 0x30);
    uVar6 = *(undefined4 *)(puVar19 + 0x32);
    uVar7 = *(undefined4 *)(puVar19 + 0x34);
    uVar8 = *(undefined4 *)(puVar19 + 0x36);
    *(undefined8 *)(pWVar26 + 0x28) = uVar13;
    *(undefined8 *)(pWVar26 + 0x2c) = uVar14;
    uVar9 = *(undefined4 *)(puVar19 + 0x38);
    uVar10 = *(undefined4 *)(puVar19 + 0x3a);
    uVar11 = *(undefined4 *)(puVar19 + 0x3c);
    uVar12 = *(undefined4 *)(puVar19 + 0x3e);
    puVar19 = puVar19 + 0x40;
    *(undefined4 *)(pWVar26 + 0x30) = uVar5;
    *(undefined4 *)(pWVar26 + 0x32) = uVar6;
    *(undefined4 *)(pWVar26 + 0x34) = uVar7;
    *(undefined4 *)(pWVar26 + 0x36) = uVar8;
    *(undefined4 *)(pWVar26 + 0x38) = uVar9;
    *(undefined4 *)(pWVar26 + 0x3a) = uVar10;
    *(undefined4 *)(pWVar26 + 0x3c) = uVar11;
    *(undefined4 *)(pWVar26 + 0x3e) = uVar12;
    pWVar26 = pWVar26 + 0x40;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  *(undefined8 *)pWVar26 = *(undefined8 *)puVar19;
  PathAppendW((LPWSTR)(param_1 + 0x1520),L"dgVoodoo.conf");
  pszPath = (LPCWSTR)(param_1 + 0x1728);
  lVar29 = 4;
  puVar19 = puVar1;
  pWVar25 = pszPath;
  do {
    uVar21 = *(undefined8 *)(puVar19 + 4);
    uVar13 = *(undefined8 *)(puVar19 + 8);
    uVar14 = *(undefined8 *)(puVar19 + 0xc);
    *(undefined8 *)pWVar25 = *(undefined8 *)puVar19;
    *(undefined8 *)(pWVar25 + 4) = uVar21;
    uVar21 = *(undefined8 *)(puVar19 + 0x10);
    uVar15 = *(undefined8 *)(puVar19 + 0x14);
    *(undefined8 *)(pWVar25 + 8) = uVar13;
    *(undefined8 *)(pWVar25 + 0xc) = uVar14;
    uVar13 = *(undefined8 *)(puVar19 + 0x18);
    uVar14 = *(undefined8 *)(puVar19 + 0x1c);
    *(undefined8 *)(pWVar25 + 0x10) = uVar21;
    *(undefined8 *)(pWVar25 + 0x14) = uVar15;
    uVar21 = *(undefined8 *)(puVar19 + 0x20);
    uVar15 = *(undefined8 *)(puVar19 + 0x24);
    *(undefined8 *)(pWVar25 + 0x18) = uVar13;
    *(undefined8 *)(pWVar25 + 0x1c) = uVar14;
    uVar13 = *(undefined8 *)(puVar19 + 0x28);
    uVar14 = *(undefined8 *)(puVar19 + 0x2c);
    *(undefined8 *)(pWVar25 + 0x20) = uVar21;
    *(undefined8 *)(pWVar25 + 0x24) = uVar15;
    uVar5 = *(undefined4 *)(puVar19 + 0x30);
    uVar6 = *(undefined4 *)(puVar19 + 0x32);
    uVar7 = *(undefined4 *)(puVar19 + 0x34);
    uVar8 = *(undefined4 *)(puVar19 + 0x36);
    *(undefined8 *)(pWVar25 + 0x28) = uVar13;
    *(undefined8 *)(pWVar25 + 0x2c) = uVar14;
    uVar9 = *(undefined4 *)(puVar19 + 0x38);
    uVar10 = *(undefined4 *)(puVar19 + 0x3a);
    uVar11 = *(undefined4 *)(puVar19 + 0x3c);
    uVar12 = *(undefined4 *)(puVar19 + 0x3e);
    puVar19 = puVar19 + 0x40;
    *(undefined4 *)(pWVar25 + 0x30) = uVar5;
    *(undefined4 *)(pWVar25 + 0x32) = uVar6;
    *(undefined4 *)(pWVar25 + 0x34) = uVar7;
    *(undefined4 *)(pWVar25 + 0x36) = uVar8;
    *(undefined4 *)(pWVar25 + 0x38) = uVar9;
    *(undefined4 *)(pWVar25 + 0x3a) = uVar10;
    *(undefined4 *)(pWVar25 + 0x3c) = uVar11;
    *(undefined4 *)(pWVar25 + 0x3e) = uVar12;
    pWVar25 = pWVar25 + 0x40;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  *(undefined8 *)pWVar25 = *(undefined8 *)puVar19;
  PathAppendW(pszPath,L"dgVoodooSetupPaths.dat");
  pHVar20 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
  SendMessageW(pHVar20,0x14b,0,0);
  FUN_140023fa0(local_698,pszPath,'\0');
  DVar17 = FUN_1400240a0((longlong)local_698);
  uVar30 = DVar17 / 0x208;
  if (0x800 < uVar30) {
    uVar30 = 0x800;
  }
  auVar4 = ZEXT816(2) * ZEXT416(uVar30 * 0x104);
  uVar21 = auVar4._0_8_;
  if (auVar4._8_8_ != 0) {
    uVar21 = 0xffffffffffffffff;
  }
  pvVar22 = (LPVOID)thunk_FUN_14002423c(uVar21);
  if (pvVar22 != (LPVOID)0x0) {
    FUN_140024260(*(LPVOID *)(param_1 + 0x1b38));
    *(undefined8 *)(param_1 + 0x1b38) = 0;
    *(undefined8 *)(param_1 + 0x1b40) = 0;
    FUN_1400240e0((longlong)local_698,uVar30 * 0x208,pvVar22,(DWORD *)0x0);
    uVar27 = 0;
    if (uVar30 != 0) {
      do {
        puVar19 = (ushort *)((longlong)pvVar22 + (ulonglong)(uVar27 * 0x104) * 2);
        uVar18 = FUN_14000a708(param_1,puVar19);
        if (uVar18 == 0xffffffff) {
          FUN_14000a9b8(param_1,puVar19,0,'\0');
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 < uVar30);
    }
    FUN_140024260(pvVar22);
  }
  FUN_140024020(local_698);
  FUN_14000ad34(param_1);
  uVar30 = FUN_14000a708(param_1,puVar1);
  if (uVar30 == 0xffffffff) {
    FUN_14000a9b8(param_1,puVar1,0,'\x01');
  }
  else {
    FUN_14000e4a0(param_1,0x402,uVar30);
  }
  FUN_14000a2e0(param_1);
  GetModuleFileNameW((HMODULE)0x0,local_678,0x104);
  GetModuleFileNameW((HMODULE)0x0,local_468,0x104);
  PathRemoveFileSpecW(local_678);
  PathRemoveFileSpecW(local_468);
  PathAppendW(local_468,L"dgVoodoo.conf");
  FUN_1400098a8((undefined8 *)local_258);
  uVar30 = 0;
  puVar31 = (undefined4 *)(-(ulonglong)(param_1 != 0) & param_1 + 0x88U);
  cVar16 = FUN_140014464(local_258,local_468,puVar31);
  if (cVar16 != '\0') {
    uVar30 = FUN_14000a708(param_1,(ushort *)local_678);
    if ((int)uVar30 < 0) {
      FUN_14000a9b8(param_1,(ushort *)local_678,0,'\x01');
      uVar30 = FUN_14000a708(param_1,(ushort *)local_678);
    }
    if ((int)uVar30 < 0) {
      uVar30 = 0;
    }
  }
  FUN_14000e4a0(param_1,0x402,uVar30);
  FUN_14000a228(param_1,(LPWSTR)(param_1 + 0x1930));
  puVar2 = (uint *)(param_1 + 0x1b60);
  cVar16 = FUN_140014464((int *)puVar2,(LPWSTR)(param_1 + 0x1930),puVar31);
  if (cVar16 == '\0') {
    FUN_14002511c((undefined1 *)local_258,0,0x20c);
    puVar23 = FUN_1400098a8((undefined8 *)local_258);
    do {
      puVar28 = puVar2;
      puVar24 = puVar23;
      uVar21 = puVar24[1];
      *(undefined8 *)puVar28 = *puVar24;
      *(undefined8 *)(puVar28 + 2) = uVar21;
      uVar21 = puVar24[3];
      *(undefined8 *)(puVar28 + 4) = puVar24[2];
      *(undefined8 *)(puVar28 + 6) = uVar21;
      uVar21 = puVar24[5];
      *(undefined8 *)(puVar28 + 8) = puVar24[4];
      *(undefined8 *)(puVar28 + 10) = uVar21;
      uVar21 = puVar24[7];
      *(undefined8 *)(puVar28 + 0xc) = puVar24[6];
      *(undefined8 *)(puVar28 + 0xe) = uVar21;
      uVar21 = puVar24[9];
      *(undefined8 *)(puVar28 + 0x10) = puVar24[8];
      *(undefined8 *)(puVar28 + 0x12) = uVar21;
      uVar21 = puVar24[0xb];
      *(undefined8 *)(puVar28 + 0x14) = puVar24[10];
      *(undefined8 *)(puVar28 + 0x16) = uVar21;
      uVar21 = puVar24[0xd];
      *(undefined8 *)(puVar28 + 0x18) = puVar24[0xc];
      *(undefined8 *)(puVar28 + 0x1a) = uVar21;
      uVar21 = puVar24[0xf];
      *(undefined8 *)(puVar28 + 0x1c) = puVar24[0xe];
      *(undefined8 *)(puVar28 + 0x1e) = uVar21;
      lVar32 = lVar32 + -1;
      puVar23 = puVar24 + 0x10;
      puVar2 = puVar28 + 0x20;
    } while (lVar32 != 0);
    uVar21 = *(undefined8 *)((longlong)puVar24 + 0x84);
    *(undefined8 *)(puVar28 + 0x1f) = *(undefined8 *)((longlong)puVar24 + 0x7c);
    *(undefined8 *)(puVar28 + 0x21) = uVar21;
  }
  else {
    FUN_14001dcd4(puVar2);
  }
  FUN_14000e4d0(param_1,0x402);
  uVar30 = FUN_14000e460(param_1,0x402);
  uVar30 = FUN_14000e270(param_1,0x402,(ulonglong)uVar30);
  iVar3 = *(int *)((ulonglong)uVar30 * 0x218 + *(longlong *)(param_1 + 0x1b38));
  pHVar20 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fb);
  EnableWindow(pHVar20,(uint)(iVar3 == 0));
  pHVar20 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ed);
                    /* WARNING: Could not recover jumptable at 0x00014000b622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnableWindow(pHVar20,0);
  return;
}


/*
 * FUN_14000b62c at 14000b62c
 * undefined4 __fastcall FUN_14000b62c(longlong param_1, undefined8 param_2, int param_3, undefined8 param_4, undefined8 * param_5)
 * Address ranges: 14000b62c-14000b67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_14000b62c(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  LRESULT LVar3;
  
  if ((param_3 == 0x4e) && (*(int *)(param_5 + 2) == -0x227)) {
    LVar3 = SendMessageW((HWND)*param_5,0x130b,0,0);
    uVar1 = FUN_14000ec20(param_1,*(int *)(param_5 + 1),(uint)LVar3);
    uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  else {
    uVar2 = in_EAX & 0xffffff00;
  }
  return uVar2;
}


/*
 * FUN_14000b680 at 14000b680
 * undefined8 __fastcall FUN_14000b680(longlong param_1)
 * Address ranges: 14000b680-14000be3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_14000b680(longlong param_1)

{
  longlong *plVar1;
  LPWSTR pszPath;
  LPARAM lParam;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  LPCWSTR pWVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  HWND pHVar16;
  HDWP pvVar17;
  HMODULE hInst;
  HANDLE lParam_00;
  short *psVar18;
  short *psVar19;
  HMENU hMenu;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  LPCWSTR pWVar23;
  uint uVar24;
  ulonglong uVar25;
  tagRECT local_368;
  tagRECT local_358;
  short local_348 [392];
  
  puVar11 = FUN_140023dc0((HMODULE)0x0,(LPCWSTR)0x79,L"RT_CUSTOM");
  uVar7 = FUN_140023e90((HMODULE)0x0,(LPCWSTR)0x79,L"RT_CUSTOM");
  if (((puVar11 != (undefined8 *)0x0) && (uVar7 != 0)) &&
     (puVar12 = (undefined8 *)thunk_FUN_14002423c((ulonglong)(uVar7 + 1)),
     puVar12 != (undefined8 *)0x0)) {
    FUN_140024620(puVar12,puVar11,(ulonglong)uVar7);
    *(undefined1 *)((ulonglong)uVar7 + (longlong)puVar12) = 0;
    *(undefined8 **)(param_1 + 0x1e20) = puVar12;
  }
  local_368.right = *(uint *)(param_1 + 0xd0);
  uVar7 = 0;
  do {
    if ((uint)local_368.right <= (uint)(&DAT_140028568)[(ulonglong)uVar7 * 4]) goto LAB_14000b729;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  if (uVar7 == 3) {
    uVar7 = 2;
  }
LAB_14000b729:
  plVar1 = (longlong *)(param_1 + 0x130);
  uVar8 = 0;
  local_368.top = (&DAT_140028568)[(ulonglong)uVar7 * 4];
  local_368.left = *(LONG *)(&DAT_14002856c + (ulonglong)uVar7 * 0x10);
  uVar7 = *(uint *)(param_1 + 0x13c);
  uVar25 = CONCAT44(local_368.left,local_368.top << 0x10) + (ulonglong)(uint)local_368.right;
  if (uVar7 == 0) {
LAB_14000b7ac:
    if (uVar7 == *(uint *)(param_1 + 0x138)) {
      auVar2 = ZEXT816(0x20) * ZEXT416(*(uint *)(param_1 + 0x138) * 2);
      uVar13 = auVar2._0_8_;
      if (auVar2._8_8_ != 0) {
        uVar13 = 0xffffffffffffffff;
      }
      lVar14 = thunk_FUN_14002423c(uVar13);
      if (lVar14 != 0) {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x138) != 0) {
          do {
            lVar15 = *plVar1;
            uVar21 = (ulonglong)uVar7;
            uVar7 = uVar7 + 1;
            lVar22 = uVar21 * 0x20;
            puVar11 = (undefined8 *)(lVar15 + lVar22);
            uVar13 = puVar11[1];
            *(undefined8 *)(lVar14 + lVar22) = *puVar11;
            ((undefined8 *)(lVar14 + lVar22))[1] = uVar13;
            puVar11 = (undefined8 *)(lVar15 + 0x10 + lVar22);
            uVar13 = puVar11[1];
            puVar12 = (undefined8 *)(lVar14 + 0x10 + lVar22);
            *puVar12 = *puVar11;
            puVar12[1] = uVar13;
          } while (uVar7 < *(uint *)(param_1 + 0x138));
        }
        FUN_140024260((LPVOID)*plVar1);
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) << 1;
        *plVar1 = lVar14;
      }
    }
    uVar7 = *(uint *)(param_1 + 0x13c);
    while (uVar8 < uVar7) {
      lVar14 = *plVar1;
      lVar15 = (ulonglong)(uVar7 - 1) * 0x20;
      puVar11 = (undefined8 *)(lVar14 + lVar15);
      uVar13 = puVar11[1];
      puVar12 = (undefined8 *)(lVar14 + (ulonglong)uVar7 * 0x20);
      *puVar12 = *puVar11;
      puVar12[1] = uVar13;
      puVar11 = (undefined8 *)(lVar14 + 0x10 + lVar15);
      uVar13 = puVar11[1];
      puVar12 = (undefined8 *)(lVar14 + 0x10 + (ulonglong)uVar7 * 0x20);
      *puVar12 = *puVar11;
      puVar12[1] = uVar13;
      uVar7 = uVar7 - 1;
    }
    FUN_14000ff10(plVar1,uVar8,uVar25,(ushort *)&local_368);
    *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  }
  else {
    uVar20 = 0;
    uVar24 = uVar7;
    do {
      uVar8 = uVar24 + uVar20 >> 1;
      uVar21 = *(ulonglong *)(*plVar1 + (ulonglong)uVar8 * 0x20);
      uVar6 = uVar8;
      if (uVar21 <= uVar25) {
        if (uVar25 <= uVar21) break;
        uVar20 = uVar8 + 1;
        uVar8 = uVar20;
        uVar6 = uVar24;
      }
      uVar24 = uVar6;
    } while (uVar24 != uVar20);
    if ((uVar8 == uVar7) || (*(ulonglong *)((ulonglong)uVar8 * 0x20 + *plVar1) != uVar25))
    goto LAB_14000b7ac;
  }
  lParam = *(LPARAM *)((ulonglong)uVar8 * 0x20 + 0x18 + *plVar1);
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  SendMessageA(pHVar16,0x172,0,lParam);
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  GetClientRect(pHVar16,&local_358);
  GetClientRect(*(HWND *)(param_1 + 0x18),&local_368);
  iVar9 = (((local_368.right - local_368.left) - local_358.right) + local_358.left) / 2;
  pHVar16 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  GetWindowRect(pHVar16,&local_368);
  MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_368,1);
  if (*(HDWP *)(param_1 + 0x10) == (HDWP)0x0) {
    SetWindowPos(pHVar16,(HWND)0x0,local_368.left + iVar9,local_368.top,0,0,0x205);
  }
  else {
    pvVar17 = DeferWindowPos(*(HDWP *)(param_1 + 0x10),pHVar16,(HWND)0x0,local_368.left + iVar9,
                             local_368.top,0,0,0x15);
    *(HDWP *)(param_1 + 0x10) = pvVar17;
  }
  uVar7 = FUN_14000f670((undefined8 *)(param_1 + 0xb8));
  hInst = GetModuleHandleW((LPCWSTR)0x0);
  lParam_00 = LoadImageW(hInst,(LPCWSTR)0x70,1,0,0,0x8040);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,1,(LPARAM)lParam_00);
  SendMessageW(*(HWND *)(param_1 + 0x18),0x80,0,(LPARAM)lParam_00);
  pszPath = (LPWSTR)(param_1 + 0x1318);
  uVar21 = 0;
  uVar25 = SHGetFolderPathW(0,0x1a,0,0,pszPath);
  if ((int)uVar25 < 0) {
    return uVar25 & 0xffffffffffffff00;
  }
  PathAppendW(pszPath,L"dgVoodoo");
  CreateDirectoryW(pszPath,(LPSECURITY_ATTRIBUTES)0x0);
  psVar18 = FUN_14000d444(local_348,pszPath,uVar21);
  lVar14 = 4;
  pWVar5 = (LPCWSTR)(param_1 + 0x288);
  do {
    pWVar23 = pWVar5;
    psVar19 = psVar18;
    uVar13 = *(undefined8 *)(psVar19 + 4);
    *(undefined8 *)pWVar23 = *(undefined8 *)psVar19;
    *(undefined8 *)(pWVar23 + 4) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0xc);
    *(undefined8 *)(pWVar23 + 8) = *(undefined8 *)(psVar19 + 8);
    *(undefined8 *)(pWVar23 + 0xc) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x14);
    *(undefined8 *)(pWVar23 + 0x10) = *(undefined8 *)(psVar19 + 0x10);
    *(undefined8 *)(pWVar23 + 0x14) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x1c);
    *(undefined8 *)(pWVar23 + 0x18) = *(undefined8 *)(psVar19 + 0x18);
    *(undefined8 *)(pWVar23 + 0x1c) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x24);
    *(undefined8 *)(pWVar23 + 0x20) = *(undefined8 *)(psVar19 + 0x20);
    *(undefined8 *)(pWVar23 + 0x24) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x2c);
    *(undefined8 *)(pWVar23 + 0x28) = *(undefined8 *)(psVar19 + 0x28);
    *(undefined8 *)(pWVar23 + 0x2c) = uVar13;
    uVar13 = *(undefined8 *)(psVar19 + 0x34);
    *(undefined8 *)(pWVar23 + 0x30) = *(undefined8 *)(psVar19 + 0x30);
    *(undefined8 *)(pWVar23 + 0x34) = uVar13;
    uVar10 = *(undefined4 *)(psVar19 + 0x3a);
    uVar3 = *(undefined4 *)(psVar19 + 0x3c);
    uVar4 = *(undefined4 *)(psVar19 + 0x3e);
    *(undefined4 *)(pWVar23 + 0x38) = *(undefined4 *)(psVar19 + 0x38);
    *(undefined4 *)(pWVar23 + 0x3a) = uVar10;
    *(undefined4 *)(pWVar23 + 0x3c) = uVar3;
    *(undefined4 *)(pWVar23 + 0x3e) = uVar4;
    lVar14 = lVar14 + -1;
    psVar18 = psVar19 + 0x40;
    pWVar5 = pWVar23 + 0x40;
  } while (lVar14 != 0);
  uVar10 = *(undefined4 *)(psVar19 + 0x3f);
  uVar3 = *(undefined4 *)(psVar19 + 0x41);
  uVar4 = *(undefined4 *)(psVar19 + 0x43);
  *(undefined4 *)(pWVar23 + 0x3d) = *(undefined4 *)(psVar19 + 0x3d);
  *(undefined4 *)(pWVar23 + 0x3f) = uVar10;
  *(undefined4 *)(pWVar23 + 0x41) = uVar3;
  *(undefined4 *)(pWVar23 + 0x43) = uVar4;
  WideCharToMultiByte(0,0x200,(LPCWSTR)(param_1 + 0x288),-1,(LPSTR)local_348,0x30a,(LPCSTR)0x0,
                      (LPBOOL)0x0);
  FUN_14000b1b4(param_1);
  FUN_140009d3c(param_1);
  plVar1 = (longlong *)(param_1 + 0x268);
  uVar25 = 0;
  uVar10 = FUN_14000f470(plVar1,L"Reset configuration to default",0);
  *(undefined4 *)(param_1 + 0x278) = uVar10;
  hMenu = (HMENU)*plVar1;
  if (hMenu == (HMENU)0x0) {
    hMenu = CreatePopupMenu();
    *plVar1 = (longlong)hMenu;
    if (hMenu == (HMENU)0x0) goto LAB_14000bb37;
  }
  *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + 1;
  uVar25 = (ulonglong)*(uint *)(param_1 + 0x270);
  AppendMenuW(hMenu,0x800,uVar25,(LPCWSTR)0x0);
LAB_14000bb37:
  uVar10 = FUN_14000f470(plVar1,L"Show all sections of the configuration",
                         (uint)CONCAT71((int7)(uVar25 >> 8),*(undefined1 *)(param_1 + 0x490)));
  *(undefined4 *)(param_1 + 0x27c) = uVar10;
  uVar10 = FUN_14000f470(plVar1,L"Set global settings folder",0);
  *(undefined4 *)(param_1 + 0x280) = uVar10;
  uVar10 = FUN_14000f470(plVar1,L"Reset Cpl application config to default",0);
  *(undefined4 *)(param_1 + 0x284) = uVar10;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(longlong *)(param_1 + 0x150) = param_1 + 0x498;
  *(undefined4 *)(param_1 + 0x4f4) = 0x41e;
  *(longlong **)(param_1 + 0x500) = (longlong *)(param_1 + 0x150);
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"General";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0x5a8;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"Glide";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0x6e0;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"DirectX";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0x970;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"GeneralExt";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0xc00;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"GlideExt";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0xe80;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(uint *)(param_1 + 600) =
       *(uint *)(param_1 + 600) | 1 << ((byte)*(uint *)(param_1 + 0x25c) & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = L"DirectXExt";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0xfa8;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  uVar8 = *(uint *)(param_1 + 0x25c);
  *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 1 << ((byte)uVar8 & 0x1f);
  *(wchar_t **)(param_1 + 0x1d8 + (ulonglong)uVar8 * 8) = L"Debug";
  *(longlong *)(param_1 + 0x158 + (ulonglong)*(uint *)(param_1 + 0x25c) * 8) = param_1 + 0x11e8;
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  FUN_14000b108(param_1,(ulonglong)CONCAT31((int3)(uVar8 >> 8),*(undefined1 *)(param_1 + 0x490)));
  SendMessageW(*(HWND *)(param_1 + 0x20),0x418,0,500);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x403,2,20000);
  FUN_14000eea0(param_1,0x402);
  FUN_14000eea0(param_1,0x3fd);
  FUN_14000eea0(param_1,0x3fb);
  FUN_14000eea0(param_1,0x3fe);
  FUN_14000eea0(param_1,0x3fa);
  FUN_14000eea0(param_1,0x3fc);
  if (uVar7 != *(uint *)(param_1 + 0x148)) {
    GetWindowRect(*(HWND *)(param_1 + 0x18),&local_358);
    FUN_14000ae8c(param_1,uVar7,&local_358.left);
  }
  *(undefined1 *)(param_1 + 0x1e28) = 1;
  uVar13 = FUN_14000a2e0(param_1);
  return CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
}


/*
 * FUN_14000be40 at 14000be40
 * undefined __fastcall FUN_14000be40(longlong param_1)
 * Address ranges: 14000be40-14000bf05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000be40(longlong param_1)

{
  undefined *puVar1;
  
  if (*(HWND *)(param_1 + 0x1b48) != (HWND)0x0) {
    SendMessageW(*(HWND *)(param_1 + 0x1b48),0x402,0,*(LPARAM *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x1b50) = 0;
    *(undefined8 *)(param_1 + 7000) = 0;
    *(undefined8 *)(param_1 + 0x1b48) = 0;
  }
  puVar1 = FUN_140010000(1,0);
  if (puVar1[0x20] != '\0') {
    (**(code **)(**(longlong **)(puVar1 + 0x10) + 0x50))();
  }
  puVar1 = FUN_140010000(2,0);
  if (puVar1[0x20] != '\0') {
    (**(code **)(**(longlong **)(puVar1 + 0x10) + 0x50))();
  }
  puVar1 = FUN_140010000(3,0);
  if (puVar1[0x20] != '\0') {
    (**(code **)(**(longlong **)(puVar1 + 0x10) + 0x50))();
  }
  puVar1 = FUN_140010000(6,0);
  if (puVar1[0x20] != '\0') {
    (**(code **)(**(longlong **)(puVar1 + 0x10) + 0x50))();
  }
  FUN_140024260(*(LPVOID *)(param_1 + 0x1e20));
  return;
}


/*
 * FUN_14000bf08 at 14000bf08
 * undefined1 __fastcall FUN_14000bf08(longlong param_1, uint param_2, int * param_3)
 * Address ranges: 14000bf08-14000bf2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_14000bf08(longlong param_1,uint param_2,int *param_3)

{
  FUN_14000ae8c(param_1,param_2,param_3);
  FUN_14000e4d0(param_1,0x402);
  return 1;
}


/*
 * FUN_14000bf2c at 14000bf2c
 * undefined __fastcall FUN_14000bf2c(longlong param_1, undefined8 param_2, int param_3, int param_4)
 * Address ranges: 14000bf2c-14000c29d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000bf2c(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  ushort *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  HRESULT HVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ushort *puVar17;
  longlong *plVar18;
  byte *pbVar19;
  longlong lVar20;
  bool bVar21;
  longlong local_res8 [4];
  longlong *local_368;
  short *local_360;
  longlong *local_358 [2];
  byte local_348 [520];
  undefined1 local_140;
  
  uVar15 = 0xffffffff;
  if (*(HMENU *)(param_1 + 0x268) != (HMENU)0x0) {
    uVar9 = TrackPopupMenuEx(*(HMENU *)(param_1 + 0x268),0x100,param_3,param_4,
                             *(HWND *)(param_1 + 0x18),(LPTPMPARAMS)0x0);
    uVar15 = 0xffffffff;
    if (uVar9 != 0) {
      uVar15 = (ulonglong)uVar9;
    }
  }
  iVar10 = (int)uVar15;
  local_res8[0] = param_1;
  if (iVar10 == *(int *)(param_1 + 0x278)) {
    if (*(longlong *)(param_1 + 0x1b48) == 0) {
      FUN_1400098a8((undefined8 *)local_348);
      pbVar1 = (byte *)(param_1 + 0x1b60);
      iVar10 = FUN_1400250f8(local_348,pbVar1,0x20c);
      if (iVar10 != 0) {
        FUN_14002511c(local_348,0,0x20c);
        puVar12 = FUN_1400098a8((undefined8 *)local_348);
        lVar20 = 4;
        pbVar19 = pbVar1;
        do {
          pbVar16 = pbVar19;
          puVar13 = puVar12;
          uVar4 = puVar13[1];
          *(undefined8 *)pbVar16 = *puVar13;
          *(undefined8 *)(pbVar16 + 8) = uVar4;
          uVar4 = puVar13[3];
          *(undefined8 *)(pbVar16 + 0x10) = puVar13[2];
          *(undefined8 *)(pbVar16 + 0x18) = uVar4;
          uVar4 = puVar13[5];
          *(undefined8 *)(pbVar16 + 0x20) = puVar13[4];
          *(undefined8 *)(pbVar16 + 0x28) = uVar4;
          uVar4 = puVar13[7];
          *(undefined8 *)(pbVar16 + 0x30) = puVar13[6];
          *(undefined8 *)(pbVar16 + 0x38) = uVar4;
          uVar4 = puVar13[9];
          *(undefined8 *)(pbVar16 + 0x40) = puVar13[8];
          *(undefined8 *)(pbVar16 + 0x48) = uVar4;
          uVar4 = puVar13[0xb];
          *(undefined8 *)(pbVar16 + 0x50) = puVar13[10];
          *(undefined8 *)(pbVar16 + 0x58) = uVar4;
          uVar4 = puVar13[0xd];
          *(undefined8 *)(pbVar16 + 0x60) = puVar13[0xc];
          *(undefined8 *)(pbVar16 + 0x68) = uVar4;
          uVar4 = puVar13[0xf];
          *(undefined8 *)(pbVar16 + 0x70) = puVar13[0xe];
          *(undefined8 *)(pbVar16 + 0x78) = uVar4;
          lVar20 = lVar20 + -1;
          puVar12 = puVar13 + 0x10;
          pbVar19 = pbVar16 + 0x80;
        } while (lVar20 != 0);
        uVar4 = *(undefined8 *)((longlong)puVar13 + 0x84);
        *(undefined8 *)(pbVar16 + 0x7c) = *(undefined8 *)((longlong)puVar13 + 0x7c);
        *(undefined8 *)(pbVar16 + 0x84) = uVar4;
        FUN_140009a68((longlong)pbVar1);
        plVar18 = (longlong *)(param_1 + 0x80);
        (**(code **)*plVar18)(plVar18);
        (**(code **)(*plVar18 + 8))(plVar18);
        (**(code **)(*plVar18 + 0x10))(plVar18,0);
      }
    }
  }
  else if (iVar10 == *(int *)(param_1 + 0x27c)) {
    *(byte *)(param_1 + 0x490) = *(byte *)(param_1 + 0x490) ^ 1;
    FUN_14000c2a0(local_res8,uVar15);
  }
  else {
    if (iVar10 == *(int *)(param_1 + 0x280)) {
      HVar11 = CoCreateInstance((IID *)&DAT_1400263a8,(LPUNKNOWN)0x0,1,(IID *)&DAT_1400285b0,
                                &local_368);
      if (HVar11 < 0) {
        return;
      }
      bVar21 = false;
      iVar10 = (**(code **)(*local_368 + 0x50))(local_368,local_res8);
      if (-1 < iVar10) {
        (**(code **)(*local_368 + 0x48))(local_368,(uint)local_res8[0] | 0x20);
      }
      iVar10 = (**(code **)(*local_368 + 0x18))(local_368,0);
      if ((-1 < iVar10) &&
         (iVar10 = (**(code **)(*local_368 + 0xa0))(local_368,local_358), -1 < iVar10)) {
        iVar10 = (**(code **)(*local_358[0] + 0x28))(local_358[0],0x80028000,&local_360);
        bVar21 = -1 < iVar10;
        if (bVar21) {
          FUN_1400250dc((short *)(param_1 + 0x288),local_360);
          CoTaskMemFree(local_360);
        }
        (**(code **)(*local_358[0] + 0x10))();
      }
      (**(code **)(*local_368 + 0x10))();
      if (!bVar21) {
        return;
      }
    }
    else {
      if (iVar10 != *(int *)(param_1 + 0x284)) {
        return;
      }
      puVar17 = (ushort *)(param_1 + 0x1318);
      puVar2 = (ushort *)(param_1 + 0x288);
      iVar10 = FUN_1400250a0(puVar2,puVar17);
      cVar3 = *(char *)(param_1 + 0x490);
      local_140 = 0;
      lVar20 = 4;
      local_348[0] = 0;
      local_348[1] = 0;
      puVar8 = puVar2;
      pbVar1 = local_348;
      do {
        pbVar19 = pbVar1;
        puVar14 = puVar8;
        uVar4 = *(undefined8 *)(pbVar19 + 8);
        uVar5 = *(undefined8 *)(pbVar19 + 0x10);
        uVar6 = *(undefined8 *)(pbVar19 + 0x18);
        *(undefined8 *)puVar14 = *(undefined8 *)pbVar19;
        *(undefined8 *)(puVar14 + 4) = uVar4;
        uVar4 = *(undefined8 *)(pbVar19 + 0x20);
        uVar7 = *(undefined8 *)(pbVar19 + 0x28);
        *(undefined8 *)(puVar14 + 8) = uVar5;
        *(undefined8 *)(puVar14 + 0xc) = uVar6;
        uVar5 = *(undefined8 *)(pbVar19 + 0x30);
        uVar6 = *(undefined8 *)(pbVar19 + 0x38);
        *(undefined8 *)(puVar14 + 0x10) = uVar4;
        *(undefined8 *)(puVar14 + 0x14) = uVar7;
        uVar4 = *(undefined8 *)(pbVar19 + 0x40);
        uVar7 = *(undefined8 *)(pbVar19 + 0x48);
        *(undefined8 *)(puVar14 + 0x18) = uVar5;
        *(undefined8 *)(puVar14 + 0x1c) = uVar6;
        uVar5 = *(undefined8 *)(pbVar19 + 0x50);
        uVar6 = *(undefined8 *)(pbVar19 + 0x58);
        *(undefined8 *)(puVar14 + 0x20) = uVar4;
        *(undefined8 *)(puVar14 + 0x24) = uVar7;
        uVar4 = *(undefined8 *)(pbVar19 + 0x60);
        uVar7 = *(undefined8 *)(pbVar19 + 0x68);
        *(undefined8 *)(puVar14 + 0x28) = uVar5;
        *(undefined8 *)(puVar14 + 0x2c) = uVar6;
        uVar5 = *(undefined8 *)(pbVar19 + 0x70);
        uVar6 = *(undefined8 *)(pbVar19 + 0x78);
        *(undefined8 *)(puVar14 + 0x30) = uVar4;
        *(undefined8 *)(puVar14 + 0x34) = uVar7;
        *(undefined8 *)(puVar14 + 0x38) = uVar5;
        *(undefined8 *)(puVar14 + 0x3c) = uVar6;
        lVar20 = lVar20 + -1;
        puVar8 = puVar14 + 0x40;
        pbVar1 = pbVar19 + 0x80;
      } while (lVar20 != 0);
      uVar4 = *(undefined8 *)(pbVar19 + 0x82);
      *(undefined8 *)(puVar14 + 0x3d) = *(undefined8 *)(pbVar19 + 0x7a);
      *(undefined8 *)(puVar14 + 0x41) = uVar4;
      FUN_1400250dc((short *)puVar2,(short *)puVar17);
      if (cVar3 != *(char *)(param_1 + 0x490)) {
        FUN_14000c2a0(local_res8,puVar17);
      }
      if (iVar10 == 0) {
        return;
      }
    }
    WideCharToMultiByte(0,0x200,(LPCWSTR)(param_1 + 0x288),-1,(LPSTR)local_348,0x30a,(LPCSTR)0x0,
                        (LPBOOL)0x0);
    FUN_14000b1b4(param_1);
  }
  return;
}


/*
 * FUN_14000c2a0 at 14000c2a0
 * undefined __fastcall FUN_14000c2a0(longlong * param_1, undefined8 param_2)
 * Address ranges: 14000c2a0-14000c351
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000c2a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  MENUITEMINFOW local_58;
  
  FUN_14000b108(*param_1,CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(*param_1 + 0x490))
               );
  (*(code *)**(undefined8 **)(*param_1 + 0x80))();
  (**(code **)(*(longlong *)(*param_1 + 0x80) + 8))();
  lVar1 = *param_1;
  if (*(HMENU *)(lVar1 + 0x268) != (HMENU)0x0) {
    local_58.wID = *(UINT *)(lVar1 + 0x27c);
    local_58.hSubMenu = (HMENU)0x0;
    local_58.dwItemData = 0;
    local_58.cch = 0;
    local_58.fState = -(uint)(*(char *)(lVar1 + 0x490) != '\0') & 8;
    local_58.hbmpItem = (HBITMAP)0x0;
    local_58.cbSize = 0x50;
    local_58.fMask = 0x101;
    local_58.fType = 0;
    local_58.hbmpChecked = (HBITMAP)0x0;
    local_58.hbmpUnchecked = (HBITMAP)0x0;
    local_58.dwTypeData = L"Show all sections of the configuration";
    SetMenuItemInfoW(*(HMENU *)(lVar1 + 0x268),local_58.wID,0,&local_58);
  }
  return;
}


/*
 * FUN_14000c354 at 14000c354
 * undefined8 __fastcall FUN_14000c354(longlong param_1, int param_2)
 * Address ranges: 14000c354-14000c88d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_14000c354(longlong param_1,int param_2)

{
  uint uVar1;
  BOOL BVar2;
  HINSTANCE in_RAX;
  ulonglong uVar3;
  HWND pHVar4;
  longlong lVar5;
  uint7 extraout_var;
  LRESULT LVar6;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  uint uVar7;
  char cVar8;
  undefined8 local_378 [4];
  undefined **local_358 [13];
  undefined **local_2f0;
  undefined8 local_2e8 [20];
  WCHAR local_248 [268];
  
  if (param_2 != 0x3ea) {
    if (param_2 != 0x3eb) {
      if (param_2 == 0x3ec) {
        FUN_14000f350(local_358,*(undefined8 *)(param_1 + -0x50),0x67,0);
        local_358[0] = &PTR_FUN_1400263d0;
        local_2f0 = &PTR_FUN_1400263b8;
        FUN_14000f4d0(local_2e8,local_358);
        FUN_14000f410((longlong)local_358);
        lVar5 = FUN_140001298(local_358);
      }
      else if (param_2 == 0x3ed) {
        FUN_140009800(param_1 + 0x678);
        FUN_1400058b8(param_1 + 0x908);
        uVar3 = 0;
        if (*(char *)(param_1 + 0x428) != '\0') {
          FUN_1400072c0(param_1 + 0xb98);
          FUN_140008af0(param_1 + 0xe18);
          FUN_14000463c(param_1 + 0xf40);
        }
        if (*(longlong *)(param_1 + 0x1ae0) == 0) {
          FUN_14000a228(param_1 + -0x68,(LPWSTR)(param_1 + 0x18c8));
          cVar8 = FUN_140014848((uint *)(param_1 + 0x1af8),(LPWSTR)(param_1 + 0x18c8),
                                *(char **)(param_1 + 0x1db8));
        }
        else {
          (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))((longlong *)(param_1 + 0x18),1);
          LVar6 = SendMessageW(*(HWND *)(param_1 + 0x1ae0),0x409,0,*(LPARAM *)(param_1 + -0x50));
          cVar8 = LVar6 != 0;
        }
        FUN_140023fa0(local_378,(LPCWSTR)(param_1 + 0x16c0),'\x01');
        if (*(int *)(param_1 + 0x1ad8) != 0) {
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x1ad0) + uVar3 * 0x218) == 0) {
              FUN_1400241c0((longlong)local_378,0x208,
                            (LPCVOID)(*(longlong *)(param_1 + 0x1ad0) + 0x10 + uVar3 * 0x218),
                            (DWORD *)0x0);
            }
            uVar7 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar7;
          } while (uVar7 < *(uint *)(param_1 + 0x1ad8));
        }
        lVar5 = FUN_140024020(local_378);
        if (cVar8 != '\0') {
          pHVar4 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x3ed);
          BVar2 = EnableWindow(pHVar4,0);
          lVar5 = CONCAT44(extraout_var_00,BVar2);
        }
      }
      else {
        if (param_2 == 0x3fa) {
          GetModuleFileNameW((HMODULE)0x0,local_248,0x104);
          PathRemoveFileSpecW(local_248);
          lVar5 = param_1 + -0x68;
          uVar7 = FUN_14000a708(lVar5,(ushort *)local_248);
          if (uVar7 == 0xffffffff) {
            FUN_14000a9b8(lVar5,(ushort *)local_248,0,'\x01');
          }
          else {
            FUN_14000e4a0(lVar5,0x402,uVar7);
          }
          FUN_14000a2e0(lVar5);
        }
        else if (param_2 == 0x3fb) {
          uVar7 = FUN_14000e460(param_1 + -0x68,0x402);
          FUN_14000a808(param_1 + -0x68,uVar7,'\0');
          pHVar4 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x3fb);
          EnableWindow(pHVar4,0);
        }
        else {
          if (param_2 == 0x3fc) {
            FUN_14000d32c(param_1,param_1 + -0x68);
            lVar5 = (ulonglong)extraout_var << 8;
            goto LAB_14000c87c;
          }
          if (param_2 != 0x3fd) {
            if (param_2 == 0x3fe) {
              uVar1 = FUN_14000e460(param_1 + -0x68,0x402);
              uVar7 = *(uint *)(param_1 + 0x1ad8);
              in_RAX = (HINSTANCE)FUN_14000e270(param_1 + -0x68,0x402,(ulonglong)uVar1);
              if ((uint)in_RAX < uVar7) {
                in_RAX = ShellExecuteW(*(HWND *)(param_1 + -0x50),L"open",
                                       (LPCWSTR)(*(longlong *)(param_1 + 0x1ad0) + 0x10 +
                                                ((ulonglong)in_RAX & 0xffffffff) * 0x218),
                                       (LPCWSTR)0x0,(LPCWSTR)0x0,1);
              }
            }
            return (ulonglong)in_RAX & 0xffffffffffffff00;
          }
          lVar5 = param_1 + -0x68;
          if (*(HWND *)(param_1 + 0x1ae0) != (HWND)0x0) {
            SendMessageW(*(HWND *)(param_1 + 0x1ae0),0x402,0,*(LPARAM *)(param_1 + -0x50));
            *(undefined8 *)(param_1 + 0x1ae8) = 0;
            *(undefined8 *)(param_1 + 0x1af0) = 0;
            *(undefined8 *)(param_1 + 0x1ae0) = 0;
          }
          uVar3 = FUN_14000e230(lVar5,0x402);
          uVar7 = (uint)uVar3;
          uVar3 = uVar3 & 0xffffffff;
          while (uVar7 != 0) {
            uVar7 = (int)uVar3 - 1;
            uVar3 = (ulonglong)uVar7;
            uVar1 = FUN_14000e270(lVar5,0x402,(ulonglong)uVar7);
            if (*(int *)((ulonglong)uVar1 * 0x218 + *(longlong *)(param_1 + 0x1ad0)) == 2) {
              FUN_14000a808(lVar5,uVar7,'\x01');
            }
          }
          pHVar4 = GetDlgItem(*(HWND *)(param_1 + -0x50),0x3fb);
          EnableWindow(pHVar4,0);
          FUN_14000ad34(lVar5);
          FUN_14000e4a0(lVar5,0x402,0);
          FUN_14000a2e0(lVar5);
        }
        lVar5 = FUN_14000e4d0(param_1 + -0x68,0x402);
      }
      goto LAB_14000c87c;
    }
    FUN_140009800(param_1 + 0x678);
    FUN_1400058b8(param_1 + 0x908);
    uVar3 = 0;
    if (*(char *)(param_1 + 0x428) != '\0') {
      FUN_1400072c0(param_1 + 0xb98);
      FUN_140008af0(param_1 + 0xe18);
      FUN_14000463c(param_1 + 0xf40);
    }
    if (*(longlong *)(param_1 + 0x1ae0) == 0) {
      FUN_14000a228(param_1 + -0x68,(LPWSTR)(param_1 + 0x18c8));
      FUN_140014848((uint *)(param_1 + 0x1af8),(LPWSTR)(param_1 + 0x18c8),
                    *(char **)(param_1 + 0x1db8));
    }
    else {
      (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))((longlong *)(param_1 + 0x18),1);
      if (*(HWND *)(param_1 + 0x1ae0) != (HWND)0x0) {
        SendMessageW(*(HWND *)(param_1 + 0x1ae0),0x402,1,*(LPARAM *)(param_1 + -0x50));
        *(undefined8 *)(param_1 + 0x1ae8) = 0;
        *(undefined8 *)(param_1 + 0x1af0) = 0;
        *(undefined8 *)(param_1 + 0x1ae0) = 0;
      }
    }
    FUN_140023fa0(local_378,(LPCWSTR)(param_1 + 0x16c0),'\x01');
    if (*(int *)(param_1 + 0x1ad8) != 0) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x1ad0) + uVar3 * 0x218) == 0) {
          FUN_1400241c0((longlong)local_378,0x208,
                        (LPCVOID)(*(longlong *)(param_1 + 0x1ad0) + 0x10 + uVar3 * 0x218),
                        (DWORD *)0x0);
        }
        uVar7 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 0x1ad8));
    }
    FUN_140024020(local_378);
    FUN_14000d7d4((ushort *)(param_1 + 0x12b0),(LPCWSTR)(param_1 + 0x220));
  }
  (**(code **)(*(longlong *)(param_1 + -0x68) + 0x70))();
  BVar2 = EndDialog(*(HWND *)(param_1 + -0x50),1);
  lVar5 = CONCAT44(extraout_var_01,BVar2);
LAB_14000c87c:
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
}


/*
 * FUN_14000c890 at 14000c890
 * bool __fastcall FUN_14000c890(longlong param_1, int param_2)
 * Address ranges: 14000c890-14000c8af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_14000c890(longlong param_1,int param_2)

{
  if (param_2 == 0x402) {
    FUN_14000a2e0(param_1 + -0x70);
  }
  return param_2 == 0x402;
}


/*
 * FUN_14000c8b0 at 14000c8b0
 * undefined8 __fastcall FUN_14000c8b0(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined1 * param_5)
 * Address ranges: 14000c8b0-14000c94d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8
FUN_14000c8b0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined1 *param_5
             )

{
  char cVar1;
  ulonglong uVar2;
  int local_218 [8];
  undefined1 local_1f8;
  
  if (param_2 == 0x408) {
    *param_5 = 1;
    uVar2 = 0;
    if (*(HWND *)(param_1 + 0x1b48) != (HWND)0x0) {
      uVar2 = SendMessageW(*(HWND *)(param_1 + 0x1b48),0x405,0,*(LPARAM *)(param_1 + 0x18));
      uVar2 = uVar2 & 0xffffffff;
    }
    if (uVar2 != 0) {
      FUN_1400098a8((undefined8 *)local_218);
      cVar1 = FUN_140014680(local_218,*(undefined8 *)(param_1 + 0x1b50),
                            (undefined4 *)(-(ulonglong)(param_1 != 0) & param_1 + 0x88U));
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x1b80) = local_1f8;
        *(undefined1 *)(param_1 + 0x1dc5) = 1;
        (*(code *)**(undefined8 **)(param_1 + 0x80))();
      }
    }
  }
  return 0;
}


/*
 * FUN_14000c958 at 14000c958
 * undefined8 * __fastcall FUN_14000c958(undefined8 * param_1)
 * Address ranges: 14000c958-14000cfed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_14000c958(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  HMODULE pHVar5;
  char *local_48;
  undefined1 local_40;
  
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14000f350(param_1,0,0x75,pHVar5);
  *(undefined4 *)((longlong)param_1 + 0x8c) = 1;
  param_1[0x13] = "[dgVoodoo CPL] ";
  puVar1 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x12) = 1;
  *param_1 = &PTR_FUN_1400285d8;
  puVar2 = param_1 + 0x11;
  *(undefined4 *)puVar2 = 1;
  param_1[0xd] = &PTR_FUN_140028598;
  param_1[0xe] = &PTR_FUN_1400286a0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = &PTR_LAB_1400285c0;
  *puVar1 = &PTR_FUN_140028680;
  param_1[0x15] = 0;
  FUN_14000f4d0(param_1 + 0x17,param_1);
  param_1[0x2a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  FUN_14002511c((undefined1 *)(param_1 + 0x2b),0,0x80);
  FUN_14002511c((undefined1 *)(param_1 + 0x3b),0,0x80);
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  puVar3 = param_1 + 0x93;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined2 *)(param_1 + 0x51) = 0;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14000ef30(puVar3,param_1,0x7c,pHVar5);
  *puVar3 = &PTR_FUN_1400266a0;
  param_1[0xa1] = &PTR_FUN_140026688;
  FUN_14000f4d0(param_1 + 0xa2,puVar3);
  puVar3 = param_1 + 0xb5;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14000ef30(puVar3,param_1,0x68,pHVar5);
  *puVar3 = &PTR_FUN_140027e38;
  param_1[0xc3] = &PTR_LAB_140027e20;
  param_1[0xc4] = &PTR_FUN_140027ed8;
  param_1[0xc5] = &PTR_FUN_140027d80;
  puVar4 = param_1 + 0x36c;
  param_1[199] = puVar1;
  param_1[0xc6] = puVar4;
  FUN_14000f4d0(param_1 + 200,puVar3);
  param_1[0xdb] = puVar2;
  puVar3 = param_1 + 0xdc;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14000ef30(puVar3,param_1,0x76,pHVar5);
  param_1[0xec] = puVar4;
  *puVar3 = &PTR_FUN_140028100;
  param_1[0xed] = puVar1;
  param_1[0xea] = &PTR_FUN_1400280e8;
  param_1[0xeb] = &PTR_LAB_1400280a8;
  FUN_14000f4d0(param_1 + 0xee,puVar3);
  *(undefined1 *)(param_1 + 0x103) = 0;
  *(undefined4 *)(param_1 + 0x101) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x80c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x102) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x814) = 2;
  local_48 = "Unforced";
  local_40 = 1;
  FUN_1400012dc(param_1 + 0x104,puVar3,0x3f4,puVar4,&local_48);
  param_1[300] = puVar3;
  param_1[299] = puVar4;
  puVar3 = param_1 + 0x12e;
  *(undefined4 *)(param_1 + 0x12d) = 0x3f6;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14000ef30(puVar3,param_1,0x77,pHVar5);
  param_1[0x13e] = puVar4;
  *puVar3 = &PTR_FUN_140027720;
  param_1[0x13f] = puVar1;
  param_1[0x13c] = &PTR_FUN_140027708;
  param_1[0x13d] = &PTR_LAB_140027690;
  FUN_14000f4d0(param_1 + 0x140,puVar3);
  *(undefined4 *)((longlong)param_1 + 0xaa4) = 2;
  *(undefined4 *)(param_1 + 0x153) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x155) = 0;
  local_48 = "Unforced";
  local_40 = 1;
  FUN_1400012dc(param_1 + 0x156,puVar3,0x407,puVar4,&local_48);
  param_1[0x17d] = puVar4;
  param_1[0x17e] = puVar3;
  puVar3 = param_1 + 0x180;
  *(undefined4 *)(param_1 + 0x17f) = 0x408;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14000ef30(puVar3,param_1,0x78,pHVar5);
  param_1[400] = puVar4;
  *puVar3 = &PTR_FUN_140027b58;
  param_1[0x191] = puVar1;
  param_1[0x18e] = &PTR_LAB_140027b40;
  param_1[399] = &PTR_FUN_140027bf8;
  FUN_14000f4d0(param_1 + 0x192,puVar3);
  *(undefined4 *)((longlong)param_1 + 0xd3c) = 2;
  param_1[0x1a5] = puVar2;
  local_48 = "Current desktop resolution";
  *(undefined4 *)(param_1 + 0x1a6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a7) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  local_40 = 0;
  FUN_1400012dc(param_1 + 0x1a9,puVar3,0x40b,puVar4,&local_48);
  puVar3 = param_1 + 0x1d0;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14000ef30(puVar3,param_1,0x79,pHVar5);
  param_1[0x1df] = puVar4;
  *puVar3 = &PTR_FUN_140027f20;
  param_1[0x1e0] = puVar1;
  param_1[0x1de] = &PTR_FUN_140027fc0;
  FUN_14000f4d0(param_1 + 0x1e1,puVar3);
  param_1[500] = puVar2;
  puVar3 = param_1 + 0x1f5;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14000ef30(puVar3,param_1,0x7b,pHVar5);
  param_1[0x206] = puVar4;
  *puVar3 = &PTR_FUN_1400273b0;
  param_1[0x207] = puVar1;
  param_1[0x203] = &PTR_LAB_140027380;
  param_1[0x204] = &PTR_FUN_140027398;
  param_1[0x205] = &PTR_FUN_140027338;
  FUN_14000f4d0(param_1 + 0x208,puVar3);
  param_1[0x21b] = puVar2;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  FUN_14002511c((undefined1 *)(param_1 + 0x21c),0,0x100);
  puVar3 = param_1 + 0x23d;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_14000ef30(puVar3,param_1,0x7a,pHVar5);
  param_1[0x24d] = puVar4;
  *puVar3 = &PTR_FUN_140026e98;
  param_1[0x24e] = puVar1;
  param_1[0x24b] = &PTR_LAB_140026f38;
  param_1[0x24c] = &PTR_FUN_140026e80;
  FUN_14000f4d0(param_1 + 0x24f,puVar3);
  param_1[0x262] = puVar2;
  param_1[0x367] = 0;
  param_1[0x368] = 0;
  param_1[0x369] = 0;
  param_1[0x36a] = 0;
  param_1[0x36b] = 0;
  FUN_1400098a8(puVar4);
  *(undefined4 *)(param_1 + 0x3b6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1db4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1dbc) = 0xffffffff;
  FUN_14002511c((undefined1 *)(param_1 + 0x3ae),0,0x40);
  FUN_140009a68((longlong)puVar4);
  param_1[0x3c4] = 0;
  *(undefined1 *)(param_1 + 0x3c5) = 0;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  param_1[0x16] = pHVar5;
  FUN_14002511c((undefined1 *)(param_1 + 0x263),0,0x208);
  FUN_14002511c((undefined1 *)(param_1 + 0x2a4),0,0x208);
  FUN_14002511c((undefined1 *)(param_1 + 0x2e5),0,0x208);
  FUN_14002511c((undefined1 *)(param_1 + 0x326),0,0x208);
  return param_1;
}


/*
 * FUN_14000cff0 at 14000cff0
 * undefined __fastcall FUN_14000cff0(undefined8 * param_1)
 * Address ranges: 14000cff0-14000d1a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000cff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1400285d8;
  param_1[0xd] = &PTR_FUN_140028598;
  param_1[0xe] = &PTR_FUN_1400286a0;
  param_1[0xf] = &PTR_LAB_1400285c0;
  param_1[0x10] = &PTR_FUN_140028680;
  FUN_140024260((LPVOID)param_1[0x367]);
  FUN_14000f590(param_1 + 0x24f);
  param_1[0x23d] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x240]);
  FUN_14000f590(param_1 + 0x208);
  param_1[0x1f5] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x1f8]);
  FUN_14000f590(param_1 + 0x1e1);
  param_1[0x1d0] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x1d3]);
  FUN_140024260((LPVOID)param_1[0x1ac]);
  FUN_14000f590(param_1 + 0x192);
  param_1[0x180] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x183]);
  FUN_140024260((LPVOID)param_1[0x159]);
  FUN_14000f590(param_1 + 0x140);
  param_1[0x12e] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x131]);
  FUN_140024260((LPVOID)param_1[0x107]);
  FUN_14000f590(param_1 + 0xee);
  param_1[0xdc] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0xdf]);
  FUN_14000f590(param_1 + 200);
  param_1[0xb5] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0xb8]);
  FUN_14000f590(param_1 + 0xa2);
  param_1[0x93] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x96]);
  if ((HMENU)param_1[0x4d] != (HMENU)0x0) {
    DestroyMenu((HMENU)param_1[0x4d]);
  }
  FUN_14000f590(param_1 + 0x17);
  *param_1 = &PTR_FUN_140028860;
                    /* WARNING: Could not recover jumptable at 0x00014000d19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroyWindow((HWND)param_1[3]);
  return;
}


/*
 * FUN_14000d1a4 at 14000d1a4
 * undefined8 __fastcall FUN_14000d1a4(void)
 * Address ranges: 14000d1a4-14000d328
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000d1a4(void)

{
  BOOL BVar1;
  undefined4 local_1e98;
  undefined4 local_1e94;
  tagWNDCLASSEXW local_1e88;
  undefined8 local_1e38 [965];
  undefined8 uStack_10;
  
  uStack_10 = 0x14000d1b8;
  DAT_14002c2e0 = LoadLibraryW(L"comctl32.dll");
  if (DAT_14002c2e0 != (HMODULE)0x0) {
    _DAT_14002c2f0 = GetProcAddress(DAT_14002c2e0,"InitCommonControlsEx");
    if (_DAT_14002c2f0 != (FARPROC)0x0) {
      local_1e98 = 8;
      local_1e94 = 0x426f;
      (*_DAT_14002c2f0)(&local_1e98);
    }
  }
  DAT_14002c2d0 = LoadLibraryW(L"user32.dll");
  if (DAT_14002c2d0 != (HMODULE)0x0) {
    DAT_14002c2d8 = GetProcAddress(DAT_14002c2d0,"EnableNonClientDpiScaling");
    DAT_14002c2e8 = GetProcAddress(DAT_14002c2d0,"SetDialogDpiChangeBehavior");
  }
  local_1e88.cbSize = 0x50;
  FUN_14002511c((undefined1 *)&local_1e88.style,0,0x4c);
  BVar1 = GetClassInfoExW((HINSTANCE)0x0,L"#32770",&local_1e88);
  if (BVar1 != 0) {
    DAT_14002c2f8 = local_1e88.lpfnWndProc;
    local_1e88.lpfnWndProc = FUN_14000d970;
    RegisterClassExW(&local_1e88);
  }
  FUN_14000c958(local_1e38);
  FUN_14000f410((longlong)local_1e38);
  if (DAT_14002c2d0 != (HMODULE)0x0) {
    DAT_14002c2d8 = (FARPROC)0x0;
    DAT_14002c2e8 = (FARPROC)0x0;
    FreeLibrary(DAT_14002c2d0);
    DAT_14002c2d0 = (HMODULE)0x0;
  }
  if (DAT_14002c2e0 != (HMODULE)0x0) {
    _DAT_14002c2f0 = (FARPROC)0x0;
    FreeLibrary(DAT_14002c2e0);
    DAT_14002c2e0 = (HMODULE)0x0;
  }
  FUN_14000cff0(local_1e38);
  return 1;
}


/*
 * FUN_14000d32c at 14000d32c
 * undefined1 __fastcall FUN_14000d32c(undefined8 param_1, longlong param_2)
 * Address ranges: 14000d32c-14000d442
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_14000d32c(undefined8 param_1,longlong param_2)

{
  ushort *puVar1;
  HRESULT HVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 local_res8 [2];
  longlong *local_res18;
  ushort *local_res20;
  longlong *local_28 [2];
  
  uVar5 = 0;
  local_res8[0] = param_1;
  HVar2 = CoCreateInstance((IID *)&DAT_1400263a8,(LPUNKNOWN)0x0,1,(IID *)&DAT_1400285b0,&local_res18
                          );
  if (-1 < HVar2) {
    iVar3 = (**(code **)(*local_res18 + 0x50))(local_res18,local_res8);
    if (-1 < iVar3) {
      (**(code **)(*local_res18 + 0x48))(local_res18,(uint)local_res8[0] | 0x20);
    }
    iVar3 = (**(code **)(*local_res18 + 0x18))(local_res18,0);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*local_res18 + 0xa0))(local_res18,local_28);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*local_28[0] + 0x28))(local_28[0],0x80028000);
        puVar1 = local_res20;
        if (-1 < iVar3) {
          uVar4 = FUN_14000a708(param_2,local_res20);
          if (uVar4 == 0xffffffff) {
            FUN_14000a9b8(param_2,puVar1,0,'\x01');
          }
          else {
            FUN_14000e4a0(param_2,0x402,uVar4);
          }
          FUN_14000a2e0(param_2);
          FUN_14000e4d0(param_2,0x402);
          CoTaskMemFree(local_res20);
          uVar5 = 1;
        }
        (**(code **)(*local_28[0] + 0x10))();
      }
    }
    (**(code **)(*local_res18 + 0x10))();
  }
  return uVar5;
}


/*
 * FUN_14000d444 at 14000d444
 * short * __fastcall FUN_14000d444(short * param_1, short * param_2, ulonglong param_3)
 * Address ranges: 14000d444-14000d7d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


short * FUN_14000d444(short *param_1,short *param_2,ulonglong param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong local_res18 [2];
  undefined **local_638;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  char *local_620;
  undefined4 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8;
  undefined4 local_5e4;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  longlong local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined4 local_5b0;
  longlong local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined ***local_588;
  short *local_580;
  undefined4 local_578;
  WCHAR local_568 [264];
  CHAR local_358 [792];
  ulonglong uVar11;
  
  uVar11 = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *param_1 = 0;
  local_res18[0] = param_3;
  FUN_1400250dc(param_1,param_2);
  local_618 = 0;
  local_630 = 1;
  local_620 = "[dgVoodoo IniParser] ";
  local_62c = 1;
  local_638 = &PTR_FUN_1400291c0;
  local_628 = 1;
  local_610 = 0;
  local_608 = 0;
  uStack_600 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 1;
  local_5e4 = 0;
  local_5e0 = 0;
  local_5d8 = 0;
  local_5d0 = 0;
  local_5c8 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  FUN_1400250dc(local_568,param_2);
  PathAppendW(local_568,L"dgVoodooSettings.ini");
  WideCharToMultiByte(0,0x200,local_568,-1,local_358,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((code *)local_638[3] == FUN_140015cf4) {
    bVar2 = FUN_140015cf4((longlong)&local_638,local_568,1);
  }
  else {
    bVar2 = (*(code *)local_638[3])();
  }
  if ((bVar2 != 0) && (uVar8 = uVar11, (uint)local_5a0 != 0)) {
    do {
      lVar1 = local_5a8;
      uVar10 = (uint)uVar8;
      if ((*(int *)(local_5a8 + uVar8 * 0x18) == -1) ||
         (pbVar7 = (byte *)((ulonglong)*(uint *)(local_5a8 + uVar8 * 0x18) + local_5c8),
         pbVar7 == (byte *)0x0)) {
        local_588 = &local_638;
        local_578 = 0x104;
        uVar8 = uVar11;
        uVar9 = uVar10;
        local_580 = param_1;
        if (uVar10 == 0xffffffff) {
          while( true ) {
            if ((code *)local_638[5] == FUN_140015d70) {
              uVar5 = (uint)local_5a0;
            }
            else {
              uVar5 = (*(code *)local_638[5])(&local_638);
            }
            uVar9 = (uint)uVar8;
            if (uVar5 <= uVar9) goto LAB_14000d6aa;
            if ((code *)local_638[6] == FUN_140015d78) {
              uVar6 = uVar11;
              if (*(int *)(local_5a8 + uVar8 * 0x18) != -1) {
                uVar6 = (ulonglong)*(uint *)(local_5a8 + uVar8 * 0x18) + local_5c8;
              }
            }
            else {
              uVar6 = (*(code *)local_638[6])(&local_638,uVar8);
            }
            if (uVar6 == 0) break;
            uVar8 = (ulonglong)(uVar9 + 1);
          }
        }
        FUN_140013efc(&local_588,uVar9);
      }
      else {
        iVar4 = FUN_140024ce8(pbVar7,&DAT_1400286c8);
        if (iVar4 == 0) {
          if (*(int *)(lVar1 + 0x10 + uVar8 * 0x18) != 0) {
            do {
              lVar1 = local_5a8;
              iVar4 = FUN_140024ce8((byte *)((ulonglong)
                                             *(uint *)(*(longlong *)(local_5a8 + 8 + uVar8 * 0x18) +
                                                      uVar11 * 0x28) + local_5c8),
                                    (byte *)"showextendedtabs");
              if (iVar4 == 0) {
                if ((code *)local_638[9] == FUN_140015dd0) {
                  iVar4 = *(int *)(*(longlong *)(lVar1 + 8 + uVar8 * 0x18) + 0x10 + uVar11 * 0x28);
                }
                else {
                  iVar4 = (*(code *)local_638[9])(&local_638,uVar8,uVar11);
                }
                if (iVar4 == 1) {
                  if ((code *)local_638[10] == FUN_140015df0) {
                    pbVar7 = (byte *)((ulonglong)
                                      **(uint **)(*(longlong *)(local_5a8 + 8 + uVar8 * 0x18) + 8 +
                                                 uVar11 * 0x28) + local_5c8);
                  }
                  else {
                    pbVar7 = (byte *)(*(code *)local_638[10])(&local_638,uVar8,uVar11);
                  }
                  iVar4 = FUN_140024ce8(pbVar7,&DAT_1400286b8);
                  if (iVar4 == 0) {
                    *(undefined1 *)(param_1 + 0x104) = 1;
                  }
                  else {
                    iVar4 = FUN_140024ce8(pbVar7,(byte *)"false");
                    if (iVar4 == 0) {
                      *(undefined1 *)(param_1 + 0x104) = 0;
                    }
                    else {
                      local_res18[0] = local_res18[0] & 0xffffffff00000000;
                      if ((code *)local_638[0xb] == FUN_140015e1c) {
                        cVar3 = FUN_140015e1c((longlong)&local_638,uVar8,uVar11,0,
                                              (undefined4 *)local_res18);
                      }
                      else {
                        cVar3 = (*(code *)local_638[0xb])();
                      }
                      if ((cVar3 != '\0') && ((uint)local_res18[0] < 2)) {
                        *(bool *)(param_1 + 0x104) = (uint)local_res18[0] != 0;
                      }
                    }
                  }
                }
              }
              uVar10 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while (uVar10 < *(uint *)(local_5a8 + 0x10 + uVar8 * 0x18));
          }
          break;
        }
      }
LAB_14000d6aa:
      uVar8 = (ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < (uint)local_5a0);
  }
  FUN_1400149d4(&local_638);
  return param_1;
}


/*
 * FUN_14000d7d4 at 14000d7d4
 * undefined __fastcall FUN_14000d7d4(ushort * param_1, LPCWSTR param_2)
 * Address ranges: 14000d7d4-14000d96d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14000d7d4(ushort *param_1,LPCWSTR param_2)

{
  int iVar1;
  longlong lVar2;
  CHAR *pCVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 local_2638 [4];
  WCHAR local_2618 [264];
  CHAR local_2408 [1024];
  CHAR local_2008 [8184];
  undefined8 uStack_10;
  
  uStack_10 = 0x14000d7f1;
  FUN_1400250dc(local_2618,(short *)param_1);
  PathAppendW(local_2618,L"dgVoodooSettings.ini");
  FUN_140023fa0(local_2638,local_2618,'\x01');
  uVar5 = 0xffffffff;
  WideCharToMultiByte(0,0x200,param_2,-1,local_2008,0x1ffe,(LPCSTR)0x0,(LPBOOL)0x0);
  iVar1 = FUN_1400250a0((ushort *)param_2,param_1);
  pCVar3 = local_2008;
  if (iVar1 == 0) {
    pCVar3 = "";
  }
  FUN_140024290(local_2408,"DataFolderRedirection = \"%s\"\n",pCVar3,uVar5);
  lVar2 = FUN_140024d20(local_2408);
  FUN_1400241c0((longlong)local_2638,(DWORD)lVar2,local_2408,(DWORD *)0x0);
  FUN_1400241c0((longlong)local_2638,1,&DAT_140028708,(DWORD *)0x0);
  uVar5 = 0;
  FUN_1400241c0((longlong)local_2638,6,"[Cpl]\n",(DWORD *)0x0);
  pcVar4 = "false";
  if ((char)param_2[0x104] != '\0') {
    pcVar4 = "true";
  }
  FUN_140024290(local_2408,"ShowExtendedTabs = %s\n",pcVar4,uVar5);
  lVar2 = FUN_140024d20(local_2408);
  FUN_1400241c0((longlong)local_2638,(DWORD)lVar2,local_2408,(DWORD *)0x0);
  FUN_1400241c0((longlong)local_2638,1,&DAT_140028708,(DWORD *)0x0);
  FUN_140024020(local_2638);
  return;
}


/*
 * FUN_14000d970 at 14000d970
 * undefined __fastcall FUN_14000d970(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4)
 * Address ranges: 14000d970-14000d9d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000d970(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  if (param_2 == 0x81) {
    if (DAT_14002c2d8 != (code *)0x0) {
      (*DAT_14002c2d8)();
    }
    if (DAT_14002c2e8 != (code *)0x0) {
      (*DAT_14002c2e8)(param_1,7,1);
    }
  }
  CallWindowProcW(DAT_14002c2f8,param_1,param_2,param_3,param_4);
  return;
}


/*
 * FUN_14000d9e0 at 14000d9e0
 * ulonglong __fastcall FUN_14000d9e0(HWND param_1, uint param_2, ulonglong param_3, HWND param_4)
 * Address ranges: 14000d9e0-14000e06d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14000d9e0(HWND param_1,uint param_2,ulonglong param_3,HWND param_4)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  HDWP pvVar7;
  HWND hWnd;
  LRESULT LVar8;
  ulonglong uVar9;
  int iVar10;
  char local_res10 [8];
  SCROLLINFO local_48;
  
  local_res10[0] = '\0';
  if (param_2 == 0x110) {
    SetWindowLongPtrW(param_1,-0x15,(LONG_PTR)param_4);
    *(HWND *)(param_4 + 6) = param_1;
    pHVar6 = CreateWindowExW(0,L"tooltips_class32",(LPCWSTR)0x0,0x80000003,-0x80000000,-0x80000000,
                             -0x80000000,-0x80000000,param_1,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
    *(HWND *)(param_4 + 8) = pHVar6;
    GetClientRect(*(HWND *)(param_4 + 6),(LPRECT)(param_4 + 10));
    local_res10[0] = (**(code **)(*(longlong *)param_4 + 0x68))(param_4);
    pHVar6 = param_4;
  }
  else {
    pHVar6 = (HWND)GetWindowLongPtrW(param_1,-0x15);
  }
  if (pHVar6 == (HWND)0x0) goto LAB_14000e047;
  sVar3 = (short)(param_3 >> 0x10);
  if (param_2 < 0x113) {
    if (param_2 == 0x112) {
      if (((sVar3 == 0) && ((short)param_3 == -4000)) &&
         (cVar2 = (**(code **)(*(longlong *)pHVar6 + 0x98))(pHVar6), cVar2 != '\0')) {
        (**(code **)(*(longlong *)pHVar6 + 0x70))(pHVar6);
        EndDialog(*(HWND *)(pHVar6 + 6),1);
      }
    }
    else if (param_2 == 2) {
      DestroyWindow(*(HWND *)(pHVar6 + 8));
    }
    else if (param_2 == 0x47) {
LAB_14000de33:
      if ((param_4[8].unused & 1) == 0) {
        GetClientRect(*(HWND *)(pHVar6 + 6),(LPRECT)&local_48);
        pvVar7 = BeginDeferWindowPos(8);
        iVar4 = pHVar6[0xd].unused;
        iVar5 = pHVar6[0xc].unused;
        *(HDWP *)(pHVar6 + 4) = pvVar7;
        local_res10[0] =
             (**(code **)(*(longlong *)pHVar6 + 0x80))
                       (pHVar6,&local_48,local_48.nMin - iVar5,local_48.nMax - iVar4);
        EndDeferWindowPos(*(HDWP *)(pHVar6 + 4));
        *(longlong *)(pHVar6 + 4) = 0;
        GetClientRect(*(HWND *)(pHVar6 + 6),(LPRECT)(pHVar6 + 10));
      }
    }
    else if (param_2 == 0x4e) {
      if (param_4[4].unused == -0x212) {
        *(undefined **)(param_4 + 6) = &DAT_14002c300;
        *(undefined8 *)(param_4 + 0x30) = 0;
        lVar1 = *(longlong *)pHVar6;
        iVar4 = GetDlgCtrlID(*(HWND *)(param_4 + 2));
        cVar2 = (**(code **)(lVar1 + 0x58))(pHVar6,iVar4,&DAT_14002c300,0x800);
        if (cVar2 == '\0') {
          _DAT_14002c300 = 0;
        }
        local_res10[0] = '\x01';
        goto LAB_14000e047;
      }
      if ((*(HWND *)param_4 != (HWND)0x0) &&
         (iVar4 = GetClassNameA(*(HWND *)param_4,(LPSTR)&local_48,0x20), iVar4 != 0)) {
        uVar9 = 0;
        do {
          iVar4 = FUN_140024ce8((byte *)&local_48,(&PTR_s_Button_140026e40)[uVar9]);
          iVar5 = (int)uVar9;
          if (iVar4 == 0) {
            if (iVar5 == 3) {
              local_res10[0] =
                   (**(code **)(*(longlong *)pHVar6 + 0x28))
                             (pHVar6,param_4[2].unused,0x4e,param_3,param_4);
            }
            else if (iVar5 == 4) {
              local_res10[0] =
                   (**(code **)(*(longlong *)pHVar6 + 0x30))
                             (pHVar6,param_4[2].unused,0x4e,param_3,param_4);
            }
            break;
          }
          uVar9 = (ulonglong)(iVar5 + 1);
        } while ((&PTR_s_Button_140026e40)[uVar9] != (undefined *)0x0);
      }
    }
    else if (param_2 == 0x7b) {
      (**(code **)(*(longlong *)pHVar6 + 0x60))
                (pHVar6,param_3,(int)(short)param_4,(int)(short)((ulonglong)param_4 >> 0x10));
    }
    else if (param_2 == 0x111) {
      if (param_4 == (HWND)0x0) {
        (**(code **)(*(longlong *)pHVar6 + 0x78))(pHVar6,param_3 & 0xffffffff);
      }
      else {
        iVar4 = GetClassNameA(param_4,(LPSTR)&local_48,0x20);
        if (iVar4 != 0) {
          uVar9 = 0;
          do {
            iVar4 = FUN_140024ce8((byte *)&local_48,(&PTR_s_Button_140026e40)[uVar9]);
            iVar5 = (int)uVar9;
            if (iVar4 == 0) {
              if (iVar5 == 0) {
                local_res10[0] =
                     (**(code **)(*(longlong *)pHVar6 + 8))
                               (pHVar6,param_3 & 0xffff,0x111,param_3,param_4);
              }
              else if (iVar5 == 1) {
                local_res10[0] =
                     (**(code **)(*(longlong *)pHVar6 + 0x10))
                               (pHVar6,param_3 & 0xffff,0x111,param_3,param_4);
              }
              else if (iVar5 == 5) {
                local_res10[0] =
                     (**(code **)(*(longlong *)pHVar6 + 0x18))
                               (pHVar6,param_3 & 0xffff,0x111,param_3,param_4);
              }
              break;
            }
            uVar9 = (ulonglong)(iVar5 + 1);
          } while ((&PTR_s_Button_140026e40)[uVar9] != (undefined *)0x0);
        }
      }
    }
  }
  else if ((param_2 == 0x114) || (param_2 == 0x115)) {
    iVar4 = GetDlgCtrlID(param_4);
    if ((param_4 != (HWND)0x0) && (iVar5 = GetClassNameA(param_4,(LPSTR)&local_48,0x20), iVar5 != 0)
       ) {
      uVar9 = 0;
      do {
        iVar5 = FUN_140024ce8((byte *)&local_48,(&PTR_s_Button_140026e40)[uVar9]);
        iVar10 = (int)uVar9;
        if (iVar5 == 0) {
          if (iVar10 == 2) {
            local_res10[0] =
                 (**(code **)(*(longlong *)pHVar6 + 0x20))(pHVar6,iVar4,param_2,param_3,param_4);
          }
          else if (iVar10 == 6) {
            local_48.nPos = (uint)(param_3 >> 0x10) & 0xffff;
            local_48.cbSize = 0x1c;
            local_48.fMask = 4;
            SetScrollInfo(param_4,0,&local_48,1);
            local_res10[0] =
                 (**(code **)(*(longlong *)pHVar6 + 0x38))(pHVar6,iVar4,param_2,param_3,param_4);
          }
          break;
        }
        uVar9 = (ulonglong)(iVar10 + 1);
      } while ((&PTR_s_Button_140026e40)[uVar9] != (undefined *)0x0);
    }
  }
  else if (param_2 == 0x20a) {
    local_res10[0] = (**(code **)(*(longlong *)pHVar6 + 0x88))(pHVar6,(int)sVar3);
    if ((local_res10[0] == '\0') && (hWnd = GetParent(param_1), hWnd != (HWND)0x0)) {
      LVar8 = SendMessageW(hWnd,0x20a,param_3,(LPARAM)param_4);
      local_res10[0] = LVar8 != 0;
    }
  }
  else {
    if (param_2 == 0x214) {
      if (pHVar6[0xe].unused == 0) {
        lVar1 = *(longlong *)(pHVar6 + 0x18);
        iVar4 = (int)lVar1;
        if (param_4[2].unused - param_4->unused < iVar4) {
          if ((param_3 < 8) && ((0x92UL >> (param_3 & 0x3f) & 1) != 0)) {
            param_4->unused = param_4[2].unused - iVar4;
          }
          else {
            param_4[2].unused = iVar4 + param_4->unused;
          }
        }
        iVar4 = (int)((ulonglong)lVar1 >> 0x20);
        if (param_4[3].unused - param_4[1].unused < iVar4) {
          if (param_3 - 3 < 3) {
            param_4[1].unused = param_4[3].unused - iVar4;
          }
          else {
            param_4[3].unused = param_4[1].unused + iVar4;
          }
        }
        local_res10[0] = '\x01';
      }
      goto LAB_14000de33;
    }
    if (param_2 == 0x2e0) {
      local_res10[0] =
           (**(code **)(*(longlong *)pHVar6 + 0x90))(pHVar6,param_3 >> 0x10 & 0xffff,param_4);
    }
  }
  if (local_res10[0] == '\0') {
    local_48.cbSize = 0;
    local_48.fMask = 0;
    local_res10[0] =
         (**(code **)(*(longlong *)pHVar6 + 0x40))(pHVar6,param_2,param_3,param_4,&local_48);
    SetWindowLongPtrW(*(HWND *)(pHVar6 + 6),0,local_48._0_8_);
    if ((local_res10[0] == '\0') &&
       (uVar9 = (**(code **)(*(longlong *)pHVar6 + 0x48))
                          (pHVar6,param_2,param_3,param_4,local_res10), local_res10[0] != '\0')) {
      return uVar9;
    }
  }
LAB_14000e047:
  return (ulonglong)(local_res10[0] != '\0');
}


/*
 * FUN_14000e070 at 14000e070
 * longlong __fastcall FUN_14000e070(longlong * param_1, longlong param_2, int param_3, undefined8 param_4, ulonglong param_5)
 * Address ranges: 14000e070-14000e10f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


longlong FUN_14000e070(longlong *param_1,longlong param_2,int param_3,undefined8 param_4,
                      ulonglong param_5)

{
  uint uVar1;
  HWND hWnd;
  longlong lVar2;
  
  if ((short)(param_5 >> 0x10) != 0) {
    return (param_5 >> 0x18) << 8;
  }
  hWnd = GetDlgItem(*(HWND *)(param_2 + 0x18),param_3);
  uVar1 = GetWindowLongW(hWnd,-0x10);
  uVar1 = uVar1 & 0xf;
  if ((uVar1 != 2) && (uVar1 != 3)) {
    if ((uVar1 != 4) && (uVar1 != 9)) {
                    /* WARNING: Could not recover jumptable at 0x00014000e0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)*param_1)(param_1,param_3);
      return lVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00014000e0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_3);
    return lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000e10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(*param_1 + 8))(param_1,param_3);
  return lVar2;
}


/*
 * FUN_14000e110 at 14000e110
 * longlong __fastcall FUN_14000e110(longlong * param_1, longlong param_2, undefined8 param_3, undefined8 param_4, ulonglong param_5)
 * Address ranges: 14000e110-14000e15a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


longlong FUN_14000e110(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      ulonglong param_5)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_5 >> 0x10) & 0xffff;
  if (uVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014000e158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)*param_1)(param_1,param_5 & 0xffff);
    return lVar1;
  }
  if (uVar2 != 4) {
    if ((uVar2 == 5) && (*(char *)(param_2 + 0x3c) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014000e13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_5 & 0xffff);
      return lVar1;
    }
    return (param_5 >> 0x18) << 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000e14d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*param_1 + 8))(param_1,param_5 & 0xffff);
  return lVar1;
}


/*
 * FUN_14000e180 at 14000e180
 * undefined __fastcall FUN_14000e180(longlong param_1, int param_2, LPCSTR param_3)
 * Address ranges: 14000e180-14000e1b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000e180(longlong param_1,int param_2,LPCSTR param_3)

{
  HWND hWnd;
  
  *(undefined1 *)(param_1 + 0x3c) = 0;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SetWindowTextA(hWnd,param_3);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}


/*
 * FUN_14000e1c0 at 14000e1c0
 * undefined __fastcall FUN_14000e1c0(longlong param_1, int param_2, LPARAM param_3, ulonglong param_4)
 * Address ranges: 14000e1c0-14000e1f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000e1c0(longlong param_1,int param_2,LPARAM param_3,ulonglong param_4)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014000e1f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageA(hWnd,0xd,param_4 & 0xffffffff,param_3);
  return;
}


/*
 * FUN_14000e200 at 14000e200
 * undefined __fastcall FUN_14000e200(longlong param_1, int param_2, ulonglong param_3)
 * Address ranges: 14000e200-14000e22d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000e200(longlong param_1,int param_2,ulonglong param_3)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014000e227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW(hWnd,0xf1,param_3 & 0xff,0);
  return;
}


/*
 * FUN_14000e230 at 14000e230
 * LRESULT __fastcall FUN_14000e230(longlong param_1, int param_2)
 * Address ranges: 14000e230-14000e263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LRESULT FUN_14000e230(longlong param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  LRESULT LVar2;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  LVar1 = SendMessageW(hWnd,0x146,0,0);
  LVar2 = 0;
  if (LVar1 != -1) {
    LVar2 = LVar1;
  }
  return LVar2;
}


/*
 * FUN_14000e270 at 14000e270
 * undefined __fastcall FUN_14000e270(longlong param_1, int param_2, ulonglong param_3)
 * Address ranges: 14000e270-14000e29c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000e270(longlong param_1,int param_2,ulonglong param_3)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014000e296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW(hWnd,0x150,param_3 & 0xffffffff,0);
  return;
}


/*
 * FUN_14000e2a0 at 14000e2a0
 * ulonglong __fastcall FUN_14000e2a0(longlong param_1, undefined8 param_2, undefined8 param_3, LPARAM param_4, LPARAM param_5)
 * Address ranges: 14000e2a0-14000e33f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_14000e2a0(longlong param_1,undefined8 param_2,undefined8 param_3,LPARAM param_4,
                       LPARAM param_5)

{
  HWND pHVar1;
  ulonglong uVar2;
  LRESULT LVar3;
  ulonglong uVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
  uVar2 = SendMessageW(pHVar1,0x14a,0,param_4);
  if (1 < (int)uVar2 + 2U) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
    LVar3 = SendMessageW(pHVar1,0x151,(longlong)(int)uVar2,param_5);
    uVar4 = 0xffffffff;
    if (LVar3 != -1) {
      uVar4 = uVar2 & 0xffffffff;
    }
    return uVar4;
  }
  return 0xffffffff;
}


/*
 * FUN_14000e340 at 14000e340
 * ulonglong __fastcall FUN_14000e340(longlong param_1, int param_2, LPARAM param_3, LPARAM param_4)
 * Address ranges: 14000e340-14000e3cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_14000e340(longlong param_1,int param_2,LPARAM param_3,LPARAM param_4)

{
  HWND pHVar1;
  ulonglong uVar2;
  LRESULT LVar3;
  ulonglong uVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  uVar2 = SendMessageA(pHVar1,0x143,0,param_3);
  if (1 < (int)uVar2 + 2U) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
    LVar3 = SendMessageW(pHVar1,0x151,(longlong)(int)uVar2,param_4);
    uVar4 = 0xffffffff;
    if (LVar3 != -1) {
      uVar4 = uVar2 & 0xffffffff;
    }
    return uVar4;
  }
  return 0xffffffff;
}


/*
 * FUN_14000e3d0 at 14000e3d0
 * ulonglong __fastcall FUN_14000e3d0(longlong param_1, int param_2, LPARAM param_3, LPARAM param_4)
 * Address ranges: 14000e3d0-14000e45c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_14000e3d0(longlong param_1,int param_2,LPARAM param_3,LPARAM param_4)

{
  HWND pHVar1;
  ulonglong uVar2;
  LRESULT LVar3;
  ulonglong uVar4;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  uVar2 = SendMessageW(pHVar1,0x143,0,param_3);
  if (1 < (int)uVar2 + 2U) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
    LVar3 = SendMessageW(pHVar1,0x151,(longlong)(int)uVar2,param_4);
    uVar4 = 0xffffffff;
    if (LVar3 != -1) {
      uVar4 = uVar2 & 0xffffffff;
    }
    return uVar4;
  }
  return 0xffffffff;
}


/*
 * FUN_14000e460 at 14000e460
 * int __fastcall FUN_14000e460(longlong param_1, int param_2)
 * Address ranges: 14000e460-14000e490
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_14000e460(longlong param_1,int param_2)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  LVar2 = SendMessageA(hWnd,0x147,0,0);
  iVar1 = (int)LVar2;
  if ((int)LVar2 == -1) {
    iVar1 = -1;
  }
  return iVar1;
}


/*
 * FUN_14000e4a0 at 14000e4a0
 * undefined __fastcall FUN_14000e4a0(longlong param_1, int param_2, int param_3)
 * Address ranges: 14000e4a0-14000e4cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000e4a0(longlong param_1,int param_2,int param_3)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014000e4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW(hWnd,0x14e,(longlong)param_3,0);
  return;
}


/*
 * FUN_14000e4d0 at 14000e4d0
 * undefined __fastcall FUN_14000e4d0(longlong param_1, int param_2)
 * Address ranges: 14000e4d0-14000e658
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000e4d0(longlong param_1,int param_2)

{
  int iVar1;
  HDC hdc;
  HWND pHVar2;
  HGDIOBJ pvVar3;
  LRESULT LVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  tagRECT local_238;
  WCHAR local_228 [264];
  
  uVar7 = 0;
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc != (HDC)0x0) {
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
    pvVar3 = (HGDIOBJ)SendMessageA(pHVar2,0x31,0,0);
    pvVar3 = SelectObject(hdc,pvVar3);
    uVar6 = 0;
    while( true ) {
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
      LVar4 = SendMessageW(pHVar2,0x146,0,0);
      uVar5 = 0;
      if (LVar4 != -1) {
        uVar5 = (uint)LVar4;
      }
      if (uVar5 <= uVar6) break;
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
      LVar4 = SendMessageW(pHVar2,0x148,(ulonglong)uVar6,(LPARAM)local_228);
      uVar5 = uVar7;
      if (1 < (int)LVar4 + 2U) {
        local_238.left = 0;
        local_238.top = 0;
        local_238.right = 0;
        local_238.bottom = 0;
        DrawTextW(hdc,local_228,-1,&local_238,0x420);
        uVar5 = local_238.right - local_238.left;
        if ((uint)(local_238.right - local_238.left) <= uVar7) {
          uVar5 = uVar7;
        }
      }
      uVar7 = uVar5;
      uVar6 = uVar6 + 1;
    }
    SelectObject(hdc,pvVar3);
    DeleteDC(hdc);
  }
  iVar1 = GetSystemMetrics(2);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SendMessageW(pHVar2,0x160,(ulonglong)(iVar1 + 10 + uVar7),0);
  return;
}


/*
 * FUN_14000e660 at 14000e660
 * undefined __fastcall FUN_14000e660(longlong param_1, undefined8 param_2, longlong * param_3, uint param_4)
 * Address ranges: 14000e660-14000ec1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000e660(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  UINT UVar3;
  int iVar4;
  HWND pHVar5;
  longlong *plVar6;
  LRESULT LVar7;
  HWND pHVar8;
  HWND pHVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int local_res10;
  tagRECT local_98;
  tagRECT local_88;
  tagRECT local_78;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 local_44;
  ulonglong uVar15;
  
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x401);
  plVar6 = (longlong *)GetWindowLongPtrW(pHVar5,-0x15);
  if ((plVar6 != (longlong *)0x0) && (*plVar6 == 0)) {
    lVar1 = plVar6[(ulonglong)*(uint *)(plVar6 + 0x22) + 1];
    uVar12 = 0;
    if (*(uint *)((longlong)param_3 + 0x10c) != 0) {
      do {
        if (lVar1 == param_3[uVar12 + 1]) goto LAB_14000e74f;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)((longlong)param_3 + 0x10c));
    }
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
        if (*(uint *)(lVar1 + 0x48) != 0) {
          CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                             (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                             *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
        }
      }
      else {
        CreateDialogIndirectParamW
                  ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                   *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    ShowWindow(*(HWND *)(lVar1 + 0x18),0);
  }
LAB_14000e74f:
  SendMessageW(pHVar5,0x1309,0,0);
  SetWindowLongPtrW(pHVar5,-0x15,(LONG_PTR)param_3);
  local_68 = 1;
  local_44 = 0;
  uVar12 = 0;
  local_64 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  if (*(int *)((longlong)param_3 + 0x10c) != 0) {
    do {
      uVar10 = (uint)uVar12;
      if ((*(uint *)(param_3 + 0x21) >> (uVar10 & 0x1f) & 1) != 0) {
        uStack_58 = (undefined4)param_3[uVar12 + 0x11];
        uStack_54 = (undefined4)((ulonglong)param_3[uVar12 + 0x11] >> 0x20);
        SendMessageW(pHVar5,0x133e,(longlong)(int)uVar10,(LPARAM)&local_68);
      }
      uVar12 = (ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < *(uint *)((longlong)param_3 + 0x10c));
  }
  uVar12 = 0;
  uVar10 = 0;
  local_res10 = 0;
  LVar7 = SendMessageW(pHVar5,0x130c,(ulonglong)param_4,0);
  if (-1 < (int)LVar7) {
    uVar13 = uVar12;
    uVar15 = uVar12;
    if (*(uint *)((longlong)param_3 + 0x10c) != 0) {
      do {
        uVar10 = (uint)uVar13;
        uVar14 = (uint)uVar15;
        if (param_4 < uVar14) break;
        uVar11 = uVar14 + 1;
        if ((*(uint *)(param_3 + 0x21) >> (uVar10 & 0x1f) & 1) == 0) {
          uVar11 = uVar14;
        }
        uVar10 = uVar10 + 1;
        uVar13 = (ulonglong)uVar10;
        uVar15 = (ulonglong)uVar11;
      } while (uVar10 < *(uint *)((longlong)param_3 + 0x10c));
    }
    local_res10 = uVar10 - 1;
  }
  GetWindowRect(pHVar5,&local_98);
  SendMessageW(pHVar5,0x1328,0,(LPARAM)&local_98);
  plVar6 = (longlong *)*param_3;
  if (plVar6 == (longlong *)0x0) {
    if (*(int *)((longlong)param_3 + 0x10c) != 0) {
      do {
        lVar1 = param_3[uVar12 + 1];
        if (*(longlong *)(lVar1 + 0x18) == 0) {
          if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
            if (*(uint *)(lVar1 + 0x48) != 0) {
              CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                                 (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                                 *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
            }
          }
          else {
            CreateDialogIndirectParamW
                      ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                       *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
          }
        }
        pHVar5 = *(HWND *)(lVar1 + 0x18);
        GetWindowRect(pHVar5,&local_88);
        iVar2 = ((local_98.left - local_88.left) - local_88.right) + local_98.right;
        iVar4 = ((local_98.top - local_88.top) - local_88.bottom) + local_98.bottom;
        MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_88,2);
        OffsetRect(&local_88,iVar2 / 2,iVar4 / 2);
        UVar3 = 0x81;
        if ((int)uVar12 == local_res10) {
          UVar3 = 0x41;
        }
        SetWindowPos(pHVar5,(HWND)0x0,local_88.left,local_88.top,0,0,UVar3);
        (**(code **)(*(longlong *)param_3[uVar12 + 1] + 0x98))();
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)((longlong)param_3 + 0x10c));
    }
  }
  else {
    local_88.left = local_98.left;
    local_88.top = local_98.top;
    local_88.right = local_98.right;
    local_88.bottom = local_98.bottom;
    OffsetRect(&local_88,-local_98.left,-local_98.top);
    if (plVar6[3] == 0) {
      if ((LPCDLGTEMPLATEW)plVar6[8] == (LPCDLGTEMPLATEW)0x0) {
        if (*(uint *)(plVar6 + 9) != 0) {
          CreateDialogParamW((HINSTANCE)plVar6[10],
                             (LPCWSTR)(ulonglong)(*(uint *)(plVar6 + 9) & 0xffff),
                             *(HWND *)(plVar6[0xc] + 0x18),FUN_14000d9e0,(LPARAM)plVar6);
        }
      }
      else {
        CreateDialogIndirectParamW
                  ((HINSTANCE)0x0,(LPCDLGTEMPLATEW)plVar6[8],*(HWND *)(plVar6[0xc] + 0x18),
                   FUN_14000d9e0,(LPARAM)plVar6);
      }
    }
    pHVar5 = (HWND)plVar6[3];
    if (*(int *)((longlong)param_3 + 0x10c) != 0) {
      do {
        lVar1 = param_3[uVar12 + 1];
        if (*(longlong *)(lVar1 + 0x18) == 0) {
          if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
            if (*(uint *)(lVar1 + 0x48) != 0) {
              CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                                 (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                                 *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
            }
          }
          else {
            CreateDialogIndirectParamW
                      ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                       *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
          }
        }
        pHVar9 = *(HWND *)(lVar1 + 0x18);
        GetClientRect(pHVar9,&local_78);
        if (local_78.right < local_88.right) {
          iVar2 = (local_88.right - local_78.right) / 2;
        }
        else {
          iVar2 = 0;
        }
        OffsetRect(&local_78,iVar2,0);
        pHVar8 = GetParent(pHVar9);
        if (pHVar8 != pHVar5) {
          SetParent(pHVar9,pHVar5);
        }
        UVar3 = 0x81;
        if ((int)uVar12 == local_res10) {
          UVar3 = 0x41;
        }
        SetWindowPos(pHVar9,(HWND)0x0,local_78.left,local_78.top,0,0,UVar3);
        (**(code **)(*(longlong *)param_3[uVar12 + 1] + 0x98))();
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)((longlong)param_3 + 0x10c));
    }
    local_88.left = local_98.left;
    local_88.top = local_98.top;
    local_88.right = local_98.right;
    local_88.bottom = local_98.bottom;
    if (*(int *)((longlong)plVar6 + 0x5c) != 0) {
      pHVar9 = GetDlgItem((HWND)plVar6[3],*(int *)((longlong)plVar6 + 0x5c));
      SetWindowPos(pHVar9,(HWND)0x0,(local_98.right - local_98.left) + -0xc,0,0xc,
                   local_98.bottom - local_98.top,0x204);
    }
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_88,2);
    SetWindowPos(pHVar5,(HWND)0x0,local_88.left,local_88.top,0,0,0x41);
    (**(code **)(*plVar6 + 0x98))(plVar6);
  }
  *(int *)(param_3 + 0x22) = local_res10;
  if (*param_3 != 0) {
    FUN_14000f030(param_3);
  }
  return;
}


/*
 * FUN_14000ec20 at 14000ec20
 * undefined __fastcall FUN_14000ec20(longlong param_1, int param_2, uint param_3)
 * Address ranges: 14000ec20-14000ed84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000ec20(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  HWND hWnd;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  plVar3 = (longlong *)GetWindowLongPtrW(hWnd,-0x15);
  uVar5 = 0;
  if (*(uint *)((longlong)plVar3 + 0x10c) != 0) {
    uVar4 = 0;
    do {
      if (param_3 < uVar4) break;
      uVar2 = uVar4 + 1;
      if ((*(uint *)(plVar3 + 0x21) >> (uVar5 & 0x1f) & 1) == 0) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((longlong)plVar3 + 0x10c));
  }
  uVar5 = uVar5 - 1;
  if (*(uint *)(plVar3 + 0x22) != uVar5) {
    lVar1 = plVar3[(ulonglong)*(uint *)(plVar3 + 0x22) + 1];
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
        if (*(uint *)(lVar1 + 0x48) != 0) {
          CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                             (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                             *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
        }
      }
      else {
        CreateDialogIndirectParamW
                  ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                   *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    ShowWindow(*(HWND *)(lVar1 + 0x18),0);
    lVar1 = plVar3[(ulonglong)uVar5 + 1];
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
        if (*(uint *)(lVar1 + 0x48) != 0) {
          CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                             (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                             *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
        }
      }
      else {
        CreateDialogIndirectParamW
                  ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                   *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    ShowWindow(*(HWND *)(lVar1 + 0x18),1);
    *(uint *)(plVar3 + 0x22) = uVar5;
    if (*plVar3 != 0) {
      FUN_14000f030(plVar3);
    }
  }
  return;
}


/*
 * FUN_14000ed90 at 14000ed90
 * undefined __fastcall FUN_14000ed90(longlong param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 14000ed90-14000eddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000ed90(longlong param_1,int param_2,int param_3,uint param_4)

{
  HWND hwnd;
  SCROLLINFO local_28;
  
  hwnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  local_28.cbSize = 0x1c;
  local_28.fMask = 4;
  local_28.nPos = param_3;
  SetScrollInfo(hwnd,2,&local_28,param_4 & 0xff);
  return;
}


/*
 * FUN_14000ede0 at 14000ede0
 * undefined __fastcall FUN_14000ede0(longlong param_1, int param_2, int param_3)
 * Address ranges: 14000ede0-14000ee9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000ede0(longlong param_1,int param_2,int param_3)

{
  HWND hWnd;
  int cx;
  HDWP pvVar1;
  tagRECT local_38;
  
  hWnd = *(HWND *)(param_1 + 0x18);
  pvVar1 = *(HDWP *)(param_1 + 0x10);
  GetWindowRect(hWnd,&local_38);
  cx = (local_38.right - local_38.left) + param_2;
  if (pvVar1 != (HDWP)0x0) {
    pvVar1 = DeferWindowPos(pvVar1,hWnd,(HWND)0x0,0,0,cx,(local_38.bottom - local_38.top) + param_3,
                            0x16);
    *(HDWP *)(param_1 + 0x10) = pvVar1;
    return;
  }
  SetWindowPos(hWnd,(HWND)0x0,0,0,cx,(local_38.bottom - local_38.top) + param_3,0x16);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


/*
 * FUN_14000eea0 at 14000eea0
 * undefined __fastcall FUN_14000eea0(longlong param_1, int param_2)
 * Address ranges: 14000eea0-14000ef23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000eea0(longlong param_1,int param_2)

{
  undefined4 local_58;
  undefined4 local_54;
  HWND local_50;
  HWND local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_48 = (HWND)0x0;
  local_40 = 0;
  local_50 = *(HWND *)(param_1 + 0x18);
  local_38 = 0;
  uStack_30 = 0;
  local_20 = 0;
  local_18 = 0;
  local_58 = 0x48;
  local_54 = 0x111;
  local_28 = 0xffffffffffffffff;
  local_48 = GetDlgItem(local_50,param_2);
  local_20 = (longlong)param_2;
  SendMessageW(*(HWND *)(param_1 + 0x20),0x432,0,(LPARAM)&local_58);
  return;
}


/*
 * FUN_14000ef30 at 14000ef30
 * undefined8 * __fastcall FUN_14000ef30(undefined8 * param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 14000ef30-14000efa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 *
FUN_14000ef30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_140028860;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  SetRectEmpty((LPRECT)(param_1 + 5));
  param_1[8] = 0;
  *param_1 = &PTR_FUN_140028998;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = param_4;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  return param_1;
}


/*
 * FUN_14000efb0 at 14000efb0
 * undefined8 __fastcall FUN_14000efb0(longlong param_1)
 * Address ranges: 14000efb0-14000f02a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_14000efb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(LPCDLGTEMPLATEW *)(param_1 + 0x40) != (LPCDLGTEMPLATEW)0x0) {
      CreateDialogIndirectParamW
                ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(param_1 + 0x40),
                 *(HWND *)(*(longlong *)(param_1 + 0x60) + 0x18),FUN_14000d9e0,param_1);
      return *(undefined8 *)(param_1 + 0x18);
    }
    if (*(uint *)(param_1 + 0x48) != 0) {
      CreateDialogParamW(*(HINSTANCE *)(param_1 + 0x50),
                         (LPCWSTR)(ulonglong)(*(uint *)(param_1 + 0x48) & 0xffff),
                         *(HWND *)(*(longlong *)(param_1 + 0x60) + 0x18),FUN_14000d9e0,param_1);
      return *(undefined8 *)(param_1 + 0x18);
    }
  }
  return *(undefined8 *)(param_1 + 0x18);
}


/*
 * FUN_14000f030 at 14000f030
 * undefined __fastcall FUN_14000f030(longlong * param_1)
 * Address ranges: 14000f030-14000f1d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000f030(longlong *param_1)

{
  longlong lVar1;
  HWND pHVar2;
  int nCmdShow;
  tagRECT local_48;
  tagRECT local_38;
  SCROLLINFO local_28;
  
  lVar1 = param_1[(ulonglong)*(uint *)(param_1 + 0x22) + 1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
      if (*(uint *)(lVar1 + 0x48) != 0) {
        CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                           (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                           *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    else {
      CreateDialogIndirectParamW
                ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                 *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
    }
  }
  GetClientRect(*(HWND *)(lVar1 + 0x18),&local_48);
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
      if (*(uint *)(lVar1 + 0x48) != 0) {
        CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                           (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                           *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    else {
      CreateDialogIndirectParamW
                ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                 *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
    }
  }
  GetClientRect(*(HWND *)(lVar1 + 0x18),&local_38);
  *(bool *)((longlong)param_1 + 0x114) =
       local_38.bottom - local_38.top < local_48.bottom - local_48.top;
  nCmdShow = 0;
  if (local_38.bottom - local_38.top < local_48.bottom - local_48.top) {
    nCmdShow = 8;
  }
  pHVar2 = GetDlgItem(*(HWND *)(*param_1 + 0x18),*(int *)(*param_1 + 0x5c));
  ShowWindow(pHVar2,nCmdShow);
  if (*(char *)((longlong)param_1 + 0x114) != '\0') {
    local_28.nMax = local_48.bottom - local_48.top;
    local_28.nPage = local_38.bottom - local_38.top;
    local_28.cbSize = 0x1c;
    local_28.fMask = 7;
    local_28.nMin = 0;
    local_28.nPos = 0;
    pHVar2 = GetDlgItem(*(HWND *)(*param_1 + 0x18),*(int *)(*param_1 + 0x5c));
    SetScrollInfo(pHVar2,2,&local_28,1);
    FUN_14000f1e0(param_1,0);
  }
  return;
}


/*
 * FUN_14000f1e0 at 14000f1e0
 * undefined __fastcall FUN_14000f1e0(longlong * param_1, int param_2)
 * Address ranges: 14000f1e0-14000f344
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000f1e0(longlong *param_1,int param_2)

{
  longlong lVar1;
  HWND hWnd;
  tagRECT local_18;
  
  if ((*param_1 != 0) && (*(char *)((longlong)param_1 + 0x114) != '\0')) {
    lVar1 = param_1[(ulonglong)*(uint *)(param_1 + 0x22) + 1];
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
        if (*(uint *)(lVar1 + 0x48) != 0) {
          CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                             (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                             *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
        }
      }
      else {
        CreateDialogIndirectParamW
                  ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                   *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    hWnd = *(HWND *)(lVar1 + 0x18);
    GetWindowRect(hWnd,&local_18);
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
        if (*(uint *)(lVar1 + 0x48) != 0) {
          CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                             (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                             *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
        }
      }
      else {
        CreateDialogIndirectParamW
                  ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                   *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    MapWindowPoints((HWND)0x0,*(HWND *)(lVar1 + 0x18),(LPPOINT)&local_18,2);
    OffsetRect(&local_18,0,-(local_18.top + param_2));
    SetWindowPos(hWnd,(HWND)0x0,0,local_18.top,0,0,1);
  }
  return;
}


/*
 * FUN_14000f350 at 14000f350
 * undefined8 * __fastcall FUN_14000f350(undefined8 * param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 14000f350-14000f3bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 *
FUN_14000f350(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_140028860;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  SetRectEmpty((LPRECT)(param_1 + 5));
  param_1[8] = 0;
  *param_1 = &PTR_FUN_1400288f8;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = param_4;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  return param_1;
}


/*
 * FUN_14000f3c0 at 14000f3c0
 * undefined8 __fastcall FUN_14000f3c0(longlong * param_1, int param_2, short param_3, undefined8 param_4, undefined1 * param_5)
 * Address ranges: 14000f3c0-14000f407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8
FUN_14000f3c0(longlong *param_1,int param_2,short param_3,undefined8 param_4,undefined1 *param_5)

{
  if ((param_2 == 0x111) && (param_3 == 2)) {
    (**(code **)(*param_1 + 0x70))();
    EndDialog((HWND)param_1[3],1);
    *param_5 = 1;
    return 1;
  }
  return 0;
}


/*
 * FUN_14000f410 at 14000f410
 * undefined __fastcall FUN_14000f410(longlong param_1)
 * Address ranges: 14000f410-14000f462
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000f410(longlong param_1)

{
  if (*(LPCDLGTEMPLATEW *)(param_1 + 0x40) != (LPCDLGTEMPLATEW)0x0) {
    DialogBoxIndirectParamW
              ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(param_1 + 0x40),*(HWND *)(param_1 + 0x58),
               FUN_14000d9e0,param_1);
    return;
  }
  if (*(uint *)(param_1 + 0x48) != 0) {
    DialogBoxParamW(*(HINSTANCE *)(param_1 + 0x50),
                    (LPCWSTR)(ulonglong)(*(uint *)(param_1 + 0x48) & 0xffff),
                    *(HWND *)(param_1 + 0x58),FUN_14000d9e0,param_1);
  }
  return;
}


/*
 * FUN_14000f470 at 14000f470
 * undefined4 __fastcall FUN_14000f470(longlong * param_1, LPCWSTR param_2, uint param_3)
 * Address ranges: 14000f470-14000f4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_14000f470(longlong *param_1,LPCWSTR param_2,uint param_3)

{
  BOOL BVar1;
  HMENU hMenu;
  undefined4 uVar2;
  
  hMenu = (HMENU)*param_1;
  uVar2 = 0xffffffff;
  if (hMenu == (HMENU)0x0) {
    hMenu = CreatePopupMenu();
    *param_1 = (longlong)hMenu;
    if (hMenu == (HMENU)0x0) {
      return 0xffffffff;
    }
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  BVar1 = AppendMenuW(hMenu,(param_3 & 0xff) << 3,(ulonglong)*(uint *)(param_1 + 1),param_2);
  if (BVar1 != 0) {
    uVar2 = (undefined4)param_1[1];
  }
  return uVar2;
}


/*
 * FUN_14000f4d0 at 14000f4d0
 * undefined8 * __fastcall FUN_14000f4d0(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 14000f4d0-14000f588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_14000f4d0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  HDC hdc;
  
  param_1[2] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = thunk_FUN_14002423c(0x1000);
  param_1[0xc] = uVar2;
  param_1[0xd] = 0x80;
  *(undefined4 *)(param_1 + 0xe) = 0x60;
  uVar2 = thunk_FUN_14002423c(0x1000);
  param_1[0xf] = uVar2;
  param_1[0x10] = 0x80;
  *(undefined4 *)(param_1 + 0x11) = 0x60;
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  *(int *)(param_1 + 3) = iVar1;
  *(int *)((longlong)param_1 + 0x1c) = iVar1;
  *(int *)(param_1 + 0x12) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  SetRectEmpty((LPRECT)(param_1 + 4));
  return param_1;
}


/*
 * FUN_14000f590 at 14000f590
 * undefined __fastcall FUN_14000f590(undefined8 * param_1)
 * Address ranges: 14000f590-14000f663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000f590(undefined8 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  DeleteObject((HGDIOBJ)param_1[6]);
  uVar1 = 0;
  param_1[6] = 0;
  uVar3 = uVar1;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    do {
      DeleteObject(*(HGDIOBJ *)(param_1[0xc] + 0x18 + uVar3 * 0x20));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x6c));
  }
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  FUN_140024260((LPVOID)param_1[10]);
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    do {
      DeleteObject(*(HGDIOBJ *)(param_1[0xf] + 0x18 + uVar1 * 0x20));
      uVar2 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x84));
  }
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  if ((HMODULE)*param_1 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  FUN_140024260((LPVOID)param_1[0xf]);
  FUN_140024260((LPVOID)param_1[0xc]);
  FUN_140024260((LPVOID)param_1[10]);
  return;
}


/*
 * FUN_14000f670 at 14000f670
 * undefined4 __fastcall FUN_14000f670(undefined8 * param_1)
 * Address ranges: 14000f670-14000f95f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_14000f670(undefined8 *param_1)

{
  undefined4 *puVar1;
  LONG *pLVar2;
  longlong lVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  HMONITOR pHVar6;
  HWND pHVar7;
  HANDLE h;
  HFONT pHVar8;
  LRESULT LVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  tagRECT local_d8;
  tagRECT local_c8;
  undefined8 local_b8;
  tagRECT tStack_b0;
  undefined8 uStack_a0;
  LOGFONTW local_98;
  
  uVar13 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_1 + 3);
  if (*(HWND *)(param_1[2] + 0x18) == (HWND)0x0) {
    return uVar13;
  }
  GetClientRect(*(HWND *)(param_1[2] + 0x18),&local_c8);
  GetWindowRect(*(HWND *)(param_1[2] + 0x18),&local_d8);
  pHVar8 = (HFONT)0x0;
  *(LONG *)((longlong)param_1 + 0x44) =
       (local_d8.right - (local_c8.right - local_c8.left)) - local_d8.left;
  *(LONG *)((longlong)param_1 + 0x3c) = local_c8.right - local_c8.left;
  *(LONG *)(param_1 + 9) = (local_d8.bottom - (local_c8.bottom - local_c8.top)) - local_d8.top;
  *(LONG *)(param_1 + 8) = local_c8.bottom - local_c8.top;
  param_1[1] = 0;
  hModule = LoadLibraryA("Shcore.dll");
  *param_1 = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar5 = GetProcAddress(hModule,"GetDpiForMonitor");
    param_1[1] = pFVar5;
  }
  if (param_1[1] != 0) {
    pHVar6 = MonitorFromRect(&local_d8,2);
    local_res8[0] = 0;
    local_res10[0] = 0;
    iVar4 = (*(code *)param_1[1])(pHVar6,0,local_res8,local_res10);
    if (-1 < iVar4) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_res8[0];
      *(undefined4 *)(param_1 + 0x12) = local_res8[0];
      uVar13 = local_res8[0];
    }
  }
  pHVar7 = GetParent(*(HWND *)(param_1[2] + 0x18));
  GetWindowRect(*(HWND *)(param_1[2] + 0x18),(LPRECT)(param_1 + 4));
  MapWindowPoints((HWND)0x0,pHVar7,(LPPOINT)(param_1 + 4),2);
  if (*(HWND *)(param_1[2] + 0x20) != (HWND)0x0) {
    h = (HANDLE)SendMessageW(*(HWND *)(param_1[2] + 0x20),0x31,0,0);
    iVar4 = GetObjectW(h,0x5c,&local_98);
    if (iVar4 != 0) {
      pHVar8 = CreateFontIndirectW(&local_98);
    }
    param_1[6] = pHVar8;
    LVar9 = SendMessageW(*(HWND *)(param_1[2] + 0x20),0x419,0,0);
    *(int *)(param_1 + 7) = (int)LVar9;
  }
  pHVar7 = GetWindow(*(HWND *)(param_1[2] + 0x18),5);
  do {
    if (pHVar7 == (HWND)0x0) {
      return uVar13;
    }
    local_b8 = pHVar7;
    GetWindowRect(pHVar7,&tStack_b0);
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1[2] + 0x18),(LPPOINT)&tStack_b0,2);
    uStack_a0 = SendMessageW(pHVar7,0x31,0,0);
    iVar4 = *(int *)((longlong)param_1 + 0x5c);
    if (*(int *)(param_1 + 0xb) == iVar4) {
      if (iVar4 == 0) {
        uVar12 = 0x10;
      }
      else {
        uVar12 = iVar4 * 2;
      }
      uVar10 = SUB168(ZEXT816(0x20) * ZEXT416(uVar12),0);
      if (SUB168(ZEXT816(0x20) * ZEXT416(uVar12),8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      puVar11 = (undefined8 *)thunk_FUN_14002423c(uVar10);
      if (puVar11 == (undefined8 *)0x0) {
        FUN_140024260((undefined8 *)param_1[10]);
        param_1[10] = 0;
        param_1[0xb] = 0;
        return uVar13;
      }
      FUN_140024620(puVar11,(undefined8 *)param_1[10],
                    (ulonglong)*(uint *)((longlong)param_1 + 0x5c) << 5);
      FUN_140024260((LPVOID)param_1[10]);
      param_1[10] = puVar11;
      *(uint *)((longlong)param_1 + 0x5c) = uVar12;
    }
    uVar12 = *(uint *)(param_1 + 0xb);
    lVar3 = param_1[10];
    puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar12 * 0x20);
    *puVar1 = (undefined4)local_b8;
    puVar1[1] = local_b8._4_4_;
    puVar1[2] = tStack_b0.left;
    puVar1[3] = tStack_b0.top;
    pLVar2 = (LONG *)(lVar3 + 0x10 + (ulonglong)uVar12 * 0x20);
    *pLVar2 = tStack_b0.right;
    pLVar2[1] = tStack_b0.bottom;
    pLVar2[2] = (LONG)uStack_a0;
    pLVar2[3] = uStack_a0._4_4_;
    *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + 1;
    pHVar7 = GetWindow(pHVar7,2);
  } while( true );
}


/*
 * FUN_14000f960 at 14000f960
 * undefined __fastcall FUN_14000f960(longlong param_1, int param_2, int * param_3)
 * Address ranges: 14000f960-14000fc8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000f960(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  WPARAM WVar6;
  uint uVar7;
  longlong lVar8;
  HDWP local_res8;
  longlong local_38;
  undefined4 local_30;
  int local_2c;
  
  if (param_2 != *(int *)(param_1 + 0x90)) {
    if (param_3 == (int *)0x0) {
      iVar5 = MulDiv(*(int *)(param_1 + 0x20),param_2,*(int *)(param_1 + 0x1c));
      iVar4 = MulDiv(*(int *)(param_1 + 0x24),param_2,*(int *)(param_1 + 0x1c));
      iVar2 = MulDiv(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20),param_2,
                     *(int *)(param_1 + 0x1c));
      iVar3 = MulDiv(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24),param_2,
                     *(int *)(param_1 + 0x1c));
    }
    else {
      iVar2 = MulDiv(*(int *)(param_1 + 0x3c),param_2,*(int *)(param_1 + 0x1c));
      iVar2 = *(int *)(param_1 + 0x44) + iVar2;
      iVar4 = *(int *)(param_1 + 0x48);
      iVar3 = MulDiv(*(int *)(param_1 + 0x40),param_2,*(int *)(param_1 + 0x1c));
      iVar3 = iVar3 + iVar4;
      iVar4 = ((param_3[3] + param_3[1]) - iVar3) / 2;
      iVar5 = ((param_3[2] - iVar2) + *param_3) / 2;
    }
    SetWindowPos(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x18),(HWND)0x0,iVar5,iVar4,iVar2,iVar3,
                 0x214);
    if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0) &&
       (*(longlong *)(param_1 + 0x30) != 0)) {
      local_30 = *(undefined4 *)(param_1 + 0x1c);
      local_38 = *(longlong *)(param_1 + 0x30);
      local_2c = param_2;
      WVar6 = FUN_14000fc90((longlong *)(param_1 + 0x60),&local_38);
      SendMessageW(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x20),0x30,WVar6,0);
      if (*(int *)(param_1 + 0x38) != -1) {
        iVar2 = MulDiv(*(int *)(param_1 + 0x38),param_2,*(int *)(param_1 + 0x1c));
        SendMessageW(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x20),0x418,0,(longlong)iVar2);
      }
    }
    local_res8 = BeginDeferWindowPos(*(int *)(param_1 + 0x58) + 1);
    if (*(int *)(param_1 + 0x58) != 0) {
      uVar7 = 0;
      do {
        lVar8 = (ulonglong)uVar7 * 0x20;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18 + lVar8);
        if (lVar1 != 0) {
          local_30 = *(undefined4 *)(param_1 + 0x1c);
          local_38 = lVar1;
          local_2c = param_2;
          WVar6 = FUN_14000fc90((longlong *)(param_1 + 0x60),&local_38);
          SendMessageW(*(HWND *)(*(longlong *)(param_1 + 0x50) + lVar8),0x30,WVar6,0);
        }
        lVar1 = *(longlong *)(param_1 + 0x50);
        iVar3 = MulDiv(*(int *)(lVar1 + 0x14 + lVar8) - *(int *)(lVar1 + 0xc + lVar8),param_2,
                       *(int *)(param_1 + 0x1c));
        iVar4 = MulDiv(*(int *)(lVar1 + 0x10 + lVar8) - *(int *)(lVar1 + 8 + lVar8),param_2,
                       *(int *)(param_1 + 0x1c));
        iVar5 = MulDiv(*(int *)(lVar1 + 0xc + lVar8),param_2,*(int *)(param_1 + 0x1c));
        iVar2 = *(int *)(lVar1 + 8 + lVar8);
        if (local_res8 == (HDWP)0x0) {
          iVar2 = MulDiv(iVar2,param_2,*(int *)(param_1 + 0x1c));
          SetWindowPos(*(HWND *)(lVar1 + lVar8),(HWND)0x0,iVar2,iVar5,iVar4,iVar3,0x214);
        }
        else {
          iVar2 = MulDiv(iVar2,param_2,*(int *)(param_1 + 0x1c));
          local_res8 = DeferWindowPos(local_res8,*(HWND *)(lVar1 + lVar8),(HWND)0x0,iVar2,iVar5,
                                      iVar4,iVar3,0x214);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x58));
    }
    InvalidateRect(*(HWND *)(*(longlong *)(param_1 + 0x10) + 0x18),(RECT *)0x0,1);
    if (local_res8 != (HDWP)0x0) {
      EndDeferWindowPos(local_res8);
    }
    *(int *)(param_1 + 0x90) = param_2;
  }
  return;
}


/*
 * FUN_14000fc90 at 14000fc90
 * undefined8 __fastcall FUN_14000fc90(longlong * param_1, longlong * param_2)
 * Address ranges: 14000fc90-14000ff0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_14000fc90(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  HANDLE pvVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  HFONT pHVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  LOGFONTW local_88;
  
  uVar9 = 0;
  uVar18 = *(uint *)((longlong)param_1 + 0xc);
  uVar20 = (ulonglong)(uint)((int)param_2[1] << 0x10) + *param_2 +
           (ulonglong)*(uint *)((longlong)param_2 + 0xc);
  if (uVar18 != 0) {
    uVar14 = 0;
    uVar17 = uVar18;
    do {
      uVar9 = uVar17 + uVar14 >> 1;
      uVar15 = *(ulonglong *)(*param_1 + (ulonglong)uVar9 * 0x20);
      uVar8 = uVar9;
      if (uVar15 <= uVar20) {
        if (uVar20 <= uVar15) break;
        uVar14 = uVar9 + 1;
        uVar9 = uVar14;
        uVar8 = uVar17;
      }
      uVar17 = uVar8;
    } while (uVar17 != uVar14);
  }
  lVar19 = (ulonglong)uVar9 * 0x20;
  if ((uVar9 != uVar18) && (lVar13 = *param_1, *(ulonglong *)(lVar19 + lVar13) == uVar20)) {
    if ((*param_2 == *(longlong *)(lVar19 + 8 + lVar13)) &&
       ((*(uint *)((longlong)param_2 + 0xc) == *(uint *)(lVar19 + 0x14 + lVar13) &&
        ((int)param_2[1] == *(int *)(lVar19 + 0x10 + lVar13))))) {
      return *(undefined8 *)(lVar19 + 0x18 + lVar13);
    }
    DeleteObject(*(HGDIOBJ *)(lVar19 + 0x18 + lVar13));
    lVar13 = *param_2;
    uVar6 = *(undefined4 *)((longlong)param_2 + 4);
    lVar16 = param_2[1];
    uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
    pvVar4 = (HANDLE)*param_2;
    *(ulonglong *)(lVar19 + *param_1) = uVar20;
    puVar2 = (undefined4 *)(lVar19 + 8 + *param_1);
    *puVar2 = (int)lVar13;
    puVar2[1] = uVar6;
    puVar2[2] = (int)lVar16;
    puVar2[3] = uVar7;
    iVar10 = GetObjectW(pvVar4,0x5c,&local_88);
    if (iVar10 == 0) {
      GetLastError();
    }
    else {
      local_88.lfHeight =
           MulDiv(local_88.lfHeight,*(int *)((longlong)param_2 + 0xc),(int)param_2[1]);
      pHVar11 = CreateFontIndirectW(&local_88);
      if (pHVar11 != (HFONT)0x0) goto LAB_14000fdac;
    }
    pHVar11 = (HFONT)*param_2;
LAB_14000fdac:
    *(HFONT *)(lVar19 + 0x18 + *param_1) = pHVar11;
    return *(undefined8 *)(lVar19 + 0x18 + *param_1);
  }
  if (uVar18 == *(uint *)(param_1 + 1)) {
    auVar5 = ZEXT816(0x20) * ZEXT416(*(uint *)(param_1 + 1) * 2);
    uVar12 = auVar5._0_8_;
    if (auVar5._8_8_ != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    lVar19 = thunk_FUN_14002423c(uVar12);
    if (lVar19 != 0) {
      uVar18 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar13 = *param_1;
          uVar15 = (ulonglong)uVar18;
          uVar18 = uVar18 + 1;
          lVar16 = uVar15 * 0x20;
          puVar1 = (undefined8 *)(lVar13 + lVar16);
          uVar12 = puVar1[1];
          *(undefined8 *)(lVar16 + lVar19) = *puVar1;
          ((undefined8 *)(lVar16 + lVar19))[1] = uVar12;
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar16);
          uVar12 = puVar1[1];
          puVar3 = (undefined8 *)(lVar16 + 0x10 + lVar19);
          *puVar3 = *puVar1;
          puVar3[1] = uVar12;
        } while (uVar18 < *(uint *)(param_1 + 1));
      }
      FUN_140024260((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar19;
    }
  }
  uVar18 = *(uint *)((longlong)param_1 + 0xc);
  while (uVar9 < uVar18) {
    lVar19 = *param_1;
    lVar13 = (ulonglong)(uVar18 - 1) * 0x20;
    puVar1 = (undefined8 *)(lVar19 + lVar13);
    uVar12 = puVar1[1];
    puVar3 = (undefined8 *)(lVar19 + (ulonglong)uVar18 * 0x20);
    *puVar3 = *puVar1;
    puVar3[1] = uVar12;
    puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar13);
    uVar12 = puVar1[1];
    puVar3 = (undefined8 *)(lVar19 + 0x10 + (ulonglong)uVar18 * 0x20);
    *puVar3 = *puVar1;
    puVar3[1] = uVar12;
    uVar18 = uVar18 - 1;
  }
  lVar16 = (ulonglong)uVar9 * 0x20;
  lVar19 = *param_2;
  uVar6 = *(undefined4 *)((longlong)param_2 + 4);
  lVar13 = param_2[1];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
  pvVar4 = (HANDLE)*param_2;
  *(ulonglong *)(lVar16 + *param_1) = uVar20;
  puVar2 = (undefined4 *)(lVar16 + 8 + *param_1);
  *puVar2 = (int)lVar19;
  puVar2[1] = uVar6;
  puVar2[2] = (int)lVar13;
  puVar2[3] = uVar7;
  iVar10 = GetObjectW(pvVar4,0x5c,&local_88);
  if (iVar10 == 0) {
    GetLastError();
  }
  else {
    local_88.lfHeight = MulDiv(local_88.lfHeight,*(int *)((longlong)param_2 + 0xc),(int)param_2[1]);
    pHVar11 = CreateFontIndirectW(&local_88);
    if (pHVar11 != (HFONT)0x0) goto LAB_14000fed3;
  }
  pHVar11 = (HFONT)*param_2;
LAB_14000fed3:
  *(HFONT *)(lVar16 + 0x18 + *param_1) = pHVar11;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return *(undefined8 *)(lVar16 + 0x18 + *param_1);
}


/*
 * FUN_14000ff10 at 14000ff10
 * undefined __fastcall FUN_14000ff10(longlong * param_1, uint param_2, undefined8 param_3, ushort * param_4)
 * Address ranges: 14000ff10-14000fffc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14000ff10(longlong *param_1,uint param_2,undefined8 param_3,ushort *param_4)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int cx;
  int cy;
  HMODULE pHVar5;
  HANDLE h;
  HANDLE pvVar6;
  longlong lVar7;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  
  uVar1 = *(undefined8 *)param_4;
  uVar2 = *param_4;
  lVar7 = (ulonglong)param_2 * 0x20;
  *(undefined8 *)(lVar7 + *param_1) = param_3;
  lVar4 = *param_1;
  uVar3 = *(undefined4 *)(param_4 + 4);
  *(undefined8 *)(lVar7 + 8 + lVar4) = uVar1;
  *(undefined4 *)(lVar7 + 0x10 + lVar4) = uVar3;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  h = LoadImageW(pHVar5,(LPCWSTR)(ulonglong)uVar2,0,0,0,0x8000);
  pvVar6 = (HANDLE)0x0;
  if (h != (HANDLE)0x0) {
    GetObjectW(h,0x20,local_48);
    cx = MulDiv(local_44,*(int *)(param_4 + 4),*(int *)(param_4 + 2));
    cy = MulDiv(local_40,*(int *)(param_4 + 4),*(int *)(param_4 + 2));
    uVar2 = *param_4;
    pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
    pvVar6 = LoadImageW(pHVar5,(LPCWSTR)(ulonglong)uVar2,0,cx,cy,0);
  }
  *(HANDLE *)(lVar7 + 0x18 + *param_1) = pvVar6;
  return;
}


/*
 * FUN_140010000 at 140010000
 * undefined * __fastcall FUN_140010000(undefined4 param_1, undefined8 param_2)
 * Address ranges: 140010000-140010483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140010000(undefined4 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if ((DAT_14002d3f0 & 1) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 1;
    DAT_14002d388 = (longlong *)FUN_140011240(0x100,'\0');
    _DAT_14002d390 = "D3D11 FL10.0";
    _DAT_14002d378 = &PTR_FUN_140028ac8;
    _DAT_14002d398 = 0;
    DAT_14002d380 = 0;
  }
  if ((DAT_14002d3f0 & 2) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 2;
    DAT_14002d338 = (longlong *)FUN_140011240(0x101,'\0');
    _DAT_14002d340 = "D3D11 FL10.1";
    _DAT_14002d328 = &PTR_FUN_140028ac8;
    _DAT_14002d348 = 0;
    DAT_14002d330 = 0;
  }
  if ((DAT_14002d3f0 & 4) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 4;
    DAT_14002d3d8 = (longlong *)FUN_140011240(0x110,'\0');
    _DAT_14002d3e0 = "D3D11 FL11.0";
    _DAT_14002d3c8 = &PTR_FUN_140028ac8;
    _DAT_14002d3e8 = 0;
    DAT_14002d3d0 = 0;
  }
  if ((DAT_14002d3f0 & 8) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 8;
    DAT_14002d360 = (longlong *)FUN_140011240(0x101,'\x01');
    _DAT_14002d368 = "D3D11 WARP FL10.1";
    _DAT_14002d350 = &PTR_FUN_140028ac8;
    _DAT_14002d370 = 0;
    DAT_14002d358 = 0;
  }
  if ((DAT_14002d3f0 & 0x10) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 0x10;
    _DAT_14002d3b0 = FUN_140012d90(0x110);
    _DAT_14002d3b8 = "D3D12 FL11.0";
    _DAT_14002d3a0 = &PTR_FUN_140028ac8;
    _DAT_14002d3c0 = 0;
    DAT_14002d3a8 = 0;
  }
  if ((DAT_14002d3f0 & 0x20) == 0) {
    DAT_14002d3f0 = DAT_14002d3f0 | 0x20;
    _DAT_14002d310 = FUN_140012d90(0x120);
    _DAT_14002d318 = "D3D12 FL12.0";
    _DAT_14002d300 = &PTR_FUN_140028ac8;
    _DAT_14002d320 = 0;
    DAT_14002d308 = 0;
  }
  switch(param_1) {
  case 0:
    puVar3 = &DAT_14002d3c8;
    if (DAT_14002d3eb == '\0') {
      if (DAT_14002d3e8 == '\0') {
        uVar1 = (**(code **)(*DAT_14002d3d8 + 8))();
        _DAT_14002d3e8 = CONCAT31(CONCAT21(uRam000000014002d3ea,uVar1),1);
      }
      if ((DAT_14002d3e9 != '\0') && (cVar2 = (**(code **)(*DAT_14002d3d8 + 0x10))(), cVar2 != '\0')
         ) {
        (**(code **)(*DAT_14002d3d8 + 0x18))();
        _DAT_14002d3e8 = CONCAT13(1,_DAT_14002d3e8);
        DAT_14002d3d0 = param_2;
        return &DAT_14002d3c8;
      }
      if (DAT_14002d3eb == '\0') {
        puVar3 = &DAT_14002d328;
        if (DAT_14002d34b == '\0') {
          if (DAT_14002d348 == '\0') {
            uVar1 = (**(code **)(*DAT_14002d338 + 8))();
            _DAT_14002d348 = CONCAT31(CONCAT21(uRam000000014002d34a,uVar1),1);
          }
          if ((DAT_14002d349 != '\0') &&
             (cVar2 = (**(code **)(*DAT_14002d338 + 0x10))(), cVar2 != '\0')) {
            (**(code **)(*DAT_14002d338 + 0x18))();
            _DAT_14002d348 = CONCAT13(1,_DAT_14002d348);
            DAT_14002d330 = param_2;
            return &DAT_14002d328;
          }
          if (DAT_14002d34b == '\0') {
            puVar3 = &DAT_14002d378;
            if (DAT_14002d39b == '\0') {
              if (DAT_14002d398 == '\0') {
                uVar1 = (**(code **)(*DAT_14002d388 + 8))();
                _DAT_14002d398 = CONCAT31(CONCAT21(uRam000000014002d39a,uVar1),1);
              }
              if ((DAT_14002d399 != '\0') &&
                 (cVar2 = (**(code **)(*DAT_14002d388 + 0x10))(), cVar2 != '\0')) {
                (**(code **)(*DAT_14002d388 + 0x18))();
                _DAT_14002d398 = CONCAT13(1,_DAT_14002d398);
                DAT_14002d380 = param_2;
                return &DAT_14002d378;
              }
              if (DAT_14002d39b == '\0') {
                puVar3 = &DAT_14002d350;
                if (DAT_14002d373 == '\0') {
                  if (DAT_14002d370 == '\0') {
                    uVar1 = (**(code **)(*DAT_14002d360 + 8))();
                    _DAT_14002d370 = CONCAT31(CONCAT21(uRam000000014002d372,uVar1),1);
                  }
                  if ((DAT_14002d371 != '\0') &&
                     (cVar2 = (**(code **)(*DAT_14002d360 + 0x10))(), cVar2 != '\0')) {
                    (**(code **)(*DAT_14002d360 + 0x18))();
                    _DAT_14002d370 = CONCAT13(1,_DAT_14002d370);
                    DAT_14002d358 = param_2;
                    return &DAT_14002d350;
                  }
                  if (DAT_14002d373 == '\0') {
                    return (undefined *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 1:
    DAT_14002d380 = param_2;
    return &DAT_14002d378;
  case 2:
    DAT_14002d330 = param_2;
    return &DAT_14002d328;
  case 3:
    DAT_14002d358 = param_2;
    return &DAT_14002d350;
  case 4:
    DAT_14002d3d0 = param_2;
    return &DAT_14002d3c8;
  case 5:
    DAT_14002d3a8 = param_2;
    return &DAT_14002d3a0;
  case 6:
    puVar3 = &DAT_14002d300;
    break;
  default:
    goto switchD_1400101e1_default;
  }
  *(undefined8 *)(puVar3 + 8) = param_2;
switchD_1400101e1_default:
  return puVar3;
}


/*
 * FUN_1400104a0 at 1400104a0
 * undefined __fastcall FUN_1400104a0(longlong param_1)
 * Address ranges: 1400104a0-1400104cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400104a0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400104cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  return;
}


/*
 * FUN_1400104d0 at 1400104d0
 * undefined __fastcall FUN_1400104d0(longlong param_1)
 * Address ranges: 1400104d0-1400104ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400104d0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400104fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
  return;
}


/*
 * FUN_140010500 at 140010500
 * undefined __fastcall FUN_140010500(longlong param_1)
 * Address ranges: 140010500-14001052f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140010500(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014001052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  return;
}


/*
 * FUN_140010530 at 140010530
 * ulonglong __fastcall FUN_140010530(longlong param_1)
 * Address ranges: 140010530-1400105a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140010530(longlong param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  
  if ((DAT_14002c2c8 != 0) && (DAT_14002c2c8 != param_1)) {
    return (ulonglong)*(byte *)(param_1 + 0x22);
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if ((*(char *)(param_1 + 0x22) == '\0') && (*(char *)(param_1 + 0x21) != '\0')) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(char *)(param_1 + 0x22) = (char)uVar2;
    if ((char)uVar2 != '\0') {
      DAT_14002c2c8 = param_1;
      *(undefined1 *)(param_1 + 0x23) = 1;
      return uVar2;
    }
  }
  else {
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x22);
  }
  return uVar2;
}


/*
 * FUN_1400105b0 at 1400105b0
 * undefined __fastcall FUN_1400105b0(longlong param_1)
 * Address ranges: 1400105b0-1400105dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400105b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    *(undefined1 *)(param_1 + 0x22) = 0;
    DAT_14002c2c8 = 0;
  }
  return;
}


/*
 * FUN_1400105e0 at 1400105e0
 * undefined8 __fastcall FUN_1400105e0(longlong param_1)
 * Address ranges: 1400105e0-14001061d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1400105e0(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140010612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    return uVar2;
  }
  return 0;
}


/*
 * FUN_140010620 at 140010620
 * undefined8 __fastcall FUN_140010620(longlong param_1, uint param_2, undefined2 * param_3)
 * Address ranges: 140010620-1400106b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140010620(longlong param_1,uint param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(char *)(param_1 + 0x21) = (char)in_RAX;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    if (param_2 < (uint)in_RAX) {
      *param_3 = 0;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                        (*(longlong **)(param_1 + 0x10),param_2);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                        (*(longlong **)(param_1 + 0x10),uVar1,param_3);
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


/*
 * FUN_1400106c0 at 1400106c0
 * ulonglong __fastcall FUN_1400106c0(longlong param_1, undefined4 param_2)
 * Address ranges: 1400106c0-14001070f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_1400106c0(longlong param_1,undefined4 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(char *)(param_1 + 0x21) = (char)in_RAX;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001400106ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                      (*(longlong **)(param_1 + 0x10),param_2);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}


/*
 * FUN_140010710 at 140010710
 * undefined8 __fastcall FUN_140010710(longlong param_1, undefined4 param_2)
 * Address ranges: 140010710-140010812
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140010710(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  uVar3 = 0;
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                      (*(longlong **)(param_1 + 0x10),param_2);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),uVar2);
    switch(uVar2) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    case 5:
      return 5;
    case 6:
      uVar3 = 6;
    }
  }
  return uVar3;
}


/*
 * FUN_140010830 at 140010830
 * undefined8 __fastcall FUN_140010830(longlong param_1, undefined4 param_2)
 * Address ranges: 140010830-14001087f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140010830(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014001086f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                      (*(longlong **)(param_1 + 0x10),param_2);
    return uVar2;
  }
  return 0;
}


/*
 * FUN_140010880 at 140010880
 * undefined8 __fastcall FUN_140010880(longlong param_1, uint param_2, uint param_3, undefined8 * param_4)
 * Address ranges: 140010880-1400109bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140010880(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong in_RAX;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138 [32];
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(char *)(param_1 + 0x21) = (char)in_RAX;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    if (param_2 < (uint)in_RAX) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))(*(longlong **)(param_1 + 0x10),param_2);
      in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                         (*(longlong **)(param_1 + 0x10),param_2);
      if (param_3 < (uint)in_RAX) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                  (*(longlong **)(param_1 + 0x10),&local_178,param_2,param_3);
        *param_4 = local_178;
        param_4[1] = uStack_170;
        lVar7 = 2;
        param_4[2] = local_168;
        param_4[3] = uStack_160;
        param_4[4] = local_158;
        param_4[5] = uStack_150;
        param_4[6] = local_148;
        param_4[7] = uStack_140;
        puVar5 = local_138;
        puVar6 = param_4 + 8;
        do {
          uVar1 = puVar5[1];
          uVar2 = puVar5[2];
          uVar3 = puVar5[3];
          *puVar6 = *puVar5;
          puVar6[1] = uVar1;
          uVar1 = puVar5[4];
          uVar4 = puVar5[5];
          puVar6[2] = uVar2;
          puVar6[3] = uVar3;
          uVar2 = puVar5[6];
          uVar3 = puVar5[7];
          puVar6[4] = uVar1;
          puVar6[5] = uVar4;
          uVar1 = puVar5[8];
          uVar4 = puVar5[9];
          puVar6[6] = uVar2;
          puVar6[7] = uVar3;
          uVar2 = puVar5[10];
          uVar3 = puVar5[0xb];
          puVar6[8] = uVar1;
          puVar6[9] = uVar4;
          uVar1 = puVar5[0xc];
          uVar4 = puVar5[0xd];
          puVar6[10] = uVar2;
          puVar6[0xb] = uVar3;
          uVar2 = puVar5[0xe];
          uVar3 = puVar5[0xf];
          puVar6[0xc] = uVar1;
          puVar6[0xd] = uVar4;
          puVar6[0xe] = uVar2;
          puVar6[0xf] = uVar3;
          lVar7 = lVar7 + -1;
          puVar5 = puVar5 + 0x10;
          puVar6 = puVar6 + 0x10;
        } while (lVar7 != 0);
        param_4[0x28] = local_38;
        return CONCAT71((int7)((ulonglong)local_38 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


/*
 * FUN_1400109c0 at 1400109c0
 * undefined8 __fastcall FUN_1400109c0(longlong param_1, undefined4 param_2)
 * Address ranges: 1400109c0-140010a1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1400109c0(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                      (*(longlong **)(param_1 + 0x10),param_2);
                    /* WARNING: Could not recover jumptable at 0x000140010a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
                      (*(longlong **)(param_1 + 0x10),uVar2);
    return uVar3;
  }
  return 0;
}


/*
 * FUN_140010a20 at 140010a20
 * undefined8 __fastcall FUN_140010a20(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 140010a20-140010a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140010a20(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                      (*(longlong **)(param_1 + 0x10),param_2);
                    /* WARNING: Could not recover jumptable at 0x000140010a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
                      (*(longlong **)(param_1 + 0x10),uVar2,param_3);
    return uVar3;
  }
  return 0;
}


/*
 * FUN_140010aa0 at 140010aa0
 * undefined8 __fastcall FUN_140010aa0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 140010aa0-140010b05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140010aa0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                      (*(longlong **)(param_1 + 0x10),param_2);
                    /* WARNING: Could not recover jumptable at 0x000140010af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))
                      (*(longlong **)(param_1 + 0x10),uVar2,param_3,param_4);
    return uVar3;
  }
  return 0;
}


/*
 * FUN_140010b10 at 140010b10
 * ulonglong __fastcall FUN_140010b10(longlong param_1, uint param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined4 * param_6)
 * Address ranges: 140010b10-140010bf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140010b10(longlong param_1,uint param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(char *)(param_1 + 0x21) = (char)in_RAX;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    if (param_2 < (uint)in_RAX) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))(*(longlong **)(param_1 + 0x10),param_2);
      in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                         (*(longlong **)(param_1 + 0x10),param_2);
      if (param_3 < (uint)in_RAX) {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                          (*(longlong **)(param_1 + 0x10),param_2);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))
                  (*(longlong **)(param_1 + 0x10),&local_48,uVar1,param_3,param_4,param_5);
        *param_6 = local_48;
        param_6[1] = local_44;
        param_6[2] = local_40;
        param_6[3] = local_3c;
        param_6[4] = local_38;
        return CONCAT71((uint7)(uint3)((uint)local_38 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


/*
 * FUN_140010c10 at 140010c10
 * ulonglong __fastcall FUN_140010c10(longlong param_1)
 * Address ranges: 140010c10-140010c7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140010c10(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  puVar2 = (undefined8 *)FUN_14002423c(0x5b0);
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = FUN_1400130b0(puVar2);
    *(undefined8 **)(param_1 + 0x480) = puVar2;
    uVar3 = 0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140010c75;
    uVar1 = FUN_140013450((longlong)puVar2);
    uVar3 = CONCAT44(extraout_var,uVar1);
    puVar2 = *(undefined8 **)(param_1 + 0x480);
    if ((char)uVar1 != '\0') {
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined8 *)(param_1 + 0x480) = 0;
LAB_140010c75:
  return uVar3 & 0xffffffffffffff00;
}


/*
 * FUN_140010c80 at 140010c80
 * undefined __fastcall FUN_140010c80(longlong * param_1)
 * Address ranges: 140010c80-140010cb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140010c80(longlong *param_1)

{
  if (param_1[0x90] != 0) {
    (**(code **)(*param_1 + 0x18))();
    FUN_140013580(param_1[0x90]);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  return;
}


/*
 * FUN_140010cc0 at 140010cc0
 * undefined8 __fastcall FUN_140010cc0(longlong param_1)
 * Address ranges: 140010cc0-140010d99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140010cc0(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar3;
  
  FUN_140011730(param_1);
  uVar4 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x328) != 0) {
    do {
      bVar1 = FUN_140012e80(*(longlong *)(param_1 + 0x480),
                            (ulonglong)*(uint *)(*(longlong *)(param_1 + 800) + uVar3 * 4),
                            *(int *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x490),
                            *(undefined4 *)(param_1 + 0x48c),*(char *)(param_1 + 0x498));
      if (bVar1) {
        uVar4 = 1;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x328);
        uVar5 = (uint)uVar3;
        if (uVar5 < uVar6) {
          uVar2 = uVar5 + 1;
          if (uVar2 < uVar6) {
            do {
              uVar3 = (ulonglong)uVar2;
              uVar6 = uVar2 - 1;
              uVar2 = uVar2 + 1;
              *(undefined4 *)(*(longlong *)(param_1 + 800) + (ulonglong)uVar6 * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 800) + uVar3 * 4);
              uVar6 = *(uint *)(param_1 + 0x328);
            } while (uVar2 < uVar6);
          }
          *(uint *)(param_1 + 0x328) = uVar6 - 1;
        }
        uVar3 = (ulonglong)(uVar5 - 1);
      }
      uVar6 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x328));
  }
  return uVar4;
}


/*
 * FUN_140010da0 at 140010da0
 * undefined __fastcall FUN_140010da0(longlong param_1)
 * Address ranges: 140010da0-140010ed6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140010da0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0x328) != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x480);
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 800) + uVar6 * 4);
      piVar1 = (int *)(lVar2 + 0x18 + uVar4 * 0x28);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        plVar3 = *(longlong **)(lVar2 + 0x340 + uVar4 * 0x28);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)(lVar2 + 0x340 + uVar4 * 0x28) = 0;
        }
        plVar3 = *(longlong **)(lVar2 + 0x338 + uVar4 * 0x28);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)(lVar2 + 0x338 + uVar4 * 0x28) = 0;
        }
        plVar3 = *(longlong **)(lVar2 + 0x330 + uVar4 * 0x28);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)(lVar2 + 0x330 + uVar4 * 0x28) = 0;
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x328));
  }
  lVar2 = *(longlong *)(param_1 + 0x480);
  do {
    plVar3 = *(longlong **)(lVar2 + 8 + uVar7 * 0x28);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)(lVar2 + 8 + uVar7 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x14 + uVar7 * 0x28) = 0;
      *(undefined4 *)(lVar2 + 0x10 + uVar7 * 0x28) = 0;
      *(undefined1 *)(lVar2 + 0x1c + uVar7 * 0x28) = 0;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x10);
  if (*(longlong **)(lVar2 + 0x310) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar2 + 0x310) + 0x10))();
    *(undefined8 *)(lVar2 + 0x310) = 0;
  }
  FUN_140024260(*(LPVOID *)(lVar2 + 0x318));
  *(undefined8 *)(lVar2 + 0x318) = 0;
  *(undefined8 *)(lVar2 + 800) = 0;
  return;
}


/*
 * FUN_140010f30 at 140010f30
 * undefined8 * __fastcall FUN_140010f30(undefined8 * param_1, uint param_2)
 * Address ranges: 140010f30-140010f99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140010f30(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_140028be8;
  if (param_1[0x90] != 0) {
    FUN_140010da0((longlong)param_1);
    FUN_140013580(param_1[0x90]);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  FUN_1400122a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_140011070 at 140011070
 * ulonglong __fastcall FUN_140011070(longlong param_1, uint param_2)
 * Address ranges: 140011070-140011239
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140011070(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_res10 [2];
  ulonglong uVar10;
  
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar10 = uVar8;
    while (*(uint *)(*(longlong *)(param_1 + 800) + uVar10 * 4) != param_2) {
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      if (*(uint *)(param_1 + 0x328) <= uVar9) {
        return 0;
      }
    }
    if ((int)uVar10 != -1) {
      puVar1 = (uint *)(param_1 + 0x434 + uVar10 * 4);
      if (*(int *)(param_1 + 0x434 + uVar10 * 4) == -1) {
        *puVar1 = 0;
        bVar6 = FUN_140012e80(*(longlong *)(param_1 + 0x480),(ulonglong)param_2,
                              *(int *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x490),
                              *(undefined4 *)(param_1 + 0x48c),*(char *)(param_1 + 0x498));
        if (bVar6) {
          lVar2 = (ulonglong)param_2 * 0x28;
          lVar4 = *(longlong *)(param_1 + 0x480);
          uVar9 = 2;
          do {
            plVar5 = *(longlong **)(lVar4 + 0x330 + lVar2);
            iVar7 = (**(code **)(*plVar5 + 0xf0))(plVar5,0x1c,uVar9,local_res10);
            if ((((iVar7 == 0) && (local_res10[0] != 0)) &&
                (plVar5 = *(longlong **)(lVar4 + 0x330 + lVar2),
                iVar7 = (**(code **)(*plVar5 + 0xf0))(plVar5,0x39,uVar9,local_res10), iVar7 == 0))
               && (local_res10[0] != 0)) {
              *(char *)(param_1 + uVar10 + 0x334 + (ulonglong)*puVar1 * 0x10) = (char)uVar9;
              *puVar1 = *puVar1 + 1;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < 0x21);
          lVar4 = *(longlong *)(param_1 + 0x480);
          piVar3 = (int *)(lVar4 + 0x18 + lVar2);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            plVar5 = *(longlong **)(lVar4 + 0x340 + lVar2);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)(lVar4 + 0x340 + lVar2) = 0;
            }
            plVar5 = *(longlong **)(lVar4 + 0x338 + lVar2);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)(lVar4 + 0x338 + lVar2) = 0;
            }
            plVar5 = *(longlong **)(lVar4 + 0x330 + lVar2);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)(lVar4 + 0x330 + lVar2) = 0;
            }
          }
        }
      }
      uVar8 = (ulonglong)*puVar1;
    }
  }
  return uVar8;
}


/*
 * FUN_140011240 at 140011240
 * undefined * __fastcall FUN_140011240(int param_1, char param_2)
 * Address ranges: 140011240-14001163c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140011240(int param_1,char param_2)

{
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  
  if ((DAT_14002d3f4 & 1) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 1;
    FUN_140011f20((undefined8 *)&DAT_14002d8a0);
    _DAT_14002d8a0 = &PTR_FUN_140028be8;
    _DAT_14002dd30 = &DAT_140028c88;
    _DAT_14002dd39 = local_37;
    _DAT_14002dd3d = local_33;
    DAT_14002dd3f = local_31;
    DAT_14002dd20 = 0;
    _DAT_14002dd28 = 0;
    _DAT_14002dd2c = 1;
    DAT_14002dd38 = 0;
    _DAT_14002dcd4 = 0xffffffffffffffff;
    _DAT_14002dcdc = 0xffffffffffffffff;
    _DAT_14002dce4 = 0xffffffffffffffff;
    _DAT_14002dcec = 0xffffffffffffffff;
    _DAT_14002dcf4 = 0xffffffffffffffff;
    _DAT_14002dcfc = 0xffffffffffffffff;
    _DAT_14002dd04 = 0xffffffffffffffff;
    _DAT_14002dd0c = 0xffffffffffffffff;
    DAT_14002dd18 = 0;
    FUN_140024c60(FUN_1400253d0);
  }
  if ((DAT_14002d3f4 & 2) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 2;
    FUN_140011f20((undefined8 *)&DAT_14002d400);
    _DAT_14002d899 = local_37;
    _DAT_14002d89d = local_33;
    DAT_14002d89f = local_31;
    _DAT_14002d400 = &PTR_FUN_140028be8;
    DAT_14002d880 = 0;
    _DAT_14002d888 = 0;
    _DAT_14002d88c = 1;
    _DAT_14002d890 = &DAT_140028bdc;
    DAT_14002d898 = 0;
    _DAT_14002d834 = 0xffffffffffffffff;
    _DAT_14002d83c = 0xffffffffffffffff;
    _DAT_14002d844 = 0xffffffffffffffff;
    _DAT_14002d84c = 0xffffffffffffffff;
    _DAT_14002d854 = 0xffffffffffffffff;
    _DAT_14002d85c = 0xffffffffffffffff;
    _DAT_14002d864 = 0xffffffffffffffff;
    _DAT_14002d86c = 0xffffffffffffffff;
    DAT_14002d878 = 0;
    FUN_140024c60(FUN_140025370);
  }
  if ((DAT_14002d3f4 & 4) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 4;
    FUN_140011f20((undefined8 *)&DAT_14002e1e0);
    _DAT_14002e1e0 = &PTR_FUN_140028be8;
    _DAT_14002e670 = &DAT_140028be0;
    _DAT_14002e679 = local_37;
    _DAT_14002e67d = local_33;
    DAT_14002e67f = local_31;
    DAT_14002e660 = 0;
    _DAT_14002e668 = 0;
    _DAT_14002e66c = 1;
    DAT_14002e678 = 0;
    _DAT_14002e614 = 0xffffffffffffffff;
    _DAT_14002e61c = 0xffffffffffffffff;
    _DAT_14002e624 = 0xffffffffffffffff;
    _DAT_14002e62c = 0xffffffffffffffff;
    _DAT_14002e634 = 0xffffffffffffffff;
    _DAT_14002e63c = 0xffffffffffffffff;
    _DAT_14002e644 = 0xffffffffffffffff;
    _DAT_14002e64c = 0xffffffffffffffff;
    DAT_14002e658 = 0;
    FUN_140024c60(FUN_140025310);
  }
  if ((DAT_14002d3f4 & 8) == 0) {
    DAT_14002d3f4 = DAT_14002d3f4 | 8;
    FUN_140011f20((undefined8 *)&DAT_14002dd40);
    _DAT_14002e1d9 = local_37;
    _DAT_14002e1dd = local_33;
    DAT_14002e1df = local_31;
    _DAT_14002dd40 = &PTR_FUN_140028be8;
    DAT_14002e1c0 = 0;
    _DAT_14002e1c8 = 5;
    _DAT_14002e1cc = 1;
    _DAT_14002e1d0 = &DAT_140028bdc;
    DAT_14002e1d8 = 0;
    _DAT_14002e174 = 0xffffffffffffffff;
    _DAT_14002e17c = 0xffffffffffffffff;
    _DAT_14002e184 = 0xffffffffffffffff;
    _DAT_14002e18c = 0xffffffffffffffff;
    _DAT_14002e194 = 0xffffffffffffffff;
    _DAT_14002e19c = 0xffffffffffffffff;
    _DAT_14002e1a4 = 0xffffffffffffffff;
    _DAT_14002e1ac = 0xffffffffffffffff;
    DAT_14002e1b8 = 1;
    FUN_140024c60(FUN_1400252b0);
  }
  if (param_2 == '\0') {
    if (param_1 == 0x100) {
      return &DAT_14002e1e0;
    }
    if (param_1 == 0x101) {
      return &DAT_14002d400;
    }
    if (param_1 == 0x110) {
      return &DAT_14002d8a0;
    }
  }
  return &DAT_14002dd40;
}


/*
 * FUN_140011640 at 140011640
 * undefined8 * __fastcall FUN_140011640(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140011640-14001166a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140011640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140028cd0;
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_140011670 at 140011670
 * undefined __fastcall FUN_140011670(longlong param_1)
 * Address ranges: 140011670-14001172f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140011670(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x28 + uVar1 * 0x10) != 0) {
      uVar2 = 0;
      do {
        FUN_140024260(*(LPVOID *)(*(longlong *)(param_1 + (uVar1 + 2) * 0x10) + uVar2 * 8));
        uVar3 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0x28 + uVar1 * 0x10));
    }
    FUN_140024260(*(LPVOID *)(param_1 + 0x20 + uVar1 * 0x10));
    *(undefined8 *)(param_1 + 0x20 + uVar1 * 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28 + uVar1 * 0x10) = 0;
    FUN_140024260(*(LPVOID *)(param_1 + 0x120 + uVar1 * 0x10));
    *(undefined8 *)(param_1 + 0x120 + uVar1 * 0x10) = 0;
    *(undefined8 *)(param_1 + 0x128 + uVar1 * 0x10) = 0;
    FUN_140024260(*(LPVOID *)(param_1 + 0x220 + uVar1 * 0x10));
    uVar2 = uVar1 + 1;
    *(undefined8 *)(param_1 + 0x220 + uVar1 * 0x10) = 0;
    *(undefined8 *)(param_1 + 0x228 + uVar1 * 0x10) = 0;
    uVar1 = uVar2;
  } while (uVar2 != 0x10);
  return;
}


/*
 * FUN_140011730 at 140011730
 * undefined8 __fastcall FUN_140011730(longlong param_1)
 * Address ranges: 140011730-140011c2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140011730(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  short *psVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  short *psVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  uint local_res8;
  longlong *local_res20;
  short local_338 [40];
  int local_2e8;
  undefined8 local_2e0;
  short local_2d8 [32];
  short local_298 [128];
  undefined8 local_198;
  undefined8 local_190;
  short local_188 [148];
  undefined8 local_60;
  
  uVar18 = FUN_140013600(*(longlong *)(param_1 + 0x10));
  if ((char)uVar18 == '\0') {
    return uVar18 & 0xffffffffffffff00;
  }
  uVar17 = 0x10;
  if (*(char *)(param_1 + 0x478) != '\0') {
    uVar17 = 1;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 800);
  if (uVar17 < uVar2) {
    uVar2 = uVar17;
  }
  FUN_140011670(param_1);
  uVar18 = FUN_140024260(*(LPVOID *)(param_1 + 800));
  uVar27 = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  local_res8 = 0;
  if (uVar2 != 0) {
    do {
      if ((*(uint *)(param_1 + 0x18) == 0) ||
         (uVar17 = (uint)uVar27 + 1, uVar18 = (ulonglong)uVar17, *(uint *)(param_1 + 0x18) == uVar17
         )) {
        lVar26 = *(longlong *)(param_1 + 0x10);
        if ((uint)uVar27 < *(uint *)(lVar26 + 800)) {
          uVar18 = (ulonglong)*(uint *)(*(longlong *)(lVar26 + 0x318) + uVar27 * 4);
        }
        else {
          uVar18 = 0;
        }
        uVar17 = *(uint *)(param_1 + 0x328);
        uVar3 = *(uint *)(param_1 + 0x32c);
        if (uVar17 == uVar3) {
          uVar24 = 0x10;
          if (uVar3 != 0) {
            uVar24 = (ulonglong)(uVar3 * 2);
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar24;
          uVar19 = SUB168(ZEXT816(4) * auVar5,0);
          if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
            uVar19 = 0xffffffffffffffff;
          }
          puVar20 = (undefined8 *)thunk_FUN_14002423c(uVar19);
          if (puVar20 != (undefined8 *)0x0) {
            FUN_140024620(puVar20,*(undefined8 **)(param_1 + 800),
                          (ulonglong)*(uint *)(param_1 + 0x32c) << 2);
            FUN_140024260(*(LPVOID *)(param_1 + 800));
            *(undefined8 **)(param_1 + 800) = puVar20;
            *(int *)(param_1 + 0x32c) = (int)uVar24;
            goto LAB_1400118a9;
          }
        }
        else {
LAB_1400118a9:
          *(int *)(*(longlong *)(param_1 + 800) + (ulonglong)*(uint *)(param_1 + 0x328) * 4) =
               (int)uVar18;
          *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
        }
        lVar26 = uVar18 * 0x28 + lVar26;
        (**(code **)(**(longlong **)(lVar26 + 8) + 0x50))(*(longlong **)(lVar26 + 8),local_188);
        local_res20 = (longlong *)0x0;
        iVar28 = 0;
        uVar18 = (**(code **)(**(longlong **)(lVar26 + 8) + 0x38))
                           (*(longlong **)(lVar26 + 8),0,&local_res20);
        if ((int)uVar18 != -0x7785fffe) {
          uVar27 = (ulonglong)uVar17;
          do {
            (**(code **)(*local_res20 + 0x38))(local_res20,local_338);
            if (local_2e8 != 0) {
              FUN_1400250dc(local_2d8,local_188);
              FUN_1400250dc(local_298,local_338);
              lVar25 = (uVar27 + 0x22) * 0x10;
              local_198 = local_2e0;
              local_190 = local_60;
              iVar4 = *(int *)(param_1 + 0xc + lVar25);
              if (*(int *)(param_1 + 8 + lVar25) == iVar4) {
                uVar18 = 0x10;
                if (iVar4 != 0) {
                  uVar18 = (ulonglong)(uint)(iVar4 * 2);
                }
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar18;
                uVar19 = SUB168(ZEXT816(0x150) * auVar6,0);
                if (SUB168(ZEXT816(0x150) * auVar6,8) != 0) {
                  uVar19 = 0xffffffffffffffff;
                }
                puVar20 = (undefined8 *)thunk_FUN_14002423c(uVar19);
                if (puVar20 != (undefined8 *)0x0) {
                  FUN_140024620(puVar20,*(undefined8 **)(param_1 + lVar25),
                                (ulonglong)*(uint *)(param_1 + 0xc + lVar25) * 0x150);
                  FUN_140024260(*(LPVOID *)(param_1 + lVar25));
                  *(undefined8 **)(param_1 + lVar25) = puVar20;
                  *(int *)(param_1 + 0xc + lVar25) = (int)uVar18;
                  goto LAB_1400119f1;
                }
              }
              else {
LAB_1400119f1:
                lVar22 = 2;
                psVar16 = local_2d8;
                puVar20 = (undefined8 *)
                          ((ulonglong)*(uint *)(param_1 + 8 + lVar25) * 0x150 +
                          *(longlong *)(param_1 + lVar25));
                do {
                  puVar23 = puVar20;
                  psVar21 = psVar16;
                  uVar19 = *(undefined8 *)(psVar21 + 4);
                  uVar13 = *(undefined8 *)(psVar21 + 8);
                  uVar14 = *(undefined8 *)(psVar21 + 0xc);
                  *puVar23 = *(undefined8 *)psVar21;
                  puVar23[1] = uVar19;
                  uVar19 = *(undefined8 *)(psVar21 + 0x10);
                  uVar15 = *(undefined8 *)(psVar21 + 0x14);
                  puVar23[2] = uVar13;
                  puVar23[3] = uVar14;
                  uVar13 = *(undefined8 *)(psVar21 + 0x18);
                  uVar14 = *(undefined8 *)(psVar21 + 0x1c);
                  puVar23[4] = uVar19;
                  puVar23[5] = uVar15;
                  uVar19 = *(undefined8 *)(psVar21 + 0x20);
                  uVar15 = *(undefined8 *)(psVar21 + 0x24);
                  puVar23[6] = uVar13;
                  puVar23[7] = uVar14;
                  uVar13 = *(undefined8 *)(psVar21 + 0x28);
                  uVar14 = *(undefined8 *)(psVar21 + 0x2c);
                  puVar23[8] = uVar19;
                  puVar23[9] = uVar15;
                  uVar19 = *(undefined8 *)(psVar21 + 0x30);
                  uVar15 = *(undefined8 *)(psVar21 + 0x34);
                  puVar23[10] = uVar13;
                  puVar23[0xb] = uVar14;
                  uVar13 = *(undefined8 *)(psVar21 + 0x38);
                  uVar14 = *(undefined8 *)(psVar21 + 0x3c);
                  puVar23[0xc] = uVar19;
                  puVar23[0xd] = uVar15;
                  puVar23[0xe] = uVar13;
                  puVar23[0xf] = uVar14;
                  lVar22 = lVar22 + -1;
                  psVar16 = psVar21 + 0x40;
                  puVar20 = puVar23 + 0x10;
                } while (lVar22 != 0);
                uVar19 = *(undefined8 *)(psVar21 + 0x44);
                uVar13 = *(undefined8 *)(psVar21 + 0x48);
                uVar14 = *(undefined8 *)(psVar21 + 0x4c);
                puVar23[0x10] = *(undefined8 *)(psVar21 + 0x40);
                puVar23[0x11] = uVar19;
                uVar19 = *(undefined8 *)(psVar21 + 0x50);
                uVar15 = *(undefined8 *)(psVar21 + 0x54);
                puVar23[0x12] = uVar13;
                puVar23[0x13] = uVar14;
                uVar13 = *(undefined8 *)(psVar21 + 0x58);
                uVar14 = *(undefined8 *)(psVar21 + 0x5c);
                puVar23[0x14] = uVar19;
                puVar23[0x15] = uVar15;
                uVar9 = *(undefined4 *)(psVar21 + 0x60);
                uVar10 = *(undefined4 *)(psVar21 + 0x62);
                uVar11 = *(undefined4 *)(psVar21 + 100);
                uVar12 = *(undefined4 *)(psVar21 + 0x66);
                puVar23[0x16] = uVar13;
                puVar23[0x17] = uVar14;
                *(undefined4 *)(puVar23 + 0x18) = uVar9;
                *(undefined4 *)((longlong)puVar23 + 0xc4) = uVar10;
                *(undefined4 *)(puVar23 + 0x19) = uVar11;
                *(undefined4 *)((longlong)puVar23 + 0xcc) = uVar12;
                piVar1 = (int *)(param_1 + 8 + lVar25);
                *piVar1 = *piVar1 + 1;
              }
              lVar25 = (uVar27 + 2) * 0x10;
              iVar4 = *(int *)(param_1 + 0xc + lVar25);
              if (*(int *)(param_1 + 8 + lVar25) == iVar4) {
                uVar18 = 0x10;
                if (iVar4 != 0) {
                  uVar18 = (ulonglong)(uint)(iVar4 * 2);
                }
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar18;
                uVar19 = SUB168(ZEXT816(8) * auVar7,0);
                if (SUB168(ZEXT816(8) * auVar7,8) != 0) {
                  uVar19 = 0xffffffffffffffff;
                }
                puVar20 = (undefined8 *)thunk_FUN_14002423c(uVar19);
                if (puVar20 != (undefined8 *)0x0) {
                  FUN_140024620(puVar20,*(undefined8 **)(param_1 + lVar25),
                                (ulonglong)*(uint *)(param_1 + 0xc + lVar25) << 3);
                  FUN_140024260(*(LPVOID *)(param_1 + lVar25));
                  *(undefined8 **)(param_1 + lVar25) = puVar20;
                  *(int *)(param_1 + 0xc + lVar25) = (int)uVar18;
                  goto LAB_140011af6;
                }
              }
              else {
LAB_140011af6:
                *(undefined8 *)
                 (*(longlong *)(param_1 + lVar25) + (ulonglong)*(uint *)(param_1 + 8 + lVar25) * 8)
                     = 0;
                piVar1 = (int *)(param_1 + 8 + lVar25);
                *piVar1 = *piVar1 + 1;
              }
              lVar25 = (uVar27 + 0x12) * 0x10;
              iVar4 = *(int *)(param_1 + 0xc + lVar25);
              if (*(int *)(param_1 + 8 + lVar25) == iVar4) {
                uVar18 = 0x10;
                if (iVar4 != 0) {
                  uVar18 = (ulonglong)(uint)(iVar4 * 2);
                }
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar18;
                uVar19 = SUB168(ZEXT816(8) * auVar8,0);
                if (SUB168(ZEXT816(8) * auVar8,8) != 0) {
                  uVar19 = 0xffffffffffffffff;
                }
                puVar20 = (undefined8 *)thunk_FUN_14002423c(uVar19);
                if (puVar20 == (undefined8 *)0x0) goto LAB_140011b87;
                FUN_140024620(puVar20,*(undefined8 **)(param_1 + lVar25),
                              (ulonglong)*(uint *)(param_1 + 0xc + lVar25) << 3);
                FUN_140024260(*(LPVOID *)(param_1 + lVar25));
                *(undefined8 **)(param_1 + lVar25) = puVar20;
                *(int *)(param_1 + 0xc + lVar25) = (int)uVar18;
              }
              *(undefined8 *)
               (*(longlong *)(param_1 + lVar25) + (ulonglong)*(uint *)(param_1 + 8 + lVar25) * 8) =
                   0;
              piVar1 = (int *)(param_1 + 8 + lVar25);
              *piVar1 = *piVar1 + 1;
            }
LAB_140011b87:
            (**(code **)(*local_res20 + 0x10))();
            iVar28 = iVar28 + 1;
            uVar18 = (**(code **)(**(longlong **)(lVar26 + 8) + 0x38))
                               (*(longlong **)(lVar26 + 8),iVar28,&local_res20);
          } while ((int)uVar18 != -0x7785fffe);
          uVar27 = (ulonglong)local_res8;
        }
      }
      local_res8 = (int)uVar27 + 1;
      uVar27 = (ulonglong)local_res8;
    } while (local_res8 < uVar2);
  }
  return CONCAT71((int7)(uVar18 >> 8),1);
}


/*
 * FUN_140011c30 at 140011c30
 * ulonglong __fastcall FUN_140011c30(longlong param_1, uint param_2, uint param_3, undefined4 param_4)
 * Address ranges: 140011c30-140011e94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140011c30(longlong param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  ulonglong in_RAX;
  undefined8 uVar12;
  LPVOID pvVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  longlong *local_res8;
  uint local_res10 [2];
  
  if (*(uint *)(param_1 + 0x328) != 0) {
    in_RAX = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 800) + in_RAX * 4) == param_2) {
        if ((int)in_RAX != -1) {
          lVar3 = (ulonglong)param_3 * 8;
          lVar19 = in_RAX + 2;
          FUN_140024260(*(LPVOID *)(*(longlong *)(param_1 + lVar19 * 0x10) + lVar3));
          plVar16 = (longlong *)((in_RAX + 0x12) * 0x10 + param_1);
          *(undefined8 *)(lVar3 + *(longlong *)(param_1 + lVar19 * 0x10)) = 0;
          *(undefined4 *)(lVar3 + *plVar16) = 0;
          local_res10[0] = 0;
          local_res8 = (longlong *)0x0;
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8 + (ulonglong)param_2 * 0x28);
          iVar11 = (**(code **)(*plVar5 + 0x38))(plVar5,(ulonglong)param_3,&local_res8);
          if (-1 < iVar11) {
            (**(code **)(*local_res8 + 0x40))(local_res8,0x1c,param_4,local_res10,0);
            uVar12 = SUB168(ZEXT816(0x1c) * ZEXT416(local_res10[0]),0);
            if (SUB168(ZEXT816(0x1c) * ZEXT416(local_res10[0]),8) != 0) {
              uVar12 = 0xffffffffffffffff;
            }
            pvVar13 = (LPVOID)thunk_FUN_14002423c(uVar12);
            if (pvVar13 != (LPVOID)0x0) {
              *(LPVOID *)(lVar3 + *(longlong *)(param_1 + lVar19 * 0x10)) = pvVar13;
              iVar11 = (**(code **)(*local_res8 + 0x40))(local_res8,0x1c,2,local_res10,pvVar13);
              if (iVar11 < 0) {
                FUN_140024260(pvVar13);
                *(undefined8 *)(lVar3 + *(longlong *)(param_1 + lVar19 * 0x10)) = 0;
              }
              else {
                uVar10 = 1;
                *(uint *)(lVar3 + *plVar16) = local_res10[0];
                *(undefined4 *)(*plVar16 + 4 + lVar3) = param_4;
                lVar19 = *plVar16;
                if (1 < *(uint *)(lVar19 + lVar3)) {
                  do {
                    if (uVar10 != 0) {
                      piVar18 = (int *)((ulonglong)uVar10 * 0x1c + (longlong)pvVar13);
                      uVar15 = uVar10;
LAB_140011dc0:
                      uVar15 = uVar15 - 1;
                      lVar14 = (ulonglong)uVar15 * 0x1c;
                      if ((((*(int *)((longlong)pvVar13 + lVar14) != *piVar18) ||
                           (*(int *)((longlong)pvVar13 + lVar14 + 4) != piVar18[1])) ||
                          (*(int *)((longlong)pvVar13 + lVar14 + 8) != piVar18[2])) ||
                         (*(int *)((longlong)pvVar13 + lVar14 + 0xc) != piVar18[3]))
                      goto LAB_140011dec;
                      *(int *)(lVar19 + lVar3) = *(int *)(lVar19 + lVar3) + -1;
                      lVar19 = *plVar16;
                      uVar15 = uVar10;
                      if (uVar10 < *(uint *)(lVar19 + lVar3)) {
                        do {
                          uVar17 = uVar15 + 1;
                          puVar1 = (undefined4 *)((ulonglong)uVar17 * 0x1c + (longlong)pvVar13);
                          uVar6 = puVar1[1];
                          uVar7 = puVar1[2];
                          uVar8 = puVar1[3];
                          puVar4 = (undefined8 *)
                                   ((ulonglong)uVar17 * 0x1c + 0xc + (longlong)pvVar13);
                          uVar12 = *puVar4;
                          uVar9 = puVar4[1];
                          puVar2 = (undefined4 *)((ulonglong)uVar15 * 0x1c + (longlong)pvVar13);
                          *puVar2 = *puVar1;
                          puVar2[1] = uVar6;
                          puVar2[2] = uVar7;
                          puVar2[3] = uVar8;
                          puVar4 = (undefined8 *)
                                   ((ulonglong)uVar15 * 0x1c + 0xc + (longlong)pvVar13);
                          *puVar4 = uVar12;
                          puVar4[1] = uVar9;
                          lVar19 = *plVar16;
                          uVar15 = uVar17;
                        } while (uVar17 < *(uint *)(lVar19 + lVar3));
                      }
                      uVar10 = uVar10 - 1;
                    }
LAB_140011e42:
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < *(uint *)(lVar19 + lVar3));
                }
              }
            }
            (**(code **)(*local_res8 + 0x10))();
          }
          return CONCAT71((int7)((ulonglong)*plVar16 >> 8),*(int *)(lVar3 + *plVar16) != 0);
        }
        break;
      }
      uVar10 = (int)in_RAX + 1;
      in_RAX = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0x328));
  }
  return in_RAX & 0xffffffffffffff00;
LAB_140011dec:
  if (uVar15 == 0) goto LAB_140011e42;
  goto LAB_140011dc0;
}


/*
 * FUN_140011ea0 at 140011ea0
 * undefined __fastcall FUN_140011ea0(longlong param_1, ulonglong param_2, short * param_3)
 * Address ranges: 140011ea0-140011f1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140011ea0(longlong param_1,ulonglong param_2,short *param_3)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  short local_148 [160];
  
  if (*(char *)(param_1 + 0x478) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8 + (param_2 & 0xffffffff) * 0x28);
    (**(code **)(*plVar1 + 0x50))(plVar1,local_148);
    FUN_1400250dc(param_3,local_148);
    return;
  }
  param_3[0] = L'M';
  param_3[1] = L'i';
  param_3[2] = L'c';
  param_3[3] = L'r';
  pwVar2 = param_3 + 4;
  pwVar2[0] = L'o';
  pwVar2[1] = L's';
  pwVar2[2] = L'o';
  pwVar2[3] = L'f';
  pwVar2 = param_3 + 8;
  pwVar2[0] = L't';
  pwVar2[1] = L' ';
  pwVar2[2] = L'B';
  pwVar2[3] = L'a';
  pwVar2 = param_3 + 0xc;
  pwVar2[0] = L's';
  pwVar2[1] = L'i';
  pwVar2[2] = L'c';
  pwVar2[3] = L' ';
  pwVar2 = param_3 + 0x10;
  pwVar2[0] = L'R';
  pwVar2[1] = L'e';
  pwVar2[2] = L'n';
  pwVar2[3] = L'd';
  pwVar2 = param_3 + 0x14;
  pwVar2[0] = L'e';
  pwVar2[1] = L'r';
  pwVar2[2] = L' ';
  pwVar2[3] = L'D';
  pwVar2 = param_3 + 0x16;
  pwVar2[0] = L' ';
  pwVar2[1] = L'D';
  pwVar2[2] = L'r';
  pwVar2[3] = L'i';
  pwVar2 = param_3 + 0x1a;
  pwVar2[0] = L'v';
  pwVar2[1] = L'e';
  pwVar2[2] = L'r';
  pwVar2[3] = L'\0';
  return;
}


/*
 * FUN_140011f20 at 140011f20
 * undefined8 * __fastcall FUN_140011f20(undefined8 * param_1)
 * Address ranges: 140011f20-140012250
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140011f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_140028d70;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0xffffffffffffffff;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x334),0,0x100);
  return param_1;
}


/*
 * FUN_140012260 at 140012260
 * undefined8 * __fastcall FUN_140012260(undefined8 * param_1, uint param_2)
 * Address ranges: 140012260-140012293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140012260(undefined8 *param_1,uint param_2)

{
  FUN_1400122a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_1400122a0 at 1400122a0
 * undefined __fastcall FUN_1400122a0(undefined8 * param_1)
 * Address ranges: 1400122a0-140012336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400122a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = param_1 + 100;
  *param_1 = &PTR_FUN_140028d70;
  FUN_140024260((LPVOID)*puVar2);
  lVar4 = 0x10;
  lVar3 = 0x10;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -2;
    FUN_140024260((LPVOID)*puVar1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = 0x10;
  puVar2 = param_1 + 0x44;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -2;
    FUN_140024260((LPVOID)*puVar1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x24;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -2;
    FUN_140024260((LPVOID)*puVar1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_1 = &PTR_FUN_140028cd0;
  return;
}


/*
 * FUN_140012450 at 140012450
 * undefined1 __fastcall FUN_140012450(longlong param_1, int param_2, uint param_3)
 * Address ranges: 140012450-1400124c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_140012450(longlong param_1,int param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 800) + uVar2 * 4) == param_2) {
        if ((int)uVar2 == -1) {
          return 0;
        }
        uVar1 = *(uint *)(param_1 + 0x434 + uVar2 * 4);
        if ((uVar1 != 0xffffffff) && (param_3 < uVar1)) {
          return *(undefined1 *)((ulonglong)param_3 * 0x10 + uVar2 + 0x334 + param_1);
        }
        return 0;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x328));
  }
  return 0;
}


/*
 * FUN_1400124d0 at 1400124d0
 * undefined4 __fastcall FUN_1400124d0(longlong param_1, uint param_2, uint param_3, int param_4)
 * Address ranges: 1400124d0-140012576
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1400124d0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_3;
  iVar4 = (param_4 != 1) + 2;
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar3 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 800) + uVar3 * 4) == param_2) {
        if ((int)uVar3 == -1) {
          return 0;
        }
        if (*(uint *)(param_1 + 0x128 + uVar3 * 0x10) <= param_3) {
          return 0;
        }
        lVar1 = *(longlong *)(param_1 + (uVar3 + 0x12) * 0x10);
        if ((*(int *)(lVar1 + uVar5 * 8) == 0) || (*(int *)(lVar1 + 4 + uVar5 * 8) != iVar4)) {
          FUN_140011c30(param_1,param_2,param_3,iVar4);
        }
        return *(undefined4 *)(*(longlong *)(param_1 + (uVar3 + 0x12) * 0x10) + uVar5 * 8);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x328));
  }
  return 0;
}


/*
 * FUN_140012580 at 140012580
 * undefined8 * __fastcall FUN_140012580(longlong param_1, undefined8 * param_2, uint param_3, uint param_4, int param_5, uint param_6)
 * Address ranges: 140012580-1400126ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 *
FUN_140012580(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,int param_5,
             uint param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar7 = (ulonglong)param_4;
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)(param_1 + 0x328);
  param_2[1] = 0;
  param_2[2] = 0;
  if (uVar1 == 0) {
    return param_2;
  }
  while (*(uint *)(*(longlong *)(param_1 + 800) + uVar5 * 4) != param_3) {
    uVar3 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar3;
    if (uVar1 <= uVar3) {
      return param_2;
    }
  }
  if ((int)uVar5 == -1) {
    return param_2;
  }
  if (*(uint *)(param_1 + 0x128 + uVar5 * 0x10) <= param_4) {
    return param_2;
  }
  if (*(int *)(*(longlong *)(param_1 + (uVar5 + 0x12) * 0x10) + uVar7 * 8) == 0) {
    FUN_140011c30(param_1,param_3,param_4,(param_5 != 1) + 2);
  }
  if (param_6 < *(uint *)(*(longlong *)(param_1 + (uVar5 + 0x12) * 0x10) + uVar7 * 8)) {
    lVar6 = (ulonglong)param_6 * 0x1c;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0x20;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + (uVar5 + 2) * 0x10) + uVar7 * 8);
    uVar1 = *(uint *)(lVar6 + 0xc + lVar2);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar6 + lVar2);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(lVar6 + 4 + lVar2);
    uVar3 = *(uint *)(lVar6 + 8 + lVar2);
    *(uint *)(param_2 + 1) = uVar3;
    *(uint *)((longlong)param_2 + 0xc) = uVar1;
    if (uVar1 != 0) {
      uVar4 = uVar3 / uVar1;
    }
    *(uint *)(param_2 + 2) = uVar4;
  }
  return param_2;
}


/*
 * FUN_1400126b0 at 1400126b0
 * undefined8 __fastcall FUN_1400126b0(longlong * param_1, undefined4 * param_2)
 * Address ranges: 1400126b0-14001273e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1400126b0(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar6 = 0x10;
    if (iVar1 != 0) {
      uVar6 = (ulonglong)(uint)(iVar1 * 2);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    uVar4 = SUB168(ZEXT816(4) * auVar3,0);
    if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)thunk_FUN_14002423c(uVar4);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_140024620(puVar5,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 2);
    FUN_140024260((LPVOID)*param_1);
    *param_1 = (longlong)puVar5;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  }
  uVar2 = *param_2;
  *(undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 4) = uVar2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}


/*
 * FUN_140012740 at 140012740
 * undefined8 __fastcall FUN_140012740(longlong param_1)
 * Address ranges: 140012740-14001280b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140012740(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  FARPROC pFVar3;
  
  puVar2 = (undefined8 *)FUN_14002423c(0x5b8);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_140013330(puVar2,&PTR_s_DGD3D12ROOT_14002c140);
    FUN_140013ce0(puVar2 + 0x66);
    *puVar2 = &PTR_FUN_140029018;
    *(undefined8 **)(param_1 + 0x480) = puVar2;
    uVar1 = FUN_140013450((longlong)puVar2);
    if ((char)uVar1 != '\0') {
      pFVar3 = GetProcAddress((HMODULE)puVar2[0x59],"D3D12SerializeRootSignature");
      puVar2[0xa6] = pFVar3;
      if (pFVar3 != (FARPROC)0x0) {
        *(undefined1 *)((longlong)puVar2 + 0x302) = 0;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x480);
        return CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x480) >> 8),1);
      }
      FUN_140013580((longlong)puVar2);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x480);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined8 *)(param_1 + 0x480) = 0;
  return 0;
}


/*
 * FUN_140012810 at 140012810
 * undefined __fastcall FUN_140012810(longlong * param_1)
 * Address ranges: 140012810-140012858
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140012810(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x90] != 0) {
    (**(code **)(*param_1 + 0x18))();
    lVar1 = param_1[0x90];
    *(undefined8 *)(lVar1 + 0x530) = 0;
    FUN_140013580(lVar1);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  return;
}


/*
 * FUN_140012860 at 140012860
 * char __fastcall FUN_140012860(longlong * param_1)
 * Address ranges: 140012860-14001294f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char FUN_140012860(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  FUN_140011730((longlong)param_1);
  cVar2 = '\0';
  uVar5 = 0;
  if ((int)param_1[0x65] != 0) {
    do {
      uVar1 = FUN_140013910(param_1[0x90],*(uint *)(param_1[100] + uVar5 * 4),(int)param_1[0x91]);
      if ((char)uVar1 == '\0') {
        uVar4 = *(uint *)(param_1 + 0x65);
        uVar3 = (uint)uVar5;
        if (uVar3 < uVar4) {
          uVar6 = uVar3 + 1;
          if (uVar6 < uVar4) {
            do {
              uVar5 = (ulonglong)uVar6;
              uVar4 = uVar6 - 1;
              uVar6 = uVar6 + 1;
              *(undefined4 *)(param_1[100] + (ulonglong)uVar4 * 4) =
                   *(undefined4 *)(param_1[100] + uVar5 * 4);
              uVar4 = *(uint *)(param_1 + 0x65);
            } while (uVar6 < uVar4);
          }
          *(uint *)(param_1 + 0x65) = uVar4 - 1;
        }
        uVar5 = (ulonglong)(uVar3 - 1);
      }
      else if (*(char *)(param_1[0x90] + 0x34d +
                        (ulonglong)*(uint *)(param_1[100] + uVar5 * 4) * 0x20) == '\0') {
        cVar2 = '\x01';
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x65));
    if (cVar2 != '\0') {
      return cVar2;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return '\0';
}


/*
 * FUN_140012950 at 140012950
 * undefined __fastcall FUN_140012950(longlong param_1)
 * Address ranges: 140012950-140012a66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140012950(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar7 = uVar8;
  if (*(int *)(param_1 + 0x328) != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x480);
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 800) + uVar7 * 4);
      piVar1 = (int *)(lVar2 + 0x18 + uVar4 * 0x28);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (lVar5 = uVar4 * 0x20, *(longlong *)(lVar2 + 0x330 + lVar5) != 0)) {
        (**(code **)(**(longlong **)(lVar2 + 0x338 + lVar5) + 0x10))();
        *(undefined8 *)(lVar2 + 0x338 + lVar5) = 0;
        (**(code **)(**(longlong **)(lVar2 + 0x330 + lVar5) + 0x10))();
        *(undefined8 *)(lVar2 + 0x330 + lVar5) = 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x328));
  }
  lVar2 = *(longlong *)(param_1 + 0x480);
  do {
    plVar3 = *(longlong **)(lVar2 + 8 + uVar8 * 0x28);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)(lVar2 + 8 + uVar8 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x14 + uVar8 * 0x28) = 0;
      *(undefined4 *)(lVar2 + 0x10 + uVar8 * 0x28) = 0;
      *(undefined1 *)(lVar2 + 0x1c + uVar8 * 0x28) = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x10);
  if (*(longlong **)(lVar2 + 0x310) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar2 + 0x310) + 0x10))();
    *(undefined8 *)(lVar2 + 0x310) = 0;
  }
  FUN_140024260(*(LPVOID *)(lVar2 + 0x318));
  *(undefined8 *)(lVar2 + 0x318) = 0;
  *(undefined8 *)(lVar2 + 800) = 0;
  return;
}


/*
 * FUN_140012a90 at 140012a90
 * undefined8 * __fastcall FUN_140012a90(undefined8 * param_1, uint param_2)
 * Address ranges: 140012a90-140012b0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140012a90(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_140028e60;
  if (param_1[0x90] != 0) {
    FUN_140012950((longlong)param_1);
    lVar1 = param_1[0x90];
    *(undefined8 *)(lVar1 + 0x530) = 0;
    FUN_140013580(lVar1);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  FUN_1400122a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_140012bd0 at 140012bd0
 * ulonglong __fastcall FUN_140012bd0(longlong param_1, uint param_2)
 * Address ranges: 140012bd0-140012d84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140012bd0(longlong param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  ulonglong uVar9;
  
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x328) != 0) {
    uVar9 = uVar6;
    while (*(uint *)(*(longlong *)(param_1 + 800) + uVar9 * 4) != param_2) {
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      if (*(uint *)(param_1 + 0x328) <= uVar8) {
        return 0;
      }
    }
    if ((int)uVar9 != -1) {
      puVar1 = (uint *)(param_1 + 0x434 + uVar9 * 4);
      if (*(int *)(param_1 + 0x434 + uVar9 * 4) == -1) {
        *puVar1 = 0;
        uVar6 = FUN_140013910(*(longlong *)(param_1 + 0x480),param_2,*(int *)(param_1 + 0x488));
        if ((char)uVar6 != '\0') {
          uVar8 = 2;
          lVar3 = *(longlong *)(param_1 + 0x480);
          lVar7 = (ulonglong)param_2 * 0x20;
          do {
            plVar4 = *(longlong **)(lVar3 + 0x330 + lVar7);
            local_38 = 0x1c;
            local_30 = 0;
            local_34 = uVar8;
            iVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,4,&local_38,0x10);
            if (iVar5 == 0) {
              local_38 = 0x39;
              if (((local_30._4_4_ != 0) &&
                  (plVar4 = *(longlong **)(lVar3 + 0x330 + lVar7),
                  iVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,4,&local_38,0x10), iVar5 == 0)) &&
                 (local_30._4_4_ != 0)) {
                *(char *)(param_1 + uVar9 + 0x334 + (ulonglong)*puVar1 * 0x10) = (char)uVar8;
                *puVar1 = *puVar1 + 1;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x11);
          lVar3 = *(longlong *)(param_1 + 0x480);
          piVar2 = (int *)(lVar3 + 0x18 + (ulonglong)param_2 * 0x28);
          *piVar2 = *piVar2 + -1;
          if ((*piVar2 == 0) && (*(longlong *)(lVar3 + 0x330 + lVar7) != 0)) {
            (**(code **)(**(longlong **)(lVar3 + 0x338 + lVar7) + 0x10))();
            *(undefined8 *)(lVar3 + 0x338 + lVar7) = 0;
            (**(code **)(**(longlong **)(lVar3 + 0x330 + lVar7) + 0x10))();
            *(undefined8 *)(lVar3 + 0x330 + lVar7) = 0;
          }
        }
      }
      uVar6 = (ulonglong)*puVar1;
    }
  }
  return uVar6;
}


/*
 * FUN_140012d90 at 140012d90
 * undefined * __fastcall FUN_140012d90(int param_1)
 * Address ranges: 140012d90-140012e71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140012d90(int param_1)

{
  undefined *puVar1;
  
  if ((DAT_14002efa0 & 1) == 0) {
    DAT_14002efa0 = DAT_14002efa0 | 1;
    FUN_140011f20((undefined8 *)&DAT_14002eb10);
    _DAT_14002eb10 = &PTR_FUN_140028e60;
    DAT_14002ef90 = 0;
    _DAT_14002ef98 = 0xb000;
    DAT_14002ef88 = 0;
    FUN_140024c60(FUN_1400254a0);
  }
  if ((DAT_14002efa0 & 2) == 0) {
    DAT_14002efa0 = DAT_14002efa0 | 2;
    FUN_140011f20((undefined8 *)&DAT_14002e680);
    _DAT_14002e680 = &PTR_FUN_140028e60;
    DAT_14002eb00 = 0;
    _DAT_14002eb08 = 0xc000;
    DAT_14002eaf8 = 0;
    FUN_140024c60(FUN_140025430);
  }
  puVar1 = (undefined *)0x0;
  if (param_1 == 0x110) {
    puVar1 = &DAT_14002eb10;
  }
  else if (param_1 == 0x120) {
    return &DAT_14002e680;
  }
  return puVar1;
}


/*
 * FUN_140012e80 at 140012e80
 * bool __fastcall FUN_140012e80(longlong param_1, ulonglong param_2, int param_3, undefined8 param_4, undefined4 param_5, char param_6)
 * Address ranges: 140012e80-14001304d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_140012e80(longlong param_1,ulonglong param_2,int param_3,undefined8 param_4,
                  undefined4 param_5,char param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 local_158 [256];
  undefined4 local_58;
  undefined4 local_54;
  
  uVar6 = param_2 & 0xffffffff;
  if ((*(char *)(param_1 + 0x1c + uVar6 * 0x28) != '\0') &&
     (iVar5 = *(int *)(param_1 + 0x18 + uVar6 * 0x28),
     *(int *)(param_1 + 0x18 + uVar6 * 0x28) = iVar5 + 1, iVar5 == 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x330 + uVar6 * 0x28);
    if (param_3 == 5) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 8 + uVar6 * 0x28);
    }
    *(undefined4 *)(param_1 + 0x350 + uVar6 * 0x28) = 0;
    pcVar4 = *(code **)(param_1 + 0x2d0);
    lVar3 = param_1 + 0x338 + uVar6 * 0x28;
    iVar5 = (*pcVar4)(plVar7,param_3,0,0,param_4,param_5,7,puVar1,param_1 + 0x34c + uVar6 * 0x28,
                      lVar3);
    if (iVar5 < 0) {
      if ((param_6 == '\0') ||
         (iVar5 = (*pcVar4)(0,5,0,0,param_4,param_5,7,puVar1,param_1 + 0x34c + uVar6 * 0x28,lVar3),
         iVar5 < 0)) {
        piVar2 = (int *)(param_1 + 0x18 + uVar6 * 0x28);
        *piVar2 = *piVar2 + -1;
      }
      else {
        (*(code *)**(undefined8 **)*puVar1)
                  ((undefined8 *)*puVar1,&DAT_140028f00,param_1 + 0x340 + uVar6 * 0x28);
        *(undefined4 *)(param_1 + 0x348 + uVar6 * 0x28) = 5;
      }
    }
    else {
      (*(code *)**(undefined8 **)*puVar1)
                ((undefined8 *)*puVar1,&DAT_140028f00,param_1 + 0x340 + uVar6 * 0x28);
      *(int *)(param_1 + 0x348 + uVar6 * 0x28) = param_3;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x40))(plVar7,local_158);
        *(undefined4 *)(param_1 + 0x350 + uVar6 * 0x28) = local_58;
        *(undefined4 *)(param_1 + 0x354 + uVar6 * 0x28) = local_54;
      }
    }
  }
  return *(int *)(param_1 + 0x18 + uVar6 * 0x28) != 0;
}


/*
 * FUN_140013050 at 140013050
 * undefined8 * __fastcall FUN_140013050(void)
 * Address ranges: 140013050-1400130a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140013050(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_14002423c(0x5f8);
  puVar3 = (undefined8 *)(lVar2 + 0x47U & 0xffffffffffffffc0);
  puVar3[-1] = lVar2;
  puVar3 = FUN_1400130b0(puVar3);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = FUN_140013450((longlong)puVar3);
    if ((char)uVar1 != '\0') {
      return puVar3;
    }
    (**(code **)*puVar3)(puVar3,0);
    FUN_140024c8c((LPVOID)puVar3[-1]);
  }
  return (undefined8 *)0x0;
}


/*
 * FUN_1400130b0 at 1400130b0
 * undefined8 * __fastcall FUN_1400130b0(undefined8 * param_1)
 * Address ranges: 1400130b0-140013259
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_1400130b0(undefined8 *param_1)

{
  FUN_140013330(param_1,&PTR_s_DGD3D11ROOT_14002c120);
  *param_1 = &PTR_FUN_140028f48;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x9100;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0x9100;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x9100;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x9100;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0x9100;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0x9100;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x9100;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x9100;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x9100;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x9100;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x9100;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0x9100;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0x9100;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0x9100;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0x9100;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0x9100;
  return param_1;
}


/*
 * FUN_140013260 at 140013260
 * undefined8 * __fastcall FUN_140013260(undefined8 * param_1, uint param_2)
 * Address ranges: 140013260-1400132bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140013260(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_140028f48;
  FUN_140013580((longlong)param_1);
  *param_1 = &PTR_FUN_140028f90;
  FUN_140013580((longlong)param_1);
  FUN_140024260((LPVOID)param_1[99]);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_1400132c0 at 1400132c0
 * undefined __fastcall FUN_1400132c0(undefined8 * param_1)
 * Address ranges: 1400132c0-1400132dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400132c0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_140024c8c((LPVOID)param_1[-1]);
  return;
}


/*
 * FUN_1400132e0 at 1400132e0
 * undefined8 * __fastcall FUN_1400132e0(undefined8 * param_1, uint param_2)
 * Address ranges: 1400132e0-140013329
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_1400132e0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_140028f90;
  FUN_140013580((longlong)param_1);
  FUN_140024260((LPVOID)param_1[99]);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_140013330 at 140013330
 * undefined8 * __fastcall FUN_140013330(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 140013330-140013444
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140013330(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_140028f90;
  puVar2 = param_1 + 1;
  lVar1 = 0x10;
  do {
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
    QueryPerformanceCounter((LARGE_INTEGER *)(puVar2 + 3));
    puVar2[4] = puVar2[3];
    puVar2 = puVar2 + 5;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x302) = 0;
  *(undefined1 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x61] = param_2;
  param_1[0x62] = 0;
  return param_1;
}


/*
 * FUN_140013450 at 140013450
 * undefined4 __fastcall FUN_140013450(longlong param_1)
 * Address ranges: 140013450-140013574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_140013450(longlong param_1)

{
  uint uVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  
  if ((*(longlong *)(param_1 + 0x290) == 0) && (*(longlong *)(param_1 + 0x2c8) == 0)) {
    pHVar2 = LoadLibraryA("DXGI.DLL");
    *(HMODULE *)(param_1 + 0x290) = pHVar2;
    uVar1 = (uint)pHVar2;
    if (pHVar2 == (HMODULE)0x0) goto LAB_14001356d;
    pFVar3 = GetProcAddress(pHVar2,"CreateDXGIFactory1");
    *(FARPROC *)(param_1 + 0x2a8) = pFVar3;
    if (pFVar3 != (FARPROC)0x0) {
      pHVar2 = LoadLibraryA(*(LPCSTR *)(*(longlong *)(param_1 + 0x308) + 0x10));
      *(HMODULE *)(param_1 + 0x2c8) = pHVar2;
      if (pHVar2 != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(pHVar2,*(LPCSTR *)(*(longlong *)(param_1 + 0x308) + 0x18));
        *(FARPROC *)(param_1 + 0x2d0) = pFVar3;
        if (pFVar3 != (FARPROC)0x0) goto LAB_14001350c;
        FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
        *(undefined8 *)(param_1 + 0x2c8) = 0;
      }
    }
    pHVar2 = *(HMODULE *)(param_1 + 0x290);
  }
  else {
LAB_14001350c:
    uVar1 = (**(code **)(param_1 + 0x2a8))(&DAT_140028f80,param_1 + 0x2d8);
    if (-1 < (int)uVar1) {
      *(undefined1 *)(param_1 + 0x300) = 1;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    if (*(HMODULE *)(param_1 + 0x2c8) != (HMODULE)0x0) {
      uVar1 = FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    pHVar2 = *(HMODULE *)(param_1 + 0x290);
    if (pHVar2 == (HMODULE)0x0) goto LAB_14001356d;
  }
  uVar1 = FreeLibrary(pHVar2);
  *(undefined8 *)(param_1 + 0x290) = 0;
LAB_14001356d:
  return uVar1 & 0xffffff00;
}


/*
 * FUN_140013580 at 140013580
 * undefined __fastcall FUN_140013580(longlong param_1)
 * Address ranges: 140013580-1400135f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140013580(longlong param_1)

{
  if (*(char *)(param_1 + 0x300) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x10))();
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    if (*(HMODULE *)(param_1 + 0x2c8) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    if (*(HMODULE *)(param_1 + 0x290) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x290));
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
    *(undefined1 *)(param_1 + 0x300) = 0;
  }
  return;
}


/*
 * FUN_140013600 at 140013600
 * undefined8 __fastcall FUN_140013600(longlong param_1)
 * Address ranges: 140013600-140013902
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140013600(longlong param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *local_res8;
  longlong *local_res10;
  undefined1 local_168 [296];
  int local_40;
  int iStack_3c;
  
  uVar11 = 0;
  local_res10 = (longlong *)0x0;
  if ((*(longlong **)(param_1 + 0x310) == (longlong *)0x0) ||
     (uVar4 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x68))(), (int)uVar4 == 0)) {
    iVar3 = (**(code **)(param_1 + 0x2a8))(&DAT_140028f80,&local_res10);
    if (-1 < iVar3) {
      if (*(longlong **)(param_1 + 0x310) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x310) + 0x10))();
      }
      *(longlong **)(param_1 + 0x310) = local_res10;
    }
    local_res10 = *(longlong **)(param_1 + 0x310);
    if (local_res10 == (longlong *)0x0) {
      return 0;
    }
    FUN_140024260(*(LPVOID *)(param_1 + 0x318));
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    local_res8 = (longlong *)0x0;
    iVar3 = (**(code **)(*local_res10 + 0x60))(local_res10,0,&local_res8);
    uVar4 = uVar11;
    while (uVar9 = uVar11, -1 < iVar3) {
      iVar3 = (**(code **)(*local_res8 + 0x50))(local_res8,local_168);
      if (-1 < iVar3) {
        uVar8 = 0xffffffff;
        do {
          if (((*(int *)(param_1 + 0x10 + uVar9 * 0x28) == local_40) &&
              (*(int *)(param_1 + 0x14 + uVar9 * 0x28) == iStack_3c)) &&
             ((local_40 != 0 || (iStack_3c != 0)))) {
            (**(code **)(*local_res8 + 0x10))();
            local_res8 = (longlong *)0x0;
            goto LAB_1400137ac;
          }
          if (*(longlong *)(param_1 + 8 + uVar9 * 0x28) == 0) {
            uVar10 = (uint)uVar9;
            if ((uint)uVar8 != 0xffffffff) {
              uVar10 = (uint)uVar8;
            }
            uVar8 = (ulonglong)uVar10;
          }
          uVar10 = (uint)uVar9 + 1;
          uVar9 = (ulonglong)uVar10;
        } while (uVar10 < 0x10);
        iVar3 = (int)uVar8;
        uVar9 = uVar8;
        if (local_res8 == (longlong *)0x0) {
LAB_1400137ac:
          iVar3 = (int)uVar9;
          if (iVar3 != -1) goto LAB_1400137b5;
        }
        else if (iVar3 == -1) {
          (**(code **)(*local_res8 + 0x10))(local_res8);
        }
        else {
          lVar7 = (longlong)iVar3;
          *(longlong **)(param_1 + 8 + lVar7 * 0x28) = local_res8;
          *(ulonglong *)(param_1 + 0x10 + lVar7 * 0x28) = CONCAT44(iStack_3c,local_40);
          *(undefined1 *)(param_1 + 0x1c + lVar7 * 0x28) = 1;
LAB_1400137b5:
          iVar1 = *(int *)(param_1 + 0x324);
          if (*(int *)(param_1 + 800) == iVar1) {
            uVar9 = 0x10;
            if (iVar1 != 0) {
              uVar9 = (ulonglong)(uint)(iVar1 * 2);
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar9;
            uVar5 = SUB168(ZEXT816(4) * auVar2,0);
            if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
              uVar5 = 0xffffffffffffffff;
            }
            puVar6 = (undefined8 *)thunk_FUN_14002423c(uVar5);
            if (puVar6 == (undefined8 *)0x0) goto LAB_140013836;
            FUN_140024620(puVar6,*(undefined8 **)(param_1 + 0x318),
                          (ulonglong)*(uint *)(param_1 + 0x324) << 2);
            FUN_140024260(*(LPVOID *)(param_1 + 0x318));
            *(undefined8 **)(param_1 + 0x318) = puVar6;
            *(int *)(param_1 + 0x324) = (int)uVar9;
          }
          *(int *)(*(longlong *)(param_1 + 0x318) + (ulonglong)*(uint *)(param_1 + 800) * 4) = iVar3
          ;
          *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
        }
      }
LAB_140013836:
      uVar4 = (ulonglong)((int)uVar4 + 1);
      iVar3 = (**(code **)(*local_res10 + 0x60))(local_res10,uVar4,&local_res8);
    }
    do {
      uVar4 = uVar9;
      if (*(char *)(param_1 + 0x1c + uVar9 * 0x28) != '\0') {
        if (*(uint *)(param_1 + 800) != 0) {
          uVar4 = uVar11;
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x318) + uVar4 * 4) == (int)uVar9) {
              if ((int)uVar4 != -1) goto LAB_1400138d4;
              break;
            }
            uVar10 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar10;
          } while (uVar10 < *(uint *)(param_1 + 800));
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8 + uVar9 * 0x28) + 0x10))();
        *(undefined1 *)(param_1 + 0x1c + uVar9 * 0x28) = 0;
      }
LAB_1400138d4:
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < 0x10);
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}


/*
 * FUN_140013910 at 140013910
 * ulonglong __fastcall FUN_140013910(longlong param_1, uint param_2, int param_3)
 * Address ranges: 140013910-140013bc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140013910(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 local_res8;
  longlong *local_res20;
  longlong *local_1e8;
  int local_1e0;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined1 local_158 [296];
  int local_30;
  int local_2c;
  
  uVar7 = (ulonglong)param_2;
  iVar2 = *(int *)(param_1 + 0x18 + uVar7 * 0x28);
  iVar5 = iVar2 + 1;
  *(int *)(param_1 + 0x18 + uVar7 * 0x28) = iVar5;
  if (iVar2 == 0) {
    lVar8 = uVar7 * 0x20;
    puVar9 = (undefined8 *)(param_1 + 0x330 + lVar8);
    uVar6 = (**(code **)(param_1 + 0x2d0))
                      (*(undefined8 *)(param_1 + 8 + uVar7 * 0x28),param_3,&DAT_140028fa0,puVar9);
    if ((int)uVar6 < 0) {
      piVar1 = (int *)(param_1 + 0x18 + uVar7 * 0x28);
      *piVar1 = *piVar1 + -1;
      uVar6 = uVar6 & 0xffffffffffffff00;
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 8 + uVar7 * 0x28);
      (**(code **)*puVar3)(puVar3,&DAT_140026398,param_1 + 0x338 + lVar8);
      *(undefined1 *)(lVar8 + 0x34d + param_1) = 0;
      local_1e8 = (longlong *)0x0;
      (**(code **)**(undefined8 **)(param_1 + 0x2d8))
                (*(undefined8 **)(param_1 + 0x2d8),&DAT_140026388,&local_1e8);
      local_res20 = (longlong *)0x0;
      iVar5 = (**(code **)(*local_1e8 + 0xd8))(local_1e8,&DAT_140028fb0,&local_res20);
      if (-1 < iVar5) {
        (**(code **)(*local_res20 + 0x40))(local_res20,local_158);
        (**(code **)(*(longlong *)*puVar9 + 0x158))((longlong *)*puVar9,&local_1e0);
        if ((local_1e0 == local_30) && (local_1dc == local_2c)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        *(undefined1 *)(lVar8 + 0x34d + param_1) = uVar4;
        (**(code **)(*local_res20 + 0x10))();
      }
      (**(code **)(*local_1e8 + 0x10))();
      (**(code **)(*(longlong *)*puVar9 + 0x38))();
      local_1c8 = 0;
      uStack_1c0 = 0;
      (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,1,&local_1c8,0x10);
      local_180 = 0;
      uStack_178 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_190 = 0;
      uStack_188 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0,&local_1a0,0x3c);
      local_1d0 = 0;
      (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0x12,&local_1d0,8);
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0x15,&local_1b8,0x14);
      local_res8 = 0;
      iVar5 = (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0x2c,&local_res8,8);
      if (iVar5 < 0) {
        local_res8 = 0;
      }
      local_1d8 = 0;
      iVar5 = (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0x2d,&local_1d8,8);
      if (iVar5 < 0) {
        local_1d8._4_4_ = 0;
      }
      if (((int)uStack_1c0 == 0) || (uStack_1c0._4_4_ == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(lVar8 + 0x348 + param_1) = uVar4;
      *(bool *)(lVar8 + 0x349 + param_1) = local_190._4_4_ != 0;
      *(bool *)(lVar8 + 0x34a + param_1) = 0 < local_1d0._4_4_;
      if (param_3 < 0xc000) {
        bVar10 = false;
      }
      else {
        bVar10 = (int)local_res8 != 0;
      }
      *(bool *)(lVar8 + 0x34b + param_1) = bVar10;
      *(undefined4 *)(lVar8 + 0x344 + param_1) = (undefined4)uStack_1b0;
      *(bool *)(lVar8 + 0x34c + param_1) = local_1d8._4_4_ != 0;
      uVar6 = CONCAT71((uint7)(uint3)((ulonglong)uStack_1b0 >> 8),1);
    }
    return uVar6;
  }
  return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
}


/*
 * FUN_140013bd0 at 140013bd0
 * undefined8 * __fastcall FUN_140013bd0(undefined8 * param_1, uint param_2)
 * Address ranges: 140013bd0-140013c36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140013bd0(undefined8 *param_1,uint param_2)

{
  param_1[0xa6] = 0;
  *param_1 = &PTR_FUN_140029018;
  FUN_140013580((longlong)param_1);
  *param_1 = &PTR_FUN_140028f90;
  FUN_140013580((longlong)param_1);
  FUN_140024260((LPVOID)param_1[99]);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_140013c40 at 140013c40
 * undefined8 * __fastcall FUN_140013c40(void)
 * Address ranges: 140013c40-140013cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140013c40(void)

{
  undefined4 uVar1;
  longlong lVar2;
  FARPROC pFVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_14002423c(0x600);
  puVar4 = (undefined8 *)(lVar2 + 0x47U & 0xffffffffffffffc0);
  puVar4[-1] = lVar2;
  FUN_140013330(puVar4,&PTR_s_DGD3D12ROOT_14002c140);
  FUN_140013ce0(puVar4 + 0x66);
  *puVar4 = &PTR_FUN_140029018;
  uVar1 = FUN_140013450((longlong)puVar4);
  if ((char)uVar1 != '\0') {
    pFVar3 = GetProcAddress((HMODULE)puVar4[0x59],"D3D12SerializeRootSignature");
    puVar4[0xa6] = pFVar3;
    if (pFVar3 != (FARPROC)0x0) {
      *(undefined1 *)((longlong)puVar4 + 0x302) = 0;
      return puVar4;
    }
    FUN_140013580((longlong)puVar4);
  }
  (**(code **)*puVar4)(puVar4,0);
  FUN_140024c8c((LPVOID)puVar4[-1]);
  return (undefined8 *)0x0;
}


/*
 * FUN_140013ce0 at 140013ce0
 * undefined8 * __fastcall FUN_140013ce0(undefined8 * param_1)
 * Address ranges: 140013ce0-140013e8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140013ce0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0xc000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0xc000;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0xc000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5d) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xc000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7d) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xc000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9d) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xc000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbd) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xc000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdd) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xc000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfd) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xc000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11d) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xc000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13d) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xc000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15d) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xc000;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17d) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xc000;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19d) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xc000;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1bd) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xc000;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dd) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xc000;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fd) = 0;
  param_1[0x40] = 0;
  return param_1;
}


/*
 * FUN_140013e8c at 140013e8c
 * bool __fastcall FUN_140013e8c(byte * param_1, byte * param_2, byte * param_3, undefined8 param_4)
 * Address ranges: 140013e8c-140013ef9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_140013e8c(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_b8 [16];
  byte local_a8 [128];
  
  puVar2 = local_b8;
  iVar1 = FUN_1400242b4(param_1,(byte *)" %s %c",local_a8,puVar2);
  if ((iVar1 == 1) && (iVar1 = FUN_140024ce8(local_a8,param_2), iVar1 == 0)) {
    return true;
  }
  iVar1 = FUN_1400242b4(param_1,param_3,param_4,puVar2);
  return iVar1 == 1;
}


/*
 * FUN_140013efc at 140013efc
 * undefined8 __fastcall FUN_140013efc(undefined8 * param_1, undefined4 param_2)
 * Address ranges: 140013efc-140013fb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140013efc(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte *pbVar3;
  LPCSTR lpMultiByteStr;
  undefined4 extraout_var;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))();
  if ((int)uVar2 != 0) {
    do {
      pbVar3 = (byte *)(**(code **)(*(longlong *)*param_1 + 0x40))
                                 ((longlong *)*param_1,param_2,uVar4);
      iVar1 = FUN_140024ce8(pbVar3,(byte *)"datafolderredirection");
      if ((iVar1 == 0) &&
         (iVar1 = (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_2,uVar4),
         iVar1 == 1)) {
        lpMultiByteStr =
             (LPCSTR)(**(code **)(*(longlong *)*param_1 + 0x50))
                               ((longlong *)*param_1,param_2,uVar4,0);
        if ((lpMultiByteStr != (LPCSTR)0x0) && (*lpMultiByteStr != '\0')) {
          iVar1 = MultiByteToWideChar(0,0,lpMultiByteStr,-1,(LPWSTR)param_1[1],*(int *)(param_1 + 2)
                                     );
          lpMultiByteStr = (LPCSTR)CONCAT44(extraout_var,iVar1);
        }
        return CONCAT71((int7)((ulonglong)lpMultiByteStr >> 8),1);
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,param_2);
    } while (uVar4 < (uint)uVar2);
  }
  return uVar2 & 0xffffffffffffff00;
}


/*
 * FUN_140013fb8 at 140013fb8
 * undefined8 __fastcall FUN_140013fb8(byte * param_1, int * param_2, int * param_3)
 * Address ranges: 140013fb8-14001418a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140013fb8(byte *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined1 uVar4;
  char local_res20 [8];
  int local_a8 [36];
  ulonglong uVar3;
  
  local_a8[0] = 0;
  bVar1 = FUN_140013e8c(param_1,(byte *)"unforced",&DAT_140026f50,local_a8);
  if (bVar1) {
    *param_3 = 0;
    *param_2 = 0;
LAB_14001411a:
    uVar4 = 1;
  }
  else {
    bVar1 = FUN_140013e8c(param_1,&DAT_1400272d4,(byte *)" max_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -1;
LAB_140014116:
      *param_3 = iVar2;
      *param_2 = iVar2;
      goto LAB_14001411a;
    }
    bVar1 = FUN_140013e8c(param_1,(byte *)"max_isf",(byte *)" max_isf_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -2;
      goto LAB_140014116;
    }
    bVar1 = FUN_140013e8c(param_1,(byte *)"max_fhd",(byte *)" max_fhd_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -3;
      goto LAB_140014116;
    }
    bVar1 = FUN_140013e8c(param_1,(byte *)"max_fhd_isf",(byte *)" max_fhd_isf_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -4;
      goto LAB_140014116;
    }
    bVar1 = FUN_140013e8c(param_1,(byte *)"max_qhd",(byte *)" max_qhd_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -5;
      goto LAB_140014116;
    }
    bVar1 = FUN_140013e8c(param_1,(byte *)"max_qhd_isf",(byte *)" max_qhd_isf_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -6;
      goto LAB_140014116;
    }
    bVar1 = FUN_140013e8c(param_1,(byte *)"desktop",(byte *)" desktop_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -8;
      goto LAB_140014116;
    }
    uVar4 = 0;
    iVar2 = FUN_1400242b4(param_1,(byte *)" %u%c%s ",local_a8,local_res20);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if ((iVar2 != 2) || (local_res20[0] != 'x')) goto LAB_140014171;
    *param_2 = -7;
    *param_3 = local_a8[0];
  }
  uVar3 = (ulonglong)(local_a8[0] - 2U);
  if (local_a8[0] - 2U < 0xfe) {
    uVar4 = 1;
    *param_3 = local_a8[0];
  }
LAB_140014171:
  return CONCAT71((int7)(uVar3 >> 8),uVar4);
}


/*
 * FUN_14001418c at 14001418c
 * undefined8 __fastcall FUN_14001418c(byte * param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 14001418c-1400143ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_14001418c(byte *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 extraout_var;
  int iVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 local_res20 [8];
  uint local_a8 [2];
  ulonglong local_a0;
  char local_98 [128];
  
  local_a8[0] = 0;
  local_a0 = 0;
  uVar8 = 1;
  iVar2 = FUN_1400242b4(param_1,(byte *)" %d %c",local_a8,local_res20);
  if (iVar2 == 1) {
    uVar7 = (ulonglong)local_a8[0];
    *param_2 = local_a8[0];
    *param_3 = 1;
  }
  else {
    puVar10 = local_res20;
    iVar2 = FUN_1400242b4(param_1,(byte *)" .%llu %c",&local_a0,puVar10);
    if (iVar2 == 1) {
      FUN_1400242b4(param_1,&DAT_14002915c,local_98,puVar10);
      if (local_a0 == 0) {
        *param_2 = 0;
        uVar7 = 1;
      }
      else {
        lVar5 = FUN_140024d20(local_98);
        uVar3 = (uint)lVar5;
        if (uVar3 < 7) {
          local_a0 = (ulonglong)local_a8[0];
        }
        else {
          uVar7 = 1;
          for (iVar2 = uVar3 - 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            uVar7 = uVar7 * 10;
          }
          local_a0 = local_a0 / uVar7;
          uVar3 = 6;
        }
        iVar2 = 0;
        uVar9 = (uint)local_a0;
        while (9 < uVar9) {
          uVar7 = (local_a0 & 0xffffffff) / 10;
          uVar1 = (uint)uVar7;
          uVar9 = (uint)local_a0;
          if (uVar9 != uVar1 * 10) break;
          iVar2 = iVar2 + 1;
          uVar9 = uVar1;
          local_a0 = uVar7;
        }
        *param_2 = uVar9;
        uVar7 = 1;
        for (iVar2 = uVar3 - iVar2; iVar2 != 0; iVar2 = iVar2 + -1) {
          uVar7 = (ulonglong)(uint)((int)uVar7 * 10);
        }
      }
    }
    else {
      iVar2 = FUN_1400242b4(param_1,(byte *)" %d.%llu %c",local_a8,&local_a0);
      uVar7 = CONCAT44(extraout_var,iVar2);
      if (iVar2 != 2) {
        uVar8 = 0;
        goto LAB_140014395;
      }
      FUN_1400242b4(param_1,(byte *)"%d.%s ",local_a8,local_98);
      lVar5 = FUN_140024d20(local_98);
      uVar3 = (uint)lVar5;
      if (6 < uVar3) {
        uVar7 = 1;
        for (iVar2 = uVar3 - 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          uVar7 = uVar7 * 10;
        }
        local_a0 = local_a0 / uVar7;
        uVar3 = 6;
      }
      iVar2 = 0;
      uVar9 = (uint)local_a0;
      while (9 < uVar9) {
        uVar7 = (local_a0 & 0xffffffff) / 10;
        uVar1 = (uint)uVar7;
        uVar9 = (uint)local_a0;
        if (uVar9 != uVar1 * 10) break;
        iVar2 = iVar2 + 1;
        uVar9 = uVar1;
        local_a0 = uVar7;
      }
      iVar4 = 1;
      iVar2 = uVar3 - iVar2;
      for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
        iVar4 = iVar4 * 10;
      }
      *param_2 = iVar4 * local_a8[0] + uVar9;
      uVar7 = 1;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar7 = (ulonglong)(uint)((int)uVar7 * 10);
      }
    }
    *param_3 = (int)uVar7;
  }
LAB_140014395:
  return CONCAT71((int7)(uVar7 >> 8),uVar8);
}


/*
 * FUN_1400143b0 at 1400143b0
 * undefined __fastcall FUN_1400143b0(uint param_1, uint param_2, LPSTR param_3)
 * Address ranges: 1400143b0-140014430
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400143b0(uint param_1,uint param_2,LPSTR param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  char local_18 [16];
  
  uVar4 = 1;
  if (param_2 != 0) {
    uVar4 = param_2;
  }
  uVar1 = (ulonglong)param_1 / (ulonglong)uVar4;
  uVar3 = (ulonglong)param_1 % (ulonglong)uVar4;
  iVar6 = 0;
  uVar5 = 0;
  if ((int)uVar3 != 0) {
    do {
      if (5 < (uint)uVar5) break;
      uVar3 = (ulonglong)(uint)((int)uVar3 * 10);
      uVar2 = uVar3 / uVar4;
      uVar3 = uVar3 % (ulonglong)uVar4;
      iVar6 = (int)uVar2 + iVar6 * 10;
      local_18[uVar5] = (char)uVar2 + '0';
      uVar5 = (ulonglong)((uint)uVar5 + 1);
      local_18[uVar5] = '\0';
    } while ((int)uVar3 != 0);
    if (iVar6 != 0) {
      FUN_140024290(param_3,"%d.%s",uVar1,local_18);
      return;
    }
  }
  FUN_140024290(param_3,"%d",uVar1,uVar5);
  return;
}


/*
 * FUN_140014464 at 140014464
 * char __fastcall FUN_140014464(int * param_1, LPCWSTR param_2, undefined4 * param_3)
 * Address ranges: 140014464-14001467e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char FUN_140014464(int *param_1,LPCWSTR param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong local_2518 [4];
  longlong local_24f8;
  undefined4 local_24f0;
  undefined4 local_24ec;
  undefined4 local_24e8;
  char *local_24e0;
  undefined4 local_24d8;
  undefined8 local_24d0;
  undefined8 local_2448 [66];
  undefined8 local_2238 [66];
  CHAR local_2028 [8184];
  undefined8 uStack_30;
  
  uStack_30 = 0x14001447d;
  WideCharToMultiByte(0,0x200,param_2,-1,local_2028,0x1ffe,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_1400098a8(local_2238);
  FUN_140023fa0(local_2518,param_2,'\0');
  uVar6 = FUN_1400240d0((longlong)local_2518);
  cVar4 = '\0';
  if ((char)uVar6 != '\0') {
    cVar4 = FUN_14001ba74(param_1,local_2518,(ulonglong)param_3);
    if (cVar4 == '\0') {
      FUN_140014930(&local_24f8);
      if (param_3 != (undefined4 *)0x0) {
        local_24f0 = *param_3;
        local_24ec = param_3[1];
        local_24e8 = param_3[2];
        local_24e0 = "[dgVoodoo IniParser] ";
        local_24d8 = param_3[6];
        local_24d0 = 0;
      }
      bVar5 = FUN_140014a14((longlong)&local_24f8,local_2518,1);
      if (bVar5 != 0) {
        cVar4 = FUN_140019c8c((undefined4 *)local_2238,&local_24f8,(ulonglong)param_3);
        lVar12 = 4;
        if (cVar4 == '\0') {
          FUN_14002511c((undefined1 *)local_2448,0,0x20c);
          puVar8 = FUN_1400098a8(local_2448);
        }
        else {
          lVar11 = 4;
          puVar8 = local_2448;
          puVar9 = local_2238;
          do {
            puVar10 = puVar9;
            puVar7 = puVar8;
            uVar6 = puVar10[1];
            uVar1 = puVar10[2];
            uVar2 = puVar10[3];
            *puVar7 = *puVar10;
            puVar7[1] = uVar6;
            uVar6 = puVar10[4];
            uVar3 = puVar10[5];
            puVar7[2] = uVar1;
            puVar7[3] = uVar2;
            uVar1 = puVar10[6];
            uVar2 = puVar10[7];
            puVar7[4] = uVar6;
            puVar7[5] = uVar3;
            uVar6 = puVar10[8];
            uVar3 = puVar10[9];
            puVar7[6] = uVar1;
            puVar7[7] = uVar2;
            uVar1 = puVar10[10];
            uVar2 = puVar10[0xb];
            puVar7[8] = uVar6;
            puVar7[9] = uVar3;
            uVar6 = puVar10[0xc];
            uVar3 = puVar10[0xd];
            puVar7[10] = uVar1;
            puVar7[0xb] = uVar2;
            uVar1 = puVar10[0xe];
            uVar2 = puVar10[0xf];
            puVar7[0xc] = uVar6;
            puVar7[0xd] = uVar3;
            puVar7[0xe] = uVar1;
            puVar7[0xf] = uVar2;
            lVar11 = lVar11 + -1;
            puVar8 = puVar7 + 0x10;
            puVar9 = puVar10 + 0x10;
          } while (lVar11 != 0);
          uVar6 = *(undefined8 *)((longlong)puVar10 + 0x84);
          *(undefined8 *)((longlong)puVar7 + 0x7c) = *(undefined8 *)((longlong)puVar10 + 0x7c);
          *(undefined8 *)((longlong)puVar7 + 0x84) = uVar6;
          puVar8 = local_2448;
        }
        do {
          piVar13 = param_1;
          puVar9 = puVar8;
          uVar6 = puVar9[1];
          *(undefined8 *)piVar13 = *puVar9;
          *(undefined8 *)(piVar13 + 2) = uVar6;
          uVar6 = puVar9[3];
          *(undefined8 *)(piVar13 + 4) = puVar9[2];
          *(undefined8 *)(piVar13 + 6) = uVar6;
          uVar6 = puVar9[5];
          *(undefined8 *)(piVar13 + 8) = puVar9[4];
          *(undefined8 *)(piVar13 + 10) = uVar6;
          uVar6 = puVar9[7];
          *(undefined8 *)(piVar13 + 0xc) = puVar9[6];
          *(undefined8 *)(piVar13 + 0xe) = uVar6;
          uVar6 = puVar9[9];
          *(undefined8 *)(piVar13 + 0x10) = puVar9[8];
          *(undefined8 *)(piVar13 + 0x12) = uVar6;
          uVar6 = puVar9[0xb];
          *(undefined8 *)(piVar13 + 0x14) = puVar9[10];
          *(undefined8 *)(piVar13 + 0x16) = uVar6;
          uVar6 = puVar9[0xd];
          *(undefined8 *)(piVar13 + 0x18) = puVar9[0xc];
          *(undefined8 *)(piVar13 + 0x1a) = uVar6;
          uVar6 = puVar9[0xf];
          *(undefined8 *)(piVar13 + 0x1c) = puVar9[0xe];
          *(undefined8 *)(piVar13 + 0x1e) = uVar6;
          lVar12 = lVar12 + -1;
          puVar8 = puVar9 + 0x10;
          param_1 = piVar13 + 0x20;
        } while (lVar12 != 0);
        uVar6 = *(undefined8 *)((longlong)puVar9 + 0x84);
        *(undefined8 *)(piVar13 + 0x1f) = *(undefined8 *)((longlong)puVar9 + 0x7c);
        *(undefined8 *)(piVar13 + 0x21) = uVar6;
      }
      FUN_1400149d4(&local_24f8);
    }
  }
  FUN_140024020(local_2518);
  return cVar4;
}


/*
 * FUN_140014680 at 140014680
 * char __fastcall FUN_140014680(int * param_1, undefined8 param_2, undefined4 * param_3)
 * Address ranges: 140014680-140014845
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char FUN_140014680(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong local_518 [4];
  longlong local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  char *local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d0;
  undefined8 local_448 [66];
  undefined8 local_238 [66];
  
  FUN_1400098a8(local_238);
  FUN_140023f00(local_518,param_2);
  cVar5 = FUN_14001ba74(param_1,local_518,(ulonglong)param_3);
  if (cVar5 == '\0') {
    FUN_140014930(&local_4f8);
    if (param_3 != (undefined4 *)0x0) {
      local_4e8 = param_3[2];
      local_4f0 = *param_3;
      local_4e0 = "[dgVoodoo IniParser] ";
      local_4d8 = param_3[6];
      local_4ec = param_3[1];
      local_4d0 = 0;
    }
    bVar6 = FUN_140014a14((longlong)&local_4f8,local_518,1);
    if (bVar6 != 0) {
      cVar5 = FUN_140019c8c((undefined4 *)local_238,&local_4f8,(ulonglong)param_3);
      lVar12 = 4;
      if (cVar5 == '\0') {
        FUN_14002511c((undefined1 *)local_448,0,0x20c);
        puVar8 = FUN_1400098a8(local_448);
      }
      else {
        lVar11 = 4;
        puVar8 = local_448;
        puVar9 = local_238;
        do {
          puVar10 = puVar9;
          puVar7 = puVar8;
          uVar1 = puVar10[1];
          uVar2 = puVar10[2];
          uVar3 = puVar10[3];
          *puVar7 = *puVar10;
          puVar7[1] = uVar1;
          uVar1 = puVar10[4];
          uVar4 = puVar10[5];
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          uVar2 = puVar10[6];
          uVar3 = puVar10[7];
          puVar7[4] = uVar1;
          puVar7[5] = uVar4;
          uVar1 = puVar10[8];
          uVar4 = puVar10[9];
          puVar7[6] = uVar2;
          puVar7[7] = uVar3;
          uVar2 = puVar10[10];
          uVar3 = puVar10[0xb];
          puVar7[8] = uVar1;
          puVar7[9] = uVar4;
          uVar1 = puVar10[0xc];
          uVar4 = puVar10[0xd];
          puVar7[10] = uVar2;
          puVar7[0xb] = uVar3;
          uVar2 = puVar10[0xe];
          uVar3 = puVar10[0xf];
          puVar7[0xc] = uVar1;
          puVar7[0xd] = uVar4;
          puVar7[0xe] = uVar2;
          puVar7[0xf] = uVar3;
          lVar11 = lVar11 + -1;
          puVar8 = puVar7 + 0x10;
          puVar9 = puVar10 + 0x10;
        } while (lVar11 != 0);
        uVar1 = *(undefined8 *)((longlong)puVar10 + 0x84);
        *(undefined8 *)((longlong)puVar7 + 0x7c) = *(undefined8 *)((longlong)puVar10 + 0x7c);
        *(undefined8 *)((longlong)puVar7 + 0x84) = uVar1;
        puVar8 = local_448;
      }
      do {
        piVar13 = param_1;
        puVar9 = puVar8;
        uVar1 = puVar9[1];
        *(undefined8 *)piVar13 = *puVar9;
        *(undefined8 *)(piVar13 + 2) = uVar1;
        uVar1 = puVar9[3];
        *(undefined8 *)(piVar13 + 4) = puVar9[2];
        *(undefined8 *)(piVar13 + 6) = uVar1;
        uVar1 = puVar9[5];
        *(undefined8 *)(piVar13 + 8) = puVar9[4];
        *(undefined8 *)(piVar13 + 10) = uVar1;
        uVar1 = puVar9[7];
        *(undefined8 *)(piVar13 + 0xc) = puVar9[6];
        *(undefined8 *)(piVar13 + 0xe) = uVar1;
        uVar1 = puVar9[9];
        *(undefined8 *)(piVar13 + 0x10) = puVar9[8];
        *(undefined8 *)(piVar13 + 0x12) = uVar1;
        uVar1 = puVar9[0xb];
        *(undefined8 *)(piVar13 + 0x14) = puVar9[10];
        *(undefined8 *)(piVar13 + 0x16) = uVar1;
        uVar1 = puVar9[0xd];
        *(undefined8 *)(piVar13 + 0x18) = puVar9[0xc];
        *(undefined8 *)(piVar13 + 0x1a) = uVar1;
        uVar1 = puVar9[0xf];
        *(undefined8 *)(piVar13 + 0x1c) = puVar9[0xe];
        *(undefined8 *)(piVar13 + 0x1e) = uVar1;
        lVar12 = lVar12 + -1;
        puVar8 = puVar9 + 0x10;
        param_1 = piVar13 + 0x20;
      } while (lVar12 != 0);
      uVar1 = *(undefined8 *)((longlong)puVar9 + 0x84);
      *(undefined8 *)(piVar13 + 0x1f) = *(undefined8 *)((longlong)puVar9 + 0x7c);
      *(undefined8 *)(piVar13 + 0x21) = uVar1;
    }
    FUN_1400149d4(&local_4f8);
  }
  FUN_140024020(local_518);
  return cVar5;
}


/*
 * FUN_140014848 at 140014848
 * undefined1 __fastcall FUN_140014848(uint * param_1, LPCWSTR param_2, char * param_3)
 * Address ranges: 140014848-140014901
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_140014848(uint *param_1,LPCWSTR param_2,char *param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong local_2028 [4];
  CHAR local_2008 [8184];
  undefined8 uStack_10;
  
  uStack_10 = 0x14001485d;
  WideCharToMultiByte(0,0x200,param_2,-1,local_2008,0x1ffe,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_140023fa0(local_2028,param_2,'\x01');
  puVar3 = (undefined8 *)0x0;
  uVar2 = 0;
  FUN_140024160((longlong)local_2028,0,0,(DWORD *)0x0);
  if (param_3 == (char *)0x0) {
    uVar1 = FUN_14001dbfc((undefined8 *)param_1,local_2028,uVar2);
  }
  else {
    uVar1 = FUN_14001b81c(param_1,local_2028,param_3,puVar3);
  }
  FUN_140024020(local_2028);
  return uVar1;
}


/*
 * FUN_140014904 at 140014904
 * undefined8 * __fastcall FUN_140014904(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140014904-14001492e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140014904(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140029260;
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_140014930 at 140014930
 * undefined8 * __fastcall FUN_140014930(undefined8 * param_1)
 * Address ranges: 140014930-14001499c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140014930(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1400291c0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}


/*
 * FUN_1400149a0 at 1400149a0
 * undefined8 * __fastcall FUN_1400149a0(undefined8 * param_1, uint param_2)
 * Address ranges: 1400149a0-1400149d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_1400149a0(undefined8 *param_1,uint param_2)

{
  FUN_1400149d4(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_1400149d4 at 1400149d4
 * undefined __fastcall FUN_1400149d4(undefined8 * param_1)
 * Address ranges: 1400149d4-140014a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400149d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1400291c0;
  FUN_140024260((LPVOID)param_1[0xe]);
  param_1[0xe] = 0;
  FUN_140016034(param_1 + 0x12);
  *param_1 = &PTR_FUN_140029260;
  return;
}


/*
 * FUN_140014a14 at 140014a14
 * byte __fastcall FUN_140014a14(longlong param_1, undefined8 * param_2, undefined4 param_3)
 * Address ranges: 140014a14-140014bc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte FUN_140014a14(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  undefined4 local_58 [2];
  longlong local_50;
  undefined8 local_48;
  
  plVar1 = (longlong *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    lVar9 = *(longlong *)(lVar6 + -8);
    lVar2 = lVar6 + lVar9 * 0x18;
    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
      FUN_14001609c((longlong *)(lVar2 + -0x10));
      lVar2 = lVar2 + -0x18;
    }
    FUN_140024260((longlong *)(lVar6 + -8));
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_50 = 0;
  bVar3 = 0;
  bVar8 = 0;
  local_48 = 0;
  local_58[0] = 0xffffffff;
  uVar5 = FUN_140015f04(plVar1,local_58);
  if ((char)uVar5 != '\0') {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 **)(param_1 + 0x38) = param_2;
    iVar4 = (**(code **)*param_2)(param_2,0,0,0);
    if (iVar4 == 0) {
      lVar6 = thunk_FUN_14002423c(0x1000);
      *(longlong *)(param_1 + 0x30) = lVar6;
      if (lVar6 != 0) {
        lVar6 = thunk_FUN_14002423c(0x2000);
        *(longlong *)(param_1 + 0x58) = lVar6;
        bVar8 = bVar3;
        if (lVar6 != 0) {
          lVar6 = thunk_FUN_14002423c(0x80);
          *(longlong *)(param_1 + 0x70) = lVar6;
          if (lVar6 != 0) {
            *(undefined8 *)(param_1 + 0x78) = 0x80;
            *(undefined4 *)(param_1 + 0x54) = 1;
            *(undefined1 *)(param_1 + 0x50) = 0;
            uVar7 = FUN_140014bcc(param_1);
            if ((char)uVar7 != '\0') {
              bVar3 = 1;
              do {
                if (*(char *)(param_1 + 0x50) != '\0') break;
                bVar3 = FUN_14001561c(param_1);
              } while (bVar3 != 0);
            }
          }
          FUN_140024260(*(LPVOID *)(param_1 + 0x58));
          *(undefined8 *)(param_1 + 0x58) = 0;
          bVar8 = bVar3;
        }
        FUN_140024260(*(LPVOID *)(param_1 + 0x30));
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
  }
  if (local_50 != 0) {
    plVar1 = (longlong *)(local_50 + -8);
    lVar6 = *plVar1;
    lVar9 = local_50 + lVar6 * 0x28;
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      FUN_140024260(*(LPVOID *)(lVar9 + -0x10));
      FUN_140024260(*(LPVOID *)(lVar9 + -0x20));
      lVar9 = lVar9 + -0x28;
    }
    FUN_140024260(plVar1);
  }
  return bVar8;
}


/*
 * FUN_140014bcc at 140014bcc
 * ulonglong __fastcall FUN_140014bcc(longlong param_1)
 * Address ranges: 140014bcc-140014c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140014bcc(longlong param_1)

{
  ulonglong uVar1;
  uint local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
                    (*(longlong **)(param_1 + 0x38),0x1000,*(undefined8 *)(param_1 + 0x30),
                     local_res8);
  if ((int)uVar1 == 0) {
    *(bool *)(param_1 + 0x50) = local_res8[0] == 0;
    *(ulonglong *)(param_1 + 0x48) = (ulonglong)local_res8[0] + *(longlong *)(param_1 + 0x30);
    uVar1 = -(ulonglong)(local_res8[0] != 0) & *(ulonglong *)(param_1 + 0x30);
    *(ulonglong *)(param_1 + 0x40) = uVar1;
    uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}


/*
 * FUN_140014c28 at 140014c28
 * undefined8 __fastcall FUN_140014c28(longlong param_1)
 * Address ranges: 140014c28-140014c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140014c28(longlong param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 0x40);
  do {
    if (pcVar3 == (char *)0x0) {
      uVar1 = *(undefined1 *)(param_1 + 0x50);
LAB_140014c6e:
      return CONCAT71((int7)((ulonglong)pcVar3 >> 8),uVar1);
    }
    if ((*pcVar3 != ' ') && (*pcVar3 != '\t')) {
      uVar1 = 1;
      goto LAB_140014c6e;
    }
    *(char **)(param_1 + 0x40) = pcVar3 + 1;
    if (pcVar3 + 1 == *(char **)(param_1 + 0x48)) {
      uVar2 = FUN_140014bcc(param_1);
      if ((char)uVar2 == '\0') {
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
    }
    pcVar3 = *(char **)(param_1 + 0x40);
  } while( true );
}


/*
 * FUN_140014c78 at 140014c78
 * char __fastcall FUN_140014c78(longlong param_1)
 * Address ranges: 140014c78-140015293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char FUN_140014c78(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte bVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  char cVar16;
  
  pbVar10 = (byte *)0x0;
  uVar14 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  bVar11 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar5 = FUN_140014c28(param_1);
  if ((char)uVar5 == '\0') {
    return '\0';
  }
  cVar16 = *(char *)(param_1 + 0x50);
  if (cVar16 != '\0') goto LAB_140015224;
  cVar16 = **(char **)(param_1 + 0x40);
  if ((cVar16 != '\r') && (cVar16 != '\n')) {
    pcVar6 = *(char **)(param_1 + 0x40) + 1;
    *(char **)(param_1 + 0x40) = pcVar6;
    if ((pcVar6 == *(char **)(param_1 + 0x48)) &&
       (uVar7 = FUN_140014bcc(param_1), (char)uVar7 == '\0')) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    pbVar12 = *(byte **)(param_1 + 0x40);
    bVar3 = 0;
    if (cVar16 == '\"') {
      *(undefined4 *)(param_1 + 0x68) = 1;
      if (pbVar12 != (byte *)0x0) {
        bVar1 = false;
        bVar3 = 0;
        do {
          uVar14 = (uint)pbVar10;
          if (((0xfff < uVar14) || (bVar3 == 0x22)) || (bVar1)) break;
          bVar3 = *pbVar12;
          *(byte *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = bVar3;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          if ((bVar3 == 0xd) || (bVar3 == 10)) {
            bVar1 = true;
          }
          else if (((*(longlong *)(param_1 + 0x40) != 0) &&
                   (lVar8 = *(longlong *)(param_1 + 0x40) + 1, *(longlong *)(param_1 + 0x40) = lVar8
                   , lVar8 == *(longlong *)(param_1 + 0x48))) &&
                  (uVar7 = FUN_140014bcc(param_1), (char)uVar7 == '\0')) {
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          pbVar12 = *(byte **)(param_1 + 0x40);
          uVar14 = uVar14 + 1;
          pbVar10 = (byte *)(ulonglong)uVar14;
        } while (pbVar12 != (byte *)0x0);
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      if (0xffe < uVar14 - 1) {
        return '\0';
      }
      if (bVar3 != 0x22) {
        return '\0';
      }
      cVar16 = *(char *)(param_1 + 0x50);
      if (cVar16 != '\0') goto LAB_140015224;
      if (pbVar12 == (byte *)0x0) {
        return '\0';
      }
      if (0x3b < *pbVar12) {
        return '\0';
      }
      if ((0x800000100002600U >> ((longlong)(char)*pbVar12 & 0x3fU) & 1) == 0) {
        return '\0';
      }
    }
    else if (cVar16 == ',') {
      *(undefined4 *)(param_1 + 0x68) = 4;
    }
    else {
      if (cVar16 == ':') {
        cVar16 = *(char *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x68) = 6;
        if (cVar16 != '\0') goto LAB_140015224;
        uVar7 = 0;
        bVar11 = bVar3;
        bVar13 = bVar3;
        while (pbVar12 != (byte *)0x0) {
          bVar11 = (byte)uVar7;
          if ((0xffe < (uint)pbVar10) || (bVar13 != 0)) break;
          bVar11 = *pbVar12;
          uVar7 = (ulonglong)(char)bVar11;
          *(byte *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = bVar11;
          if ((0x31 < (byte)((int)(char)bVar11 - 0x2cU)) ||
             (bVar13 = 1,
             (0x280000002c001U >> ((ulonglong)((int)(char)bVar11 - 0x2cU) & 0x3f) & 1) == 0)) {
            bVar13 = bVar3;
          }
          if ((0x20 < bVar11) || (bVar2 = 1, (0x100002600U >> (uVar7 & 0x3f) & 1) == 0)) {
            bVar2 = 0;
          }
          bVar13 = bVar13 | bVar2;
          if (bVar13 == 0) {
            if (((*(longlong *)(param_1 + 0x40) != 0) &&
                (lVar8 = *(longlong *)(param_1 + 0x40) + 1, *(longlong *)(param_1 + 0x40) = lVar8,
                lVar8 == *(longlong *)(param_1 + 0x48))) &&
               (uVar9 = FUN_140014bcc(param_1), (char)uVar9 == '\0')) {
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          }
          pbVar10 = (byte *)(ulonglong)((uint)pbVar10 + 1);
          pbVar12 = *(byte **)(param_1 + 0x40);
        }
        bVar11 = -(bVar13 != 0) & bVar11;
        if (bVar11 != 0) {
          bVar11 = bVar11 - 0x3a;
          if ((bVar11 < 0x24) && ((0xa00000009U >> ((ulonglong)bVar11 & 0x3f) & 1) != 0)) {
            return '\0';
          }
          goto LAB_140015221;
        }
LAB_140015131:
        cVar16 = *(char *)(param_1 + 0x50);
LAB_140015135:
        if (cVar16 == '\0') {
          return '\0';
        }
        goto LAB_140015224;
      }
      if (cVar16 == ';') {
        *(undefined4 *)(param_1 + 0x68) = 3;
        if (pbVar12 != (byte *)0x0) {
          bVar1 = false;
          do {
            if (bVar1) goto LAB_140015221;
            if ((*pbVar12 == 0xd) || (*pbVar12 == 10)) {
              bVar11 = 1;
              bVar1 = true;
            }
            else {
              *(byte **)(param_1 + 0x40) = pbVar12 + 1;
              bVar11 = bVar3;
              if (pbVar12 + 1 == *(byte **)(param_1 + 0x48)) {
                uVar7 = FUN_140014bcc(param_1);
                bVar1 = false;
                if ((char)uVar7 == '\0') {
                  *(undefined8 *)(param_1 + 0x40) = 0;
                }
              }
              else {
                bVar1 = false;
              }
            }
            pbVar12 = *(byte **)(param_1 + 0x40);
          } while (pbVar12 != (byte *)0x0);
          if (bVar11 != 0) goto LAB_140015221;
        }
        if (*(char *)(param_1 + 0x50) == '\0') {
          return '\0';
        }
      }
      else if (cVar16 == '=') {
        *(undefined4 *)(param_1 + 0x68) = 5;
      }
      else if (cVar16 == '[') {
        *(undefined4 *)(param_1 + 0x68) = 2;
        while (pbVar12 != (byte *)0x0) {
          if ((*pbVar12 != 0x20) && (*pbVar12 != 9)) goto LAB_140014e48;
          *(byte **)(param_1 + 0x40) = pbVar12 + 1;
          if ((pbVar12 + 1 == *(byte **)(param_1 + 0x48)) &&
             (uVar7 = FUN_140014bcc(param_1), (char)uVar7 == '\0')) {
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          pbVar12 = *(byte **)(param_1 + 0x40);
        }
        if (*(char *)(param_1 + 0x50) == '\0') {
          return '\0';
        }
LAB_140014e48:
        if (*(char *)(param_1 + 0x50) != '\0') {
          return '\0';
        }
        if (pbVar12 == (byte *)0x0) {
LAB_140014f79:
          if (bVar11 != 0x5d) {
            return '\0';
          }
          cVar16 = true;
        }
        else {
          uVar7 = 0;
          bVar1 = false;
          pbVar15 = pbVar10;
          do {
            pbVar10 = pbVar12;
            bVar11 = (byte)uVar7;
            if ((0xffe < (uint)pbVar15) || (bVar1)) break;
            bVar11 = *pbVar10;
            uVar7 = (ulonglong)(char)bVar11;
            *(byte *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = bVar11
            ;
            if (((byte)((int)(char)bVar11 - 0x2cU) < 0x32) &&
               ((0x280000002c001U >> ((ulonglong)((int)(char)bVar11 - 0x2cU) & 0x3f) & 1) != 0)) {
              bVar3 = 1;
            }
            else {
              bVar3 = 0;
            }
            if ((bVar11 < 0x21) && ((0x100002600U >> (uVar7 & 0x3f) & 1) != 0)) {
              bVar13 = 1;
            }
            else {
              bVar13 = 0;
            }
            bVar1 = (bool)(bVar3 | bVar13);
            if (!bVar1) {
              if (((*(longlong *)(param_1 + 0x40) != 0) &&
                  (lVar8 = *(longlong *)(param_1 + 0x40) + 1, *(longlong *)(param_1 + 0x40) = lVar8,
                  lVar8 == *(longlong *)(param_1 + 0x48))) &&
                 (uVar9 = FUN_140014bcc(param_1), (char)uVar9 == '\0')) {
                *(undefined8 *)(param_1 + 0x40) = 0;
              }
              *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
            }
            pbVar10 = *(byte **)(param_1 + 0x40);
            pbVar15 = (byte *)(ulonglong)((uint)pbVar15 + 1);
            pbVar12 = pbVar10;
          } while (pbVar10 != (byte *)0x0);
          bVar11 = -bVar1 & bVar11;
          if ((bVar11 != 0x20) && (bVar11 != 9)) goto LAB_140014f79;
          pbVar12 = pbVar10;
          pbVar10 = (byte *)0x0;
          while (pbVar12 != (byte *)0x0) {
            if ((*pbVar12 != 0x20) && (pbVar10 = pbVar12, *pbVar12 != 9)) goto LAB_140014f55;
            *(byte **)(param_1 + 0x40) = pbVar12 + 1;
            if ((pbVar12 + 1 == *(byte **)(param_1 + 0x48)) &&
               (uVar7 = FUN_140014bcc(param_1), (char)uVar7 == '\0')) {
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            pbVar12 = *(byte **)(param_1 + 0x40);
            pbVar10 = pbVar12;
          }
          if (*(char *)(param_1 + 0x50) == '\0') {
            return '\0';
          }
LAB_140014f55:
          if (*(char *)(param_1 + 0x50) != '\0') {
            return '\0';
          }
          cVar16 = *pbVar10 == 0x5d;
          if (!(bool)cVar16) {
            return (bool)cVar16;
          }
        }
        if (((pbVar10 != (byte *)0x0) &&
            (*(byte **)(param_1 + 0x40) = pbVar10 + 1, pbVar10 + 1 == *(byte **)(param_1 + 0x48)))
           && (uVar7 = FUN_140014bcc(param_1), (char)uVar7 == '\0')) {
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        if (*(char *)(param_1 + 0x50) != '\0') goto LAB_140015135;
        bVar11 = **(byte **)(param_1 + 0x40);
        if (((0x20 < bVar11) || ((0x100002600U >> ((longlong)(char)bVar11 & 0x3fU) & 1) == 0)) &&
           (bVar11 != 0x5b)) {
          return '\0';
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(char *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = cVar16;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        cVar16 = *(char *)(param_1 + 0x50);
        if (cVar16 != '\0') goto LAB_140015224;
        uVar7 = 0;
        pbVar12 = *(byte **)(param_1 + 0x40);
        bVar3 = bVar11;
        bVar13 = bVar11;
        while (pbVar12 != (byte *)0x0) {
          bVar3 = (byte)uVar7;
          if ((0xffe < (uint)pbVar10) || (bVar13 != 0)) break;
          bVar3 = *pbVar12;
          uVar7 = (ulonglong)(char)bVar3;
          *(byte *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = bVar3;
          if ((0x31 < (byte)((int)(char)bVar3 - 0x2cU)) ||
             (bVar13 = 1,
             (0x280000002c001U >> ((ulonglong)((int)(char)bVar3 - 0x2cU) & 0x3f) & 1) == 0)) {
            bVar13 = bVar11;
          }
          if ((0x20 < bVar3) || (bVar2 = 1, (0x100002600U >> (uVar7 & 0x3f) & 1) == 0)) {
            bVar2 = 0;
          }
          bVar13 = bVar13 | bVar2;
          if (bVar13 == 0) {
            if (((*(longlong *)(param_1 + 0x40) != 0) &&
                (lVar8 = *(longlong *)(param_1 + 0x40) + 1, *(longlong *)(param_1 + 0x40) = lVar8,
                lVar8 == *(longlong *)(param_1 + 0x48))) &&
               (uVar9 = FUN_140014bcc(param_1), (char)uVar9 == '\0')) {
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          }
          pbVar10 = (byte *)(ulonglong)((uint)pbVar10 + 1);
          pbVar12 = *(byte **)(param_1 + 0x40);
        }
        bVar3 = -(bVar13 != 0) & bVar3;
        if (bVar3 == 0) goto LAB_140015131;
        if ((bVar3 + 0xa5 & 0xfd) == 0) {
          return '\0';
        }
      }
    }
  }
LAB_140015221:
  cVar16 = '\x01';
LAB_140015224:
  if (*(int *)(param_1 + 0xa0) == 1) {
    uVar7 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        iVar4 = FUN_140024604((int)*(char *)(uVar7 + *(longlong *)(param_1 + 0x58)));
        uVar14 = (int)uVar7 + 1;
        *(char *)(uVar7 + *(longlong *)(param_1 + 0x58)) = (char)iVar4;
        uVar7 = (ulonglong)uVar14;
      } while (uVar14 < *(uint *)(param_1 + 0x60));
    }
  }
  else if ((*(int *)(param_1 + 0xa0) == 2) && (uVar7 = 0, *(int *)(param_1 + 0x60) != 0)) {
    do {
      iVar4 = FUN_140025130((int)*(char *)(uVar7 + *(longlong *)(param_1 + 0x58)));
      uVar14 = (int)uVar7 + 1;
      *(char *)(uVar7 + *(longlong *)(param_1 + 0x58)) = (char)iVar4;
      uVar7 = (ulonglong)uVar14;
    } while (uVar14 < *(uint *)(param_1 + 0x60));
  }
  return cVar16;
}


/*
 * FUN_140015294 at 140015294
 * undefined8 __fastcall FUN_140015294(longlong param_1)
 * Address ranges: 140015294-14001561a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140015294(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined7 extraout_var_03;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 local_res10;
  char *pcVar10;
  
  cVar5 = FUN_1400158e8(param_1);
  pcVar10 = (char *)CONCAT71(extraout_var,cVar5);
  bVar14 = 0;
  if (cVar5 != '\0') {
    bVar6 = FUN_140014c78(param_1);
    iVar8 = *(int *)(param_1 + 0x68);
    pcVar10 = (char *)0x0;
    bVar14 = 0;
    if (iVar8 == 5) {
      bVar14 = bVar6;
    }
    if (bVar14 != 0) {
      pcVar10 = (char *)0x0;
      local_res10 = 0;
      do {
        bVar6 = (byte)pcVar10 | *(byte *)(param_1 + 0x50);
        pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),bVar6);
        if (bVar6 != 0) break;
        if (iVar8 == 0) {
          bVar6 = FUN_140014c78(param_1);
          pcVar10 = (char *)CONCAT71(extraout_var_02,bVar6);
          uVar7 = *(uint *)(param_1 + 0x68);
          if ((6 < uVar7) || (pcVar10 = (char *)0x0, (0x5bU >> (uVar7 & 0x1f) & 1) == 0))
          goto LAB_14001532c;
          bVar14 = bVar6;
          if (bVar6 == 0) goto LAB_14001532f;
          if (uVar7 == 0) {
            bVar14 = FUN_140015b4c(param_1,0x1000,*(uint *)(param_1 + 100));
            bVar6 = bVar14 & bVar6;
            goto LAB_14001541a;
          }
          if (uVar7 == 1) {
            bVar14 = FUN_140015b4c(param_1,0x1000,*(uint *)(param_1 + 100));
            bVar6 = bVar6 & bVar14;
            goto LAB_140015450;
          }
          if (uVar7 == 6) {
            uVar7 = *(uint *)(param_1 + 100);
            iVar8 = FUN_140015c08(param_1,(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1000),
                                  uVar7);
            bVar18 = iVar8 != -1;
            if (bVar18) {
              uVar13 = (ulonglong)*(uint *)(param_1 + 0x84);
              uVar17 = 0;
              lVar2 = *(longlong *)
                       (*(longlong *)(param_1 + 0x90) + 8 +
                       (ulonglong)*(uint *)(param_1 + 0x80) * 0x18);
              iVar9 = *(int *)(lVar2 + 0x20 + uVar13 * 0x28);
              bVar19 = iVar9 == 0;
              if (iVar9 != 0) {
                do {
                  iVar9 = FUN_140024ce8((byte *)((ulonglong)
                                                 *(uint *)(*(longlong *)
                                                            (lVar2 + 0x18 + uVar13 * 0x28) +
                                                          uVar17 * 8) +
                                                *(longlong *)(param_1 + 0x70)),
                                        (byte *)((longlong)iVar8 + *(longlong *)(param_1 + 0x70)));
                  if (iVar9 == 0) {
                    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (-1 - uVar7);
                    break;
                  }
                  uVar16 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar16;
                } while (uVar16 < *(uint *)(lVar2 + 0x20 + uVar13 * 0x28));
                bVar19 = (int)uVar17 == *(int *)(lVar2 + 0x20 + uVar13 * 0x28);
              }
              if (bVar19) {
                iVar9 = *(int *)(lVar2 + 0x24 + uVar13 * 0x28);
                if (*(int *)(lVar2 + 0x20 + uVar13 * 0x28) == iVar9) {
                  uVar15 = 0x10;
                  if (iVar9 != 0) {
                    uVar15 = (ulonglong)(uint)(iVar9 * 2);
                  }
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar15;
                  uVar11 = SUB168(ZEXT816(8) * auVar4,0);
                  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
                    uVar11 = 0xffffffffffffffff;
                  }
                  puVar12 = (undefined8 *)thunk_FUN_14002423c(uVar11);
                  if (puVar12 == (undefined8 *)0x0) {
                    bVar18 = false;
                    goto LAB_14001557f;
                  }
                  FUN_140024620(puVar12,*(undefined8 **)(lVar2 + 0x18 + uVar13 * 0x28),
                                (ulonglong)*(uint *)(lVar2 + 0x24 + uVar13 * 0x28) << 3);
                  FUN_140024260(*(LPVOID *)(lVar2 + 0x18 + uVar13 * 0x28));
                  *(undefined8 **)(lVar2 + 0x18 + uVar13 * 0x28) = puVar12;
                  *(int *)(lVar2 + 0x24 + uVar13 * 0x28) = (int)uVar15;
                }
                uVar15 = (ulonglong)*(uint *)(lVar2 + 0x20 + uVar13 * 0x28);
                bVar18 = true;
                lVar3 = *(longlong *)(lVar2 + 0x18 + uVar13 * 0x28);
                *(int *)(lVar3 + uVar15 * 8) = iVar8;
                *(undefined4 *)(lVar3 + 4 + uVar15 * 8) = 0xffffffff;
                piVar1 = (int *)(lVar2 + 0x20 + uVar13 * 0x28);
                *piVar1 = *piVar1 + 1;
              }
LAB_14001557f:
              *(int *)(param_1 + 0x88) = (int)uVar17;
            }
            iVar8 = FUN_140015c08(param_1,*(undefined8 **)(param_1 + 0x58),*(uint *)(param_1 + 0x60)
                                 );
            if (iVar8 != -1) {
              *(int *)(*(longlong *)
                        (*(longlong *)
                          (*(longlong *)(param_1 + 0x90) + 8 +
                          (ulonglong)*(uint *)(param_1 + 0x80) * 0x18) + 0x18 +
                        (ulonglong)*(uint *)(param_1 + 0x84) * 0x28) + 4 +
                      (ulonglong)*(uint *)(param_1 + 0x88) * 8) = iVar8;
            }
            pcVar10 = (char *)0x0;
            bVar14 = 0;
            if (iVar8 != -1) {
              bVar14 = bVar18 & bVar6;
            }
            goto LAB_14001532f;
          }
          if ((uVar7 != 3) && (uVar7 != 4)) goto LAB_14001532f;
          uVar7 = *(uint *)(param_1 + 100);
          uVar16 = 0x1000;
LAB_140015600:
          bVar14 = FUN_140015b4c(param_1,uVar16,uVar7);
          pcVar10 = (char *)CONCAT71(extraout_var_03,bVar14);
          bVar14 = bVar6 & bVar14;
        }
        else if (iVar8 == 1) {
LAB_140015310:
          bVar6 = FUN_140014c78(param_1);
          uVar7 = *(uint *)(param_1 + 0x68);
          pcVar10 = (char *)(ulonglong)uVar7;
          if (((uVar7 == 2) || ((int)uVar7 < 0)) || (4 < (int)uVar7)) {
LAB_14001532c:
            bVar14 = 0;
          }
          else {
LAB_1400153a7:
            uVar7 = (uint)pcVar10;
            if (uVar7 != 0) goto LAB_1400153cb;
LAB_14001541a:
            FUN_140024620(*(undefined8 **)(param_1 + 0x58) + 0x200,*(undefined8 **)(param_1 + 0x58),
                          (ulonglong)*(uint *)(param_1 + 0x60));
            pcVar10 = (char *)(ulonglong)*(uint *)(param_1 + 0x60);
            *(uint *)(param_1 + 100) = *(uint *)(param_1 + 0x60);
            bVar14 = bVar6;
          }
        }
        else {
          if (iVar8 != 4) {
            if (iVar8 != 5) {
              if (iVar8 != 6) goto LAB_14001532f;
              goto LAB_140015310;
            }
            bVar6 = FUN_140014c78(param_1);
            uVar7 = *(uint *)(param_1 + 0x68);
            pcVar10 = (char *)(ulonglong)uVar7;
            if (((uVar7 & 0xfffffffc) != 0) || (uVar7 == 2)) goto LAB_14001532c;
            goto LAB_1400153a7;
          }
          bVar6 = FUN_140014c78(param_1);
          pcVar10 = (char *)CONCAT71(extraout_var_01,bVar6);
          uVar7 = *(uint *)(param_1 + 0x68);
          if (1 < uVar7) goto LAB_14001532c;
          if (uVar7 == 0) goto LAB_14001541a;
LAB_1400153cb:
          bVar14 = bVar6;
          if (uVar7 == 1) {
LAB_140015450:
            uVar7 = *(uint *)(param_1 + 0x60);
            uVar16 = 0;
            goto LAB_140015600;
          }
        }
LAB_14001532f:
        iVar8 = *(int *)(param_1 + 0x68);
        if ((*(char *)(param_1 + 0x50) == '\0') &&
           ((pcVar10 = *(char **)(param_1 + 0x40), *pcVar10 == '\r' ||
            (local_res10 = 0, *pcVar10 == '\n')))) {
          local_res10 = 1;
        }
        pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar10 >> 8),local_res10);
      } while (bVar14 != 0);
      if ((iVar8 == 0) && (*(uint *)(param_1 + 100) != 0)) {
        bVar6 = FUN_140015b4c(param_1,0x1000,*(uint *)(param_1 + 100));
        pcVar10 = (char *)CONCAT71(extraout_var_00,bVar6);
        bVar14 = bVar14 & bVar6;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)pcVar10 >> 8),bVar14);
}


/*
 * FUN_14001561c at 14001561c
 * byte __fastcall FUN_14001561c(longlong param_1)
 * Address ranges: 14001561c-1400157c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte FUN_14001561c(longlong param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char cVar9;
  
  pcVar6 = *(char **)(param_1 + 0x40);
  if (pcVar6 != (char *)0x0) {
    cVar9 = '\0';
    do {
      if ((*pcVar6 != '\r') && (*pcVar6 != '\n')) {
        bVar4 = 1;
        goto LAB_14001568d;
      }
      if ((cVar9 == '\r') && (*pcVar6 == '\n')) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
      }
      cVar9 = *pcVar6;
      *(char **)(param_1 + 0x40) = pcVar6 + 1;
      if ((pcVar6 + 1 == *(char **)(param_1 + 0x48)) &&
         (uVar7 = FUN_140014bcc(param_1), (char)uVar7 == '\0')) {
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      pcVar6 = *(char **)(param_1 + 0x40);
    } while (pcVar6 != (char *)0x0);
  }
  bVar4 = *(byte *)(param_1 + 0x50);
  if (bVar4 != 0) {
LAB_14001568d:
    bVar2 = false;
    do {
      if (bVar2 || *(char *)(param_1 + 0x50) != '\0') {
        return bVar4;
      }
      bVar4 = FUN_140014c78(param_1);
      if (bVar4 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x68) == 0) {
        if (*(int *)(param_1 + 0x60) != 0) {
          FUN_140024620(*(undefined8 **)(param_1 + 0x58) + 0x200,*(undefined8 **)(param_1 + 0x58),
                        (ulonglong)*(uint *)(param_1 + 0x60));
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
          uVar8 = FUN_140015294(param_1);
          bVar4 = (byte)uVar8;
        }
      }
      else if (*(int *)(param_1 + 0x68) == 2) {
        bVar5 = FUN_1400157c4(param_1);
        bVar4 = bVar4 & bVar5;
        if ((**(char **)(param_1 + 0x40) == '\r') || (**(char **)(param_1 + 0x40) == '\n')) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar4 != 0) {
          do {
            if ((bVar3 || *(char *)(param_1 + 0x50) != '\0') ||
               (bVar4 = FUN_140014c78(param_1), bVar4 == 0)) break;
            iVar1 = *(int *)(param_1 + 0x68);
            if (iVar1 == 2) {
              bVar5 = FUN_1400157c4(param_1);
              bVar4 = bVar4 & bVar5;
LAB_14001573f:
              if (bVar4 == 0) break;
            }
            else if (iVar1 != 3) {
              if (iVar1 != 0) {
                bVar4 = 0;
                break;
              }
              if (*(int *)(param_1 + 0x60) != 0) {
                uVar8 = FUN_140015294(param_1);
                bVar4 = (byte)uVar8;
                goto LAB_14001573f;
              }
            }
            if (*(char *)(param_1 + 0x50) == '\0') {
              if ((**(char **)(param_1 + 0x40) == '\r') || (**(char **)(param_1 + 0x40) == '\n')) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
            }
          } while( true );
        }
      }
      if (*(char *)(param_1 + 0x50) == '\0') {
        if ((**(char **)(param_1 + 0x40) == '\r') || (**(char **)(param_1 + 0x40) == '\n')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
      }
    } while (bVar4 != 0);
  }
  return 0;
}


/*
 * FUN_1400157c4 at 1400157c4
 * undefined1 __fastcall FUN_1400157c4(longlong param_1)
 * Address ranges: 1400157c4-1400158e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_1400157c4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  bool bVar9;
  int local_58 [2];
  longlong local_50;
  undefined8 local_48;
  
  uVar5 = 0;
  uVar8 = 1;
  if (*(uint *)(param_1 + 0x60) != 0) {
    local_58[0] = FUN_140015c08(param_1,*(undefined8 **)(param_1 + 0x58),*(uint *)(param_1 + 0x60));
    uVar8 = local_58[0] != -1;
    if ((bool)uVar8) {
      uVar6 = 1;
      uVar5 = 1;
      bVar9 = *(uint *)(param_1 + 0x98) == 1;
      if (1 < *(uint *)(param_1 + 0x98)) {
        do {
          uVar5 = (uint)uVar6;
          iVar3 = FUN_140024ce8((byte *)((ulonglong)
                                         *(uint *)(*(longlong *)(param_1 + 0x90) + uVar6 * 0x18) +
                                        *(longlong *)(param_1 + 0x70)),
                                (byte *)((longlong)local_58[0] + *(longlong *)(param_1 + 0x70)));
          if (iVar3 == 0) {
            *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (-1 - *(int *)(param_1 + 0x60));
            break;
          }
          uVar5 = uVar5 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x98));
        bVar9 = uVar5 == *(uint *)(param_1 + 0x98);
      }
      if (bVar9) {
        local_50 = 0;
        local_48 = 0;
        uVar4 = FUN_140015f04((longlong *)(param_1 + 0x90),local_58);
        uVar8 = (undefined1)uVar4;
        if (local_50 != 0) {
          plVar1 = (longlong *)(local_50 + -8);
          lVar7 = *plVar1;
          lVar2 = local_50 + lVar7 * 0x28;
          for (; lVar7 != 0; lVar7 = lVar7 + -1) {
            FUN_140024260(*(LPVOID *)(lVar2 + -0x10));
            FUN_140024260(*(LPVOID *)(lVar2 + -0x20));
            lVar2 = lVar2 + -0x28;
          }
          FUN_140024260(plVar1);
        }
      }
    }
  }
  *(uint *)(param_1 + 0x80) = uVar5;
  return uVar8;
}


/*
 * FUN_1400158e8 at 1400158e8
 * undefined1 __fastcall FUN_1400158e8(longlong param_1)
 * Address ranges: 1400158e8-140015b49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_1400158e8(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  undefined1 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  
  iVar4 = FUN_140015c08(param_1,*(undefined8 **)(param_1 + 0x58),*(uint *)(param_1 + 0x60));
  if (iVar4 == -1) {
    return 0;
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x80);
  uVar15 = 0;
  lVar14 = *(longlong *)(param_1 + 0x90);
  uVar16 = 0;
  if (*(int *)(lVar14 + 0x10 + uVar6 * 0x18) != 0) {
    do {
      uVar16 = (uint)uVar15;
      iVar5 = FUN_140024ce8((byte *)((ulonglong)
                                     *(uint *)(*(longlong *)(lVar14 + 8 + uVar6 * 0x18) +
                                              uVar15 * 0x28) + *(longlong *)(param_1 + 0x70)),
                            (byte *)((longlong)iVar4 + *(longlong *)(param_1 + 0x70)));
      if (iVar5 == 0) {
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (-1 - *(int *)(param_1 + 0x60));
        break;
      }
      uVar16 = uVar16 + 1;
      uVar15 = (ulonglong)uVar16;
      lVar14 = *(longlong *)(param_1 + 0x90);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x80);
    } while (uVar16 < *(uint *)(lVar14 + 0x10 + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18));
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x80);
  lVar14 = *(longlong *)(param_1 + 0x90);
  uVar12 = 1;
  if (uVar16 != *(uint *)(lVar14 + 0x10 + uVar6 * 0x18)) goto LAB_140015b2b;
  iVar5 = *(int *)(lVar14 + 0x14 + uVar6 * 0x18);
  if (*(int *)(lVar14 + 0x10 + uVar6 * 0x18) == iVar5) {
    uVar15 = 0x10;
    if (iVar5 != 0) {
      uVar15 = (ulonglong)(uint)(iVar5 * 2);
    }
    iVar5 = (int)uVar15;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar15;
    uVar7 = SUB168(ZEXT816(0x28) * auVar2,0);
    if (SUB168(ZEXT816(0x28) * auVar2,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = uVar7 + 8;
    if (0xfffffffffffffff7 < uVar7) {
      lVar8 = -1;
    }
    puVar9 = (ulonglong *)thunk_FUN_14002423c(lVar8);
    if (puVar9 != (ulonglong *)0x0) {
      *puVar9 = uVar15;
      puVar9 = puVar9 + 1;
      puVar10 = puVar9;
      if (iVar5 != 0) {
        do {
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10 = puVar10 + 5;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (puVar9 != (ulonglong *)0x0) {
        uVar1 = *(uint *)(lVar14 + 0x14 + uVar6 * 0x18);
        uVar15 = 0;
        if (uVar1 != 0) {
          lVar8 = *(longlong *)(lVar14 + 8 + uVar6 * 0x18);
          do {
            FUN_14001623c((undefined4 *)(puVar9 + uVar15 * 5),(undefined4 *)(lVar8 + uVar15 * 0x28))
            ;
            uVar11 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar11;
          } while (uVar11 < uVar1);
        }
        lVar8 = *(longlong *)(lVar14 + 8 + uVar6 * 0x18);
        if (lVar8 != 0) {
          lVar13 = *(longlong *)(lVar8 + -8);
          lVar3 = lVar8 + lVar13 * 0x28;
          for (; lVar13 != 0; lVar13 = lVar13 + -1) {
            FUN_140024260(*(LPVOID *)(lVar3 + -0x10));
            FUN_140024260(*(LPVOID *)(lVar3 + -0x20));
            lVar3 = lVar3 + -0x28;
          }
          FUN_140024260((longlong *)(lVar8 + -8));
        }
        *(ulonglong **)(lVar14 + 8 + uVar6 * 0x18) = puVar9;
        *(int *)(lVar14 + 0x14 + uVar6 * 0x18) = iVar5;
        goto LAB_140015ad5;
      }
    }
    uVar12 = 0;
  }
  else {
LAB_140015ad5:
    uVar1 = *(uint *)(lVar14 + 0x10 + uVar6 * 0x18);
    uVar15 = (ulonglong)uVar1;
    lVar8 = *(longlong *)(lVar14 + 8 + uVar6 * 0x18);
    *(uint *)(lVar14 + 0x10 + uVar6 * 0x18) = uVar1 + 1;
    *(int *)(lVar8 + uVar15 * 0x28) = iVar4;
    FUN_140024260(*(LPVOID *)(lVar8 + 8 + uVar15 * 0x28));
    *(undefined8 *)(lVar8 + 8 + uVar15 * 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x28) = 0;
    FUN_140024260(*(LPVOID *)(lVar8 + 0x18 + uVar15 * 0x28));
    *(undefined8 *)(lVar8 + 0x18 + uVar15 * 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20 + uVar15 * 0x28) = 0;
    uVar12 = 1;
  }
  FUN_140024260((LPVOID)0x0);
  FUN_140024260((LPVOID)0x0);
LAB_140015b2b:
  *(uint *)(param_1 + 0x84) = uVar16;
  return uVar12;
}


/*
 * FUN_140015b4c at 140015b4c
 * undefined1 __fastcall FUN_140015b4c(longlong param_1, uint param_2, uint param_3)
 * Address ranges: 140015b4c-140015c05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_140015b4c(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  bool bVar8;
  int local_res10 [6];
  
  local_res10[0] =
       FUN_140015c08(param_1,(undefined8 *)((ulonglong)param_2 + *(longlong *)(param_1 + 0x58)),
                     param_3);
  uVar7 = local_res10[0] != -1;
  if ((bool)uVar7) {
    uVar6 = 0;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x84);
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x90) + 8 + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18);
    iVar2 = *(int *)(lVar1 + 0x10 + uVar4 * 0x28);
    bVar8 = iVar2 == 0;
    if (iVar2 != 0) {
      do {
        iVar2 = FUN_140024ce8((byte *)((ulonglong)
                                       *(uint *)(*(longlong *)(lVar1 + 8 + uVar4 * 0x28) + uVar6 * 4
                                                ) + *(longlong *)(param_1 + 0x70)),
                              (byte *)(*(longlong *)(param_1 + 0x70) + (longlong)local_res10[0]));
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (-1 - param_3);
          break;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar1 + 0x10 + uVar4 * 0x28));
      bVar8 = (int)uVar6 == *(int *)(lVar1 + 0x10 + uVar4 * 0x28);
    }
    if (bVar8) {
      uVar3 = FUN_1400126b0((longlong *)(lVar1 + (uVar4 * 5 + 1) * 8),local_res10);
      uVar7 = (undefined1)uVar3;
    }
  }
  return uVar7;
}


/*
 * FUN_140015c08 at 140015c08
 * int __fastcall FUN_140015c08(longlong param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 140015c08-140015ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_140015c08(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = *(int *)(param_1 + 0x7c) + param_3;
  if (*(uint *)(param_1 + 0x78) < iVar3 + 1U) {
    uVar1 = iVar3 * 2 + 2;
    puVar2 = (undefined8 *)thunk_FUN_14002423c((ulonglong)uVar1);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_140024620(puVar2,*(undefined8 **)(param_1 + 0x70),(ulonglong)*(uint *)(param_1 + 0x7c));
      FUN_140024260(*(LPVOID *)(param_1 + 0x70));
    }
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *(uint *)(param_1 + 0x78) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_140024620((undefined8 *)
                  ((ulonglong)*(uint *)(param_1 + 0x7c) + *(longlong *)(param_1 + 0x70)),param_2,
                  (ulonglong)param_3);
    iVar4 = *(int *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x7c) = iVar4 + param_3;
    *(undefined1 *)((ulonglong)(iVar4 + param_3) + *(longlong *)(param_1 + 0x70)) = 0;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  return iVar4;
}


/*
 * FUN_140015ca4 at 140015ca4
 * byte __fastcall FUN_140015ca4(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 140015ca4-140015cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte FUN_140015ca4(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_140023f20(local_28,param_2,'\0');
  FUN_1400240d0((longlong)local_28);
  bVar1 = FUN_140014a14(param_1,local_28,param_3);
  FUN_140024020(local_28);
  return bVar1;
}


/*
 * FUN_140015cf4 at 140015cf4
 * byte __fastcall FUN_140015cf4(longlong param_1, LPCWSTR param_2, undefined4 param_3)
 * Address ranges: 140015cf4-140015d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte FUN_140015cf4(longlong param_1,LPCWSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_140023fa0(local_28,param_2,'\0');
  FUN_1400240d0((longlong)local_28);
  bVar1 = FUN_140014a14(param_1,local_28,param_3);
  FUN_140024020(local_28);
  return bVar1;
}


/*
 * FUN_140015d44 at 140015d44
 * undefined __fastcall FUN_140015d44(longlong param_1, undefined8 param_2, undefined4 param_3)
 * Address ranges: 140015d44-140015d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140015d44(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined **local_18;
  undefined8 local_10;
  
  local_18 = &PTR_LAB_1400291a0;
  local_10 = param_2;
  FUN_140014a14(param_1,&local_18,param_3);
  return;
}


/*
 * FUN_140015d70 at 140015d70
 * undefined4 __fastcall FUN_140015d70(longlong param_1)
 * Address ranges: 140015d70-140015d76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_140015d70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}


/*
 * FUN_140015d78 at 140015d78
 * longlong __fastcall FUN_140015d78(longlong param_1, ulonglong param_2)
 * Address ranges: 140015d78-140015d95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


longlong FUN_140015d78(longlong param_1,ulonglong param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) != -1) {
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) +
           *(longlong *)(param_1 + 0x70);
  }
  return 0;
}


/*
 * FUN_140015dd0 at 140015dd0
 * undefined4 __fastcall FUN_140015dd0(longlong param_1, ulonglong param_2, uint param_3)
 * Address ranges: 140015dd0-140015ded
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_140015dd0(longlong param_1,ulonglong param_2,uint param_3)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x90) + 8 + (param_2 & 0xffffffff) * 0x18) + 0x10 +
          (ulonglong)param_3 * 0x28);
}


/*
 * FUN_140015df0 at 140015df0
 * longlong __fastcall FUN_140015df0(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4)
 * Address ranges: 140015df0-140015e18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


longlong FUN_140015df0(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  return (ulonglong)
         *(uint *)(*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x90) + 8 + (param_2 & 0xffffffff) * 0x18) + 8 +
                    (param_3 & 0xffffffff) * 0x28) + (ulonglong)param_4 * 4) +
         *(longlong *)(param_1 + 0x70);
}


/*
 * FUN_140015e1c at 140015e1c
 * undefined __fastcall FUN_140015e1c(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4, undefined4 * param_5)
 * Address ranges: 140015e1c-140015e50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140015e1c(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                  undefined4 *param_5)

{
  FUN_140025140((byte *)((ulonglong)
                         *(uint *)(*(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)(param_1 + 0x90) + 8 +
                                      (param_2 & 0xffffffff) * 0x18) + 8 +
                                    (param_3 & 0xffffffff) * 0x28) + (ulonglong)param_4 * 4) +
                        *(longlong *)(param_1 + 0x70)),param_5);
  return;
}


/*
 * FUN_140015f04 at 140015f04
 * undefined8 __fastcall FUN_140015f04(longlong * param_1, undefined4 * param_2)
 * Address ranges: 140015f04-140016032
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140015f04(longlong *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar2) {
    uVar10 = 0x10;
    if (iVar2 != 0) {
      uVar10 = iVar2 * 2;
    }
    uVar12 = CONCAT44(0,uVar10);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar12;
    uVar6 = SUB168(ZEXT816(0x18) * auVar4,0);
    if (SUB168(ZEXT816(0x18) * auVar4,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar7 = uVar6 + 8;
    if (0xfffffffffffffff7 < uVar6) {
      lVar7 = -1;
    }
    puVar8 = (ulonglong *)thunk_FUN_14002423c(lVar7);
    if (puVar8 != (ulonglong *)0x0) {
      *puVar8 = uVar12;
      puVar1 = puVar8 + 1;
      puVar8 = puVar1;
      if (uVar10 != 0) {
        do {
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8 = puVar8 + 3;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (puVar1 != (ulonglong *)0x0) {
        uVar3 = *(uint *)((longlong)param_1 + 0xc);
        uVar6 = 0;
        lVar7 = *param_1;
        if (uVar3 != 0) {
          do {
            FUN_140016100((undefined4 *)(puVar1 + uVar6 * 3),(undefined4 *)(lVar7 + uVar6 * 0x18));
            uVar11 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar11;
          } while (uVar11 < uVar3);
        }
        lVar7 = *param_1;
        if (lVar7 != 0) {
          lVar13 = *(longlong *)(lVar7 + -8);
          lVar5 = lVar7 + lVar13 * 0x18;
          for (; lVar13 != 0; lVar13 = lVar13 + -1) {
            FUN_14001609c((longlong *)(lVar5 + -0x10));
            lVar5 = lVar5 + -0x18;
          }
          FUN_140024260((longlong *)(lVar7 + -8));
        }
        *param_1 = (longlong)puVar1;
        *(uint *)((longlong)param_1 + 0xc) = uVar10;
        goto LAB_140016002;
      }
    }
    uVar6 = (ulonglong)puVar8 & 0xffffffffffffff00;
  }
  else {
LAB_140016002:
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    puVar9 = FUN_140016100((undefined4 *)(*param_1 + (ulonglong)uVar10 * 0x18),param_2);
    uVar6 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
  }
  return uVar6;
}


/*
 * FUN_140016034 at 140016034
 * undefined __fastcall FUN_140016034(longlong * param_1)
 * Address ranges: 140016034-14001609b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140016034(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8);
    lVar2 = lVar1 + lVar3 * 0x18;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_14001609c((longlong *)(lVar2 + -0x10));
      lVar2 = lVar2 + -0x18;
    }
    FUN_140024260((longlong *)(lVar1 + -8));
  }
  return;
}


/*
 * FUN_14001609c at 14001609c
 * undefined __fastcall FUN_14001609c(longlong * param_1)
 * Address ranges: 14001609c-1400160ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001609c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8);
    lVar2 = lVar1 + lVar3 * 0x28;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_140024260(*(LPVOID *)(lVar2 + -0x10));
      FUN_140024260(*(LPVOID *)(lVar2 + -0x20));
      lVar2 = lVar2 + -0x28;
    }
    FUN_140024260((longlong *)(lVar1 + -8));
  }
  return;
}


/*
 * FUN_140016100 at 140016100
 * undefined4 * __fastcall FUN_140016100(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140016100-140016239
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_140016100(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  *param_1 = *param_2;
  lVar5 = *(longlong *)(param_1 + 2);
  if (lVar5 != 0) {
    lVar10 = *(longlong *)(lVar5 + -8);
    lVar3 = lVar5 + lVar10 * 0x28;
    for (; lVar10 != 0; lVar10 = lVar10 + -1) {
      FUN_140024260(*(LPVOID *)(lVar3 + -0x10));
      FUN_140024260(*(LPVOID *)(lVar3 + -0x20));
      lVar3 = lVar3 + -0x28;
    }
    FUN_140024260((longlong *)(lVar5 + -8));
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    uVar1 = param_2[5];
    uVar9 = CONCAT44(0,uVar1);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar9;
    uVar4 = SUB168(ZEXT816(0x28) * auVar2,0);
    if (SUB168(ZEXT816(0x28) * auVar2,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = uVar4 + 8;
    if (0xfffffffffffffff7 < uVar4) {
      lVar5 = -1;
    }
    puVar6 = (ulonglong *)thunk_FUN_14002423c(lVar5);
    if (puVar6 == (ulonglong *)0x0) {
      *(undefined8 *)(param_1 + 2) = 0;
    }
    else {
      *puVar6 = uVar9;
      puVar6 = puVar6 + 1;
      puVar7 = puVar6;
      if (uVar1 != 0) {
        do {
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7 = puVar7 + 5;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      *(ulonglong **)(param_1 + 2) = puVar6;
      if (puVar6 != (ulonglong *)0x0) {
        uVar1 = param_2[4];
        uVar4 = 0;
        lVar5 = *(longlong *)(param_2 + 2);
        if (uVar1 != 0) {
          do {
            FUN_14001623c((undefined4 *)(puVar6 + uVar4 * 5),(undefined4 *)(lVar5 + uVar4 * 0x28));
            uVar8 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar8;
          } while (uVar8 < uVar1);
        }
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
      }
    }
  }
  return param_1;
}


/*
 * FUN_14001623c at 14001623c
 * undefined4 * __fastcall FUN_14001623c(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14001623c-140016327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_14001623c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  FUN_140024260(*(LPVOID *)(param_1 + 2));
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    uVar1 = SUB168(ZEXT416(4) * ZEXT416((uint)param_2[5]),0);
    if (SUB168(ZEXT416(4) * ZEXT416((uint)param_2[5]),8) != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    puVar2 = (undefined8 *)thunk_FUN_14002423c(uVar1);
    *(undefined8 **)(param_1 + 2) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_140024620(puVar2,*(undefined8 **)(param_2 + 2),(ulonglong)(uint)param_2[4] << 2);
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
    }
  }
  FUN_140024260(*(LPVOID *)(param_1 + 6));
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_2[8] != 0) {
    uVar1 = SUB168(ZEXT816(8) * ZEXT416((uint)param_2[9]),0);
    if (SUB168(ZEXT816(8) * ZEXT416((uint)param_2[9]),8) != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    puVar2 = (undefined8 *)thunk_FUN_14002423c(uVar1);
    *(undefined8 **)(param_1 + 6) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_140024620(puVar2,*(undefined8 **)(param_2 + 6),(ulonglong)(uint)param_2[8] << 3);
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
    }
  }
  return param_1;
}


/*
 * FUN_140016328 at 140016328
 * undefined8 __fastcall FUN_140016328(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined1 * param_5, uint param_6)
 * Address ranges: 140016328-1400163f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8
FUN_140016328(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 *param_5,uint param_6)

{
  int iVar1;
  ulonglong in_RAX;
  byte *pbVar2;
  undefined4 extraout_var;
  
  if (param_6 == 1) {
    pbVar2 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    iVar1 = FUN_140024ce8(pbVar2,&DAT_1400286b8);
    if (iVar1 == 0) {
      *param_5 = 1;
      param_5 = (undefined1 *)CONCAT44(extraout_var,iVar1);
    }
    else {
      iVar1 = FUN_140024ce8(pbVar2,(byte *)"false");
      if (iVar1 == 0) {
        *param_5 = 0;
      }
      else {
        param_6 = 0;
        in_RAX = (**(code **)(*param_2 + 0x58))(param_2,param_3,param_4,0,&param_6);
        if (((char)in_RAX == '\0') || (in_RAX = (ulonglong)param_6, 1 < param_6))
        goto LAB_1400163e9;
        *param_5 = param_6 != 0;
      }
    }
    return CONCAT71((int7)((ulonglong)param_5 >> 8),1);
  }
LAB_1400163e9:
  return in_RAX & 0xffffffffffffff00;
}


/*
 * FUN_1400163f4 at 1400163f4
 * bool __fastcall FUN_1400163f4(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5, int param_6)
 * Address ranges: 1400163f4-14001643d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_1400163f4(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  
  if (param_6 == 1) {
    cVar1 = (**(code **)(*param_2 + 0x58))(param_2,param_3,param_4,0,param_5);
    bVar2 = cVar1 != '\0';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/*
 * FUN_140016440 at 140016440
 * undefined8 __fastcall FUN_140016440(byte * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined4 * param_5)
 * Address ranges: 140016440-1400164bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8
FUN_140016440(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  
  iVar1 = FUN_1400242b4(param_1,(byte *)"%d x %d %c",param_2,param_3);
  if (iVar1 == 2) {
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
  }
  else {
    *param_5 = 1;
    iVar1 = FUN_1400242b4(param_1,(byte *)"%d x %d @ %d %c",param_2,param_3);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar1) >> 8),iVar1 == 3);
  }
  return uVar2;
}


/*
 * FUN_1400164c0 at 1400164c0
 * char __fastcall FUN_1400164c0(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, int * param_5, int * param_6, undefined8 param_7, undefined4 * param_8, uint param_9, undefined8 param_10, uint param_11)
 * Address ranges: 1400164c0-140016685
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char FUN_1400164c0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,int *param_6,undefined8 param_7,undefined4 *param_8,uint param_9,
                  undefined8 param_10,uint param_11)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar2 = '\x01';
  if (param_9 == 1) {
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    uVar6 = FUN_140013fb8(pbVar5,param_5,param_6);
    if ((char)uVar6 == '\0') {
      uVar6 = FUN_140016440(pbVar5,param_5,param_6,param_7,param_8);
      if ((char)uVar6 == '\0') {
        cVar2 = '\0';
      }
    }
    else {
      iVar4 = *param_5;
      cVar8 = cVar2;
      if (iVar4 == -8) {
        if (param_11 < 0x275) {
          cVar8 = '\0';
          cVar2 = '\0';
          goto LAB_140016562;
        }
      }
      else if ((iVar4 == 0) || (iVar4 == -7)) goto LAB_140016562;
      if (*param_6 != iVar4) {
        cVar8 = '\x01';
        cVar2 = '\x01';
        if (param_11 < 0x278) {
          cVar8 = '\0';
          cVar2 = '\0';
        }
      }
    }
  }
  else if (1 < param_9) {
    return '\0';
  }
LAB_140016562:
  for (uVar7 = 0;
      (cVar2 != '\0' &&
      (uVar3 = (**(code **)(*param_2 + 0x60))(param_2,param_3,param_4), uVar7 < uVar3));
      uVar7 = uVar7 + 1) {
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x68))(param_2,param_3,param_4,uVar7);
    iVar4 = FUN_140024ce8(pbVar5,&DAT_140029270);
    piVar1 = param_5;
    if ((iVar4 == 0) || (iVar4 = FUN_140024ce8(pbVar5,&DAT_140029274), piVar1 = param_6, iVar4 == 0)
       ) {
      if (cVar8 == '\0') {
        cVar2 = (**(code **)(*param_2 + 0x78))(param_2,param_3,param_4,uVar7,piVar1);
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      iVar4 = FUN_140024ce8(pbVar5,(byte *)"refrate");
      if (iVar4 == 0) {
        cVar2 = (**(code **)(*param_2 + 0x78))(param_2,param_3,param_4,uVar7,param_7);
        *param_8 = 1;
      }
    }
  }
  return cVar2;
}


/*
 * FUN_140016688 at 140016688
 * undefined1 __fastcall FUN_140016688(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 140016688-140016794
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1
FUN_140016688(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = 1;
  if (param_6 == 1) {
    pbVar3 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    iVar2 = FUN_140024ce8(pbVar3,&DAT_140029280);
    if (iVar2 == 0) {
      *param_5 = 1;
    }
    else {
      iVar2 = FUN_140024ce8(pbVar3,(byte *)"appdriven");
      if (iVar2 == 0) {
        *param_5 = 0;
      }
      else {
        iVar2 = FUN_140024ce8(pbVar3,&DAT_140026604);
        if (iVar2 == 0) {
          *param_5 = 2;
        }
        else {
          iVar2 = FUN_140024ce8(pbVar3,&DAT_14002660c);
          if (iVar2 == 0) {
            *param_5 = 4;
          }
          else {
            iVar2 = FUN_140024ce8(pbVar3,&DAT_140029294);
            if (iVar2 == 0) {
              *param_5 = 8;
            }
            else {
              iVar2 = FUN_140024ce8(pbVar3,&DAT_140029298);
              if (iVar2 == 0) {
                *param_5 = 0x10;
              }
              else {
                uVar1 = 0;
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/*
 * FUN_140016798 at 140016798
 * bool __fastcall FUN_140016798(undefined8 param_1, undefined8 param_2, longlong * param_3, undefined4 param_4, int * param_5)
 * Address ranges: 140016798-140016963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_140016798(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  int *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  bVar1 = false;
  uVar7 = 0;
  bVar8 = true;
  while (uVar2 = (**(code **)(*param_3 + 0x38))(param_3,param_4), uVar7 < uVar2) {
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar7);
    iVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar7);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar7);
    iVar5 = FUN_140024ce8(pbVar6,(byte *)"version");
    if (iVar5 != 0) {
      return false;
    }
    if ((iVar4 == 0) && (iVar3 != 0)) {
      bVar1 = FUN_1400163f4(pbVar6,param_3,param_4,uVar7,param_5,iVar3);
      bVar8 = bVar1;
    }
    uVar7 = uVar7 + 1;
    if (bVar8 == false) {
      return false;
    }
  }
  if (bVar1 == false) {
    *param_5 = 0x287;
    return bVar8;
  }
  if (*param_5 == 0x287) {
    return bVar8;
  }
  if (*param_5 == 0x286) {
    return bVar8;
  }
  if (*param_5 == 0x285) {
    return bVar8;
  }
  if (*param_5 == 0x283) {
    return bVar8;
  }
  if (*param_5 == 0x282) {
    return bVar8;
  }
  if (*param_5 == 0x281) {
    return bVar8;
  }
  if (*param_5 == 0x280) {
    return bVar8;
  }
  if (*param_5 == 0x279) {
    return bVar8;
  }
  if (*param_5 == 0x278) {
    return bVar8;
  }
  if (*param_5 == 0x277) {
    return bVar8;
  }
  if (*param_5 == 0x276) {
    return bVar8;
  }
  if (*param_5 == 0x275) {
    return bVar8;
  }
  if (*param_5 == 0x274) {
    return bVar8;
  }
  if (*param_5 == 0x273) {
    return bVar8;
  }
  if (*param_5 == 0x270) {
    return bVar8;
  }
  if (*param_5 == 0x263) {
    return bVar8;
  }
  if (*param_5 == 0x262) {
    return bVar8;
  }
  if (*param_5 == 0x261) {
    return bVar8;
  }
  if (*param_5 == 0x260) {
    return bVar8;
  }
  if (*param_5 == 0x255) {
    return bVar8;
  }
  return false;
}


/*
 * FUN_140016964 at 140016964
 * undefined1 __fastcall FUN_140016964(ulonglong param_1, undefined4 * param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 140016964-140016fd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1
FUN_140016964(ulonglong param_1,undefined4 *param_2,longlong *param_3,undefined4 param_4,
             uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong local_res8 [4];
  
  uVar6 = 1;
  uVar10 = 0;
  local_res8[0] = param_1;
  do {
    uVar2 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar2 <= uVar10) {
      return (char)uVar6;
    }
    pbVar5 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar10);
    uVar2 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar10);
    iVar3 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar10);
    iVar4 = FUN_140024ce8(pbVar5,(byte *)"outputapi");
    if (iVar4 == 0) {
      if (iVar3 == 0) {
        if (uVar2 == 1) {
          pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
          iVar3 = FUN_140024ce8(pbVar5,(byte *)"d3d11warp");
          if (iVar3 == 0) {
            *param_2 = 3;
          }
          else {
            iVar3 = FUN_140024ce8(pbVar5,(byte *)"d3d11_fl10_0");
            if (iVar3 == 0) {
              *param_2 = 1;
            }
            else {
              iVar3 = FUN_140024ce8(pbVar5,(byte *)"d3d11_fl10_1");
              if (iVar3 == 0) {
                *param_2 = 2;
              }
              else {
                iVar3 = FUN_140024ce8(pbVar5,(byte *)"d3d11_fl11_0");
                if (iVar3 == 0) {
                  *param_2 = 4;
                }
                else {
                  iVar3 = FUN_140024ce8(pbVar5,(byte *)"d3d12_fl11_0");
                  if ((iVar3 == 0) && (0x263 < param_5)) {
                    *param_2 = 5;
                  }
                  else {
                    iVar3 = FUN_140024ce8(pbVar5,(byte *)"d3d12_fl12_0");
                    if (iVar3 == 0) {
                      *param_2 = 6;
                    }
                    else {
                      iVar3 = FUN_140024ce8(pbVar5,(byte *)"bestavailable");
                      if (iVar3 != 0) {
                        return 0;
                      }
                      *param_2 = 0;
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_140016d8e:
          if (1 < uVar2) goto LAB_140016d94;
        }
      }
    }
    else {
      iVar4 = FUN_140024ce8(pbVar5,(byte *)"adapters");
      if (iVar4 == 0) {
        if (iVar3 == 0) {
          if (uVar2 != 1) goto LAB_140016d8e;
          pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
          iVar3 = FUN_140024ce8(pbVar5,&DAT_140029334);
          if (iVar3 == 0) {
            param_2[1] = 0;
          }
          else {
            puVar7 = param_2 + 1;
LAB_140016b4b:
            bVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar10,0,puVar7);
LAB_140016fb5:
            uVar6 = (ulonglong)bVar1;
          }
        }
      }
      else {
        iVar4 = FUN_140024ce8(pbVar5,(byte *)"fullscreenoutput");
        if (iVar4 == 0) {
          if (iVar3 == 0) {
            if (uVar2 != 1) goto LAB_140016d8e;
            pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
            iVar3 = FUN_140024ce8(pbVar5,(byte *)"default");
            if (iVar3 != 0) {
              puVar7 = param_2 + 2;
              goto LAB_140016b4b;
            }
            param_2[2] = 0;
          }
        }
        else {
          pbVar9 = pbVar5;
          iVar4 = FUN_140024ce8(pbVar5,(byte *)"fullscreenmode");
          if (iVar4 == 0) {
            if ((iVar3 == 0) && (uVar2 != 0)) {
              local_res8[0] = local_res8[0] & 0xffffffffffffff00;
              uVar6 = FUN_140016328(pbVar9,param_3,param_4,uVar10,(undefined1 *)local_res8,uVar2);
              uVar6 = uVar6 & 0xff;
              *(bool *)(param_2 + 8) = (char)local_res8[0] == '\0';
            }
          }
          else {
            iVar4 = FUN_140024ce8(pbVar5,(byte *)"scalingmode");
            if (iVar4 == 0) {
              if (iVar3 == 0) {
                if (uVar2 != 1) goto LAB_140016d8e;
                pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
                iVar3 = FUN_140024ce8(pbVar5,(byte *)"unspecified");
                if (iVar3 == 0) {
                  param_2[7] = 0;
                }
                else {
                  iVar3 = FUN_140024ce8(pbVar5,(byte *)"centered");
                  if (iVar3 == 0) {
                    param_2[7] = 1;
                  }
                  else {
                    iVar3 = FUN_140024ce8(pbVar5,(byte *)"stretched");
                    if (iVar3 == 0) {
                      param_2[7] = 2;
                    }
                    else {
                      iVar3 = FUN_140024ce8(pbVar5,(byte *)"stretched_ar");
                      if (iVar3 == 0) {
                        param_2[7] = 3;
                      }
                      else {
                        iVar3 = FUN_140024ce8(pbVar5,(byte *)"stretched_4_3");
                        if (iVar3 == 0) {
                          param_2[7] = 4;
                        }
                        else {
                          iVar3 = FUN_140024ce8(pbVar5,(byte *)"stretched_4_3_crt");
                          if (iVar3 == 0) {
                            param_2[7] = 5;
                          }
                          else {
                            iVar3 = FUN_140024ce8(pbVar5,(byte *)"stretched_4_3_c64");
                            if (iVar3 == 0) {
                              param_2[7] = 6;
                            }
                            else {
                              iVar3 = FUN_140024ce8(pbVar5,(byte *)"centered_ar");
                              if (iVar3 == 0) {
                                param_2[7] = 7;
                              }
                              else {
                                iVar3 = FUN_140024ce8(pbVar5,(byte *)"stretched_ar_crt");
                                if (iVar3 != 0) {
                                  return 0;
                                }
                                if (param_5 < 0x276) {
                                  return 0;
                                }
                                param_2[7] = 8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              pbVar9 = pbVar5;
              iVar4 = FUN_140024ce8(pbVar5,(byte *)"progressivescanlineorder");
              if (iVar4 == 0) {
                if ((iVar3 == 0) && (uVar2 != 0)) {
                  local_res8[0] = local_res8[0] & 0xffffffffffffff00;
                  uVar6 = FUN_140016328(pbVar9,param_3,param_4,uVar10,(undefined1 *)local_res8,uVar2
                                       );
                  uVar6 = uVar6 & 0xff;
                  param_2[6] = (uint)((char)local_res8[0] != '\0');
                }
              }
              else {
                pbVar9 = pbVar5;
                iVar4 = FUN_140024ce8(pbVar5,(byte *)"enumeraterefreshrates");
                if (iVar4 == 0) {
                  if (iVar3 == 0) {
                    uVar6 = 1;
                    if (uVar2 != 0) {
                      puVar7 = (undefined4 *)((longlong)param_2 + 0x22);
                      pbVar5 = pbVar9;
                      goto LAB_140016f9e;
                    }
                  }
                  else {
LAB_140016d94:
                    uVar6 = 0;
                  }
                }
                else {
                  pbVar9 = pbVar5;
                  iVar4 = FUN_140024ce8(pbVar5,(byte *)"brightness");
                  if (iVar4 == 0) {
                    if (iVar3 != 0) goto LAB_140016d94;
                    uVar6 = 1;
                    if (uVar2 != 0) {
                      puVar7 = param_2 + 3;
LAB_140016eaa:
                      bVar1 = FUN_1400163f4(pbVar9,param_3,param_4,uVar10,puVar7,uVar2);
                      goto LAB_140016fb5;
                    }
                  }
                  else {
                    pbVar9 = pbVar5;
                    iVar4 = FUN_140024ce8(pbVar5,(byte *)"color");
                    if (iVar4 == 0) {
                      if (iVar3 != 0) goto LAB_140016d94;
                      uVar6 = 1;
                      if (uVar2 != 0) {
                        puVar7 = param_2 + 4;
                        goto LAB_140016eaa;
                      }
                    }
                    else {
                      pbVar9 = pbVar5;
                      iVar4 = FUN_140024ce8(pbVar5,(byte *)"contrast");
                      if (iVar4 == 0) {
                        if (iVar3 != 0) goto LAB_140016d94;
                        uVar6 = 1;
                        if (uVar2 != 0) {
                          puVar7 = param_2 + 5;
                          goto LAB_140016eaa;
                        }
                      }
                      else {
                        pbVar9 = pbVar5;
                        iVar4 = FUN_140024ce8(pbVar5,(byte *)"inheritcolorprofileinfullscreenmode");
                        if (iVar4 == 0) {
                          if (iVar3 != 0) goto LAB_140016d94;
                          uVar6 = 1;
                          if (uVar2 != 0) {
                            puVar7 = (undefined4 *)((longlong)param_2 + 0x26);
                            pbVar5 = pbVar9;
                            goto LAB_140016f9e;
                          }
                        }
                        else {
                          pbVar9 = pbVar5;
                          iVar4 = FUN_140024ce8(pbVar5,(byte *)"keepwindowaspectratio");
                          if (iVar4 == 0) {
                            if (iVar3 != 0) goto LAB_140016d94;
                            uVar6 = 1;
                            if (uVar2 != 0) {
                              puVar7 = (undefined4 *)((longlong)param_2 + 0x21);
                              pbVar5 = pbVar9;
                              goto LAB_140016f9e;
                            }
                          }
                          else {
                            pbVar9 = pbVar5;
                            iVar4 = FUN_140024ce8(pbVar5,(byte *)"capturemouse");
                            if (iVar4 == 0) {
                              if (iVar3 != 0) goto LAB_140016d94;
                              uVar6 = 1;
                              if (uVar2 != 0) {
                                puVar7 = (undefined4 *)((longlong)param_2 + 0x23);
                                pbVar5 = pbVar9;
                                goto LAB_140016f9e;
                              }
                            }
                            else {
                              pbVar9 = pbVar5;
                              iVar4 = FUN_140024ce8(pbVar5,(byte *)"centerappwindow");
                              if (iVar4 == 0) {
                                if (iVar3 != 0) goto LAB_140016d94;
                                uVar6 = 1;
                                if (uVar2 != 0) {
                                  puVar7 = param_2 + 9;
                                  pbVar5 = pbVar9;
                                  goto LAB_140016f9e;
                                }
                              }
                              else {
                                if ((param_5 < 0x285) ||
                                   (iVar4 = FUN_140024ce8(pbVar5,(byte *)"disablescreensaver"),
                                   iVar4 != 0)) {
                                  return 0;
                                }
                                if ((iVar3 == 0) && (uVar2 != 0)) {
                                  puVar7 = (undefined4 *)((longlong)param_2 + 0x25);
LAB_140016f9e:
                                  uVar8 = FUN_140016328(pbVar5,param_3,param_4,uVar10,
                                                        (undefined1 *)puVar7,uVar2);
                                  bVar1 = (byte)uVar8;
                                  goto LAB_140016fb5;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar10 = uVar10 + 1;
    if ((char)uVar6 == '\0') {
      return 0;
    }
  } while( true );
}


/*
 * FUN_140016fdc at 140016fdc
 * undefined1 __fastcall FUN_140016fdc(ulonglong param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 140016fdc-140017589
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1
FUN_140016fdc(ulonglong param_1,longlong param_2,longlong *param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong local_res8 [4];
  undefined8 in_stack_ffffffffffffffa0;
  
  uVar7 = 1;
  uVar11 = 0;
  local_res8[0] = param_1;
LAB_140016ffe:
  do {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar3 <= uVar11) {
      return (char)uVar7;
    }
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar11);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar11);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar11);
    iVar5 = FUN_140024ce8(pbVar6,(byte *)"videocard");
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return 0;
      }
      uVar7 = 1;
      if (uVar3 == 1) {
        pbVar6 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
        iVar4 = FUN_140024ce8(pbVar6,(byte *)"voodoo_graphics");
        if (iVar4 != 0) {
          iVar4 = FUN_140024ce8(pbVar6,(byte *)"voodoo_rush");
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0x27) = 1;
          }
          else {
            iVar4 = FUN_140024ce8(pbVar6,(byte *)"voodoo_2");
            if (iVar4 == 0) {
              *(undefined4 *)(param_2 + 0x27) = 2;
            }
            else {
              iVar4 = FUN_140024ce8(pbVar6,(byte *)"voodoo_banshee");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x27) = 3;
              }
              else {
                iVar4 = FUN_140024ce8(pbVar6,(byte *)"other_greater");
                if (iVar4 != 0) {
                  return 0;
                }
                *(undefined4 *)(param_2 + 0x27) = 4;
              }
            }
          }
          goto LAB_1400172d7;
        }
        *(undefined4 *)(param_2 + 0x27) = 0;
        uVar11 = uVar11 + 1;
        goto LAB_140016ffe;
      }
LAB_14001731c:
      uVar7 = 1;
      if (uVar3 < 2) goto LAB_140017569;
LAB_140017322:
      uVar7 = 0;
    }
    else {
      pbVar10 = pbVar6;
      iVar5 = FUN_140024ce8(pbVar6,(byte *)"onboardram");
      if (iVar5 == 0) {
        if (iVar4 == 0) {
          uVar7 = 1;
          if (uVar3 == 0) goto LAB_140017569;
          piVar1 = (int *)(param_2 + 0x2b);
          bVar2 = FUN_1400163f4(pbVar10,param_3,param_4,uVar11,piVar1,uVar3);
          *piVar1 = *piVar1 << 0x14;
          goto LAB_140017567;
        }
        goto LAB_140017322;
      }
      pbVar10 = pbVar6;
      iVar5 = FUN_140024ce8(pbVar6,(byte *)"memorysizeoftmu");
      if (iVar5 == 0) {
        if (iVar4 != 0) goto LAB_140017322;
        uVar7 = 1;
        if (uVar3 != 0) {
          piVar1 = (int *)(param_2 + 0x2f);
          bVar2 = FUN_1400163f4(pbVar10,param_3,param_4,uVar11,piVar1,uVar3);
          *piVar1 = *piVar1 << 10;
          goto LAB_140017567;
        }
      }
      else {
        pbVar10 = pbVar6;
        iVar5 = FUN_140024ce8(pbVar6,(byte *)"numberoftmus");
        if (iVar5 == 0) {
          if (iVar4 != 0) goto LAB_140017322;
          uVar7 = 1;
          if (uVar3 != 0) {
            bVar2 = FUN_1400163f4(pbVar10,param_3,param_4,uVar11,param_2 + 0x33,uVar3);
            goto LAB_140017567;
          }
        }
        else {
          if (param_5 < 0x263) {
            pbVar10 = pbVar6;
            iVar5 = FUN_140024ce8(pbVar6,(byte *)"forcebilinearfilter");
            if (iVar5 == 0) {
              if (iVar4 == 0) {
                uVar7 = 1;
                if (uVar3 != 0) {
                  local_res8[0] = local_res8[0] & 0xffffffffffffff00;
                  uVar7 = FUN_140016328(pbVar10,param_3,param_4,uVar11,(undefined1 *)local_res8,
                                        uVar3);
                  uVar7 = uVar7 & 0xff;
                  *(uint *)(param_2 + 0x4b) = -(uint)((char)local_res8[0] != '\0') & 0x200;
                }
                goto LAB_140017569;
              }
              goto LAB_140017322;
            }
          }
          else {
            iVar5 = FUN_140024ce8(pbVar6,(byte *)"tmufiltering");
            if (iVar5 == 0) {
              if (iVar4 != 0) {
                return 0;
              }
              uVar7 = 1;
              if (uVar3 != 1) goto LAB_14001731c;
              pbVar6 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
              iVar4 = FUN_140024ce8(pbVar6,(byte *)"appdriven");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x4b) = 0;
              }
              else {
                iVar4 = FUN_140024ce8(pbVar6,(byte *)"pointsampled");
                if (iVar4 == 0) {
                  *(undefined4 *)(param_2 + 0x4b) = 0x100;
                }
                else {
                  iVar4 = FUN_140024ce8(pbVar6,(byte *)"bilinear");
                  if (iVar4 != 0) goto LAB_140017569;
                  *(undefined4 *)(param_2 + 0x4b) = 0x200;
                }
              }
LAB_1400172d7:
              uVar7 = 1;
              uVar11 = uVar11 + 1;
              goto LAB_140016ffe;
            }
          }
          pbVar10 = pbVar6;
          iVar5 = FUN_140024ce8(pbVar6,(byte *)"disablemipmapping");
          if (iVar5 == 0) {
            if (iVar4 != 0) goto LAB_140017322;
            uVar7 = 1;
            if (uVar3 != 0) {
              puVar8 = (undefined1 *)(param_2 + 0x4f);
              pbVar6 = pbVar10;
              goto LAB_140017550;
            }
          }
          else {
            pbVar10 = pbVar6;
            iVar5 = FUN_140024ce8(pbVar6,(byte *)"resolution");
            if (iVar5 == 0) {
              bVar2 = FUN_1400164c0(pbVar10,param_3,param_4,uVar11,(int *)(param_2 + 0x37),
                                    (int *)(param_2 + 0x3b),param_2 + 0x43,
                                    (undefined4 *)(param_2 + 0x47),uVar3,in_stack_ffffffffffffffa0,
                                    param_5);
LAB_140017567:
              uVar7 = (ulonglong)bVar2;
            }
            else {
              pbVar10 = pbVar6;
              iVar5 = FUN_140024ce8(pbVar6,(byte *)"antialiasing");
              if (iVar5 == 0) {
                if (uVar3 != 0) {
                  bVar2 = FUN_140016688(pbVar10,param_3,param_4,uVar11,
                                        (undefined4 *)(param_2 + 0x3f),uVar3);
                  goto LAB_140017567;
                }
              }
              else {
                pbVar10 = pbVar6;
                iVar5 = FUN_140024ce8(pbVar6,(byte *)"enableglidegammaramp");
                if (iVar5 == 0) {
                  if (iVar4 != 0) goto LAB_140017322;
                  uVar7 = 1;
                  if (uVar3 != 0) {
                    puVar8 = (undefined1 *)(param_2 + 0x50);
                    pbVar6 = pbVar10;
                    goto LAB_140017550;
                  }
                }
                else {
                  pbVar10 = pbVar6;
                  iVar5 = FUN_140024ce8(pbVar6,(byte *)"forceverticalsync");
                  if (iVar5 == 0) {
                    if (iVar4 != 0) goto LAB_140017322;
                    uVar7 = 1;
                    if (uVar3 != 0) {
                      puVar8 = (undefined1 *)(param_2 + 0x52);
                      pbVar6 = pbVar10;
                      goto LAB_140017550;
                    }
                  }
                  else {
                    pbVar10 = pbVar6;
                    iVar5 = FUN_140024ce8(pbVar6,(byte *)"forceemulatingtruepciaccess");
                    if (iVar5 == 0) {
                      if (iVar4 != 0) goto LAB_140017322;
                      uVar7 = 1;
                      if (uVar3 != 0) {
                        puVar8 = (undefined1 *)(param_2 + 0x53);
                        pbVar6 = pbVar10;
                        goto LAB_140017550;
                      }
                    }
                    else {
                      pbVar10 = pbVar6;
                      iVar5 = FUN_140024ce8(pbVar6,(byte *)"16bitdepthbuffer");
                      if (iVar5 == 0) {
                        if (iVar4 != 0) goto LAB_140017322;
                        uVar7 = 1;
                        if (uVar3 != 0) {
                          puVar8 = (undefined1 *)(param_2 + 0x54);
                          pbVar6 = pbVar10;
                          goto LAB_140017550;
                        }
                      }
                      else {
                        pbVar10 = pbVar6;
                        iVar5 = FUN_140024ce8(pbVar6,(byte *)"3dfxwatermark");
                        if (iVar5 == 0) {
                          if (iVar4 != 0) goto LAB_140017322;
                          uVar7 = 1;
                          if (uVar3 != 0) {
                            puVar8 = (undefined1 *)(param_2 + 0x55);
                            pbVar6 = pbVar10;
                            goto LAB_140017550;
                          }
                        }
                        else {
                          pbVar10 = pbVar6;
                          iVar5 = FUN_140024ce8(pbVar6,(byte *)"3dfxsplashscreen");
                          if (iVar5 == 0) {
                            if (iVar4 != 0) goto LAB_140017322;
                            uVar7 = 1;
                            if (uVar3 != 0) {
                              puVar8 = (undefined1 *)(param_2 + 0x56);
                              pbVar6 = pbVar10;
                              goto LAB_140017550;
                            }
                          }
                          else {
                            pbVar10 = pbVar6;
                            iVar5 = FUN_140024ce8(pbVar6,(byte *)"pointcastpalette");
                            if (iVar5 == 0) {
                              if (iVar4 != 0) goto LAB_140017322;
                              uVar7 = 1;
                              if (uVar3 != 0) {
                                puVar8 = (undefined1 *)(param_2 + 0x51);
                                pbVar6 = pbVar10;
LAB_140017550:
                                uVar9 = FUN_140016328(pbVar6,param_3,param_4,uVar11,puVar8,uVar3);
                                bVar2 = (byte)uVar9;
                                goto LAB_140017567;
                              }
                            }
                            else {
                              iVar5 = FUN_140024ce8(pbVar6,(byte *)"enableinactiveappstate");
                              if (iVar5 != 0) {
                                return 0;
                              }
                              if (iVar4 != 0) goto LAB_140017322;
                              uVar7 = 1;
                              if (uVar3 != 0) {
                                puVar8 = (undefined1 *)(param_2 + 0x57);
                                goto LAB_140017550;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_140017569:
    uVar11 = uVar11 + 1;
    if ((char)uVar7 == '\0') {
      return 0;
    }
  } while( true );
}


/*
 * FUN_14001758c at 14001758c
 * bool __fastcall FUN_14001758c(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4)
 * Address ranges: 14001758c-14001779f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_14001758c(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  
  bVar1 = true;
  uVar6 = 0;
LAB_1400175ab:
  do {
    while( true ) {
      uVar2 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
      if (uVar2 <= uVar6) {
        return bVar1;
      }
      pbVar5 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar6);
      uVar2 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar6);
      iVar3 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar6);
      iVar4 = FUN_140024ce8(pbVar5,(byte *)"ditheringeffect");
      if (iVar4 == 0) break;
      iVar4 = FUN_140024ce8(pbVar5,(byte *)"dithering");
      if (iVar4 != 0) {
        iVar4 = FUN_140024ce8(pbVar5,(byte *)"ditherorderedmatrixsizescale");
        if (iVar4 == 0) {
          if (iVar3 != 0) {
            return false;
          }
          bVar1 = true;
          if (uVar2 != 0) {
            bVar1 = FUN_1400163f4(pbVar5,param_3,param_4,uVar6,param_2 + 0xef,uVar2);
          }
        }
        goto LAB_14001777c;
      }
      if (iVar3 != 0) {
        return false;
      }
      if (uVar2 != 1) goto LAB_140017734;
      pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar6,0);
      iVar3 = FUN_140024ce8(pbVar5,(byte *)"disabled");
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0xeb) = 0;
      }
      else {
        iVar3 = FUN_140024ce8(pbVar5,(byte *)"appdriven");
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0xeb) = 1;
        }
        else {
          iVar3 = FUN_140024ce8(pbVar5,(byte *)"forcealways");
          if (iVar3 != 0) {
            return false;
          }
          *(undefined4 *)(param_2 + 0xeb) = 2;
        }
      }
LAB_1400176ef:
      bVar1 = true;
      uVar6 = uVar6 + 1;
    }
    if (iVar3 != 0) {
      return false;
    }
    bVar1 = true;
    if (uVar2 == 1) {
      pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar6,0);
      iVar3 = FUN_140024ce8(pbVar5,(byte *)"pure32bit");
      if (iVar3 != 0) {
        iVar3 = FUN_140024ce8(pbVar5,(byte *)"dither2x2");
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0xe7) = 1;
        }
        else {
          iVar3 = FUN_140024ce8(pbVar5,(byte *)"dither4x4");
          if (iVar3 != 0) {
            return false;
          }
          *(undefined4 *)(param_2 + 0xe7) = 2;
        }
        goto LAB_1400176ef;
      }
      *(undefined4 *)(param_2 + 0xe7) = 0;
      uVar6 = uVar6 + 1;
      goto LAB_1400175ab;
    }
LAB_140017734:
    bVar1 = true;
    if (1 < uVar2) {
      bVar1 = false;
    }
LAB_14001777c:
    uVar6 = uVar6 + 1;
    if (bVar1 == false) {
      return false;
    }
  } while( true );
}


/*
 * FUN_1400177a0 at 1400177a0
 * undefined1 __fastcall FUN_1400177a0(ulonglong param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 1400177a0-140017fca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1
FUN_1400177a0(ulonglong param_1,longlong param_2,longlong *param_3,undefined4 param_4,uint param_5)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong local_res8 [4];
  undefined8 in_stack_fffffffffffffba0;
  byte local_448 [1032];
  
  cVar2 = '\x01';
  uVar11 = 0;
  local_res8[0] = param_1;
LAB_1400177cd:
  do {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar3 <= uVar11) {
      return cVar2;
    }
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar11);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar11);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar11);
    pbVar7 = pbVar6;
    iVar5 = FUN_140024ce8(pbVar6,(byte *)"disableandpassthru");
    if (iVar5 == 0) {
      if (iVar4 == 0) {
        cVar2 = '\x01';
        if (uVar3 != 0) {
          puVar8 = (undefined1 *)(param_2 + 0x80);
          pbVar6 = pbVar7;
          goto LAB_140017f8e;
        }
      }
      else {
LAB_140017cb3:
        cVar2 = '\0';
      }
      goto LAB_140017fa7;
    }
    iVar5 = FUN_140024ce8(pbVar6,(byte *)"videocard");
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return 0;
      }
      cVar2 = '\x01';
      if (uVar3 != 1) goto LAB_140017cad;
      pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
      iVar4 = FUN_140024ce8(pbVar7,&DAT_14002975c);
      if (iVar4 != 0) {
        iVar4 = FUN_140024ce8(pbVar7,(byte *)"internal3d");
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0x58) = 1;
        }
        else {
          iVar4 = FUN_140024ce8(pbVar7,(byte *)"geforce_ti_4800");
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0x58) = 2;
          }
          else {
            iVar4 = FUN_140024ce8(pbVar7,(byte *)"ati_radeon_8500");
            if (iVar4 == 0) {
              *(undefined4 *)(param_2 + 0x58) = 3;
            }
            else {
              iVar4 = FUN_140024ce8(pbVar7,(byte *)"matrox_parhelia-512");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x58) = 4;
              }
              else {
                iVar4 = FUN_140024ce8(pbVar7,(byte *)"geforce_fx_5700_ultra");
                if (iVar4 == 0) {
                  *(undefined4 *)(param_2 + 0x58) = 5;
                }
                else {
                  iVar4 = FUN_140024ce8(pbVar7,(byte *)"geforce_9800_gt");
                  if (iVar4 != 0) {
                    return 0;
                  }
                  if (param_5 < 0x277) {
                    return 0;
                  }
                  *(undefined4 *)(param_2 + 0x58) = 6;
                }
              }
            }
          }
        }
        goto LAB_140017c0f;
      }
      *(undefined4 *)(param_2 + 0x58) = 0;
      uVar11 = uVar11 + 1;
      goto LAB_1400177cd;
    }
    iVar5 = FUN_140024ce8(pbVar6,&DAT_1400297d8);
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return 0;
      }
      cVar2 = '\x01';
      if (uVar3 == 1) {
        plVar1 = (longlong *)(param_2 + 0x5c);
        *plVar1 = 0;
        pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
        iVar4 = FUN_1400242b4(pbVar7,(byte *)"%d %s",plVar1,local_448);
        if (iVar4 == 1) {
          *plVar1 = *plVar1 << 0x14;
        }
        else if (iVar4 == 2) {
          iVar4 = FUN_140024ce8(local_448,&DAT_1400281ec);
          if ((iVar4 == 0) || (iVar4 = FUN_140024ce8(local_448,&DAT_1400281f0), iVar4 == 0)) {
            *plVar1 = *plVar1 << 0x14;
          }
          else {
            iVar4 = FUN_140024ce8(local_448,&DAT_1400281f4);
            if ((iVar4 != 0) && (iVar4 = FUN_140024ce8(local_448,&DAT_1400281f8), iVar4 != 0)) {
              return 0;
            }
            *plVar1 = *plVar1 << 0x1e;
          }
          goto LAB_140017c0f;
        }
      }
    }
    else {
      iVar5 = FUN_140024ce8(pbVar6,(byte *)"filtering");
      if (iVar5 == 0) {
        if (iVar4 != 0) {
          return 0;
        }
        if (uVar3 == 1) {
          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
          iVar4 = FUN_140024ce8(pbVar7,(byte *)"appdriven");
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0x78) = 0;
          }
          else {
            iVar4 = FUN_140024ce8(pbVar7,(byte *)"pointsampled");
            if (iVar4 == 0) {
              *(undefined4 *)(param_2 + 0x78) = 0x100;
            }
            else {
              iVar4 = FUN_140024ce8(pbVar7,(byte *)"bilinear");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x78) = 0x200;
              }
              else {
                iVar4 = FUN_140024ce8(pbVar7,(byte *)"pointmip");
                if ((iVar4 == 0) && (0x281 < param_5)) {
                  *(undefined4 *)(param_2 + 0x78) = 0x500;
                }
                else {
                  iVar4 = FUN_140024ce8(pbVar7,(byte *)"linearmip");
                  if (iVar4 == 0) {
                    *(undefined4 *)(param_2 + 0x78) = 0x300;
                  }
                  else {
                    iVar4 = FUN_140024ce8(pbVar7,(byte *)"trilinear");
                    if (iVar4 != 0) {
                      local_res8[0] = local_res8[0] & 0xffffffff00000000;
                      cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar11,0,local_res8);
                      if (cVar2 != '\0') {
                        *(int *)(param_2 + 0x78) = (int)local_res8[0];
                        if (0xf < (int)local_res8[0] - 1U) {
                          cVar2 = '\0';
                        }
                      }
                      goto LAB_140017fa7;
                    }
                    *(undefined4 *)(param_2 + 0x78) = 0x400;
                  }
                }
              }
            }
          }
          goto LAB_140017c0f;
        }
LAB_140017cad:
        cVar2 = '\x01';
        if (1 < uVar3) goto LAB_140017cb3;
      }
      else {
        if ((0x281 < param_5) && (iVar5 = FUN_140024ce8(pbVar6,(byte *)"mipmapping"), iVar5 == 0)) {
          if (iVar4 != 0) {
            return 0;
          }
          cVar2 = '\x01';
          if (uVar3 != 1) goto LAB_140017cad;
          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
          iVar4 = FUN_140024ce8(pbVar7,(byte *)"appdriven");
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0x7c) = 0;
          }
          else {
            iVar4 = FUN_140024ce8(pbVar7,(byte *)"disabled");
            if (iVar4 == 0) {
              *(undefined4 *)(param_2 + 0x7c) = 1;
            }
            else {
              iVar4 = FUN_140024ce8(pbVar7,(byte *)"autogen_point");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x7c) = 2;
              }
              else {
                iVar4 = FUN_140024ce8(pbVar7,(byte *)"autogen_bilinear");
                if ((((iVar4 != 0) &&
                     (iVar4 = FUN_140024ce8(pbVar7,(byte *)"autogen_bicubic"), iVar4 != 0)) &&
                    (iVar4 = FUN_140024ce8(pbVar7,(byte *)"autogen_lanczos-2"), iVar4 != 0)) &&
                   (iVar4 = FUN_140024ce8(pbVar7,(byte *)"autogen_lanczos-3"), iVar4 != 0))
                goto LAB_140017fa7;
                *(undefined4 *)(param_2 + 0x7c) = 3;
              }
            }
          }
LAB_140017c0f:
          cVar2 = '\x01';
          uVar11 = uVar11 + 1;
          goto LAB_1400177cd;
        }
        pbVar7 = pbVar6;
        iVar5 = FUN_140024ce8(pbVar6,(byte *)"keepfilterifpointsampled");
        if ((iVar5 == 0) && (0x275 < param_5)) {
          if (iVar4 != 0) goto LAB_140017f7c;
          cVar2 = '\x01';
          if (uVar3 != 0) {
            puVar8 = (undefined1 *)(param_2 + 0x87);
            pbVar6 = pbVar7;
            goto LAB_140017f8e;
          }
        }
        else if ((param_5 < 0x282) &&
                (pbVar7 = pbVar6, iVar5 = FUN_140024ce8(pbVar6,(byte *)"disablemipmapping"),
                iVar5 == 0)) {
          if (iVar4 != 0) goto LAB_140017f7c;
          cVar2 = '\x01';
          if (uVar3 != 0) {
            local_res8[0] = local_res8[0] & 0xffffffffffffff00;
            uVar9 = FUN_140016328(pbVar7,param_3,param_4,uVar11,(undefined1 *)local_res8,uVar3);
            cVar2 = (char)uVar9;
            *(uint *)(param_2 + 0x7c) = (uint)((char)local_res8[0] != '\0');
          }
        }
        else {
          pbVar7 = pbVar6;
          iVar5 = FUN_140024ce8(pbVar6,(byte *)"resolution");
          if (iVar5 == 0) {
            cVar2 = FUN_1400164c0(pbVar7,param_3,param_4,uVar11,(int *)(param_2 + 100),
                                  (int *)(param_2 + 0x68),param_2 + 0x70,
                                  (undefined4 *)(param_2 + 0x74),uVar3,in_stack_fffffffffffffba0,
                                  param_5);
          }
          else {
            pbVar7 = pbVar6;
            iVar5 = FUN_140024ce8(pbVar6,(byte *)"antialiasing");
            if (iVar5 == 0) {
              if (iVar4 != 0) goto LAB_140017f7c;
              cVar2 = '\x01';
              if (uVar3 != 0) {
                cVar2 = FUN_140016688(pbVar7,param_3,param_4,uVar11,(undefined4 *)(param_2 + 0x6c),
                                      uVar3);
              }
            }
            else {
              pbVar7 = pbVar6;
              iVar5 = FUN_140024ce8(pbVar6,(byte *)"appcontrolledscreenmode");
              if (iVar5 == 0) {
                if (iVar4 != 0) goto LAB_140017f7c;
                cVar2 = '\x01';
                if (uVar3 == 0) goto LAB_140017fa7;
                puVar8 = (undefined1 *)(param_2 + 0x81);
                pbVar6 = pbVar7;
LAB_140017f8e:
                uVar9 = FUN_140016328(pbVar6,param_3,param_4,uVar11,puVar8,uVar3);
                cVar2 = (char)uVar9;
              }
              else {
                pbVar7 = pbVar6;
                iVar5 = FUN_140024ce8(pbVar6,(byte *)"disablealtentertotogglescreenmode");
                if (iVar5 == 0) {
                  if (iVar4 == 0) {
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      puVar8 = (undefined1 *)(param_2 + 0x82);
                      pbVar6 = pbVar7;
                      goto LAB_140017f8e;
                    }
                    goto LAB_140017fa7;
                  }
                  goto LAB_140017f7c;
                }
                if (param_5 < 0x27a) {
                  pcVar10 = "bilinearblitstretch";
LAB_140017e95:
                  pbVar7 = pbVar6;
                  iVar5 = FUN_140024ce8(pbVar6,(byte *)pcVar10);
                  if (iVar5 == 0) {
                    if (iVar4 != 0) goto LAB_140017f7c;
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      puVar8 = (undefined1 *)(param_2 + 0x84);
                      pbVar6 = pbVar7;
                      goto LAB_140017f8e;
                    }
                    goto LAB_140017fa7;
                  }
                }
                else if (0x27f < param_5) {
                  pcVar10 = "bilinear2doperations";
                  goto LAB_140017e95;
                }
                pbVar7 = pbVar6;
                iVar5 = FUN_140024ce8(pbVar6,(byte *)"phongshadingwhenpossible");
                if (iVar5 == 0) {
                  if (iVar4 != 0) goto LAB_140017f7c;
                  cVar2 = '\x01';
                  if (uVar3 != 0) {
                    puVar8 = (undefined1 *)(param_2 + 0x85);
                    pbVar6 = pbVar7;
                    goto LAB_140017f8e;
                  }
                }
                else {
                  pbVar7 = pbVar6;
                  iVar5 = FUN_140024ce8(pbVar6,(byte *)"forceverticalsync");
                  if (iVar5 == 0) {
                    if (iVar4 != 0) goto LAB_140017f7c;
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      puVar8 = (undefined1 *)(param_2 + 0x86);
                      pbVar6 = pbVar7;
                      goto LAB_140017f8e;
                    }
                  }
                  else {
                    pbVar7 = pbVar6;
                    iVar5 = FUN_140024ce8(pbVar6,(byte *)"dgvoodoowatermark");
                    if (iVar5 == 0) {
                      if (iVar4 != 0) goto LAB_140017f7c;
                      cVar2 = '\x01';
                      if (uVar3 != 0) {
                        puVar8 = (undefined1 *)(param_2 + 0x83);
                        pbVar6 = pbVar7;
                        goto LAB_140017f8e;
                      }
                    }
                    else {
                      pbVar7 = pbVar6;
                      iVar5 = FUN_140024ce8(pbVar6,(byte *)"fastvideomemoryaccess");
                      if (iVar5 == 0) {
                        if (iVar4 == 0) {
                          cVar2 = '\x01';
                          if (uVar3 != 0) {
                            puVar8 = (undefined1 *)(param_2 + 0x88);
                            pbVar6 = pbVar7;
                            goto LAB_140017f8e;
                          }
                        }
                        else {
LAB_140017f7c:
                          cVar2 = '\0';
                        }
                      }
                      else {
                        if ((param_5 < 0x286) ||
                           (iVar5 = FUN_140024ce8(pbVar6,(byte *)"disabled3dtnldevice"), iVar5 != 0)
                           ) {
                          return 0;
                        }
                        if (iVar4 != 0) goto LAB_140017f7c;
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          puVar8 = (undefined1 *)(param_2 + 0x89);
                          goto LAB_140017f8e;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_140017fa7:
    uVar11 = uVar11 + 1;
    if (cVar2 == '\0') {
      return 0;
    }
  } while( true );
}


/*
 * FUN_140017fcc at 140017fcc
 * char __fastcall FUN_140017fcc(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 140017fcc-140018d83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char FUN_140017fcc(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  uint param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 local_res8;
  undefined1 local_d8;
  char local_d7 [3];
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  byte local_b8 [128];
  
  uVar11 = 1;
  uVar15 = 0;
  local_res8 = param_1;
LAB_140018004:
  do {
    while( true ) {
      uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
      if (uVar3 <= uVar15) {
        return (char)uVar11;
      }
      pbVar7 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar15);
      uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar15);
      iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar15);
      if ((param_5 < 0x260) || (iVar5 = FUN_140024ce8(pbVar7,(byte *)"adapteridtype"), iVar5 != 0))
      break;
      if (iVar4 != 0) {
        return '\0';
      }
      uVar11 = 1;
      if (uVar3 != 0) {
        if (uVar3 != 1) goto LAB_140018894;
        pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
        iVar4 = FUN_140024ce8(pbVar7,(byte *)"nvidia");
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0xf7) = 1;
        }
        else {
          iVar4 = FUN_140024ce8(pbVar7,&DAT_1400299a8);
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0xf7) = 2;
          }
          else {
            iVar4 = FUN_140024ce8(pbVar7,(byte *)"intel");
            if (iVar4 != 0) {
              return '\0';
            }
            *(undefined4 *)(param_2 + 0xf7) = 3;
          }
        }
        goto LAB_140018ad9;
      }
      *(undefined4 *)(param_2 + 0xf7) = 0;
      uVar15 = uVar15 + 1;
    }
    pbVar13 = pbVar7;
    iVar5 = FUN_140024ce8(pbVar7,(byte *)"vendorid");
    if (iVar5 == 0) {
      if (iVar4 != 0) goto LAB_140018d0a;
      uVar11 = 1;
      if (uVar3 != 0) {
        lVar9 = param_2 + 0xfb;
LAB_1400185f9:
        bVar1 = FUN_1400163f4(pbVar13,param_3,param_4,uVar15,lVar9,uVar3);
LAB_140018d3f:
        uVar11 = (ulonglong)bVar1;
      }
    }
    else {
      pbVar13 = pbVar7;
      iVar5 = FUN_140024ce8(pbVar7,(byte *)"deviceid");
      if (iVar5 == 0) {
        if (iVar4 != 0) goto LAB_140018d0a;
        uVar11 = 1;
        if (uVar3 != 0) {
          lVar9 = param_2 + 0xff;
          goto LAB_1400185f9;
        }
      }
      else {
        pbVar13 = pbVar7;
        iVar5 = FUN_140024ce8(pbVar7,(byte *)"subsystemid");
        if (iVar5 == 0) {
          if (iVar4 != 0) goto LAB_140018d0a;
          uVar11 = 1;
          if (uVar3 != 0) {
            lVar9 = param_2 + 0x103;
            goto LAB_1400185f9;
          }
        }
        else {
          pbVar13 = pbVar7;
          iVar5 = FUN_140024ce8(pbVar7,(byte *)"revisionid");
          if (iVar5 == 0) {
            if (iVar4 != 0) goto LAB_140018d0a;
            uVar11 = 1;
            if (uVar3 != 0) {
              lVar9 = param_2 + 0x107;
              goto LAB_1400185f9;
            }
          }
          else {
            iVar5 = FUN_140024ce8(pbVar7,(byte *)"extraenumeratedresolutions");
            if (iVar5 != 0) {
              iVar5 = FUN_140024ce8(pbVar7,(byte *)"ditheringeffect");
              if (iVar5 == 0) {
                if (iVar4 != 0) {
                  return '\0';
                }
                if (uVar3 != 1) {
LAB_140018894:
                  uVar11 = 1;
                  if (1 < uVar3) {
LAB_140018c3a:
                    uVar11 = 0;
                  }
                  goto LAB_1400188f9;
                }
                pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
                iVar4 = FUN_140024ce8(pbVar7,(byte *)"pure32bit");
                if ((iVar4 == 0) ||
                   ((0x280 < param_5 &&
                    (iVar4 = FUN_140024ce8(pbVar7,(byte *)"high_quality"), iVar4 == 0)))) {
                  *(undefined4 *)(param_2 + 0x1cb) = 0;
                }
                else {
                  iVar4 = FUN_140024ce8(pbVar7,(byte *)"ordered2x2");
                  if (iVar4 == 0) {
                    *(undefined4 *)(param_2 + 0x1cb) = 1;
                  }
                  else {
                    iVar4 = FUN_140024ce8(pbVar7,(byte *)"ordered4x4");
                    if (iVar4 != 0) {
                      return '\0';
                    }
                    *(undefined4 *)(param_2 + 0x1cb) = 2;
                  }
                }
              }
              else {
                iVar5 = FUN_140024ce8(pbVar7,(byte *)"dithering");
                if (iVar5 == 0) {
                  if (iVar4 != 0) {
                    return '\0';
                  }
                  if (uVar3 != 1) goto LAB_140018894;
                  pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
                  iVar4 = FUN_140024ce8(pbVar7,(byte *)"disabled");
                  if (iVar4 == 0) {
                    *(undefined4 *)(param_2 + 0x1cf) = 0;
                  }
                  else {
                    iVar4 = FUN_140024ce8(pbVar7,(byte *)"appdriven");
                    if (iVar4 == 0) {
                      *(undefined4 *)(param_2 + 0x1cf) = 1;
                    }
                    else {
                      iVar4 = FUN_140024ce8(pbVar7,(byte *)"forceon16bit");
                      if (iVar4 == 0) {
                        *(undefined4 *)(param_2 + 0x1cf) = 2;
                      }
                      else {
                        iVar4 = FUN_140024ce8(pbVar7,(byte *)"forcealways");
                        if (iVar4 != 0) {
                          return '\0';
                        }
                        *(undefined4 *)(param_2 + 0x1cf) = 3;
                      }
                    }
                  }
                }
                else {
                  pbVar13 = pbVar7;
                  iVar5 = FUN_140024ce8(pbVar7,(byte *)"ditherorderedmatrixsizescale");
                  if (iVar5 == 0) {
                    if (iVar4 != 0) goto LAB_140018d0a;
                    uVar11 = 1;
                    if (uVar3 != 0) {
                      lVar9 = param_2 + 0x1d3;
                      goto LAB_1400185f9;
                    }
                    goto LAB_1400188f9;
                  }
                  iVar5 = FUN_140024ce8(pbVar7,(byte *)"depthbuffersbitdepth");
                  if (iVar5 == 0) {
                    if (iVar4 != 0) {
                      return '\0';
                    }
                    if (uVar3 != 1) goto LAB_140018894;
                    pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
                    iVar4 = FUN_140024ce8(pbVar7,(byte *)"appdriven");
                    if (iVar4 == 0) {
                      *(undefined4 *)(param_2 + 0x1d7) = 0;
                    }
                    else {
                      iVar4 = FUN_140024ce8(pbVar7,(byte *)"forcemin24bit");
                      if (iVar4 == 0) {
                        *(undefined4 *)(param_2 + 0x1d7) = 1;
                      }
                      else {
                        iVar4 = FUN_140024ce8(pbVar7,(byte *)"force32bit");
                        if (iVar4 != 0) {
                          return '\0';
                        }
                        *(undefined4 *)(param_2 + 0x1d7) = 2;
                      }
                    }
                  }
                  else {
                    iVar5 = FUN_140024ce8(pbVar7,(byte *)"default3drenderformat");
                    if ((iVar5 != 0) || (param_5 < 0x274)) {
                      pbVar13 = pbVar7;
                      iVar5 = FUN_140024ce8(pbVar7,(byte *)"shadercodegenerating");
                      if ((iVar5 == 0) && (param_5 == 0x260)) {
                        if (iVar4 != 0) {
                          return '\0';
                        }
                        if (uVar3 != 1) goto LAB_140018894;
                        puVar10 = &local_d4;
                        local_d4 = 0;
LAB_1400187e3:
                        bVar2 = FUN_1400163f4(pbVar13,param_3,param_4,uVar15,puVar10,1);
                        uVar11 = (ulonglong)bVar2;
                      }
                      else {
                        pbVar13 = pbVar7;
                        iVar5 = FUN_140024ce8(pbVar7,(byte *)"maxvsconstregisters");
                        if ((iVar5 == 0) && (0x260 < param_5)) {
                          if (iVar4 != 0) {
                            return '\0';
                          }
                          if (uVar3 != 1) goto LAB_140018894;
                          bVar2 = FUN_1400163f4(pbVar13,param_3,param_4,uVar15,
                                                (int *)(param_2 + 0x1e7),1);
                          iVar4 = *(int *)(param_2 + 0x1e7);
                          uVar11 = (ulonglong)bVar2;
                          if ((iVar4 - 0x100U & 0xfffffcff) != 0) {
                            return '\0';
                          }
                          if (iVar4 == 0x300) {
                            return '\0';
                          }
                        }
                        else {
                          pbVar13 = pbVar7;
                          iVar5 = FUN_140024ce8(pbVar7,(byte *)"npatchtesselationlevel");
                          if ((iVar5 == 0) && (0x275 < param_5)) {
                            if (iVar4 != 0) {
                              return '\0';
                            }
                            if (uVar3 == 1) {
                              bVar2 = FUN_1400163f4(pbVar13,param_3,param_4,uVar15,
                                                    (uint *)(param_2 + 0x1eb),1);
                              uVar11 = (ulonglong)bVar2;
                              if (8 < *(uint *)(param_2 + 0x1eb)) {
                                return '\0';
                              }
                            }
                            else {
                              uVar11 = 1;
                              if (1 < uVar3) {
                                return '\0';
                              }
                            }
                          }
                          else {
                            pbVar13 = pbVar7;
                            iVar5 = FUN_140024ce8(pbVar7,(byte *)"displayoutputenablemask");
                            if ((iVar5 == 0) && (0x278 < param_5)) {
                              if (iVar4 != 0) {
                                return '\0';
                              }
                              if (uVar3 == 1) {
                                puVar10 = (uint *)(param_2 + 0x1ef);
                                goto LAB_1400187e3;
                              }
                              goto LAB_140018894;
                            }
                            pbVar13 = pbVar7;
                            iVar5 = FUN_140024ce8(pbVar7,(byte *)"smootheddepthsampling");
                            if (iVar5 == 0) {
                              if (iVar4 != 0) goto LAB_140018d0a;
                              uVar11 = 1;
                              if (uVar3 != 0) {
                                pcVar12 = (char *)(param_2 + 0x1f5);
                                pbVar7 = pbVar13;
                                goto LAB_140018d26;
                              }
                            }
                            else {
                              pbVar13 = pbVar7;
                              iVar5 = FUN_140024ce8(pbVar7,(byte *)"msd3ddevicenames");
                              if (iVar5 == 0) {
                                if (iVar4 != 0) goto LAB_140018d0a;
                                uVar11 = 1;
                                if (uVar3 != 0) {
                                  pcVar12 = (char *)(param_2 + 499);
                                  pbVar7 = pbVar13;
                                  goto LAB_140018d26;
                                }
                              }
                              else {
                                pbVar13 = pbVar7;
                                iVar5 = FUN_140024ce8(pbVar7,(byte *)"rttexturesforcescaleandmsaa");
                                if (iVar5 == 0) {
                                  if (iVar4 != 0) goto LAB_140018d0a;
                                  uVar11 = 1;
                                  if (uVar3 != 0) {
                                    pcVar12 = (char *)(param_2 + 500);
                                    pbVar7 = pbVar13;
                                    goto LAB_140018d26;
                                  }
                                }
                                else {
                                  pbVar13 = pbVar7;
                                  iVar5 = FUN_140024ce8(pbVar7,(byte *)"deferredscreenmodeswitch");
                                  if (iVar5 == 0) {
                                    if (iVar4 != 0) goto LAB_140018d0a;
                                    uVar11 = 1;
                                    if (uVar3 != 0) {
                                      pcVar12 = (char *)(param_2 + 0x1f6);
                                      pbVar7 = pbVar13;
                                      goto LAB_140018d26;
                                    }
                                  }
                                  else {
                                    pbVar13 = pbVar7;
                                    iVar5 = FUN_140024ce8(pbVar7,(byte *)"disabledefaultresolutions"
                                                         );
                                    if (iVar5 == 0) {
                                      if (iVar4 != 0) goto LAB_140018d0a;
                                      uVar11 = 1;
                                      if (uVar3 != 0) {
                                        local_d7[0] = '\0';
                                        uVar11 = FUN_140016328(pbVar13,param_3,param_4,uVar15,
                                                               local_d7,uVar3);
                                        uVar11 = uVar11 & 0xff;
                                        *(uint *)(param_2 + 0x1df) =
                                             ~-(uint)(local_d7[0] != '\0') & 2;
                                      }
                                    }
                                    else {
                                      iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "defaultenumeratedresolutions");
                                      if (iVar5 == 0) {
                                        if (iVar4 != 0) {
                                          return '\0';
                                        }
                                        if (uVar3 == 1) {
                                          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                                     (param_3,param_4,uVar15,0);
                                          iVar4 = FUN_140024ce8(pbVar7,&DAT_140029bf0);
                                          if (iVar4 == 0) {
                                            *(undefined4 *)(param_2 + 0x1df) = 0;
                                          }
                                          else {
                                            iVar4 = FUN_140024ce8(pbVar7,(byte *)"classics");
                                            if (iVar4 == 0) {
                                              *(undefined4 *)(param_2 + 0x1df) = 1;
                                            }
                                            else {
                                              iVar4 = FUN_140024ce8(pbVar7,&DAT_140029334);
                                              if (iVar4 != 0) {
                                                return '\0';
                                              }
                                              *(undefined4 *)(param_2 + 0x1df) = 2;
                                            }
                                          }
                                          goto LAB_140018ad9;
                                        }
                                        goto LAB_140018894;
                                      }
                                      iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "enumeratedresolutionbitdepths");
                                      if (iVar5 == 0) {
                                        if (((char)uVar11 != '\0') && (uVar3 != 0)) {
                                          bVar1 = 0;
                                          *(undefined4 *)(param_2 + 0x1e3) = 0;
                                          local_d4 = 0;
                                          do {
                                            uVar14 = (ulonglong)local_d4;
                                            pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                                       (param_3,param_4,uVar15);
                                            iVar4 = FUN_1400242b4(pbVar7,(byte *)" 8 %c",&local_d8,
                                                                  uVar14);
                                            local_cc = FUN_1400242b4(pbVar7,(byte *)" 16 %c",
                                                                     &local_d8,uVar14);
                                            local_c8 = FUN_1400242b4(pbVar7,(byte *)" 32 %c",
                                                                     &local_d8,uVar14);
                                            iVar5 = FUN_1400242b4(pbVar7,(byte *)" all %c",&local_d8
                                                                  ,uVar14);
                                            if (iVar4 == -1) {
                                              *(uint *)(param_2 + 0x1e3) =
                                                   *(uint *)(param_2 + 0x1e3) | 1;
LAB_140018bfc:
                                              bVar1 = bVar1 | 1;
                                            }
                                            else {
                                              if (local_cc == 0xffffffff) {
                                                *(uint *)(param_2 + 0x1e3) =
                                                     *(uint *)(param_2 + 0x1e3) | 2;
                                                goto LAB_140018bfc;
                                              }
                                              if (local_c8 == -1) {
                                                *(uint *)(param_2 + 0x1e3) =
                                                     *(uint *)(param_2 + 0x1e3) | 4;
                                                goto LAB_140018bfc;
                                              }
                                              if (iVar5 == -1) {
                                                *(uint *)(param_2 + 0x1e3) =
                                                     *(uint *)(param_2 + 0x1e3) | 7;
                                                bVar1 = bVar1 | 2;
                                              }
                                              else {
                                                uVar11 = 0;
                                              }
                                            }
                                            local_d4 = local_d4 + 1;
                                          } while (local_d4 < uVar3);
                                          if (bVar1 == 3) goto LAB_140018c3a;
                                        }
                                      }
                                      else {
                                        pbVar13 = pbVar7;
                                        iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "primarysurfacebatchedupdate");
                                        if ((iVar5 == 0) && (0x261 < param_5)) {
                                          if (iVar4 != 0) goto LAB_140018d0a;
                                          uVar11 = 1;
                                          if (uVar3 != 0) {
                                            pcVar12 = (char *)(param_2 + 0x1f7);
                                            pbVar7 = pbVar13;
                                            goto LAB_140018d26;
                                          }
                                        }
                                        else {
                                          pbVar13 = pbVar7;
                                          iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "enablespecializedshaders");
                                          if ((iVar5 == 0) && (param_5 - 0x276 < 3)) {
                                            if (iVar4 != 0) goto LAB_140018d0a;
                                            uVar11 = 1;
                                            if (uVar3 != 0) {
                                              pcVar12 = local_d7;
                                              pbVar7 = pbVar13;
                                              goto LAB_140018d26;
                                            }
                                          }
                                          else {
                                            pbVar13 = pbVar7;
                                            iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "d3d12boundschecking");
                                            if ((iVar5 == 0) && (0x282 < param_5)) {
                                              if (iVar4 != 0) goto LAB_140018d0a;
                                              uVar11 = 1;
                                              if (uVar3 != 0) {
                                                pcVar12 = (char *)(param_2 + 0x1f9);
                                                pbVar7 = pbVar13;
                                                goto LAB_140018d26;
                                              }
                                            }
                                            else {
                                              pbVar13 = pbVar7;
                                              iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "suppressamdblacklist");
                                              if ((iVar5 == 0) && (0x280 < param_5)) {
                                                if (iVar4 == 0) {
                                                  uVar11 = 1;
                                                  if (uVar3 != 0) {
                                                    pcVar12 = (char *)(param_2 + 0x1f8);
                                                    pbVar7 = pbVar13;
LAB_140018d26:
                                                    uVar8 = FUN_140016328(pbVar7,param_3,param_4,
                                                                          uVar15,pcVar12,uVar3);
                                                    bVar1 = (byte)uVar8;
                                                    goto LAB_140018d3f;
                                                  }
                                                }
                                                else {
LAB_140018d0a:
                                                  uVar11 = 0;
                                                }
                                              }
                                              else {
                                                iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "alternativescaling");
                                                if (iVar5 != 0) {
                                                  return '\0';
                                                }
                                                if (param_5 < 0x285) {
                                                  return '\0';
                                                }
                                                if (iVar4 != 0) goto LAB_140018d0a;
                                                uVar11 = 1;
                                                if (uVar3 != 0) {
                                                  pcVar12 = (char *)(param_2 + 0x1fa);
                                                  goto LAB_140018d26;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_1400188f9;
                    }
                    if (iVar4 != 0) {
                      return '\0';
                    }
                    if (uVar3 != 1) goto LAB_140018894;
                    pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
                    iVar4 = FUN_140024ce8(pbVar7,&DAT_140029aa8);
                    if (iVar4 == 0) {
                      *(undefined4 *)(param_2 + 0x1db) = 0;
                    }
                    else {
                      iVar4 = FUN_140024ce8(pbVar7,(byte *)"argb8888");
                      if (iVar4 == 0) {
                        *(undefined4 *)(param_2 + 0x1db) = 1;
                      }
                      else {
                        iVar4 = FUN_140024ce8(pbVar7,(byte *)"argb2101010");
                        if (iVar4 == 0) {
                          *(undefined4 *)(param_2 + 0x1db) = 2;
                        }
                        else {
                          iVar4 = FUN_140024ce8(pbVar7,(byte *)"argb16161616");
                          if (iVar4 != 0) {
                            return '\0';
                          }
                          if (param_5 < 0x281) {
                            return '\0';
                          }
                          *(undefined4 *)(param_2 + 0x1db) = 3;
                        }
                      }
                    }
                  }
                }
              }
LAB_140018ad9:
              uVar11 = 1;
              uVar15 = uVar15 + 1;
              goto LAB_140018004;
            }
            if (iVar4 != 0) {
              return '\0';
            }
            uVar11 = 1;
            for (local_cc = 0; uVar14 = (ulonglong)local_cc, local_cc < uVar3;
                local_cc = local_cc + 1) {
              pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,uVar14);
              local_d0 = 0;
              *(undefined4 *)(param_2 + 0x113 + uVar14 * 0xc) = 0;
              iVar4 = FUN_1400242b4(pbVar7,(byte *)" max @ %d %c",&local_d0,&local_res8);
              local_d4 = FUN_1400242b4(pbVar7,(byte *)" max_4_3 @ %d %c",&local_d0,&local_res8);
              iVar5 = FUN_1400242b4(pbVar7,(byte *)" max_16_9 @ %d %c",&local_d0,&local_res8);
              uVar6 = local_d0;
              if (iVar4 == 1) {
                *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0xffffffff;
                *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
LAB_140018417:
                *(uint *)(param_2 + 0x113 + uVar14 * 0xc) = uVar6;
              }
              else {
                if (local_d4 == 1) {
                  *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0x100;
                  goto LAB_140018417;
                }
                if (iVar5 == 1) {
                  *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0x101;
                  goto LAB_140018417;
                }
                iVar4 = FUN_1400242b4(pbVar7,(byte *)" %s %c",local_b8,&local_res8);
                if ((iVar4 == 1) && (iVar4 = FUN_140024ce8(local_b8,&DAT_1400272d4), iVar4 == 0)) {
                  *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                }
                else {
                  iVar4 = FUN_1400242b4(pbVar7,(byte *)" %s %c",local_b8,&local_res8);
                  if ((iVar4 == 1) &&
                     (iVar4 = FUN_140024ce8(local_b8,(byte *)"max_4_3"), iVar4 == 0)) {
                    *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0x100;
                  }
                  else {
                    iVar4 = FUN_1400242b4(pbVar7,(byte *)" %s %c",local_b8,&local_res8);
                    if ((iVar4 == 1) &&
                       (iVar4 = FUN_140024ce8(local_b8,(byte *)"max_16_9"), iVar4 == 0)) {
                      *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                      *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0x101;
                    }
                    else {
                      local_d4 = 0;
                      uVar8 = FUN_140016440(pbVar7,&local_c4,local_c0,&local_d4,&local_c8);
                      if ((char)uVar8 == '\0') {
                        return '\0';
                      }
                      if (local_cc < 0x10) {
                        *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = local_c4;
                        *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = local_c0[0];
                        uVar6 = local_d4;
                        goto LAB_140018417;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_1400188f9:
    uVar15 = uVar15 + 1;
    if ((char)uVar11 == '\0') {
      return '\0';
    }
  } while( true );
}


/*
 * FUN_140018d84 at 140018d84
 * undefined1 __fastcall FUN_140018d84(ulonglong param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 140018d84-140019a1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1
FUN_140018d84(ulonglong param_1,longlong param_2,longlong *param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong local_res8;
  longlong local_res10;
  longlong lVar15;
  undefined1 local_178 [4];
  uint local_174;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  uint local_160;
  undefined4 *local_158;
  longlong local_150;
  longlong local_148;
  undefined4 *local_140;
  byte local_138 [256];
  
  local_150 = param_2 + 0xa2;
  uVar14 = 0;
  local_148 = param_2 + 0xa6;
  uVar8 = 1;
  local_140 = (undefined4 *)(param_2 + 0xb2);
  local_158 = (undefined4 *)(param_2 + 0xae);
  local_res8 = param_1;
  local_res10 = param_2;
  local_160 = 1;
  if (param_5 == 0x279) {
    local_160 = 3;
  }
LAB_140018e04:
  local_res8 = CONCAT44(local_res8._4_4_,uVar14);
  do {
    uVar4 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar4 <= uVar14) {
      return (char)uVar8;
    }
    pbVar7 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar14);
    uVar4 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar14);
    local_174 = uVar4;
    uVar5 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar14);
    if (param_5 < 0x263) {
      pbVar11 = pbVar7;
      iVar6 = FUN_140024ce8(pbVar7,(byte *)"forcenearestpointfilter");
      if (iVar6 == 0) {
        if ((uVar5 == 0) && (uVar4 != 0)) {
          local_res8 = local_res8 & 0xffffffffffffff00;
          uVar8 = FUN_140016328(pbVar11,param_3,param_4,uVar14,(undefined1 *)&local_res8,uVar4);
          uVar8 = uVar8 & 0xff;
          *(uint *)(param_2 + 0xca) = (uint)((char)local_res8 == '\0');
        }
      }
      else {
LAB_14001923f:
        pbVar11 = pbVar7;
        iVar6 = FUN_140024ce8(pbVar7,(byte *)"deframersize");
        if (iVar6 == 0) {
          if ((uVar5 == 0) && (uVar4 != 0)) {
            lVar9 = param_2 + 0x9e;
LAB_14001926b:
            bVar2 = FUN_1400163f4(pbVar11,param_3,param_4,uVar14,lVar9,uVar4);
LAB_140019286:
            uVar8 = (ulonglong)bVar2;
          }
        }
        else {
          pbVar11 = pbVar7;
          iVar6 = FUN_140024ce8(pbVar7,(byte *)"imagescalefactor");
          lVar9 = local_150;
          if (iVar6 == 0) {
            if (uVar4 == 0) {
              uVar4 = 0;
              if (uVar5 != 0) {
                do {
                  pbVar7 = (byte *)(**(code **)(*param_3 + 0x68))(param_3,param_4,uVar14,uVar4);
                  iVar6 = FUN_140024ce8(pbVar7,&DAT_140029e0c);
                  lVar15 = lVar9;
                  if ((iVar6 == 0) ||
                     (iVar6 = FUN_140024ce8(pbVar7,&DAT_140029e10), lVar15 = local_148, iVar6 == 0))
                  {
                    bVar2 = (**(code **)(*param_3 + 0x78))(param_3,param_4,uVar14,uVar4,lVar15);
                    uVar8 = (ulonglong)bVar2;
                  }
                  else {
                    uVar8 = 0;
                  }
                  uVar4 = uVar4 + 1;
                  param_2 = local_res10;
                } while (uVar4 < uVar5);
              }
            }
            else if (uVar5 == 0) {
              bVar3 = FUN_1400163f4(pbVar11,param_3,param_4,uVar14,(undefined4 *)(param_2 + 0xa2),
                                    uVar4);
              uVar8 = (ulonglong)bVar3;
              *(undefined4 *)(param_2 + 0xa6) = *(undefined4 *)(param_2 + 0xa2);
            }
          }
          else if (param_5 < 0x274) {
            if (0x261 < param_5) goto LAB_1400193ba;
LAB_14001959f:
            iVar6 = FUN_140024ce8(pbVar7,(byte *)"desktopresolution");
            if (iVar6 == 0) {
              if (uVar5 != 0) {
                return 0;
              }
              uVar8 = 1;
              if (uVar4 == 1) {
                pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
                local_170 = uVar5;
                uVar10 = FUN_140016440(pbVar7,&local_16c,&local_168,&local_170,&local_164);
                if ((char)uVar10 == '\0') {
                  return 0;
                }
                *(undefined4 *)(param_2 + 0x8a) = local_16c;
                *(undefined4 *)(param_2 + 0x8e) = local_168;
                *(uint *)(param_2 + 0x92) = local_170;
                *(undefined4 *)(param_2 + 0x96) = local_164;
                goto LAB_140019634;
              }
LAB_14001963e:
              if (uVar4 != 0) goto LAB_140019644;
            }
            else if ((param_5 < 0x260) ||
                    (pbVar11 = pbVar7, iVar6 = FUN_140024ce8(pbVar7,(byte *)"desktopbitdepth"),
                    iVar6 != 0)) {
              pbVar11 = pbVar7;
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"freemouse");
              if (iVar6 == 0) {
                if ((uVar5 == 0) && (uVar4 != 0)) {
                  uVar10 = FUN_140016328(pbVar11,param_3,param_4,uVar14,
                                         (undefined1 *)(param_2 + 0xe6),uVar4);
                  bVar2 = (byte)uVar10;
                  goto LAB_140019286;
                }
              }
              else {
                iVar6 = FUN_140024ce8(pbVar7,(byte *)"fpslimit");
                if (iVar6 == 0) {
                  if ((uVar5 == 0) && (uVar4 != 0)) {
                    if (uVar4 == 1) {
                      pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
                      uVar10 = FUN_14001418c(pbVar7,(uint *)(param_2 + 0xda),
                                             (undefined4 *)(param_2 + 0xde));
                      if ((char)uVar10 != '\0') {
                        uVar8 = 1;
                        goto LAB_140019a08;
                      }
                    }
LAB_140019644:
                    uVar8 = 0;
                  }
                }
                else {
                  iVar6 = FUN_140024ce8(pbVar7,(byte *)"environment");
                  if (iVar6 == 0) {
                    if ((uVar5 == 0) && (uVar4 != 0)) {
                      if (uVar4 != 1) goto LAB_140019644;
                      pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
                      iVar6 = FUN_140024ce8(pbVar7,(byte *)"dosbox");
                      if (iVar6 == 0) {
                        *(undefined4 *)(param_2 + 0xbe) = 1;
                      }
                      else {
                        iVar6 = FUN_140024ce8(pbVar7,&DAT_140029e9c);
                        if (iVar6 != 0) {
                          return 0;
                        }
                        *(undefined4 *)(param_2 + 0xbe) = 2;
                      }
                    }
                  }
                  else {
                    iVar6 = FUN_140024ce8(pbVar7,(byte *)"windowedattributes");
                    if (iVar6 == 0) {
                      if (uVar5 == 0) {
                        uVar5 = 0;
                        *(undefined4 *)(param_2 + 0xc2) = 0;
                        if (uVar4 != 0) {
                          do {
                            pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                       (param_3,param_4,uVar14,uVar5);
                            iVar6 = FUN_140024ce8(pbVar7,(byte *)"borderless");
                            if (iVar6 == 0) {
                              *(uint *)(param_2 + 0xc2) = *(uint *)(param_2 + 0xc2) | 1;
                            }
                            else {
                              iVar6 = FUN_140024ce8(pbVar7,(byte *)"alwaysontop");
                              if (iVar6 == 0) {
                                *(uint *)(param_2 + 0xc2) = *(uint *)(param_2 + 0xc2) | 2;
                              }
                              else {
                                iVar6 = FUN_140024ce8(pbVar7,(byte *)"fullscreensize");
                                if (iVar6 == 0) {
                                  *(uint *)(param_2 + 0xc2) = *(uint *)(param_2 + 0xc2) | 4;
                                }
                                else {
                                  uVar8 = 0;
                                }
                              }
                            }
                            uVar5 = uVar5 + 1;
                          } while (uVar5 < uVar4);
                        }
                      }
                    }
                    else if ((param_5 < 0x273) ||
                            (iVar6 = FUN_140024ce8(pbVar7,(byte *)"fullscreenattributes"),
                            iVar6 != 0)) {
                      if (param_5 < 0x280) {
                        if (0x279 < param_5) {
                          return 0;
                        }
                        iVar6 = FUN_140024ce8(pbVar7,(byte *)"enablegdihooking");
                        if (iVar6 != 0) {
                          return 0;
                        }
                        if ((uVar5 == 0) && (uVar4 != 0)) {
                          local_res8 = local_res8 & 0xffffffffffffff00;
                          uVar8 = FUN_140016328(pbVar7,param_3,param_4,uVar14,
                                                (undefined1 *)&local_res8,uVar4);
                          uVar8 = uVar8 & 0xff;
                          *(uint *)(param_2 + 0xe2) = -(uint)((char)local_res8 != '\0') & local_160;
                        }
                      }
                      else {
                        iVar6 = FUN_140024ce8(pbVar7,(byte *)"systemhookflags");
                        if (iVar6 != 0) {
                          return 0;
                        }
                        if (uVar5 == 0) {
                          uVar5 = 0;
                          *(undefined4 *)(param_2 + 0xe2) = 0;
                          if (uVar4 != 0) {
                            do {
                              pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                         (param_3,param_4,uVar14,uVar5);
                              iVar6 = FUN_140024ce8(pbVar7,&DAT_140029f20);
                              if (iVar6 == 0) {
                                *(uint *)(param_2 + 0xe2) = *(uint *)(param_2 + 0xe2) | 1;
                              }
                              else {
                                iVar6 = FUN_140024ce8(pbVar7,(byte *)"cursor");
                                if (iVar6 == 0) {
                                  *(uint *)(param_2 + 0xe2) = *(uint *)(param_2 + 0xe2) | 2;
                                }
                                else {
                                  uVar8 = 0;
                                }
                              }
                              uVar5 = uVar5 + 1;
                            } while (uVar5 < uVar4);
                          }
                        }
                      }
                    }
                    else if (uVar5 == 0) {
                      uVar5 = 0;
                      *(undefined4 *)(param_2 + 0xc6) = 0;
                      if (uVar4 != 0) {
                        do {
                          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                     (param_3,param_4,uVar14,uVar5);
                          iVar6 = FUN_140024ce8(pbVar7,&DAT_140029f08);
                          if (iVar6 == 0) {
                            *(uint *)(param_2 + 0xc6) = *(uint *)(param_2 + 0xc6) | 1;
                          }
                          else {
                            uVar8 = 0;
                          }
                          uVar5 = uVar5 + 1;
                        } while (uVar5 < uVar4);
                      }
                    }
                  }
                }
              }
            }
            else if ((uVar5 == 0) && (uVar4 != 0)) {
              lVar9 = param_2 + 0x9a;
              goto LAB_14001926b;
            }
          }
          else {
            pbVar11 = pbVar7;
            iVar6 = FUN_140024ce8(pbVar7,(byte *)"cursorscalefactor");
            if (iVar6 == 0) {
              if ((uVar5 == 0) && (uVar4 != 0)) {
                lVar9 = param_2 + 0xaa;
                goto LAB_14001926b;
              }
            }
            else {
LAB_1400193ba:
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"displayroi");
              puVar1 = local_140;
              if (iVar6 != 0) goto LAB_14001959f;
              uVar12 = 0;
              uVar13 = uVar4;
              if (uVar5 != 0) {
                do {
                  pbVar7 = (byte *)(**(code **)(*param_3 + 0x68))(param_3,param_4,uVar14,uVar12);
                  iVar6 = FUN_140024ce8(pbVar7,&DAT_140029e3c);
                  if (iVar6 == 0) {
                    pbVar7 = (byte *)(**(code **)(*param_3 + 0x70))(param_3,param_4,uVar14,uVar12);
                    iVar6 = FUN_1400242b4(pbVar7,(byte *)" %s %c",local_138,local_178);
                    if ((iVar6 == 1) &&
                       (iVar6 = FUN_140024ce8(local_138,(byte *)"centered"), iVar6 == 0)) {
                      *puVar1 = 0xffffffff;
                      *local_158 = 0xffffffff;
                    }
                    else {
                      iVar6 = FUN_1400242b4(pbVar7,(byte *)" ( %d | %d ) %c",local_158,puVar1);
                      if (iVar6 != 2) {
                        uVar8 = 0;
                      }
                    }
                    uVar14 = (uint)local_res8;
                  }
                  uVar12 = uVar12 + 1;
                  param_2 = local_res10;
                  uVar13 = local_174;
                } while (uVar12 < uVar5);
              }
              if ((char)uVar8 != '\0') {
                uVar4 = uVar5;
                if (uVar13 == 0) goto LAB_14001963e;
                if (uVar13 != 1) {
                  return 0;
                }
                local_res8 = local_res8 & 0xffffffff00000000;
                local_174 = 0;
                pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
                iVar6 = FUN_1400242b4(pbVar7,(byte *)" %d_%d %c",&local_res8,&local_174);
                if (iVar6 == 2) break;
                iVar6 = FUN_1400242b4(pbVar7,(byte *)" ( %d | %d ) %c",param_2 + 0xb6,param_2 + 0xba
                                     );
                if (iVar6 != 2) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar6 = FUN_140024ce8(pbVar7,(byte *)"resampling");
      if (iVar6 == 0) {
        if ((uVar5 == 0) && (uVar4 != 0)) {
          if (uVar4 != 1) goto LAB_140019644;
          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
          iVar6 = FUN_140024ce8(pbVar7,(byte *)"pointsampled");
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0xca) = 0;
          }
          else {
            iVar6 = FUN_140024ce8(pbVar7,(byte *)"bilinear");
            if (iVar6 == 0) {
              *(undefined4 *)(param_2 + 0xca) = 1;
            }
            else {
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"bicubic");
              if (iVar6 == 0) {
                *(undefined4 *)(param_2 + 0xca) = 2;
              }
              else {
                iVar6 = FUN_140024ce8(pbVar7,(byte *)"lanczos-2");
                if (iVar6 == 0) {
                  *(undefined4 *)(param_2 + 0xca) = 3;
                }
                else {
                  iVar6 = FUN_140024ce8(pbVar7,(byte *)"lanczos-3");
                  if (iVar6 != 0) {
                    return 0;
                  }
                  *(undefined4 *)(param_2 + 0xca) = 4;
                }
              }
            }
          }
        }
      }
      else if ((param_5 < 0x279) ||
              (iVar6 = FUN_140024ce8(pbVar7,(byte *)"presentationmodel"), iVar6 != 0)) {
        if ((param_5 < 0x281) || (iVar6 = FUN_140024ce8(pbVar7,(byte *)"colorspace"), iVar6 != 0)) {
          if ((param_5 < 0x287) ||
             (pbVar11 = pbVar7, iVar6 = FUN_140024ce8(pbVar7,(byte *)"watermarkdisplayduration"),
             iVar6 != 0)) goto LAB_14001923f;
          if (uVar5 == 0) {
            if (uVar4 == 0) goto LAB_140019644;
            bVar3 = FUN_1400163f4(pbVar11,param_3,param_4,uVar14,param_2 + 0xd6,uVar4);
            uVar8 = (ulonglong)bVar3;
          }
        }
        else if ((uVar5 == 0) && (uVar4 != 0)) {
          if (uVar4 != 1) goto LAB_140019644;
          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
          iVar6 = FUN_140024ce8(pbVar7,(byte *)"appdriven");
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0xd2) = 0;
          }
          else {
            iVar6 = FUN_140024ce8(pbVar7,(byte *)"argb8888_sdr");
            if (iVar6 == 0) {
              *(undefined4 *)(param_2 + 0xd2) = 1;
            }
            else {
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"argb2101010_sdr");
              if (iVar6 == 0) {
                *(undefined4 *)(param_2 + 0xd2) = 2;
              }
              else {
                iVar6 = FUN_140024ce8(pbVar7,(byte *)"argb2101010_sdr_wcg");
                if (iVar6 == 0) {
                  *(undefined4 *)(param_2 + 0xd2) = 3;
                }
                else {
                  iVar6 = FUN_140024ce8(pbVar7,(byte *)"argb16161616_hdr");
                  if (iVar6 != 0) {
                    return 0;
                  }
                  *(undefined4 *)(param_2 + 0xd2) = 4;
                }
              }
            }
          }
        }
      }
      else if ((uVar5 == 0) && (uVar4 != 0)) {
        if (uVar4 != 1) goto LAB_140019644;
        pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
        iVar6 = FUN_140024ce8(pbVar7,&DAT_140029aa8);
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + 0xce) = 0;
        }
        else {
          iVar6 = FUN_140024ce8(pbVar7,(byte *)"discard");
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0xce) = 1;
          }
          else {
            iVar6 = FUN_140024ce8(pbVar7,&DAT_140029d40);
            if (iVar6 == 0) {
              *(undefined4 *)(param_2 + 0xce) = 2;
            }
            else {
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"flip_discard");
              if (iVar6 == 0) {
                *(undefined4 *)(param_2 + 0xce) = 3;
              }
              else {
                iVar6 = FUN_140024ce8(pbVar7,(byte *)"flip_seq");
                if (iVar6 != 0) {
                  return 0;
                }
                *(undefined4 *)(param_2 + 0xce) = 4;
              }
            }
          }
        }
      }
    }
LAB_140019a08:
    uVar14 = uVar14 + 1;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    if ((char)uVar8 == '\0') {
      return 0;
    }
  } while( true );
  *(uint *)(param_2 + 0xba) = (uint)local_res8 << 0x10 | local_174;
  *(undefined4 *)(param_2 + 0xb6) = 0xffffffff;
LAB_140019634:
  uVar14 = uVar14 + 1;
  goto LAB_140018e04;
}


/*
 * FUN_140019a20 at 140019a20
 * undefined8 __fastcall FUN_140019a20(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 140019a20-140019ab0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140019a20(undefined8 param_1,longlong *param_2,undefined4 param_3,uint param_4,
                       undefined4 *param_5,int param_6)

{
  int iVar1;
  byte *pbVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined4 extraout_var_00;
  
  uVar3 = (ulonglong)param_4;
  if (param_6 == 1) {
    pbVar2 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,uVar3,0);
    iVar1 = FUN_140024ce8(pbVar2,(byte *)"disable");
    if (iVar1 == 0) {
      *param_5 = 0;
      param_5 = (undefined4 *)CONCAT44(extraout_var,iVar1);
    }
    else {
      iVar1 = FUN_140024ce8(pbVar2,(byte *)"enable");
      if (iVar1 == 0) {
        *param_5 = 1;
      }
      else {
        iVar1 = FUN_140024ce8(pbVar2,(byte *)"enablebreak");
        uVar3 = CONCAT44(extraout_var_00,iVar1);
        if (iVar1 != 0) goto LAB_140019aa9;
        *param_5 = 2;
      }
    }
    uVar3 = CONCAT71((int7)((ulonglong)param_5 >> 8),1);
  }
  else {
LAB_140019aa9:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}


/*
 * FUN_140019ab4 at 140019ab4
 * undefined1 __fastcall FUN_140019ab4(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4)
 * Address ranges: 140019ab4-140019c89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_140019ab4(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  
  cVar2 = '\x01';
  uVar9 = 0;
  do {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar3 <= uVar9) {
      return cVar2;
    }
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar9);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar9);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar9);
    pbVar8 = pbVar6;
    iVar5 = FUN_140024ce8(pbVar6,&DAT_140029f64);
    puVar1 = (undefined4 *)(param_2 + 0x1fb);
    if (((iVar5 == 0) ||
        (pbVar8 = pbVar6, iVar5 = FUN_140024ce8(pbVar6,(byte *)"warning"),
        puVar1 = (undefined4 *)(param_2 + 0x1ff), iVar5 == 0)) ||
       (pbVar8 = pbVar6, iVar5 = FUN_140024ce8(pbVar6,(byte *)"error"),
       puVar1 = (undefined4 *)(param_2 + 0x203), iVar5 == 0)) {
      if ((iVar4 == 0) && (uVar3 != 0)) {
        uVar7 = FUN_140019a20(pbVar8,param_3,param_4,uVar9,puVar1,uVar3);
        cVar2 = (char)uVar7;
      }
    }
    else {
      iVar5 = FUN_140024ce8(pbVar6,(byte *)"maxtracelevel");
      if (iVar5 == 0) {
        if ((iVar4 == 0) && (uVar3 == 1)) {
          cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar9,0,param_2 + 0x207);
        }
      }
      else {
        iVar5 = FUN_140024ce8(pbVar6,(byte *)"logtofile");
        if (iVar5 != 0) {
          return 0;
        }
        if ((iVar4 == 0) && (uVar3 != 0)) {
          uVar7 = FUN_140016328(pbVar6,param_3,param_4,uVar9,(undefined1 *)(param_2 + 0x20b),uVar3);
          cVar2 = (char)uVar7;
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while (cVar2 != '\0');
  return 0;
}


/*
 * FUN_140019c8c at 140019c8c
 * char __fastcall FUN_140019c8c(undefined4 * param_1, longlong * param_2, ulonglong param_3)
 * Address ranges: 140019c8c-140019e48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char FUN_140019c8c(undefined4 *param_1,longlong *param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  longlong *plVar5;
  byte *pbVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res20 [2];
  
  local_res20[0] = 0;
  cVar1 = '\x01';
  uVar8 = 0;
  do {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    if (uVar2 <= uVar8) {
      return cVar1;
    }
    uVar7 = (ulonglong)uVar8;
    plVar5 = param_2;
    pbVar4 = (byte *)(**(code **)(*param_2 + 0x30))();
    if (pbVar4 == (byte *)0x0) {
      cVar1 = FUN_140016798(plVar5,uVar7,param_2,uVar8,(int *)local_res20);
    }
    else {
      iVar3 = FUN_140024ce8(pbVar4,(byte *)"general");
      if (iVar3 == 0) {
        cVar1 = FUN_140016964(param_3,param_1,param_2,uVar8,local_res20[0]);
      }
      else {
        iVar3 = FUN_140024ce8(pbVar4,(byte *)"glide");
        if (iVar3 == 0) {
          cVar1 = FUN_140016fdc(param_3,(longlong)param_1,param_2,uVar8,local_res20[0]);
        }
        else {
          iVar3 = FUN_140024ce8(pbVar4,(byte *)"directx");
          if (iVar3 == 0) {
            cVar1 = FUN_1400177a0(param_3,(longlong)param_1,param_2,uVar8,local_res20[0]);
          }
          else {
            pbVar6 = pbVar4;
            iVar3 = FUN_140024ce8(pbVar4,(byte *)"glideext");
            if (iVar3 == 0) {
              cVar1 = FUN_14001758c(pbVar6,(longlong)param_1,param_2,uVar8);
            }
            else {
              iVar3 = FUN_140024ce8(pbVar4,(byte *)"directxext");
              if (iVar3 == 0) {
                cVar1 = FUN_140017fcc(param_3,(longlong)param_1,param_2,uVar8,local_res20[0]);
              }
              else {
                iVar3 = FUN_140024ce8(pbVar4,(byte *)"generalext");
                if (iVar3 == 0) {
                  cVar1 = FUN_140018d84(param_3,(longlong)param_1,param_2,uVar8,local_res20[0]);
                }
                else {
                  iVar3 = FUN_140024ce8(pbVar4,(byte *)"debug");
                  if (iVar3 != 0) {
                    return '\0';
                  }
                  cVar1 = FUN_140019ab4(pbVar4,(longlong)param_1,param_2,uVar8);
                }
              }
            }
          }
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while (cVar1 != '\0');
  return '\0';
}


/*
 * FUN_140019e4c at 140019e4c
 * longlong __fastcall FUN_140019e4c(undefined8 * param_1, char * param_2)
 * Address ranges: 140019e4c-140019e93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


longlong FUN_140019e4c(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140024d20(param_2);
  FUN_140024620(param_1,(undefined8 *)param_2,uVar1 & 0xffffffff);
  *(undefined1 *)((uVar1 & 0xffffffff) + (longlong)param_1) = 0;
  return (longlong)param_1 + (uVar1 & 0xffffffff) + 1;
}


/*
 * FUN_140019e94 at 140019e94
 * undefined __fastcall FUN_140019e94(undefined8 * param_1, uint param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140019e94-140019ec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140019e94(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  CHAR local_18 [16];
  
  FUN_140024290(local_18,"%d",(ulonglong)param_2,param_4);
  FUN_140019e4c(param_1,local_18);
  return;
}


/*
 * FUN_140019ec4 at 140019ec4
 * undefined __fastcall FUN_140019ec4(undefined8 * param_1, uint param_2, uint param_3, ulonglong param_4, uint param_5, char param_6)
 * Address ranges: 140019ec4-14001a056
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140019ec4(undefined8 *param_1,uint param_2,uint param_3,ulonglong param_4,uint param_5,
                  char param_6)

{
  ulonglong uVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  CHAR *pCVar6;
  CHAR local_c8 [16];
  CHAR local_b8 [16];
  CHAR local_a8 [128];
  
  uVar1 = (ulonglong)param_3;
  if ((((int)param_4 == 0) || (param_5 == 0)) || (param_6 == '\0')) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)((param_4 & 0xffffffff) / (ulonglong)param_5);
  }
  if ((param_2 < 0xfffffff8) ||
     (((param_2 != param_3 || (param_2 == 0xfffffff9)) && (0xff < param_3)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_140024290(local_b8,"%ux",uVar1,param_4);
  FUN_140024290(local_c8,"_%ux",uVar1,param_4);
  pCVar6 = local_c8;
  if (0xfd < param_3 - 2) {
    pCVar6 = "";
  }
  if (param_2 == 0) {
    pcVar5 = "unforced";
  }
  else if (param_2 == 0xfffffff8) {
    pcVar5 = "desktop";
  }
  else if (param_2 == 0xfffffff9) {
    pcVar5 = local_b8;
    pCVar6 = "";
  }
  else if (param_2 == 0xfffffffa) {
    pcVar5 = "max_qhd_isf";
  }
  else if (param_2 == 0xfffffffb) {
    pcVar5 = "max_qhd";
  }
  else if (param_2 == 0xfffffffc) {
    pcVar5 = "max_fhd_isf";
  }
  else if (param_2 == 0xfffffffd) {
    pcVar5 = "max_fhd";
  }
  else if (param_2 == 0xfffffffe) {
    pcVar5 = "max_isf";
  }
  else if (param_2 == 0xffffffff) {
    pcVar5 = "max";
  }
  else {
    pcVar5 = "";
  }
  if ((bVar2) || ((param_2 == 0 && (param_3 == 0)))) {
    pcVar3 = "%s%s";
    if (iVar4 != 0) {
      pcVar3 = "%s%s, refrate:%d";
    }
    FUN_140024290(local_a8,pcVar3,pcVar5,pCVar6);
  }
  else {
    pcVar5 = "h:%d, v:%d";
    if (iVar4 != 0) {
      pcVar5 = "h:%d, v:%d, refrate:%d";
    }
    FUN_140024290(local_a8,pcVar5,(ulonglong)param_2,uVar1);
  }
  FUN_140019e4c(param_1,local_a8);
  return;
}


/*
 * FUN_14001a058 at 14001a058
 * undefined __fastcall FUN_14001a058(undefined8 * param_1, int param_2)
 * Address ranges: 14001a058-14001a0b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001a058(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = "appdriven";
  }
  else if (param_2 == 1) {
    pcVar1 = "off";
  }
  else if (param_2 == 2) {
    pcVar1 = "2x";
  }
  else if (param_2 == 4) {
    pcVar1 = "4x";
  }
  else if (param_2 == 8) {
    pcVar1 = "8x";
  }
  else if (param_2 == 0x10) {
    pcVar1 = "16x";
  }
  else {
    pcVar1 = "";
  }
  FUN_140019e4c(param_1,pcVar1);
  return;
}


/*
 * FUN_14001a0b8 at 14001a0b8
 * undefined __fastcall FUN_14001a0b8(undefined8 * param_1, longlong param_2, uint param_3, uint param_4)
 * Address ranges: 14001a0b8-14001a147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001a0b8(undefined8 *param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint local_res18 [4];
  char local_108 [256];
  
  local_res18[0] = param_3 & param_4;
  local_108[0] = '\0';
  uVar1 = 0;
  if (local_res18[0] != 0) {
    for (; (local_res18[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (local_res18[0] != 0) {
    pbVar2 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    while( true ) {
      FUN_140024cc4(local_108,*(char **)(param_2 + (ulonglong)(uVar1 & 0xff) * 8));
      uVar1 = 0;
      if (local_res18[0] != 0) {
        for (; (local_res18[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (local_res18[0] == 0) break;
      pbVar2 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar1 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
      FUN_140024cc4(local_108,", ");
    }
  }
  FUN_140019e4c(param_1,local_108);
  return;
}


/*
 * FUN_14001a148 at 14001a148
 * undefined __fastcall FUN_14001a148(uint * param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001a148-14001a436
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001a148(uint *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *local_res10;
  CHAR local_38 [16];
  
  local_res10 = param_2;
  FUN_14001b9ec(param_3,&local_res10);
  if (*param_1 < 7) {
    pcVar2 = (&PTR_s_bestavailable_14002a0e0)[(int)*param_1];
  }
  else {
    pcVar2 = "";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(param_2,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  FUN_140024290(local_38,"%d",(ulonglong)param_1[1],param_4);
  pcVar2 = local_38;
  if (param_1[1] == 0) {
    pcVar2 = "all";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  uVar3 = (ulonglong)param_1[2];
  FUN_140024290(local_38,"%d",uVar3,param_4);
  pcVar2 = local_38;
  if (param_1[2] == 0) {
    pcVar2 = "default";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar4 = "false";
  pcVar2 = "false";
  if ((char)param_1[8] == '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  if (param_1[7] < 9) {
    pcVar2 = (&PTR_s_unspecified_14002a150)[(int)param_1[7]];
  }
  else {
    pcVar2 = "";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  if (param_1[6] == 0) {
    puVar1 = (undefined8 *)FUN_140019e4c(puVar1,"false");
    local_res10 = puVar1;
  }
  else if (param_1[6] == 1) {
    puVar1 = (undefined8 *)FUN_140019e4c(puVar1,"true");
    local_res10 = puVar1;
  }
  else {
    FUN_140019e4c(puVar1,"");
  }
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if (*(char *)((longlong)param_1 + 0x22) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,param_1[3],uVar3,param_4);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,param_1[4],uVar3,param_4);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,param_1[5],uVar3,param_4);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if (*(char *)((longlong)param_1 + 0x26) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if (*(char *)((longlong)param_1 + 0x23) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar2 = "false";
  if ((char)param_1[9] != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  if (*(char *)((longlong)param_1 + 0x25) != '\0') {
    pcVar4 = "true";
  }
  FUN_140019e4c(puVar1,pcVar4);
  return;
}


/*
 * FUN_14001a438 at 14001a438
 * undefined __fastcall FUN_14001a438(longlong param_1, undefined8 * param_2, longlong * param_3, ulonglong param_4)
 * Address ranges: 14001a438-14001a8dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001a438(longlong param_1,undefined8 *param_2,longlong *param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint *puVar6;
  char *local_res8;
  undefined8 *local_res10;
  CHAR local_b8 [32];
  CHAR local_98 [128];
  
  local_b8[0] = '\0';
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x8a);
  local_res10 = param_2;
  if ((*(uint *)(param_1 + 0x8a) != 0) &&
     (param_4 = (ulonglong)*(uint *)(param_1 + 0x8e), *(uint *)(param_1 + 0x8e) != 0)) {
    if ((*(uint *)(param_1 + 0x92) == 0) || (*(uint *)(param_1 + 0x96) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x92) / *(uint *)(param_1 + 0x96);
    }
    pcVar4 = "%dx%d";
    if (uVar2 != 0) {
      pcVar4 = "%dx%d@%d";
    }
    FUN_140024290(local_b8,pcVar4,uVar5,param_4);
  }
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e4c(param_2,local_b8);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  if (*(uint *)(param_1 + 0x9a) == 0) {
    puVar3 = (undefined8 *)FUN_140019e4c(puVar3,"");
  }
  else {
    puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x9a),uVar5,param_4);
  }
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x9e),uVar5,param_4);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar6 = (uint *)(ulonglong)*(uint *)(param_1 + 0xa6);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xa2);
  if (*(uint *)(param_1 + 0xa2) == *(uint *)(param_1 + 0xa6)) {
    FUN_140024290(local_98,"%d",uVar5,puVar6);
  }
  else {
    FUN_140024290(local_98,"x:%d, y:%d",uVar5,puVar6);
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_98);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0xaa),uVar5,puVar6);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  uVar2 = *(uint *)(param_1 + 0xb6);
  uVar5 = (ulonglong)uVar2;
  local_98[0] = '\0';
  if (uVar2 == 0xffffffff) {
    pcVar4 = "%d_%d";
    puVar6 = (uint *)(ulonglong)(*(uint *)(param_1 + 0xba) & 0xffff);
    uVar5 = (ulonglong)(*(uint *)(param_1 + 0xba) >> 0x10);
  }
  else {
    if ((uVar2 == 0) ||
       (puVar6 = (uint *)(ulonglong)*(uint *)(param_1 + 0xba), *(uint *)(param_1 + 0xba) == 0))
    goto LAB_14001a639;
    pcVar4 = "(%d|%d)";
  }
  FUN_140024290(local_98,pcVar4,uVar5,puVar6);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xae);
  puVar6 = (uint *)(param_1 + 0xb2);
  if ((*(uint *)(param_1 + 0xae) == 0xffffffff) && (*puVar6 == 0xffffffff)) {
    pcVar4 = ", pos:centered";
  }
  else {
    puVar6 = (uint *)(ulonglong)*puVar6;
    FUN_140024290(local_b8,", pos:(%d|%d)",uVar5,puVar6);
    pcVar4 = local_b8;
  }
  FUN_140024cc4(local_98,pcVar4);
LAB_14001a639:
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_98);
  iVar1 = *(int *)(param_1 + 0xca);
  if (iVar1 == 0) {
    local_res8 = "pointsampled";
  }
  else if (iVar1 == 1) {
    local_res8 = "bilinear";
  }
  else if (iVar1 == 2) {
    local_res8 = "bicubic";
  }
  else if (iVar1 == 3) {
    local_res8 = "lanczos-2";
  }
  else if (iVar1 == 4) {
    local_res8 = "lanczos-3";
  }
  else {
    local_res8 = "";
  }
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res8);
  iVar1 = *(int *)(param_1 + 0xce);
  if (iVar1 == 0) {
    local_res8 = "auto";
  }
  else if (iVar1 == 1) {
    local_res8 = "discard";
  }
  else if (iVar1 == 2) {
    local_res8 = "seq";
  }
  else if (iVar1 == 3) {
    local_res8 = "flip_discard";
  }
  else if (iVar1 == 4) {
    local_res8 = "flip_seq";
  }
  else {
    local_res8 = "";
  }
  FUN_14001b9ec(param_3,&local_res8);
  iVar1 = *(int *)(param_1 + 0xd2);
  if (iVar1 == 0) {
    local_res8 = "appdriven";
  }
  else if (iVar1 == 1) {
    local_res8 = "argb8888_sdr";
  }
  else if (iVar1 == 2) {
    local_res8 = "argb2101010_sdr";
  }
  else if (iVar1 == 3) {
    local_res8 = "argb2101010_sdr_wcg";
  }
  else if (iVar1 == 4) {
    local_res8 = "argb16161616_hdr";
  }
  else {
    local_res8 = "";
  }
  FUN_14001b9ec(param_3,&local_res8);
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0xd6),uVar5,puVar6);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar4 = "false";
  if (*(char *)(param_1 + 0xe6) != '\0') {
    pcVar4 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar4);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_14001a0b8(puVar3,0x14002c290,*(uint *)(param_1 + 0xc2),7);
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_14001a0b8(puVar3,0x14002c278,*(uint *)(param_1 + 0xc6),1);
  local_res10 = puVar3;
  FUN_1400143b0(*(uint *)(param_1 + 0xda),*(uint *)(param_1 + 0xde),local_98);
  FUN_14001b9ec(param_3,&local_res10);
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_98);
  if (*(int *)(param_1 + 0xbe) == 1) {
    local_res8 = "DosBox";
  }
  else if (*(int *)(param_1 + 0xbe) == 2) {
    local_res8 = "QEmu";
  }
  else {
    local_res8 = "";
  }
  local_res10 = puVar3;
  FUN_14001b9ec(param_3,&local_res8);
  FUN_14001b9ec(param_3,&local_res10);
  FUN_14001a0b8(puVar3,0x14002c280,*(uint *)(param_1 + 0xe2),3);
  return;
}


/*
 * FUN_14001a8e0 at 14001a8e0
 * undefined __fastcall FUN_14001a8e0(longlong param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001a8e0-14001ab99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001a8e0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined8 *local_res10 [3];
  
  plVar4 = param_3;
  local_res10[0] = param_2;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x27) < 5) {
    pcVar2 = (&PTR_s_voodoo_graphics_14002a240)[*(int *)(param_1 + 0x27)];
  }
  else {
    pcVar2 = "";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(param_2,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,*(uint *)(param_1 + 0x2b) >> 0x14,plVar4,param_4);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,*(uint *)(param_1 + 0x2f) >> 10,plVar4,param_4);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_140019e94(puVar1,*(uint *)(param_1 + 0x33),plVar4,param_4);
  if (*(int *)(param_1 + 0x4b) == 0x200) {
    pcVar2 = "bilinear";
  }
  else {
    pcVar2 = "appdriven";
    if (*(int *)(param_1 + 0x4b) == 0x100) {
      pcVar2 = "pointsampled";
    }
  }
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x4f) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)
           FUN_140019ec4(puVar1,*(uint *)(param_1 + 0x37),*(uint *)(param_1 + 0x3b),
                         (ulonglong)*(uint *)(param_1 + 0x43),*(uint *)(param_1 + 0x47),
                         *(char *)(param_1 + 0x22));
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  puVar1 = (undefined8 *)FUN_14001a058(puVar1,*(int *)(param_1 + 0x3f));
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x50) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x52) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x53) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x54) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x55) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x56) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  pcVar2 = "false";
  if (*(char *)(param_1 + 0x51) != '\0') {
    pcVar2 = "true";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar2);
  local_res10[0] = puVar1;
  FUN_14001b9ec(param_3,local_res10);
  if (*(char *)(param_1 + 0x57) != '\0') {
    pcVar3 = "true";
  }
  FUN_140019e4c(puVar1,pcVar3);
  return;
}


/*
 * FUN_14001ab9c at 14001ab9c
 * undefined __fastcall FUN_14001ab9c(longlong param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001ab9c-14001ac5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001ab9c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined8 *local_res10;
  
  plVar4 = param_3;
  local_res10 = param_2;
  FUN_14001b9ec(param_3,&local_res10);
  pcVar3 = "";
  if (*(uint *)(param_1 + 0xe7) < 3) {
    pcVar2 = (&PTR_s_pure32bit_14002a280)[(int)*(uint *)(param_1 + 0xe7)];
  }
  else {
    pcVar2 = "";
  }
  puVar1 = (undefined8 *)FUN_140019e4c(param_2,pcVar2);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  if (*(uint *)(param_1 + 0xeb) < 3) {
    pcVar3 = (&PTR_s_disabled_14002a268)[(int)*(uint *)(param_1 + 0xeb)];
  }
  puVar1 = (undefined8 *)FUN_140019e4c(puVar1,pcVar3);
  local_res10 = puVar1;
  FUN_14001b9ec(param_3,&local_res10);
  FUN_140019e94(puVar1,*(uint *)(param_1 + 0xef),plVar4,param_4);
  return;
}


/*
 * FUN_14001ac60 at 14001ac60
 * undefined __fastcall FUN_14001ac60(longlong param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001ac60-14001afe5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001ac60(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  longlong *plVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 *local_res10 [3];
  CHAR local_58 [24];
  
  plVar5 = param_3;
  local_res10[0] = param_2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x80) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(param_2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x58) < 7) {
    pcVar3 = (&PTR_DAT_14002a118)[*(int *)(param_1 + 0x58)];
  }
  else {
    pcVar3 = "";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)
           FUN_140019e94(puVar2,(uint)(*(ulonglong *)(param_1 + 0x5c) >> 0x14),plVar5,param_4);
  uVar7 = *(uint *)(param_1 + 0x78) & 0xff;
  local_res10[0] = puVar2;
  FUN_140024290(local_58,"%d",(ulonglong)uVar7,param_4);
  iVar1 = *(int *)(param_1 + 0x78);
  pcVar3 = "appdriven";
  if (iVar1 == 0) {
    pcVar4 = "appdriven";
  }
  else if (iVar1 == 0x100) {
    pcVar4 = "pointsampled";
  }
  else if (iVar1 == 0x200) {
    pcVar4 = "bilinear";
  }
  else if (iVar1 == 0x300) {
    pcVar4 = "linearmip";
  }
  else if (iVar1 == 0x400) {
    pcVar4 = "trilinear";
  }
  else if (iVar1 == 0x500) {
    pcVar4 = "pointmip";
  }
  else {
    pcVar4 = local_58;
    if (0x10 < uVar7) {
      pcVar4 = "";
    }
  }
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar4);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 1) {
    pcVar3 = "disabled";
  }
  else if (iVar1 == 2) {
    pcVar3 = "autogen_point";
  }
  else if (iVar1 == 3) {
    pcVar3 = "autogen_bilinear";
  }
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x87) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)
           FUN_140019ec4(puVar2,*(uint *)(param_1 + 100),*(uint *)(param_1 + 0x68),
                         (ulonglong)*(uint *)(param_1 + 0x70),*(uint *)(param_1 + 0x74),
                         *(char *)(param_1 + 0x22));
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)FUN_14001a058(puVar2,*(int *)(param_1 + 0x6c));
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x81) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x82) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x84) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x85) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x86) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x83) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar3 = "false";
  if (*(char *)(param_1 + 0x88) != '\0') {
    pcVar3 = "true";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  if (*(char *)(param_1 + 0x89) != '\0') {
    pcVar6 = "true";
  }
  FUN_140019e4c(puVar2,pcVar6);
  return;
}


/*
 * FUN_14001afe8 at 14001afe8
 * undefined __fastcall FUN_14001afe8(longlong param_1, undefined8 * param_2, longlong * param_3, ulonglong param_4)
 * Address ranges: 14001afe8-14001b6b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001afe8(longlong param_1,undefined8 *param_2,longlong *param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *local_res10 [3];
  CHAR local_178 [16];
  CHAR local_168 [32];
  char local_148 [264];
  
  local_res10[0] = param_2;
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e4c(param_2,(&PTR_DAT_14002a220)[*(int *)(param_1 + 0xf7)]);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  FUN_140024290(local_178,"0x%x",(ulonglong)*(uint *)(param_1 + 0xfb),param_4);
  pcVar7 = "";
  pcVar6 = local_178;
  if (*(int *)(param_1 + 0xfb) == -1) {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  FUN_140024290(local_178,"0x%x",(ulonglong)*(uint *)(param_1 + 0xff),param_4);
  pcVar6 = local_178;
  if (*(int *)(param_1 + 0xff) == -1) {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  FUN_140024290(local_178,"0x%x",(ulonglong)*(uint *)(param_1 + 0x103),param_4);
  pcVar6 = local_178;
  if (*(int *)(param_1 + 0x103) == -1) {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x107);
  FUN_140024290(local_178,"0x%x",uVar8,param_4);
  pcVar6 = local_178;
  if (*(int *)(param_1 + 0x107) == -1) {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1df) < 3) {
    pcVar6 = (&PTR_DAT_14002a198)[(int)*(uint *)(param_1 + 0x1df)];
  }
  else {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_148[0] = '\0';
  uVar9 = 0;
  local_res10[0] = puVar3;
  do {
    uVar5 = (ulonglong)uVar9;
    if ((*(int *)(param_1 + 0x10b + uVar5 * 0xc) == 0) ||
       (*(int *)(param_1 + 0x10f + uVar5 * 0xc) == 0)) break;
    if (uVar9 != 0) {
      FUN_140024cc4(local_148,", ");
    }
    uVar1 = *(uint *)(param_1 + 0x10b + uVar5 * 0xc);
    uVar8 = (ulonglong)uVar1;
    uVar2 = *(uint *)(param_1 + 0x10f + uVar5 * 0xc);
    param_4 = (ulonglong)uVar2;
    if (uVar1 == 0xffffffff) {
      if (uVar2 == 0xffffffff) {
        pcVar4 = "max@%d";
        pcVar6 = "max";
      }
      else if (uVar2 == 0x100) {
        pcVar4 = "max_4_3@%d";
        pcVar6 = "max_4_3";
      }
      else {
        if (uVar2 != 0x101) goto LAB_14001b261;
        pcVar4 = "max_16_9@%d";
        pcVar6 = "max_16_9";
      }
      uVar1 = *(uint *)(param_1 + 0x113 + uVar5 * 0xc);
      uVar8 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        pcVar6 = pcVar4;
      }
      FUN_140024290(local_168,pcVar6,uVar8,param_4);
    }
    else {
LAB_14001b261:
      pcVar6 = "%dx%d";
      if (*(int *)(param_1 + 0x113 + uVar5 * 0xc) != 0) {
        pcVar6 = "%dx%d@%d";
      }
      FUN_140024290(local_168,pcVar6,uVar8,param_4);
    }
    FUN_140024cc4(local_148,local_168);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_148);
  bVar10 = (*(byte *)(param_1 + 0x1e3) & 1) != 0;
  local_168[0] = '\0';
  local_res10[0] = puVar3;
  if (bVar10) {
    FUN_140024cc4(local_168,"8");
  }
  if ((*(byte *)(param_1 + 0x1e3) & 2) != 0) {
    if (bVar10) {
      FUN_140024cc4(local_168,", ");
    }
    FUN_140024cc4(local_168,"16");
    bVar10 = true;
  }
  if ((*(byte *)(param_1 + 0x1e3) & 4) != 0) {
    if (bVar10) {
      FUN_140024cc4(local_168,", ");
    }
    FUN_140024cc4(local_168,"32");
  }
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = local_168;
  if (*(int *)(param_1 + 0x1e3) == 7) {
    pcVar6 = "all";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1cb) < 3) {
    pcVar6 = (&PTR_s_high_quality_14002a1d0)[(int)*(uint *)(param_1 + 0x1cb)];
  }
  else {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1cf) < 4) {
    pcVar6 = (&PTR_s_disabled_14002a1b0)[(int)*(uint *)(param_1 + 0x1cf)];
  }
  else {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x1d3),uVar8,param_4);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1d7) < 3) {
    pcVar6 = (&PTR_s_appdriven_14002a208)[(int)*(uint *)(param_1 + 0x1d7)];
  }
  else {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1db) < 4) {
    pcVar7 = (&PTR_DAT_14002a1e8)[(int)*(uint *)(param_1 + 0x1db)];
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar7);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x1e7),uVar8,param_4);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar7 = "false";
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1f9) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1fa) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x1eb),uVar8,param_4);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  FUN_140024290(local_168,"0x%x",(ulonglong)*(uint *)(param_1 + 0x1ef),param_4);
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_168);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 499) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 500) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1f5) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1f6) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1f7) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    pcVar7 = "true";
  }
  FUN_140019e4c(puVar3,pcVar7);
  return;
}


/*
 * FUN_14001b6b8 at 14001b6b8
 * undefined __fastcall FUN_14001b6b8(longlong param_1, undefined8 * param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 14001b6b8-14001b818
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001b6b8(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 *local_res10 [3];
  
  plVar5 = param_3;
  local_res10[0] = param_2;
  FUN_14001b9ec(param_3,local_res10);
  iVar1 = *(int *)(param_1 + 0x1fb);
  pcVar4 = "";
  if (iVar1 == 0) {
    pcVar3 = "disable";
  }
  else if (iVar1 == 1) {
    pcVar3 = "enable";
  }
  else if (iVar1 == 2) {
    pcVar3 = "enablebreak";
  }
  else {
    pcVar3 = "";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(param_2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  iVar1 = *(int *)(param_1 + 0x1ff);
  if (iVar1 == 0) {
    pcVar3 = "disable";
  }
  else if (iVar1 == 1) {
    pcVar3 = "enable";
  }
  else if (iVar1 == 2) {
    pcVar3 = "enablebreak";
  }
  else {
    pcVar3 = "";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar3);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  iVar1 = *(int *)(param_1 + 0x203);
  if (iVar1 == 0) {
    pcVar4 = "disable";
  }
  else if (iVar1 == 1) {
    pcVar4 = "enable";
  }
  else if (iVar1 == 2) {
    pcVar4 = "enablebreak";
  }
  puVar2 = (undefined8 *)FUN_140019e4c(puVar2,pcVar4);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  puVar2 = (undefined8 *)FUN_140019e94(puVar2,*(uint *)(param_1 + 0x207),plVar5,param_4);
  local_res10[0] = puVar2;
  FUN_14001b9ec(param_3,local_res10);
  pcVar4 = "false";
  if (*(char *)(param_1 + 0x20b) != '\0') {
    pcVar4 = "true";
  }
  FUN_140019e4c(puVar2,pcVar4);
  return;
}


/*
 * FUN_14001b81c at 14001b81c
 * undefined1 __fastcall FUN_14001b81c(uint * param_1, longlong * param_2, char * param_3, undefined8 * param_4)
 * Address ranges: 14001b81c-14001b9e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_14001b81c(uint *param_1,longlong *param_2,char *param_3,undefined8 *param_4)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  undefined8 *local_res20;
  LPVOID local_48;
  undefined8 local_40;
  CHAR local_38 [16];
  
  uVar12 = 0;
  local_res20 = param_4;
  puVar4 = (undefined8 *)thunk_FUN_14002423c(0x1000);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = FUN_140024d20(param_3);
    pcVar6 = (char *)thunk_FUN_14002423c((ulonglong)(uint)((int)lVar5 * 2));
    if (pcVar6 != (char *)0x0) {
      local_48 = (LPVOID)0x0;
      local_40 = 0;
      local_res20 = puVar4;
      FUN_14001b9ec((longlong *)&local_48,&local_res20);
      FUN_140024290(local_38,"0x%x",0x287,param_4);
      puVar7 = (undefined8 *)FUN_140019e4c(puVar4,local_38);
      puVar7 = (undefined8 *)FUN_14001a148(param_1,puVar7,(longlong *)&local_48,param_4);
      puVar7 = (undefined8 *)
               FUN_14001a438((longlong)param_1,puVar7,(longlong *)&local_48,(ulonglong)param_4);
      puVar7 = (undefined8 *)FUN_14001a8e0((longlong)param_1,puVar7,(longlong *)&local_48,param_4);
      puVar7 = (undefined8 *)FUN_14001ab9c((longlong)param_1,puVar7,(longlong *)&local_48,param_4);
      puVar7 = (undefined8 *)FUN_14001ac60((longlong)param_1,puVar7,(longlong *)&local_48,param_4);
      puVar7 = (undefined8 *)
               FUN_14001afe8((longlong)param_1,puVar7,(longlong *)&local_48,(ulonglong)param_4);
      FUN_14001b6b8((longlong)param_1,puVar7,(longlong *)&local_48,param_4);
      pvVar2 = local_48;
      if ((int)local_40 == 0x60) {
        uVar13 = 0;
        uVar8 = 0;
        cVar1 = *param_3;
        pcVar9 = pcVar6;
        while (cVar1 != '\0') {
          if ((param_3[uVar8] == '%') &&
             (uVar11 = (ulonglong)((int)uVar8 + 1), param_3[uVar11] == 's')) {
            lVar5 = uVar13 * 8;
            uVar13 = (ulonglong)((int)uVar13 + 1);
            for (pcVar10 = *(char **)((longlong)local_48 + lVar5); *pcVar10 != '\0';
                pcVar10 = pcVar10 + 1) {
              *pcVar9 = *pcVar10;
              pcVar9 = pcVar9 + 1;
            }
          }
          else {
            *pcVar9 = param_3[uVar8];
            pcVar9 = pcVar9 + 1;
            uVar11 = uVar8;
          }
          uVar8 = (ulonglong)((int)uVar11 + 1);
          cVar1 = param_3[uVar8];
        }
        *pcVar9 = '\0';
        uVar8 = FUN_140024d20(pcVar6);
        local_res20 = (undefined8 *)((ulonglong)local_res20 & 0xffffffff00000000);
        iVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 & 0xffffffff,pcVar6,&local_res20);
        if (iVar3 == 0) {
          uVar12 = 0;
          if ((int)local_res20 == (int)uVar8) {
            uVar12 = 1;
          }
        }
      }
      FUN_140024260(pcVar6);
      FUN_140024260(pvVar2);
    }
    FUN_140024260(puVar4);
  }
  return uVar12;
}


/*
 * FUN_14001b9ec at 14001b9ec
 * undefined8 __fastcall FUN_14001b9ec(longlong * param_1, undefined8 * param_2)
 * Address ranges: 14001b9ec-14001ba73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_14001b9ec(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar5 = 0x10;
    if (iVar1 != 0) {
      uVar5 = (ulonglong)(uint)(iVar1 * 2);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    uVar3 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    puVar4 = (undefined8 *)thunk_FUN_14002423c(uVar3);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_140024620(puVar4,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 3);
    FUN_140024260((LPVOID)*param_1);
    *param_1 = (longlong)puVar4;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  }
  uVar3 = *param_2;
  *(undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}


/*
 * FUN_14001ba74 at 14001ba74
 * undefined1 __fastcall FUN_14001ba74(int * param_1, longlong * param_2, ulonglong param_3)
 * Address ranges: 14001ba74-14001dbfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 FUN_14001ba74(int *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int *piVar10;
  int local_res10;
  int local_res14;
  ulonglong local_res18 [2];
  undefined1 local_254 [8];
  undefined8 uStack_24c;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined8 uStack_23c;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined2 uStack_22c;
  undefined4 uStack_22a;
  undefined4 uStack_226;
  undefined4 uStack_222;
  undefined1 uStack_21e;
  undefined7 uStack_21d;
  undefined1 uStack_216;
  undefined7 uStack_215;
  undefined1 uStack_20e;
  undefined7 uStack_20d;
  undefined4 uStack_206;
  undefined4 uStack_202;
  undefined1 uStack_1fe;
  undefined1 uStack_1fd;
  undefined1 uStack_1fc;
  undefined1 uStack_1fb;
  undefined1 uStack_1fa;
  undefined1 uStack_1f9;
  undefined1 uStack_1f8;
  undefined2 uStack_1f7;
  undefined1 uStack_1f5;
  undefined4 uStack_1f4;
  undefined1 local_1f0;
  undefined2 uStack_1ef;
  undefined1 uStack_1ed;
  undefined4 uStack_1ec;
  undefined1 uStack_1e8;
  undefined2 uStack_1e7;
  undefined1 uStack_1e5;
  undefined4 uStack_1e4;
  undefined1 uStack_1e0;
  undefined2 uStack_1df;
  undefined1 uStack_1dd;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined1 uStack_1d4;
  undefined1 uStack_1d3;
  undefined1 uStack_1d2;
  undefined1 uStack_1d1;
  undefined1 local_1d0;
  undefined2 uStack_1cf;
  undefined1 uStack_1cd;
  undefined1 uStack_1cc;
  undefined1 uStack_1cb;
  undefined1 uStack_1ca;
  undefined1 uStack_1c9;
  undefined1 local_1c8;
  undefined1 uStack_1c7;
  undefined2 uStack_1c6;
  undefined1 uStack_1c4;
  undefined1 uStack_1c3;
  undefined2 uStack_1c2;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined2 uStack_1be;
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined2 uStack_1ba;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined2 local_1b6;
  undefined1 uStack_1b4;
  undefined1 uStack_1b3;
  undefined1 uStack_1b2;
  undefined1 uStack_1b1;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined2 uStack_1aa;
  undefined1 uStack_1a8;
  undefined2 uStack_1a7;
  undefined1 uStack_1a5;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined2 uStack_1a2;
  undefined1 uStack_1a0;
  undefined2 uStack_19f;
  undefined1 uStack_19d;
  undefined1 uStack_19c;
  undefined1 uStack_19b;
  undefined2 local_19a;
  undefined1 uStack_198;
  undefined2 uStack_197;
  undefined1 uStack_195;
  undefined1 uStack_194;
  undefined1 uStack_193;
  undefined2 uStack_192;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined2 uStack_18e;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined2 local_18a;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined2 uStack_186;
  undefined1 uStack_184;
  undefined1 uStack_183;
  undefined2 uStack_182;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined2 uStack_17e;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined1 local_176;
  undefined1 uStack_175;
  undefined1 uStack_174;
  undefined1 uStack_173;
  undefined2 uStack_172;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined1 uStack_16e;
  undefined2 uStack_16d;
  undefined1 uStack_16b;
  undefined4 uStack_16a;
  undefined1 uStack_166;
  undefined2 uStack_165;
  undefined1 uStack_163;
  undefined4 uStack_162;
  undefined1 uStack_15e;
  undefined2 uStack_15d;
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  undefined2 uStack_159;
  undefined1 uStack_157;
  undefined1 uStack_156;
  undefined2 local_155;
  undefined1 uStack_153;
  undefined1 uStack_152;
  undefined2 local_151;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined2 local_14d;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 local_149 [113];
  uint uStack_d8;
  undefined3 uStack_d4;
  undefined5 uStack_d1;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 uStack_be;
  undefined2 uStack_bd;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined2 local_9e;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  uint uStack_93;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined2 uStack_8d;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined2 uStack_89;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined2 uStack_85;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined2 uStack_81;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined2 local_75;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined2 uStack_71;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 local_59;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 local_49;
  
  local_res18[0] = param_3 & 0xffffffff00000000;
  iVar6 = (**(code **)*param_2)(param_2,0,0,0);
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  local_res10 = 0x45474544;
  local_res14 = 0x287;
  iVar7 = (**(code **)(*param_2 + 8))(param_2,8,&local_res10,local_res18);
  if (iVar7 != 0) {
    return 0;
  }
  if (iVar6 == 0x214) {
    FUN_1400098a8((undefined8 *)(local_254 + 4));
    local_254._0_4_ = local_res14;
    iVar6 = (**(code **)(*param_2 + 8))(param_2,0x20c,local_254 + 4,local_res18);
    if (iVar6 != 0) {
      return 0;
    }
    if (local_res10 == 0x45474544) {
      if (local_254._0_4_ == 0x287) {
        lVar9 = 4;
        puVar5 = (undefined8 *)(local_254 + 4);
        do {
          piVar10 = param_1;
          puVar8 = puVar5;
          uVar1 = puVar8[1];
          uVar2 = puVar8[2];
          uVar3 = puVar8[3];
          *(undefined8 *)piVar10 = *puVar8;
          *(undefined8 *)(piVar10 + 2) = uVar1;
          uVar1 = puVar8[4];
          uVar4 = puVar8[5];
          *(undefined8 *)(piVar10 + 4) = uVar2;
          *(undefined8 *)(piVar10 + 6) = uVar3;
          uVar2 = puVar8[6];
          uVar3 = puVar8[7];
          *(undefined8 *)(piVar10 + 8) = uVar1;
          *(undefined8 *)(piVar10 + 10) = uVar4;
          uVar1 = puVar8[8];
          uVar4 = puVar8[9];
          *(undefined8 *)(piVar10 + 0xc) = uVar2;
          *(undefined8 *)(piVar10 + 0xe) = uVar3;
          uVar2 = puVar8[10];
          uVar3 = puVar8[0xb];
          *(undefined8 *)(piVar10 + 0x10) = uVar1;
          *(undefined8 *)(piVar10 + 0x12) = uVar4;
          uVar1 = puVar8[0xc];
          uVar4 = puVar8[0xd];
          *(undefined8 *)(piVar10 + 0x14) = uVar2;
          *(undefined8 *)(piVar10 + 0x16) = uVar3;
          uVar2 = puVar8[0xe];
          uVar3 = puVar8[0xf];
          *(undefined8 *)(piVar10 + 0x18) = uVar1;
          *(undefined8 *)(piVar10 + 0x1a) = uVar4;
          *(undefined8 *)(piVar10 + 0x1c) = uVar2;
          *(undefined8 *)(piVar10 + 0x1e) = uVar3;
          lVar9 = lVar9 + -1;
          puVar5 = puVar8 + 0x10;
          param_1 = piVar10 + 0x20;
        } while (lVar9 != 0);
        uVar1 = *(undefined8 *)((longlong)puVar8 + 0x84);
        *(undefined8 *)(piVar10 + 0x1f) = *(undefined8 *)((longlong)puVar8 + 0x7c);
        *(undefined8 *)(piVar10 + 0x21) = uVar1;
        return 1;
      }
      return 0;
    }
    return 0;
  }
  if (iVar6 == 0x210) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_159 = 0xffff;
    uStack_157 = 0xff;
    uStack_156 = 0xff;
    local_155 = 0xffff;
    uStack_153 = 0xff;
    uStack_152 = 0xff;
    local_151 = 0xffff;
    uStack_14f = 0xff;
    uStack_14e = 0xff;
    local_14d = 0xffff;
    uStack_14b = 0xff;
    uStack_14a = 0xff;
    uStack_65 = 0xff;
    uStack_64 = 0xff;
    uStack_63 = 0xff;
    uStack_62 = 0xff;
    uStack_21d = 2;
    uStack_216 = 0;
    uStack_166 = 0;
    uStack_165 = 0;
    uStack_163 = 0;
    local_75 = 2;
    uStack_73 = 0;
    uStack_72 = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0;
    uStack_22a = 0x201;
    uStack_226 = 0x80000000;
    uStack_222 = 0x40000000;
    uStack_21e = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x10000;
    uStack_1fe = 1;
    uStack_1fd = 0;
    uStack_1fc = 0;
    uStack_1fb = 1;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    uStack_1f8 = 1;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x10000000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d3 = 0;
    uStack_1d2 = 0;
    uStack_1d1 = 0;
    local_1d0 = 0;
    uStack_1cf = 0x101;
    uStack_1cd = 1;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1b6 = 0;
    uStack_1b4 = 0;
    uStack_1b3 = 0;
    uStack_1b2 = 1;
    uStack_1b1 = 0;
    uStack_1b0 = 0;
    uStack_1af = 0;
    uStack_1ae = 1;
    uStack_1ad = 0;
    uStack_1ac = 0;
    uStack_1ab = 0;
    uStack_1aa = 1;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_18b = 0;
    local_18a = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 1;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    uStack_178 = 0;
    uStack_177 = 0;
    local_176 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_16d = 0;
    uStack_16b = 0;
    uStack_16a = 0x200;
    uStack_162 = 0;
    uStack_15e = 0;
    uStack_15d = 0;
    uStack_15b = 0;
    uStack_15a = 0;
    uStack_89 = 0;
    uStack_87 = 0;
    uStack_86 = 0;
    uStack_85 = 3;
    uStack_83 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_7f = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_71 = 7;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 1;
    uStack_6a = 0;
    uStack_69 = 0;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_66 = 0;
    uStack_61 = 0;
    uStack_60 = 1;
    uStack_5f = 1;
    uStack_5d = 0;
    uStack_5c = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    FUN_14002511c(local_149,0,0xc0);
    local_254._0_4_ = local_res14;
    local_59 = 1;
    uStack_58 = 0;
    uStack_56 = 0;
    uStack_55 = 1;
    uStack_54 = 0;
    uStack_52 = 0;
    uStack_51 = 1;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    local_49 = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x208,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x286) {
      return 0;
    }
    FUN_14001e464(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x20f) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_15a = 0xff;
    uStack_159 = 0xffff;
    uStack_157 = 0xff;
    uStack_156 = 0xff;
    local_155 = 0xffff;
    uStack_153 = 0xff;
    uStack_152 = 0xff;
    local_151 = 0xffff;
    uStack_14f = 0xff;
    uStack_14e = 0xff;
    local_14d = 0xffff;
    uStack_14b = 0xff;
    uStack_66 = 0xff;
    uStack_65 = 0xff;
    uStack_64 = 0xff;
    uStack_63 = 0xff;
    uStack_21d = 2;
    uStack_216 = 0;
    uStack_16a = 2;
    uStack_166 = 0;
    uStack_165 = 0;
    uStack_163 = 0;
    uStack_76 = 2;
    local_75 = 0;
    uStack_73 = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0;
    uStack_22a = 0x201;
    uStack_226 = 0x80000000;
    uStack_222 = 0x40000000;
    uStack_21e = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x10000;
    uStack_1fe = 1;
    uStack_1fd = 0;
    uStack_1fc = 0;
    uStack_1fb = 1;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    uStack_1f8 = 1;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x10000000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d3 = 0;
    uStack_1d2 = 0;
    uStack_1d1 = 0;
    local_1d0 = 0;
    uStack_1cf = 0x101;
    uStack_1cd = 1;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1b6 = 0;
    uStack_1b4 = 0;
    uStack_1b3 = 1;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 0;
    uStack_1af = 1;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 0;
    uStack_1ab = 1;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_18b = 0;
    local_18a = 0;
    uStack_188 = 0;
    uStack_187 = 1;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    uStack_178 = 0;
    uStack_177 = 0;
    local_176 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_16d = 0;
    uStack_16b = 0;
    uStack_162 = 0;
    uStack_15e = 0;
    uStack_15d = 0;
    uStack_15b = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    uStack_87 = 0;
    uStack_86 = 3;
    uStack_85 = 0;
    uStack_83 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_7f = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_72 = 7;
    uStack_71 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 1;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_62 = 0;
    uStack_61 = 1;
    uStack_60 = 1;
    uStack_5f = 0;
    uStack_5d = 0;
    uStack_5c = 0;
    uStack_5b = 0;
    FUN_14002511c(&uStack_14a,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_5a = 1;
    local_59 = 0;
    uStack_58 = 0;
    uStack_56 = 1;
    uStack_55 = 0;
    uStack_54 = 0;
    uStack_52 = 1;
    uStack_51 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x207,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x285) {
      return 0;
    }
    FUN_14001e8cc(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x20d) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_15b = 0xff;
    uStack_15a = 0xff;
    uStack_159 = 0xffff;
    uStack_157 = 0xff;
    uStack_156 = 0xff;
    local_155 = 0xffff;
    uStack_153 = 0xff;
    uStack_152 = 0xff;
    local_151 = 0xffff;
    uStack_14f = 0xff;
    uStack_14e = 0xff;
    local_14d = 0xffff;
    uStack_67 = 0xff;
    uStack_66 = 0xff;
    uStack_65 = 0xff;
    uStack_64 = 0xff;
    uStack_22a = 2;
    uStack_21e = 2;
    uStack_21d = 0;
    uStack_16b = 2;
    uStack_16a = 0;
    uStack_166 = 0;
    uStack_165 = 0;
    uStack_77 = 2;
    uStack_76 = 0;
    local_75 = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0x100;
    uStack_226 = 0x800000;
    uStack_222 = 0x400000;
    uStack_216 = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x1000100;
    uStack_1fe = 0;
    uStack_1fd = 0;
    uStack_1fc = 1;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 1;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x100000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d3 = 0;
    uStack_1d2 = 0;
    uStack_1d1 = 0;
    local_1d0 = 1;
    uStack_1cf = 0x101;
    uStack_1cd = 0;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1b6 = 0;
    uStack_1b4 = 1;
    uStack_1b3 = 0;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 1;
    uStack_1af = 0;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 1;
    uStack_1ab = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_18b = 0;
    local_18a = 0;
    uStack_188 = 1;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    uStack_178 = 0;
    uStack_177 = 0;
    local_176 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_16d = 0;
    uStack_163 = 0;
    uStack_162 = 0;
    uStack_15e = 0;
    uStack_15d = 0;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    uStack_87 = 3;
    uStack_86 = 0;
    uStack_85 = 0;
    uStack_83 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_7f = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    uStack_73 = 7;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_6f = 0;
    uStack_6e = 1;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    uStack_68 = 0;
    uStack_63 = 0;
    uStack_62 = 1;
    uStack_61 = 1;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_5d = 0;
    FUN_14002511c(&uStack_14b,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_5c = 1;
    uStack_5b = 0;
    uStack_5a = 0;
    local_59 = 0;
    uStack_58 = 1;
    uStack_56 = 0;
    uStack_55 = 0;
    uStack_54 = 1;
    uStack_52 = 0;
    uStack_51 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x205,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x283) {
      return 0;
    }
    FUN_14001ed2c(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x20c) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_15b = 0xff;
    uStack_15a = 0xff;
    uStack_159 = 0xffff;
    uStack_157 = 0xff;
    uStack_156 = 0xff;
    local_155 = 0xffff;
    uStack_153 = 0xff;
    uStack_152 = 0xff;
    local_151 = 0xffff;
    uStack_14f = 0xff;
    uStack_14e = 0xff;
    local_14d = 0xffff;
    uStack_67 = 0xff;
    uStack_66 = 0xff;
    uStack_65 = 0xff;
    uStack_64 = 0xff;
    uStack_22a = 2;
    uStack_21e = 2;
    uStack_21d = 0;
    uStack_16b = 2;
    uStack_16a = 0;
    uStack_166 = 0;
    uStack_165 = 0;
    uStack_77 = 2;
    uStack_76 = 0;
    local_75 = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0x100;
    uStack_226 = 0x800000;
    uStack_222 = 0x400000;
    uStack_216 = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x1000100;
    uStack_1fe = 0;
    uStack_1fd = 0;
    uStack_1fc = 1;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 1;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x100000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d3 = 0;
    uStack_1d2 = 0;
    uStack_1d1 = 0;
    local_1d0 = 1;
    uStack_1cf = 0x101;
    uStack_1cd = 0;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1b6 = 0;
    uStack_1b4 = 1;
    uStack_1b3 = 0;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 1;
    uStack_1af = 0;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 1;
    uStack_1ab = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_18b = 0;
    local_18a = 0;
    uStack_188 = 1;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    uStack_178 = 0;
    uStack_177 = 0;
    local_176 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_16d = 0;
    uStack_163 = 0;
    uStack_162 = 0;
    uStack_15e = 0;
    uStack_15d = 0;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    uStack_87 = 3;
    uStack_86 = 0;
    uStack_85 = 0;
    uStack_83 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_7f = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    uStack_73 = 7;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_6f = 0;
    uStack_6e = 1;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    uStack_68 = 0;
    uStack_63 = 0;
    uStack_62 = 1;
    uStack_61 = 1;
    uStack_60 = 0;
    uStack_5f = 0;
    FUN_14002511c(&uStack_14b,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_5d = 1;
    uStack_5c = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    local_59 = 1;
    uStack_58 = 0;
    uStack_56 = 0;
    uStack_55 = 1;
    uStack_54 = 0;
    uStack_52 = 0;
    uStack_51 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4d = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x204,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x282) {
      return 0;
    }
    FUN_14001f18c(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x209) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_15e = 0xff;
    uStack_15d = 0xffff;
    uStack_15b = 0xff;
    uStack_15a = 0xff;
    uStack_159 = 0xffff;
    uStack_157 = 0xff;
    uStack_156 = 0xff;
    local_155 = 0xffff;
    uStack_153 = 0xff;
    uStack_152 = 0xff;
    local_151 = 0xffff;
    uStack_14f = 0xff;
    uStack_6a = 0xff;
    uStack_69 = 0xff;
    uStack_68 = 0xff;
    uStack_67 = 0xff;
    uStack_22a = 2;
    uStack_21e = 2;
    uStack_21d = 0;
    uStack_16e = 2;
    uStack_16d = 0;
    uStack_16b = 0;
    uStack_16a = 0;
    uStack_7a = 2;
    uStack_79 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0x100;
    uStack_226 = 0x800000;
    uStack_222 = 0x400000;
    uStack_216 = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x1000100;
    uStack_1fe = 0;
    uStack_1fd = 0;
    uStack_1fc = 1;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 1;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x100000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1d3 = 1;
    uStack_1d2 = 1;
    uStack_1d1 = 0;
    local_1d0 = 0;
    uStack_1cf = 0;
    uStack_1cd = 0;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 1;
    local_1b6 = 0;
    uStack_1b4 = 0;
    uStack_1b3 = 1;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 0;
    uStack_1af = 1;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 0;
    uStack_1ab = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_18b = 1;
    local_18a = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    uStack_178 = 0;
    uStack_177 = 0;
    local_176 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_166 = 0;
    uStack_165 = 0;
    uStack_163 = 0;
    uStack_162 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    uStack_8b = 0;
    uStack_8a = 3;
    uStack_89 = 0;
    uStack_87 = 0;
    uStack_86 = 0;
    uStack_85 = 0;
    uStack_83 = 0;
    uStack_82 = 0;
    uStack_81 = 0;
    uStack_7f = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_76 = 7;
    local_75 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 1;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_66 = 0;
    uStack_65 = 1;
    uStack_64 = 1;
    uStack_63 = 0;
    uStack_62 = 0;
    uStack_61 = 0;
    FUN_14002511c(&uStack_14e,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_60 = 1;
    uStack_5f = 0;
    uStack_5d = 0;
    uStack_5c = 1;
    uStack_5b = 0;
    uStack_5a = 0;
    local_59 = 0;
    uStack_58 = 1;
    uStack_56 = 0;
    uStack_55 = 0;
    uStack_54 = 0;
    uStack_52 = 0;
    uStack_51 = 0;
    uStack_50 = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x201,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x281) {
      return 0;
    }
    FUN_14001f5e0(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x200) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_166 = 0xff;
    uStack_165 = 0xffff;
    uStack_163 = 0xff;
    uStack_162 = 0xffffffff;
    uStack_15e = 0xff;
    uStack_15d = 0xffff;
    uStack_15b = 0xff;
    uStack_15a = 0xff;
    uStack_159 = 0xffff;
    uStack_157 = 0xff;
    uStack_72 = 0xff;
    uStack_71 = 0xffff;
    uStack_6f = 0xff;
    uStack_22a = 2;
    uStack_21e = 2;
    uStack_21d = 0;
    uStack_172 = 2;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_16d = 0;
    uStack_16b = 0;
    uStack_82 = 2;
    uStack_81 = 0;
    uStack_7f = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0x100;
    uStack_226 = 0x800000;
    uStack_222 = 0x400000;
    uStack_216 = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x1000100;
    uStack_1fe = 0;
    uStack_1fd = 0;
    uStack_1fc = 1;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 1;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x100000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1d3 = 1;
    uStack_1d2 = 1;
    uStack_1d1 = 0;
    local_1d0 = 0;
    uStack_1cf = 0;
    uStack_1cd = 0;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 1;
    local_1b6 = 0;
    uStack_1b4 = 0;
    uStack_1b3 = 1;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 0;
    uStack_1af = 1;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 0;
    uStack_1ab = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_18b = 1;
    local_18a = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    uStack_178 = 0;
    uStack_177 = 0;
    local_176 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_16a = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_93 = 0x300;
    uStack_8f = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    uStack_87 = 0;
    uStack_86 = 0;
    uStack_85 = 0;
    uStack_83 = 0;
    uStack_7e = 7;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 1;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    local_75 = 0;
    uStack_73 = 0;
    uStack_6e = 0;
    uStack_6d = 1;
    uStack_6c = 1;
    uStack_6a = 0;
    FUN_14002511c(&uStack_156,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_69 = 1;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_66 = 0;
    uStack_65 = 1;
    uStack_64 = 0;
    uStack_63 = 0;
    uStack_62 = 0;
    uStack_61 = 1;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_5d = 0;
    uStack_5c = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    local_59 = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1f8,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x280) {
      return 0;
    }
    FUN_14001fa30(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x1fd) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_166 = 0xff;
    uStack_165 = 0xffff;
    uStack_163 = 0xff;
    uStack_162 = 0xffffffff;
    uStack_15e = 0xff;
    uStack_15d = 0xffff;
    uStack_15b = 0xff;
    uStack_15a = 0xff;
    local_75 = 0xffff;
    uStack_73 = 0xff;
    uStack_72 = 0xff;
    uStack_22a = 2;
    uStack_21e = 2;
    uStack_21d = 0;
    uStack_175 = 2;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_85 = 2;
    uStack_83 = 0;
    uStack_82 = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0x100;
    uStack_226 = 0x800000;
    uStack_222 = 0x400000;
    uStack_216 = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x1000100;
    uStack_1fe = 0;
    uStack_1fd = 0;
    uStack_1fc = 1;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 1;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x100000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1d3 = 1;
    uStack_1d2 = 1;
    uStack_1d1 = 0;
    local_1d0 = 0;
    uStack_1cf = 0;
    uStack_1cd = 0;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 1;
    local_1b6 = 0;
    uStack_1b4 = 0;
    uStack_1b3 = 1;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 0;
    uStack_1af = 1;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 0;
    uStack_1ab = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_18b = 1;
    local_18a = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    uStack_178 = 0;
    uStack_177 = 0;
    local_176 = 0;
    uStack_16d = 0;
    uStack_16b = 0;
    uStack_16a = 0xffffff00;
    uStack_99 = 0;
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 3;
    uStack_94 = 0;
    uStack_93 = 0;
    uStack_8f = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    uStack_87 = 0;
    uStack_86 = 0;
    uStack_81 = 7;
    uStack_7f = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 1;
    uStack_7a = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_71 = 0x100;
    uStack_6f = 1;
    uStack_6e = 0;
    uStack_6d = 0;
    FUN_14002511c((undefined1 *)&uStack_159,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_6c = 1;
    uStack_6a = 0;
    uStack_69 = 0;
    uStack_68 = 1;
    uStack_67 = 0;
    uStack_66 = 0;
    uStack_65 = 0;
    uStack_64 = 1;
    uStack_63 = 0;
    uStack_62 = 0;
    uStack_61 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_5d = 0;
    uStack_5c = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1f5,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x279) {
      return 0;
    }
    FUN_14001fe78(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x1f6) {
    FUN_1400098a8((undefined8 *)(local_254 + 4));
    local_254._0_4_ = local_res14;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1ee,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ == 0x276) {
      FUN_1400202c8(param_1,(undefined4 *)(local_254 + 4));
      return 1;
    }
    if (local_254._0_4_ != 0x277 && local_254._0_4_ != 0x278) {
      return 0;
    }
    FUN_1400202c8(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x1f0) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_16e = 0xff;
    uStack_16d = 0xffff;
    uStack_16b = 0xff;
    uStack_16a = 0xffffffff;
    uStack_166 = 0xff;
    uStack_165 = 0xffff;
    uStack_163 = 0xff;
    uStack_162 = 0xffffffff;
    uStack_22a = 2;
    uStack_21e = 2;
    uStack_21d = 0;
    uStack_17a = 2;
    uStack_179 = 0;
    uStack_178 = 0;
    uStack_177 = 0;
    local_176 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_8a = 2;
    uStack_89 = 0;
    uStack_87 = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0x100;
    uStack_226 = 0x800000;
    uStack_222 = 0x400000;
    uStack_216 = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x1000100;
    uStack_1fe = 0;
    uStack_1fd = 0;
    uStack_1fc = 1;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 1;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x100000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1d3 = 1;
    uStack_1d2 = 1;
    uStack_1d1 = 0;
    local_1d0 = 0;
    uStack_1cf = 0;
    uStack_1cd = 0;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 1;
    uStack_1b7 = 0;
    local_1b6 = 0;
    uStack_1b4 = 1;
    uStack_1b3 = 0;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 1;
    uStack_1af = 0;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 0;
    uStack_1ab = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 1;
    uStack_18b = 0;
    local_18a = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16f = 0;
    local_9e = 0;
    uStack_9c = 0;
    uStack_9b = 0;
    uStack_9a = 3;
    uStack_99 = 0;
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_93 = 0;
    uStack_8f = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    uStack_8b = 0;
    uStack_86 = 7;
    uStack_85 = 0;
    uStack_83 = 0;
    uStack_82 = 0;
    uStack_81 = 1;
    uStack_7f = 0;
    uStack_7e = 0;
    uStack_7d = 1;
    uStack_7c = 1;
    uStack_7a = 0;
    FUN_14002511c(&uStack_15e,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_79 = 1;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    local_75 = 1;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 1;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1e8,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x275) {
      return 0;
    }
    FUN_140020714(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x1ec) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_172 = 0xffff;
    uStack_170 = 0xff;
    uStack_16f = 0xff;
    uStack_16e = 0xff;
    uStack_16d = 0xffff;
    uStack_16b = 0xff;
    uStack_16a = 0xffffffff;
    uStack_166 = 0xff;
    uStack_165 = 0xffff;
    uStack_163 = 0xff;
    uStack_22a = 2;
    uStack_21e = 2;
    uStack_21d = 0;
    uStack_17e = 2;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    uStack_178 = 0;
    uStack_177 = 0;
    uStack_8e = 2;
    uStack_8d = 0;
    uStack_8b = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0x100;
    uStack_226 = 0x800000;
    uStack_222 = 0x400000;
    uStack_216 = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x1000100;
    uStack_1fe = 0;
    uStack_1fd = 0;
    uStack_1fc = 1;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 1;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x100000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1d3 = 1;
    uStack_1d2 = 1;
    uStack_1d1 = 0;
    local_1d0 = 0;
    uStack_1cf = 0;
    uStack_1cd = 0;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 1;
    uStack_1b7 = 0;
    local_1b6 = 0;
    uStack_1b4 = 1;
    uStack_1b3 = 0;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 1;
    uStack_1af = 0;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 0;
    uStack_1ab = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 0;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 1;
    uStack_18b = 0;
    local_18a = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    local_176 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9f = 0;
    local_9e = 3;
    uStack_9c = 0;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_99 = 0;
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_93 = 0;
    uStack_8f = 0;
    uStack_8a = 7;
    uStack_89 = 0;
    uStack_87 = 0;
    uStack_86 = 0;
    uStack_85 = 1;
    uStack_83 = 0;
    uStack_82 = 0;
    uStack_81 = 0x101;
    uStack_7f = 0;
    uStack_7e = 0;
    FUN_14002511c((undefined1 *)&uStack_162,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_7d = 1;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 1;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    local_75 = 1;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1e4,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x274) {
      return 0;
    }
    FUN_140020b54(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x1e0) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_17a = 0xff;
    uStack_179 = 0xff;
    uStack_178 = 0xff;
    uStack_177 = 0xff;
    local_176 = 0xff;
    uStack_175 = 0xff;
    uStack_174 = 0xff;
    uStack_173 = 0xff;
    uStack_172 = 0xffff;
    uStack_170 = 0xff;
    uStack_16f = 0xff;
    uStack_16e = 0xff;
    uStack_16d = 0xffff;
    uStack_16b = 0xff;
    uStack_22a = 2;
    uStack_21e = 2;
    uStack_21d = 0;
    uStack_186 = 2;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_182 = 0;
    uStack_180 = 0;
    uStack_17f = 0;
    uStack_9a = 2;
    uStack_99 = 0;
    uStack_98 = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0x100;
    uStack_226 = 0x800000;
    uStack_222 = 0x400000;
    uStack_216 = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0;
    uStack_202 = 0x1000100;
    uStack_1fe = 0;
    uStack_1fd = 0;
    uStack_1fc = 1;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 1;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f5 = 0;
    uStack_1f4 = 0x100000;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1d3 = 1;
    uStack_1d2 = 1;
    uStack_1d1 = 0;
    local_1d0 = 0;
    uStack_1cf = 0;
    uStack_1cd = 0;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 0;
    uStack_1ba = 0;
    uStack_1b8 = 1;
    uStack_1b7 = 0;
    local_1b6 = 0;
    uStack_1b4 = 1;
    uStack_1b3 = 0;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 1;
    uStack_1af = 0;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 0;
    uStack_1ab = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_190 = 1;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_18b = 0;
    local_18a = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_17e = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    uStack_a8 = 0;
    uStack_a6 = 3;
    uStack_a4 = 0;
    uStack_a3 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9f = 0;
    local_9e = 0;
    uStack_9c = 0;
    uStack_9b = 0;
    uStack_96 = 7;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_93 = 0x10000;
    uStack_8f = 0;
    uStack_8e = 0;
    uStack_8d = 0x101;
    uStack_8b = 0;
    uStack_8a = 0;
    FUN_14002511c((undefined1 *)&uStack_16a,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_89 = 1;
    uStack_87 = 0;
    uStack_86 = 0;
    uStack_85 = 1;
    uStack_83 = 0;
    uStack_82 = 0;
    uStack_81 = 1;
    uStack_7f = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1d8,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x273) {
      return 0;
    }
    FUN_140020f90(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x1dc) {
    if (local_res10 != 0x45474544) {
      return 0;
    }
    if (local_res14 == 0x270) {
      uStack_244 = 100;
      local_240 = 100;
      uStack_23c = 100;
      uStack_17e = 0xffff;
      uStack_17c = 0xff;
      uStack_17b = 0xff;
      uStack_17a = 0xff;
      uStack_179 = 0xff;
      uStack_178 = 0xff;
      uStack_177 = 0xff;
      local_176 = 0xff;
      uStack_175 = 0xff;
      uStack_174 = 0xff;
      uStack_173 = 0xff;
      uStack_172 = 0xffff;
      uStack_170 = 0xff;
      uStack_16f = 0xff;
      uStack_22a = 2;
      uStack_21e = 2;
      uStack_21d = 0;
      local_18a = 2;
      uStack_188 = 0;
      uStack_187 = 0;
      uStack_186 = 0;
      uStack_184 = 0;
      uStack_183 = 0;
      local_9e = 2;
      uStack_9c = 0;
      uStack_9b = 0;
      local_254 = (undefined1  [8])0x287;
      uStack_24c = 0;
      uStack_234 = 0;
      local_230 = 0x1000100;
      uStack_22c = 0x100;
      uStack_226 = 0x800000;
      uStack_222 = 0x400000;
      uStack_216 = 0;
      uStack_215 = 0;
      uStack_20e = 0;
      uStack_20d = 0;
      uStack_206 = 0;
      uStack_202 = 0x1000100;
      uStack_1fe = 0;
      uStack_1fd = 0;
      uStack_1fc = 1;
      uStack_1fb = 0;
      uStack_1fa = 0;
      uStack_1f9 = 1;
      uStack_1f8 = 0;
      uStack_1f7 = 0;
      uStack_1f5 = 0;
      uStack_1f4 = 0x100000;
      local_1f0 = 0;
      uStack_1ef = 0;
      uStack_1ed = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1e7 = 0;
      uStack_1e5 = 0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1df = 0;
      uStack_1dd = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 1;
      uStack_1d3 = 1;
      uStack_1d2 = 1;
      uStack_1d1 = 0;
      local_1d0 = 0;
      uStack_1cf = 0;
      uStack_1cd = 0;
      uStack_1cc = 0;
      uStack_1cb = 0;
      uStack_1ca = 0;
      uStack_1c9 = 0;
      local_1c8 = 0;
      uStack_1c7 = 0;
      uStack_1c6 = 0;
      uStack_1c4 = 0;
      uStack_1c3 = 0;
      uStack_1c2 = 0;
      uStack_1c0 = 0;
      uStack_1bf = 0;
      uStack_1be = 0;
      uStack_1bc = 0;
      uStack_1bb = 0;
      uStack_1ba = 0;
      uStack_1b8 = 1;
      uStack_1b7 = 0;
      local_1b6 = 0;
      uStack_1b4 = 1;
      uStack_1b3 = 0;
      uStack_1b2 = 0;
      uStack_1b1 = 0;
      uStack_1b0 = 1;
      uStack_1af = 0;
      uStack_1ae = 0;
      uStack_1ad = 0;
      uStack_1ac = 0;
      uStack_1ab = 0;
      uStack_1aa = 0;
      uStack_1a8 = 0;
      uStack_1a7 = 0;
      uStack_1a5 = 0;
      uStack_1a4 = 0;
      uStack_1a3 = 0;
      uStack_1a2 = 0;
      uStack_1a0 = 0;
      uStack_19f = 0;
      uStack_19d = 0;
      uStack_19c = 0;
      uStack_19b = 0;
      local_19a = 0;
      uStack_198 = 0;
      uStack_197 = 0;
      uStack_195 = 0;
      uStack_194 = 1;
      uStack_193 = 0;
      uStack_192 = 0;
      uStack_190 = 0;
      uStack_18f = 0;
      uStack_18e = 0;
      uStack_18c = 0;
      uStack_18b = 0;
      uStack_182 = 0;
      uStack_180 = 0;
      uStack_17f = 0;
      uStack_ae = 0;
      uStack_ad = 0;
      uStack_ac = 0;
      uStack_aa = 3;
      uStack_a9 = 0;
      uStack_a8 = 0;
      uStack_a6 = 0;
      uStack_a4 = 0;
      uStack_a3 = 0;
      uStack_a2 = 0;
      uStack_a0 = 0;
      uStack_9f = 0;
      uStack_9a = 7;
      uStack_99 = 0;
      uStack_98 = 0;
      uStack_96 = 0;
      uStack_95 = 1;
      uStack_94 = 0;
      uStack_93 = 0x1010000;
      uStack_8f = 0;
      uStack_8e = 0;
      FUN_14002511c(&uStack_16e,0,0xc0);
      local_254._0_4_ = local_res14;
      uStack_8d = 1;
      uStack_8b = 0;
      uStack_8a = 0;
      uStack_89 = 1;
      uStack_87 = 0;
      uStack_86 = 0;
      uStack_85 = 1;
      uStack_83 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      uStack_7f = 0;
      uStack_7e = 0;
      uStack_7d = 0;
      iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1d4,local_254 + 4,local_res18,local_res10);
      if (iVar6 != 0) {
        return 0;
      }
      FUN_1400213b8(param_1,(undefined4 *)(local_254 + 4));
    }
    else {
      if (local_res14 != 0x263) {
        return 0;
      }
      uStack_244 = 100;
      local_240 = 100;
      uStack_23c = 100;
      uStack_17e = 0xffff;
      uStack_17c = 0xff;
      uStack_17b = 0xff;
      uStack_17a = 0xff;
      uStack_179 = 0xff;
      uStack_178 = 0xff;
      uStack_177 = 0xff;
      local_176 = 0xff;
      uStack_175 = 0xff;
      uStack_174 = 0xff;
      uStack_173 = 0xff;
      uStack_172 = 0xffff;
      uStack_170 = 0xff;
      uStack_16f = 0xff;
      uStack_22a = 2;
      uStack_21e = 2;
      uStack_21d = 0;
      local_18a = 2;
      uStack_188 = 0;
      uStack_187 = 0;
      uStack_186 = 0;
      uStack_184 = 0;
      uStack_183 = 0;
      local_9e = 2;
      uStack_9c = 0;
      uStack_9b = 0;
      local_254 = (undefined1  [8])0x287;
      uStack_24c = 0;
      uStack_234 = 0;
      local_230 = 0x1000100;
      uStack_22c = 0;
      uStack_226 = 0x800000;
      uStack_222 = 0x400000;
      uStack_216 = 0;
      uStack_215 = 0;
      uStack_20e = 0;
      uStack_20d = 0;
      uStack_206 = 0;
      uStack_202 = 0x1000100;
      uStack_1fe = 0;
      uStack_1fd = 0;
      uStack_1fc = 1;
      uStack_1fb = 0;
      uStack_1fa = 0;
      uStack_1f9 = 1;
      uStack_1f8 = 0;
      uStack_1f7 = 0;
      uStack_1f5 = 0;
      uStack_1f4 = 0x100000;
      local_1f0 = 0;
      uStack_1ef = 0;
      uStack_1ed = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1e7 = 0;
      uStack_1e5 = 0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1df = 0;
      uStack_1dd = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 1;
      uStack_1d3 = 1;
      uStack_1d2 = 1;
      uStack_1d1 = 0;
      local_1d0 = 0;
      uStack_1cf = 0;
      uStack_1cd = 0;
      uStack_1cc = 0;
      uStack_1cb = 0;
      uStack_1ca = 0;
      uStack_1c9 = 0;
      local_1c8 = 0;
      uStack_1c7 = 0;
      uStack_1c6 = 0;
      uStack_1c4 = 0;
      uStack_1c3 = 0;
      uStack_1c2 = 0;
      uStack_1c0 = 0;
      uStack_1bf = 0;
      uStack_1be = 0;
      uStack_1bc = 0;
      uStack_1bb = 0;
      uStack_1ba = 0;
      uStack_1b8 = 1;
      uStack_1b7 = 0;
      local_1b6 = 0;
      uStack_1b4 = 1;
      uStack_1b3 = 0;
      uStack_1b2 = 0;
      uStack_1b1 = 0;
      uStack_1b0 = 1;
      uStack_1af = 0;
      uStack_1ae = 0;
      uStack_1ad = 0;
      uStack_1ac = 0;
      uStack_1ab = 0;
      uStack_1aa = 0;
      uStack_1a8 = 0;
      uStack_1a7 = 0;
      uStack_1a5 = 0;
      uStack_1a4 = 0;
      uStack_1a3 = 0;
      uStack_1a2 = 0;
      uStack_1a0 = 0;
      uStack_19f = 0;
      uStack_19d = 0;
      uStack_19c = 0;
      uStack_19b = 0;
      local_19a = 0;
      uStack_198 = 0;
      uStack_197 = 0;
      uStack_195 = 0;
      uStack_194 = 1;
      uStack_193 = 0;
      uStack_192 = 0;
      uStack_190 = 0;
      uStack_18f = 0;
      uStack_18e = 0;
      uStack_18c = 0;
      uStack_18b = 0;
      uStack_182 = 0;
      uStack_180 = 0;
      uStack_17f = 0;
      uStack_ae = 0;
      uStack_ad = 0;
      uStack_ac = 0;
      uStack_aa = 3;
      uStack_a9 = 0;
      uStack_a8 = 0;
      uStack_a6 = 0;
      uStack_a4 = 0;
      uStack_a3 = 0;
      uStack_a2 = 0;
      uStack_a0 = 0;
      uStack_9f = 0;
      uStack_9a = 7;
      uStack_99 = 0;
      uStack_98 = 0;
      uStack_96 = 0;
      uStack_95 = 1;
      uStack_94 = 0;
      uStack_93 = 0x1010000;
      uStack_8f = 0;
      uStack_8e = 0;
      FUN_14002511c(&uStack_16e,0,0xc0);
      local_254._0_4_ = local_res14;
      uStack_8d = 1;
      uStack_8b = 0;
      uStack_8a = 0;
      uStack_89 = 1;
      uStack_87 = 0;
      uStack_86 = 0;
      uStack_85 = 1;
      uStack_83 = 0;
      uStack_82 = 0;
      uStack_81 = 0;
      uStack_7f = 0;
      uStack_7e = 0;
      uStack_7d = 0;
      iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1d4,local_254 + 4,local_res18,local_res10);
      if (iVar6 != 0) {
        return 0;
      }
      FUN_1400217dc(param_1,(int *)(local_254 + 4));
    }
  }
  else if (iVar6 == 0x1d6) {
    uStack_244 = 100;
    local_240 = 100;
    uStack_23c = 100;
    uStack_184 = 0xff;
    uStack_183 = 0xff;
    uStack_182 = 0xffff;
    uStack_180 = 0xff;
    uStack_17f = 0xff;
    uStack_17e = 0xffff;
    uStack_17c = 0xff;
    uStack_17b = 0xff;
    uStack_17a = 0xff;
    uStack_179 = 0xff;
    uStack_178 = 0xff;
    uStack_177 = 0xff;
    local_176 = 0xff;
    uStack_175 = 0xff;
    uStack_22a = 2;
    uStack_21e = 2;
    uStack_21d = 0;
    uStack_190 = 2;
    uStack_18f = 0;
    uStack_18e = 0;
    uStack_18c = 0;
    uStack_18b = 0;
    local_18a = 0;
    uStack_a4 = 2;
    uStack_a3 = 0;
    uStack_a2 = 0;
    local_254 = (undefined1  [8])0x287;
    uStack_24c = 0;
    uStack_234 = 0;
    local_230 = 0x1000100;
    uStack_22c = 0;
    uStack_226 = 0x800000;
    uStack_222 = 0x400000;
    uStack_216 = 0;
    uStack_215 = 0;
    uStack_20e = 0;
    uStack_20d = 0;
    uStack_206 = 0x10000;
    uStack_202 = 0x1000001;
    uStack_1fe = 0;
    uStack_1fd = 0;
    uStack_1fc = 1;
    uStack_1fb = 0;
    uStack_1fa = 0;
    uStack_1f9 = 0;
    uStack_1f8 = 0;
    uStack_1f7 = 0;
    uStack_1f5 = 0x10;
    uStack_1f4 = 0;
    local_1f0 = 0;
    uStack_1ef = 0;
    uStack_1ed = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1df = 0;
    uStack_1dd = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0x1010100;
    uStack_1d4 = 0;
    uStack_1d3 = 0;
    uStack_1d2 = 0;
    uStack_1d1 = 0;
    local_1d0 = 0;
    uStack_1cf = 0;
    uStack_1cd = 0;
    uStack_1cc = 0;
    uStack_1cb = 0;
    uStack_1ca = 0;
    uStack_1c9 = 0;
    local_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c6 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    uStack_1c2 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1be = 0;
    uStack_1bc = 0;
    uStack_1bb = 1;
    uStack_1ba = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 1;
    local_1b6 = 0;
    uStack_1b4 = 0;
    uStack_1b3 = 1;
    uStack_1b2 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 0;
    uStack_1af = 0;
    uStack_1ae = 0;
    uStack_1ad = 0;
    uStack_1ac = 0;
    uStack_1ab = 0;
    uStack_1aa = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1a5 = 0;
    uStack_1a4 = 0;
    uStack_1a3 = 0;
    uStack_1a2 = 0;
    uStack_1a0 = 0;
    uStack_19f = 0;
    uStack_19d = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    local_19a = 0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_195 = 0;
    uStack_194 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_b4 = 0;
    uStack_b2 = 0;
    uStack_b0 = 3;
    uStack_ae = 0;
    uStack_ad = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a0 = 7;
    uStack_9f = 0;
    local_9e = 0;
    uStack_9c = 0;
    uStack_9b = 1;
    uStack_9a = 0;
    uStack_99 = 0;
    uStack_98 = 0x100;
    uStack_96 = 1;
    uStack_95 = 0;
    uStack_94 = 1;
    FUN_14002511c(&uStack_174,0,0xc0);
    local_254._0_4_ = local_res14;
    uStack_93 = 1;
    uStack_8f = 1;
    uStack_8e = 0;
    uStack_8d = 0;
    uStack_8b = 1;
    uStack_8a = 0;
    uStack_89 = 0;
    uStack_87 = 0;
    uStack_86 = 0;
    uStack_85 = 0;
    uStack_83 = 0;
    iVar6 = local_res10;
    iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1ce,local_254 + 4,local_res18);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar6 != 0x45474544) {
      return 0;
    }
    if (local_254._0_4_ != 0x262) {
      return 0;
    }
    FUN_140021c08(param_1,(undefined4 *)(local_254 + 4));
  }
  else if (iVar6 == 0x1c6) {
    if (local_res10 != 0x45474544) {
      return 0;
    }
    if (local_res14 == 0x261) {
      uStack_244 = 100;
      local_240 = 100;
      uStack_23c = 100;
      uStack_194 = 0xff;
      uStack_193 = 0xff;
      uStack_192 = 0xffff;
      uStack_190 = 0xff;
      uStack_18f = 0xff;
      uStack_18e = 0xffff;
      uStack_18c = 0xff;
      uStack_18b = 0xff;
      local_18a = 0xffff;
      uStack_188 = 0xff;
      uStack_187 = 0xff;
      uStack_186 = 0xffff;
      uStack_22a = 2;
      uStack_21e = 2;
      uStack_21d = 0;
      uStack_1a0 = 2;
      uStack_19f = 0;
      uStack_19d = 0;
      uStack_19c = 0;
      uStack_19b = 0;
      local_19a = 0;
      uStack_b4 = 2;
      uStack_b2 = 0;
      local_254 = (undefined1  [8])0x287;
      uStack_24c = 0;
      uStack_234 = 0;
      local_230 = 0x1000100;
      uStack_22c = 0;
      uStack_226 = 0x800000;
      uStack_222 = 0x400000;
      uStack_216 = 0;
      uStack_215 = 0;
      uStack_20e = 0;
      uStack_20d = 0;
      uStack_206 = 0x10000;
      uStack_202 = 0x1000001;
      uStack_1fe = 0;
      uStack_1fd = 0;
      uStack_1fc = 1;
      uStack_1fb = 0;
      uStack_1fa = 0;
      uStack_1f9 = 0;
      uStack_1f8 = 0;
      uStack_1f7 = 0;
      uStack_1f5 = 0x10;
      uStack_1f4 = 0;
      local_1f0 = 0;
      uStack_1ef = 0;
      uStack_1ed = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1e7 = 0;
      uStack_1e5 = 0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1df = 0;
      uStack_1dd = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0x1010100;
      uStack_1d4 = 0;
      uStack_1d3 = 0;
      uStack_1d2 = 0;
      uStack_1d1 = 0;
      local_1d0 = 0;
      uStack_1cf = 0;
      uStack_1cd = 0;
      uStack_1cc = 0;
      uStack_1cb = 0;
      uStack_1ca = 0;
      uStack_1c9 = 0;
      local_1c8 = 0;
      uStack_1c7 = 0;
      uStack_1c6 = 0;
      uStack_1c4 = 0;
      uStack_1c3 = 0;
      uStack_1c2 = 0;
      uStack_1c0 = 0;
      uStack_1bf = 0;
      uStack_1be = 0;
      uStack_1bc = 0;
      uStack_1bb = 1;
      uStack_1ba = 0;
      uStack_1b8 = 0;
      uStack_1b7 = 1;
      local_1b6 = 0;
      uStack_1b4 = 0;
      uStack_1b3 = 1;
      uStack_1b2 = 0;
      uStack_1b1 = 0;
      uStack_1b0 = 0;
      uStack_1af = 0;
      uStack_1ae = 0;
      uStack_1ad = 0;
      uStack_1ac = 0;
      uStack_1ab = 0;
      uStack_1aa = 0;
      uStack_1a8 = 0;
      uStack_1a7 = 0;
      uStack_1a5 = 0;
      uStack_1a4 = 0;
      uStack_1a3 = 0;
      uStack_1a2 = 0;
      uStack_198 = 0;
      uStack_197 = 0;
      uStack_195 = 0;
      local_c4 = 0;
      local_c0 = 3;
      uStack_be = 0;
      uStack_bd = 0;
      uStack_bb = 0;
      uStack_ba = 0;
      uStack_b9 = 0;
      uStack_b8 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      uStack_b0 = 7;
      uStack_ae = 0;
      uStack_ad = 0;
      uStack_ac = 0x100;
      uStack_aa = 0;
      uStack_a9 = 0;
      uStack_a8 = 0x100;
      uStack_a6 = 1;
      uStack_a4 = 1;
      FUN_14002511c(&uStack_184,0,0xc0);
      local_254._0_4_ = local_res14;
      uStack_a3 = 1;
      uStack_a2 = 0;
      uStack_a0 = 0;
      uStack_9f = 1;
      local_9e = 0;
      uStack_9c = 0;
      uStack_9b = 1;
      uStack_9a = 0;
      uStack_99 = 0;
      uStack_98 = 0;
      uStack_96 = 0;
      uStack_95 = 0;
      uStack_94 = 0;
      uStack_93 = uStack_93 & 0xffffff00;
      iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1be,local_254 + 4,local_res18,local_res10);
      if (iVar6 != 0) {
        return 0;
      }
      FUN_14002202c(param_1,(undefined4 *)(local_254 + 4));
    }
    else {
      if (local_res14 != 0x260) {
        return 0;
      }
      uStack_244 = 100;
      local_240 = 100;
      uStack_23c = 100;
      uStack_194 = 0xff;
      uStack_193 = 0xff;
      uStack_192 = 0xffff;
      uStack_190 = 0xff;
      uStack_18f = 0xff;
      uStack_18e = 0xffff;
      uStack_18c = 0xff;
      uStack_18b = 0xff;
      local_18a = 0xffff;
      uStack_188 = 0xff;
      uStack_187 = 0xff;
      uStack_186 = 0xffff;
      uStack_22a = 2;
      uStack_21e = 2;
      uStack_21d = 0;
      uStack_1a0 = 2;
      uStack_19f = 0;
      uStack_19d = 0;
      uStack_19c = 0;
      uStack_19b = 0;
      local_19a = 0;
      uStack_b4 = 2;
      uStack_b2 = 0;
      local_254 = (undefined1  [8])0x287;
      uStack_24c = 0;
      uStack_234 = 0;
      local_230 = 0x1000100;
      uStack_22c = 0;
      uStack_226 = 0x800000;
      uStack_222 = 0x400000;
      uStack_216 = 0;
      uStack_215 = 0;
      uStack_20e = 0;
      uStack_20d = 0;
      uStack_206 = 0x10000;
      uStack_202 = 0x1000001;
      uStack_1fe = 0;
      uStack_1fd = 0;
      uStack_1fc = 1;
      uStack_1fb = 0;
      uStack_1fa = 0;
      uStack_1f9 = 0;
      uStack_1f8 = 0;
      uStack_1f7 = 0;
      uStack_1f5 = 0x10;
      uStack_1f4 = 0;
      local_1f0 = 0;
      uStack_1ef = 0;
      uStack_1ed = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1e7 = 0;
      uStack_1e5 = 0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1df = 0;
      uStack_1dd = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0x1010100;
      uStack_1d4 = 0;
      uStack_1d3 = 0;
      uStack_1d2 = 0;
      uStack_1d1 = 0;
      local_1d0 = 0;
      uStack_1cf = 0;
      uStack_1cd = 0;
      uStack_1cc = 0;
      uStack_1cb = 0;
      uStack_1ca = 0;
      uStack_1c9 = 0;
      local_1c8 = 0;
      uStack_1c7 = 0;
      uStack_1c6 = 0;
      uStack_1c4 = 0;
      uStack_1c3 = 0;
      uStack_1c2 = 0;
      uStack_1c0 = 0;
      uStack_1bf = 0;
      uStack_1be = 0;
      uStack_1bc = 0;
      uStack_1bb = 1;
      uStack_1ba = 0;
      uStack_1b8 = 0;
      uStack_1b7 = 1;
      local_1b6 = 0;
      uStack_1b4 = 0;
      uStack_1b3 = 1;
      uStack_1b2 = 0;
      uStack_1b1 = 0;
      uStack_1b0 = 0;
      uStack_1af = 0;
      uStack_1ae = 0;
      uStack_1ad = 0;
      uStack_1ac = 0;
      uStack_1ab = 0;
      uStack_1aa = 0;
      uStack_1a8 = 0;
      uStack_1a7 = 0;
      uStack_1a5 = 0;
      uStack_1a4 = 0;
      uStack_1a3 = 0;
      uStack_1a2 = 0;
      uStack_198 = 0;
      uStack_197 = 0;
      uStack_195 = 0;
      local_c4 = 0;
      local_c0 = 3;
      uStack_be = 0;
      uStack_bd = 0;
      uStack_bb = 0;
      uStack_ba = 0;
      uStack_b9 = 0;
      uStack_b8 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      uStack_b0 = 7;
      uStack_ae = 0;
      uStack_ad = 0;
      uStack_ac = 0;
      uStack_aa = 0;
      uStack_a9 = 0;
      uStack_a8 = 0x100;
      uStack_a6 = 1;
      FUN_14002511c(&uStack_184,0,0xc0);
      local_254._0_4_ = local_res14;
      uStack_a4 = 1;
      uStack_a3 = 0;
      uStack_a2 = 0;
      uStack_a0 = 1;
      uStack_9f = 0;
      local_9e = 0;
      uStack_9c = 1;
      uStack_9b = 0;
      uStack_9a = 0;
      uStack_99 = 0;
      uStack_98 = 0;
      uStack_96 = 0;
      uStack_95 = 0;
      uStack_94 = 0;
      iVar6 = (**(code **)(*param_2 + 8))(param_2,0x1bd,local_254 + 4,local_res18,local_res10);
      if (iVar6 != 0) {
        return 0;
      }
      FUN_140022430(param_1,(undefined4 *)(local_254 + 4));
    }
  }
  else {
    if (iVar6 == 0x1b3) {
      local_254._0_4_ = local_res14;
      iVar6 = local_res10;
      iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1ab,local_254 + 4,local_res18);
      if (iVar7 != 0) {
        return 0;
      }
      if (iVar6 == 0x45474544) {
        if (local_254._0_4_ == 0x255) {
          FUN_14002282c(param_1,(undefined4 *)(local_254 + 4));
          return 1;
        }
        return 0;
      }
      return 0;
    }
    if (iVar6 == 0x1af) {
      uStack_244 = 100;
      local_240 = 100;
      uStack_23c = 100;
      local_254 = (undefined1  [8])0x287;
      uStack_24c = 0;
      uStack_22a = 2;
      uStack_21e = 2;
      uStack_21d = 0;
      uStack_1ad = 2;
      uStack_1ac = 0;
      uStack_1ab = 0;
      uStack_1aa = 0;
      uStack_1a8 = 0;
      uStack_1a7 = 0;
      uStack_234 = 0;
      local_230 = 0x1000100;
      uStack_22c = 0;
      uStack_226 = 0x800000;
      uStack_222 = 0x400000;
      uStack_216 = 0;
      uStack_215 = 0;
      uStack_20e = 0;
      uStack_20d = 0;
      uStack_206 = 0x10000;
      uStack_202 = 0x1000001;
      uStack_1fe = 0;
      uStack_1fd = 0;
      uStack_1fc = 1;
      uStack_1fb = 0;
      uStack_1fa = 0;
      uStack_1f9 = 0;
      uStack_1f8 = 0;
      uStack_1f7 = 0;
      uStack_1f5 = 4;
      uStack_1f4 = 0;
      local_1f0 = 0;
      uStack_1ef = 0;
      uStack_1ed = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1e7 = 0;
      uStack_1e5 = 0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1df = 0;
      uStack_1dd = 0;
      uStack_1dc = 0x1010100;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1d3 = 0;
      uStack_1d2 = 0;
      uStack_1d1 = 0;
      local_1d0 = 0;
      uStack_1cf = 0;
      uStack_1cd = 0;
      uStack_1cc = 0;
      uStack_1cb = 0;
      uStack_1ca = 0;
      uStack_1c9 = 0;
      local_1c8 = 0;
      uStack_1c7 = 0;
      uStack_1c6 = 0;
      uStack_1c4 = 0;
      uStack_1c3 = 1;
      uStack_1c2 = 0;
      uStack_1c0 = 0;
      uStack_1bf = 1;
      uStack_1be = 0;
      uStack_1bc = 0;
      uStack_1bb = 1;
      uStack_1ba = 0;
      uStack_1b8 = 0;
      uStack_1b7 = 0;
      local_1b6 = 0;
      uStack_1b4 = 0;
      uStack_1b3 = 0;
      uStack_1b2 = 0;
      uStack_1b1 = 0;
      uStack_1b0 = 0;
      uStack_1af = 0;
      uStack_1ae = 0;
      uStack_1a5 = 0;
      uStack_1a4 = 0;
      uStack_1a3 = 0;
      uStack_1a2 = 0;
      uStack_1a0 = 0;
      uStack_19f = 0;
      uStack_19d = 0;
      uStack_19c = 0;
      uStack_19b = 0;
      local_19a = 0;
      uStack_198 = 0;
      uStack_197 = 0;
      uStack_d8 = uStack_d8 & 0xffffff;
      uStack_d4 = 0;
      uStack_d1 = 3;
      uStack_cc = 0;
      uStack_c8 = 0x2000000;
      local_c4 = 0x7000000;
      local_c0 = 0;
      uStack_be = 0;
      uStack_bd = 0x100;
      uStack_bb = 1;
      FUN_14002511c(&uStack_195,0,0xc0);
      local_254._0_4_ = local_res14;
      uStack_ba = 1;
      uStack_b9 = 0;
      uStack_b8 = 0;
      uStack_b6 = 1;
      uStack_b5 = 0;
      uStack_b4 = 0;
      uStack_b2 = 1;
      uStack_b0 = 0;
      uStack_ae = 0;
      uStack_ad = 0;
      uStack_ac = 0;
      uStack_aa = 0;
      iVar6 = local_res10;
      iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1a7,local_254 + 4,local_res18);
      if (iVar7 != 0) {
        return 0;
      }
      if (iVar6 != 0x45474544) {
        return 0;
      }
      if (local_254._0_4_ != 0x255) {
        return 0;
      }
      FUN_140022bf4(param_1,(undefined4 *)(local_254 + 4));
    }
    else {
      if (iVar6 != 0x1ac) {
        if (iVar6 == 0x141) {
          local_254._0_4_ = local_res14;
          iVar6 = local_res10;
          iVar7 = (**(code **)(*param_2 + 8))(param_2,0x139,local_254 + 4,local_res18);
          if (iVar7 != 0) {
            return 0;
          }
          if (iVar6 == 0x45474544) {
            if (local_254._0_4_ == 0x255) {
              FUN_140023388(param_1,(undefined4 *)(local_254 + 4));
              return 1;
            }
            return 0;
          }
          return 0;
        }
        if (iVar6 == 0x8a) {
          local_254._0_4_ = local_res14;
          iVar6 = local_res10;
          iVar7 = (**(code **)(*param_2 + 8))(param_2,0x82,local_254 + 4,local_res18);
          if (iVar7 != 0) {
            return 0;
          }
          if (iVar6 == 0x45474544) {
            if (local_254._0_4_ == 0x254) {
              FUN_140023750((undefined8 *)param_1,(undefined4 *)(local_254 + 4));
              return 1;
            }
            return 0;
          }
          return 0;
        }
        if (iVar6 == 0x80) {
          local_254._0_4_ = local_res14;
          iVar6 = local_res10;
          iVar7 = (**(code **)(*param_2 + 8))(param_2,0x78,local_254 + 4,local_res18);
          if (iVar7 != 0) {
            return 0;
          }
          if (iVar6 == 0x45474544) {
            if (local_254._0_4_ == 0x253) {
              FUN_140023970((undefined8 *)param_1,(undefined4 *)(local_254 + 4));
              return 1;
            }
            return 0;
          }
          return 0;
        }
        if (iVar6 != 0x7f) {
          return 0;
        }
        local_254._0_4_ = local_res14;
        iVar6 = local_res10;
        iVar7 = (**(code **)(*param_2 + 8))(param_2,0x77,local_254 + 4,local_res18);
        if (iVar7 != 0) {
          return 0;
        }
        if (iVar6 != 0x45474544) {
          return 0;
        }
        if (local_254._0_4_ == 0x251 || local_254._0_4_ == 0x252) {
          FUN_140023b9c((undefined8 *)param_1,(undefined4 *)(local_254 + 4));
          return 1;
        }
        return 0;
      }
      uStack_244 = 100;
      local_240 = 100;
      uStack_23c = 100;
      local_254 = (undefined1  [8])0x287;
      uStack_24c = 0;
      uStack_21d = 2;
      uStack_216 = 0;
      uStack_1b0 = 2;
      uStack_1af = 0;
      uStack_1ae = 0;
      uStack_1ad = 0;
      uStack_1ac = 0;
      uStack_1ab = 0;
      uStack_1aa = 0;
      uStack_c8 = 2;
      uStack_234 = 0;
      local_230 = 0x10100;
      uStack_22c = 1;
      uStack_22a = 0x200;
      uStack_226 = 0x80000000;
      uStack_222 = 0x40000000;
      uStack_21e = 0;
      uStack_215 = 0;
      uStack_20e = 0;
      uStack_20d = 0;
      uStack_206 = 0x1000000;
      uStack_202 = 0x100;
      uStack_1fe = 1;
      uStack_1fd = 0;
      uStack_1fc = 0;
      uStack_1fb = 1;
      uStack_1fa = 0;
      uStack_1f9 = 0;
      uStack_1f8 = 0;
      uStack_1f7 = 0;
      uStack_1f5 = 0;
      uStack_1f4 = 4;
      local_1f0 = 0;
      uStack_1ef = 0;
      uStack_1ed = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      uStack_1e7 = 0;
      uStack_1e5 = 0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1df = 0;
      uStack_1dd = 0;
      uStack_1dc = 0x1010000;
      uStack_1d8 = 1;
      uStack_1d4 = 0;
      uStack_1d3 = 0;
      uStack_1d2 = 0;
      uStack_1d1 = 0;
      local_1d0 = 0;
      uStack_1cf = 0;
      uStack_1cd = 0;
      uStack_1cc = 0;
      uStack_1cb = 0;
      uStack_1ca = 0;
      uStack_1c9 = 0;
      local_1c8 = 0;
      uStack_1c7 = 0;
      uStack_1c6 = 0;
      uStack_1c4 = 0;
      uStack_1c3 = 0;
      uStack_1c2 = 1;
      uStack_1c0 = 0;
      uStack_1bf = 0;
      uStack_1be = 1;
      uStack_1bc = 0;
      uStack_1bb = 0;
      uStack_1ba = 1;
      uStack_1b8 = 0;
      uStack_1b7 = 0;
      local_1b6 = 0;
      uStack_1b4 = 0;
      uStack_1b3 = 0;
      uStack_1b2 = 0;
      uStack_1b1 = 0;
      uStack_1a8 = 0;
      uStack_1a7 = 0;
      uStack_1a5 = 0;
      uStack_1a4 = 0;
      uStack_1a3 = 0;
      uStack_1a2 = 0;
      uStack_1a0 = 0;
      uStack_19f = 0;
      uStack_19d = 0;
      uStack_19c = 0;
      uStack_19b = 0;
      local_19a = 0;
      uStack_d8 = 0;
      uStack_d4 = 3;
      uStack_d1 = 0;
      uStack_cc = 0;
      local_c4 = 7;
      local_c0 = 0x100;
      uStack_be = 1;
      FUN_14002511c(&uStack_198,0,0xc0);
      local_254._0_4_ = local_res14;
      uStack_bd = 1;
      uStack_bb = 0;
      uStack_ba = 0;
      uStack_b9 = 1;
      uStack_b8 = 0;
      uStack_b6 = 0;
      uStack_b5 = 1;
      uStack_b4 = 0;
      uStack_b2 = 0;
      uStack_b0 = 0;
      uStack_ae = 0;
      uStack_ad = 0;
      iVar6 = local_res10;
      iVar7 = (**(code **)(*param_2 + 8))(param_2,0x1a4,local_254 + 4,local_res18);
      if (iVar7 != 0) {
        return 0;
      }
      if (iVar6 != 0x45474544) {
        return 0;
      }
      if (local_254._0_4_ != 0x255) {
        return 0;
      }
      FUN_140022fbc(param_1,(undefined4 *)(local_254 + 4));
    }
  }
  return 1;
}


/*
 * FUN_14001dbfc at 14001dbfc
 * bool __fastcall FUN_14001dbfc(undefined8 * param_1, longlong * param_2, ulonglong param_3)
 * Address ranges: 14001dbfc-14001dcd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_14001dbfc(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  ulonglong local_res18 [2];
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220 [67];
  
  local_res18[0] = param_3;
  FUN_1400098a8(local_220);
  lVar12 = 4;
  local_228 = 0x45474544;
  local_224 = 0x287;
  puVar9 = local_220;
  do {
    puVar13 = param_1;
    puVar11 = puVar9;
    uVar5 = puVar13[1];
    uVar6 = puVar13[2];
    uVar7 = puVar13[3];
    *puVar11 = *puVar13;
    puVar11[1] = uVar5;
    uVar5 = puVar13[4];
    uVar8 = puVar13[5];
    puVar11[2] = uVar6;
    puVar11[3] = uVar7;
    uVar6 = puVar13[6];
    uVar7 = puVar13[7];
    puVar11[4] = uVar5;
    puVar11[5] = uVar8;
    uVar5 = puVar13[8];
    uVar8 = puVar13[9];
    puVar11[6] = uVar6;
    puVar11[7] = uVar7;
    uVar6 = puVar13[10];
    uVar7 = puVar13[0xb];
    puVar11[8] = uVar5;
    puVar11[9] = uVar8;
    uVar5 = puVar13[0xc];
    uVar8 = puVar13[0xd];
    puVar11[10] = uVar6;
    puVar11[0xb] = uVar7;
    uVar1 = *(undefined4 *)(puVar13 + 0xe);
    uVar2 = *(undefined4 *)((longlong)puVar13 + 0x74);
    uVar3 = *(undefined4 *)(puVar13 + 0xf);
    uVar4 = *(undefined4 *)((longlong)puVar13 + 0x7c);
    puVar11[0xc] = uVar5;
    puVar11[0xd] = uVar8;
    *(undefined4 *)(puVar11 + 0xe) = uVar1;
    *(undefined4 *)((longlong)puVar11 + 0x74) = uVar2;
    *(undefined4 *)(puVar11 + 0xf) = uVar3;
    *(undefined4 *)((longlong)puVar11 + 0x7c) = uVar4;
    lVar12 = lVar12 + -1;
    puVar9 = puVar11 + 0x10;
    param_1 = puVar13 + 0x10;
  } while (lVar12 != 0);
  uVar1 = *(undefined4 *)(puVar13 + 0x10);
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x84);
  uVar3 = *(undefined4 *)(puVar13 + 0x11);
  local_res18[0] = local_res18[0] & 0xffffffff00000000;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = *(undefined4 *)((longlong)puVar13 + 0x7c);
  *(undefined4 *)(puVar11 + 0x10) = uVar1;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uVar2;
  *(undefined4 *)(puVar11 + 0x11) = uVar3;
  iVar10 = (**(code **)(*param_2 + 0x10))(param_2,0x214,&local_228,local_res18);
  if (iVar10 == 0) {
    bVar14 = (int)local_res18[0] == 0x214;
  }
  else {
    bVar14 = false;
  }
  return bVar14;
}


/*
 * FUN_14001dcd4 at 14001dcd4
 * ulonglong __fastcall FUN_14001dcd4(uint * param_1)
 * Address ranges: 14001dcd4-14001e44b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_14001dcd4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  bool bVar14;
  CHAR local_b8 [136];
  
  uVar13 = 0;
  uVar4 = uVar13;
  if (param_1[1] < 5) {
    uVar4 = (ulonglong)(*param_1 < 7);
  }
  uVar6 = uVar13;
  if (param_1[2] < 5) {
    uVar6 = uVar4;
  }
  uVar4 = uVar13;
  if (param_1[3] < 0x191) {
    uVar4 = uVar6;
  }
  uVar6 = uVar13;
  if (param_1[4] < 0x191) {
    uVar6 = uVar4;
  }
  uVar1 = param_1[6];
  uVar4 = uVar13;
  if (param_1[5] < 0x191) {
    uVar4 = uVar6;
  }
  if ((uVar1 == 0) || (uVar1 == 1)) {
    bVar9 = (byte)uVar4;
  }
  else {
    if (uVar1 != 2) {
      uVar4 = uVar13;
    }
    bVar9 = (byte)uVar4;
  }
  bVar8 = 0;
  if (7 < param_1[7]) {
    bVar9 = bVar8;
  }
  bVar10 = bVar8;
  if (*(byte *)((longlong)param_1 + 0x21) < 2) {
    bVar10 = (byte)param_1[8] < 2 & bVar9;
  }
  bVar5 = 0;
  bVar9 = bVar5;
  if (*(byte *)((longlong)param_1 + 0x23) < 2) {
    bVar9 = *(byte *)((longlong)param_1 + 0x22) < 2 & bVar10;
  }
  bVar10 = bVar5;
  if (*(byte *)((longlong)param_1 + 0x25) < 2) {
    bVar10 = (byte)param_1[9] < 2 & bVar9;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x8a);
  uVar2 = *(uint *)((longlong)param_1 + 0x8e);
  if (uVar1 == 0xfffffff9) {
    if (0x400 < uVar2) goto LAB_14001dde9;
LAB_14001df46:
    bVar10 = *(byte *)((longlong)param_1 + 0x26) < 2 & bVar10;
  }
  else {
    if (((0xfffffff6 < uVar1 - 1) && (uVar1 != 0xfffffff9)) ||
       ((uVar1 < 0x80000001 && ((uVar2 < 0x80000001 && (uVar2 != 0)))))) goto LAB_14001df46;
LAB_14001dde9:
    bVar10 = 0;
  }
  if (4 < *(uint *)((longlong)param_1 + 0xca)) {
    bVar10 = bVar5;
  }
  uVar4 = (ulonglong)bVar10;
  if (4 < *(uint *)((longlong)param_1 + 0xce)) {
    uVar4 = uVar13;
  }
  bVar9 = (byte)uVar4;
  if (4 < *(uint *)((longlong)param_1 + 0xd2)) {
    bVar9 = bVar5;
  }
  uVar4 = uVar13;
  if (*(uint *)((longlong)param_1 + 0xaa) < 0x11) {
    uVar4 = (ulonglong)(*(byte *)((longlong)param_1 + 0xe6) < 2 & bVar9);
  }
  uVar6 = uVar13;
  if (*(uint *)((longlong)param_1 + 0x9e) < 0x11) {
    uVar6 = uVar4;
  }
  uVar4 = uVar13;
  if ((*(uint *)((longlong)param_1 + 0xc2) & 0xfffffff8) == 0) {
    uVar4 = uVar6;
  }
  iVar3 = *(int *)((longlong)param_1 + 0xbe);
  uVar6 = uVar13;
  if ((*(uint *)((longlong)param_1 + 0xc6) & 0xfffffffe) == 0) {
    uVar6 = uVar4;
  }
  if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) {
    uVar6 = uVar13;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xde);
  uVar2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  if (5000 < *(uint *)((longlong)param_1 + 0xda) / uVar2) {
    FUN_1400143b0(*(uint *)((longlong)param_1 + 0xda),uVar1,local_b8);
    uVar6 = 0;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x27);
  uVar4 = uVar13;
  if ((*(uint *)((longlong)param_1 + 0xe2) & 0xfffffffc) == 0) {
    uVar4 = uVar6;
  }
  bVar10 = (byte)uVar4;
  bVar9 = 0;
  if (iVar3 == 0) {
LAB_14001e030:
    uVar6 = uVar4;
    if ((*(int *)((longlong)param_1 + 0x2b) != 0x200000) &&
       (uVar6 = uVar13, *(int *)((longlong)param_1 + 0x2b) == 0x400000)) {
      uVar6 = uVar4;
    }
    if (((*(int *)((longlong)param_1 + 0x2f) != 0x100000) &&
        (*(int *)((longlong)param_1 + 0x2f) != 0x200000)) &&
       (*(int *)((longlong)param_1 + 0x2f) != 0x400000)) {
      uVar6 = uVar13;
    }
    bVar12 = (byte)uVar6;
LAB_14001e071:
    if (*(int *)((longlong)param_1 + 0x33) != 1) {
      bVar12 = bVar9;
    }
  }
  else {
    if (iVar3 == 1) {
LAB_14001dff1:
      uVar6 = uVar4;
      if ((*(int *)((longlong)param_1 + 0x2b) != 0x200000) &&
         (uVar6 = uVar13, *(int *)((longlong)param_1 + 0x2b) == 0x400000)) {
        uVar6 = uVar4;
      }
      if (*(int *)((longlong)param_1 + 0x2f) == 0x200000) {
        bVar12 = (byte)uVar6;
      }
      else {
        uVar4 = uVar13;
        if (*(int *)((longlong)param_1 + 0x2f) == 0x400000) {
          uVar4 = uVar6;
        }
        bVar12 = (byte)uVar4;
      }
      goto LAB_14001e071;
    }
    if (iVar3 == 2) {
LAB_14001df9a:
      uVar6 = uVar4;
      if ((*(int *)((longlong)param_1 + 0x2b) != 0x800000) &&
         (uVar6 = uVar13, *(int *)((longlong)param_1 + 0x2b) == 0xc00000)) {
        uVar6 = uVar4;
      }
      if ((*(int *)((longlong)param_1 + 0x2f) == 0x100000) ||
         (*(int *)((longlong)param_1 + 0x2f) == 0x200000)) {
        bVar12 = (byte)uVar6;
      }
      else {
        if (*(int *)((longlong)param_1 + 0x2f) != 0x400000) {
          uVar6 = uVar13;
        }
        bVar12 = (byte)uVar6;
      }
      bVar14 = *(int *)((longlong)param_1 + 0x33) == 2;
LAB_14001dfe6:
      if (!bVar14) {
LAB_14001df15:
        bVar12 = bVar9;
      }
    }
    else {
      if (iVar3 == 3) {
LAB_14001df4d:
        uVar6 = uVar4;
        if ((*(int *)((longlong)param_1 + 0x2b) != 0x800000) &&
           (uVar6 = uVar13, *(int *)((longlong)param_1 + 0x2b) == 0x1000000)) {
          uVar6 = uVar4;
        }
        if ((*(int *)((longlong)param_1 + 0x2f) == 0x100000) ||
           (*(int *)((longlong)param_1 + 0x2f) == 0x200000)) {
          bVar12 = (byte)uVar6;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2f) != 0x400000) {
            uVar6 = uVar13;
          }
          bVar12 = (byte)uVar6;
        }
        bVar14 = *(int *)((longlong)param_1 + 0x33) == 1;
        goto LAB_14001dfe6;
      }
      if (iVar3 == 4) {
LAB_14001df0b:
        bVar12 = bVar10;
        if (*(int *)((longlong)param_1 + 0x33) < 4) goto LAB_14001e077;
        goto LAB_14001df15;
      }
      uVar4 = 0;
      bVar10 = 0;
      if (iVar3 == 0) goto LAB_14001e030;
      if (iVar3 == 1) goto LAB_14001dff1;
      if (iVar3 == 2) goto LAB_14001df9a;
      if (iVar3 == 3) goto LAB_14001df4d;
      bVar12 = bVar9;
      if (iVar3 == 4) goto LAB_14001df0b;
    }
  }
LAB_14001e077:
  uVar1 = *(uint *)((longlong)param_1 + 0x37);
  uVar2 = *(uint *)((longlong)param_1 + 0x3b);
  bVar10 = bVar9;
  if (uVar1 == 0xfffffff9) {
    if (uVar2 < 0x401) {
LAB_14001e0bf:
      bVar10 = 1;
    }
  }
  else if (((0xfffffff6 < uVar1 - 1) && (uVar1 != 0xfffffff9)) ||
          ((uVar1 < 0x80000001 && ((uVar2 < 0x80000001 && (uVar2 != 0)))))) goto LAB_14001e0bf;
  bVar7 = bVar8;
  if ((*(uint *)((longlong)param_1 + 0x3f) < 0x11) &&
     ((0x10117U >> (*(uint *)((longlong)param_1 + 0x3f) & 0x1f) & 1) != 0)) {
    bVar7 = bVar10 & bVar12;
  }
  if (((*(uint *)((longlong)param_1 + 0x4b) & 0xfffffcff) != 0) ||
     (*(int *)((longlong)param_1 + 0x4b) == 0x300)) {
    bVar7 = bVar8;
  }
  bVar10 = bVar9;
  if (*(byte *)((longlong)param_1 + 0x52) < 2) {
    bVar10 = (byte)param_1[0x14] < 2 & bVar7;
  }
  bVar12 = bVar9;
  if ((byte)param_1[0x15] < 2) {
    bVar12 = *(byte *)((longlong)param_1 + 0x53) < 2 & bVar10;
  }
  bVar10 = bVar9;
  if (*(byte *)((longlong)param_1 + 0x56) < 2) {
    bVar10 = *(byte *)((longlong)param_1 + 0x55) < 2 & bVar12;
  }
  if (*(byte *)((longlong)param_1 + 0x57) < 2) {
    bVar10 = *(byte *)((longlong)param_1 + 0x51) < 2 & bVar10;
  }
  else {
    bVar10 = 0;
  }
  if (2 < *(uint *)((longlong)param_1 + 0xe7)) {
    bVar10 = bVar9;
  }
  uVar4 = (ulonglong)bVar10;
  if (2 < *(uint *)((longlong)param_1 + 0xeb)) {
    uVar4 = uVar13;
  }
  bVar10 = bVar9;
  if (*(uint *)((longlong)param_1 + 0xef) < 0x11) {
    bVar10 = (byte)uVar4;
  }
  uVar1 = param_1[0x19];
  if (1 < (byte)param_1[0x20]) {
    bVar10 = bVar9;
  }
  uVar2 = param_1[0x1a];
  if (6 < param_1[0x16]) {
    bVar10 = bVar9;
  }
  bVar12 = 1;
  if (uVar1 == 0xfffffff9) {
    if (uVar2 < 0x401) goto LAB_14001e19b;
  }
  else if (((0xfffffff6 < uVar1 - 1) && (uVar1 != 0xfffffff9)) ||
          ((uVar1 < 0x80000001 && ((uVar2 < 0x80000001 && (uVar2 != 0)))))) goto LAB_14001e19b;
  bVar12 = bVar9;
LAB_14001e19b:
  bVar7 = bVar8;
  if ((param_1[0x1b] < 0x11) && ((0x10117U >> (param_1[0x1b] & 0x1f) & 1) != 0)) {
    bVar7 = bVar12 & bVar10;
  }
  if ((0x400 < param_1[0x1e]) || ((char)param_1[0x1e] != '\0')) {
    bVar7 = bVar8;
  }
  bVar10 = 0;
  bVar8 = bVar10;
  if (*(byte *)((longlong)param_1 + 0x81) < 2) {
    bVar8 = *(byte *)((longlong)param_1 + 0x87) < 2 & -(param_1[0x1f] < 4) & bVar7;
  }
  bVar12 = bVar10;
  if ((byte)param_1[0x21] < 2) {
    bVar12 = *(byte *)((longlong)param_1 + 0x82) < 2 & bVar8;
  }
  bVar8 = bVar10;
  if (*(byte *)((longlong)param_1 + 0x86) < 2) {
    bVar8 = *(byte *)((longlong)param_1 + 0x85) < 2 & bVar12;
  }
  bVar12 = bVar10;
  if ((byte)param_1[0x22] < 2) {
    bVar12 = *(byte *)((longlong)param_1 + 0x83) < 2 & bVar8;
  }
  uVar4 = (ulonglong)bVar12;
  if (3 < *(uint *)((longlong)param_1 + 0xf7)) {
    uVar4 = uVar13;
  }
  uVar6 = uVar4;
  if ((0xffff < *(uint *)((longlong)param_1 + 0xfb)) &&
     (uVar6 = uVar13, *(uint *)((longlong)param_1 + 0xfb) == 0xffffffff)) {
    uVar6 = uVar4;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x1cb);
  if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) {
    uVar6 = uVar13;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x1d7);
  if (3 < *(uint *)((longlong)param_1 + 0x1cf)) {
    uVar6 = uVar13;
  }
  uVar4 = uVar13;
  if (*(uint *)((longlong)param_1 + 0x1d3) < 0x11) {
    uVar4 = uVar6;
  }
  if ((iVar3 == 0) || (iVar3 == 1)) {
    bVar8 = (byte)uVar4;
  }
  else {
    if (iVar3 != 2) {
      uVar4 = uVar13;
    }
    bVar8 = (byte)uVar4;
  }
  uVar4 = (ulonglong)bVar8;
  if (3 < *(uint *)((longlong)param_1 + 0x1db)) {
    uVar4 = uVar13;
  }
  bVar8 = (byte)uVar4;
  if (((*(int *)((longlong)param_1 + 0x1e7) - 0x100U & 0xfffffcff) != 0) ||
     (*(int *)((longlong)param_1 + 0x1e7) == 0x300)) {
    bVar8 = 0;
  }
  bVar12 = bVar9;
  if (*(uint *)((longlong)param_1 + 0x1eb) < 9) {
    bVar12 = bVar8;
  }
  if ((byte)param_1[0x7d] < 2) {
    bVar9 = *(byte *)((longlong)param_1 + 499) < 2 & bVar12;
  }
  bVar8 = bVar10;
  if (*(byte *)((longlong)param_1 + 0x1f6) < 2) {
    bVar8 = *(byte *)((longlong)param_1 + 0x1f5) < 2 & bVar9;
  }
  if ((byte)param_1[0x7e] < 2) {
    bVar10 = *(byte *)((longlong)param_1 + 0x1f7) < 2 & bVar8;
  }
  if (*(byte *)((longlong)param_1 + 0x1fa) < 2) {
    uVar4 = (ulonglong)(*(byte *)((longlong)param_1 + 0x1f9) < 2 & bVar10);
  }
  else {
    uVar4 = 0;
  }
  if (2 < *(uint *)((longlong)param_1 + 0x1df)) {
    uVar4 = uVar13;
  }
  uVar6 = uVar13;
  uVar11 = uVar13;
  if ((*(uint *)((longlong)param_1 + 0x1e3) & 0xfffffff8) == 0) {
    uVar11 = uVar4;
  }
  do {
    uVar1 = *(uint *)((longlong)param_1 + uVar6 * 0xc + 0x10b);
    if (uVar1 == 0xffffffff) {
      uVar1 = *(uint *)((longlong)param_1 + uVar6 * 0xc + 0x10f);
      if ((uVar1 < 0x100) || (uVar1 - 0x102 < 0xfffffefd)) {
LAB_14001e3f0:
        uVar11 = 0;
      }
    }
    else if ((0x80000000 < uVar1) ||
            (0x80000000 < *(uint *)((longlong)param_1 + uVar6 * 0xc + 0x10f))) goto LAB_14001e3f0;
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x10) {
      if (*(uint *)((longlong)param_1 + 0x1ff) < 3) {
        bVar5 = *(uint *)((longlong)param_1 + 0x1fb) < 3 & (byte)uVar11;
      }
      uVar4 = uVar13;
      if (*(uint *)((longlong)param_1 + 0x207) < 3) {
        uVar4 = (ulonglong)(*(uint *)((longlong)param_1 + 0x203) < 3 & bVar5);
      }
      if (1 < *(byte *)((longlong)param_1 + 0x20b)) {
        uVar4 = uVar13;
      }
      return uVar4;
    }
  } while( true );
}


/*
 * FUN_14001e44c at 14001e44c
 * undefined __fastcall FUN_14001e44c(undefined8 * param_1)
 * Address ranges: 14001e44c-14001e463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001e44c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}


/*
 * FUN_14001e464 at 14001e464
 * undefined __fastcall FUN_14001e464(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14001e464-14001e8ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001e464(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x33);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3b);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3f);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x43);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x47);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x57);
  param_1[0x16] = param_2[0x16];
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)(param_2 + 0x17);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x82);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x85);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x86);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x87);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x89) = *(undefined1 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x8a);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x8e);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x92);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x96);
  *(undefined4 *)((longlong)param_1 + 0x9a) = *(undefined4 *)((longlong)param_2 + 0x9a);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x9e);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0xa2);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0xa6);
  *(undefined4 *)((longlong)param_1 + 0xaa) = *(undefined4 *)((longlong)param_2 + 0xaa);
  *(undefined4 *)((longlong)param_1 + 0xae) = *(undefined4 *)((longlong)param_2 + 0xae);
  *(undefined4 *)((longlong)param_1 + 0xb2) = *(undefined4 *)((longlong)param_2 + 0xb2);
  *(undefined4 *)((longlong)param_1 + 0xb6) = *(undefined4 *)((longlong)param_2 + 0xb6);
  *(undefined4 *)((longlong)param_1 + 0xba) = *(undefined4 *)((longlong)param_2 + 0xba);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0xbe);
  *(undefined4 *)((longlong)param_1 + 0xc2) = *(undefined4 *)((longlong)param_2 + 0xc2);
  *(undefined4 *)((longlong)param_1 + 0xc6) = *(undefined4 *)((longlong)param_2 + 0xc6);
  *(undefined4 *)((longlong)param_1 + 0xca) = *(undefined4 *)((longlong)param_2 + 0xca);
  *(undefined4 *)((longlong)param_1 + 0xce) = *(undefined4 *)((longlong)param_2 + 0xce);
  *(undefined4 *)((longlong)param_1 + 0xd2) = *(undefined4 *)((longlong)param_2 + 0xd2);
  *(undefined4 *)((longlong)param_1 + 0xe2) = *(undefined4 *)((longlong)param_2 + 0xde);
  *(undefined4 *)((longlong)param_1 + 0xda) = *(undefined4 *)((longlong)param_2 + 0xd6);
  *(undefined4 *)((longlong)param_1 + 0xde) = *(undefined4 *)((longlong)param_2 + 0xda);
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xe2);
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xe3);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xe7);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xeb);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xf3);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xf7);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xfb);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xff);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0x103);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1c7);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1cb);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1cf);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1d3);
  *(int *)((longlong)param_1 + 0x1db) = *(int *)((longlong)param_2 + 0x1d7) + 1;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1db);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1df);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1e3);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = *(undefined4 *)((longlong)param_2 + 0x1e7);
  *(undefined4 *)((longlong)param_1 + 0x1ef) = *(undefined4 *)((longlong)param_2 + 0x1eb);
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1ef);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x1f1);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1f2);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 499);
  *(undefined1 *)(param_1 + 0x7e) = *(undefined1 *)(param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x1f9) = *(undefined1 *)((longlong)param_2 + 0x1f5);
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x107);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x10b);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x10f);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1f7);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1fb);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1ff);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x203);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x207);
  return;
}


/*
 * FUN_14001e8cc at 14001e8cc
 * undefined __fastcall FUN_14001e8cc(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14001e8cc-14001ed2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001e8cc(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x33);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3b);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3f);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x43);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x47);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x57);
  param_1[0x16] = param_2[0x16];
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)(param_2 + 0x17);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x82);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x85);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x86);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x87);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined4 *)((longlong)param_1 + 0x9a) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x9d);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0xa5);
  *(undefined4 *)((longlong)param_1 + 0xaa) = *(undefined4 *)((longlong)param_2 + 0xa9);
  *(undefined4 *)((longlong)param_1 + 0xae) = *(undefined4 *)((longlong)param_2 + 0xad);
  *(undefined4 *)((longlong)param_1 + 0xb2) = *(undefined4 *)((longlong)param_2 + 0xb1);
  *(undefined4 *)((longlong)param_1 + 0xb6) = *(undefined4 *)((longlong)param_2 + 0xb5);
  *(undefined4 *)((longlong)param_1 + 0xba) = *(undefined4 *)((longlong)param_2 + 0xb9);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0xbd);
  *(undefined4 *)((longlong)param_1 + 0xc2) = *(undefined4 *)((longlong)param_2 + 0xc1);
  *(undefined4 *)((longlong)param_1 + 0xc6) = *(undefined4 *)((longlong)param_2 + 0xc5);
  *(undefined4 *)((longlong)param_1 + 0xca) = *(undefined4 *)((longlong)param_2 + 0xc9);
  *(undefined4 *)((longlong)param_1 + 0xce) = *(undefined4 *)((longlong)param_2 + 0xcd);
  *(undefined4 *)((longlong)param_1 + 0xd2) = *(undefined4 *)((longlong)param_2 + 0xd1);
  *(undefined4 *)((longlong)param_1 + 0xe2) = *(undefined4 *)((longlong)param_2 + 0xdd);
  *(undefined4 *)((longlong)param_1 + 0xda) = *(undefined4 *)((longlong)param_2 + 0xd5);
  *(undefined4 *)((longlong)param_1 + 0xde) = *(undefined4 *)((longlong)param_2 + 0xd9);
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xe1);
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xe2);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xe6);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xea);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xf2);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xf6);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xfa);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xfe);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0x102);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1c6);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1ca);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1ce);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1d2);
  *(int *)((longlong)param_1 + 0x1db) = *(int *)((longlong)param_2 + 0x1d6) + 1;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1da);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1de);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1e2);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = *(undefined4 *)((longlong)param_2 + 0x1e6);
  *(undefined4 *)((longlong)param_1 + 0x1ef) = *(undefined4 *)((longlong)param_2 + 0x1ea);
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1ee);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1ef);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1f1);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1f2);
  *(undefined1 *)(param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 499);
  *(undefined1 *)((longlong)param_1 + 0x1f9) = *(undefined1 *)(param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x106);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x10a);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x10e);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1f6);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1fa);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1fe);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x202);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x206);
  return;
}


/*
 * FUN_14001ed2c at 14001ed2c
 * undefined __fastcall FUN_14001ed2c(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14001ed2c-14001f188
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001ed2c(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = *(undefined4 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x82);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x85);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x86);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x87);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = param_2[0x22];
  *(undefined4 *)((longlong)param_1 + 0x8e) = param_2[0x23];
  *(undefined4 *)((longlong)param_1 + 0x92) = param_2[0x24];
  *(undefined4 *)((longlong)param_1 + 0x96) = param_2[0x25];
  *(undefined4 *)((longlong)param_1 + 0x9a) = param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0x9e) = param_2[0x27];
  *(undefined4 *)((longlong)param_1 + 0xa2) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xa6) = param_2[0x29];
  *(undefined4 *)((longlong)param_1 + 0xaa) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xae) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0xb2) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xb6) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0xba) = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xbe) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xc2) = param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0xc6) = param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0xca) = param_2[0x32];
  *(undefined4 *)((longlong)param_1 + 0xce) = param_2[0x33];
  *(undefined4 *)((longlong)param_1 + 0xd2) = param_2[0x34];
  *(undefined4 *)((longlong)param_1 + 0xe2) = param_2[0x37];
  *(undefined4 *)((longlong)param_1 + 0xda) = param_2[0x35];
  *(undefined4 *)((longlong)param_1 + 0xde) = param_2[0x36];
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xe1);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xe5);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xe9);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xf1);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xf5);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xf9);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xfd);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0x101);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1c5);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1c9);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1cd);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1d1);
  *(int *)((longlong)param_1 + 0x1db) = *(int *)((longlong)param_2 + 0x1d5) + 1;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1d9);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1dd);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1e1);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = *(undefined4 *)((longlong)param_2 + 0x1e5);
  *(undefined4 *)((longlong)param_1 + 0x1ef) = *(undefined4 *)((longlong)param_2 + 0x1e9);
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1ed);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1ee);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x1ef);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1f1);
  *(undefined1 *)(param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x1f2);
  *(undefined1 *)((longlong)param_1 + 0x1f9) = *(undefined1 *)((longlong)param_2 + 499);
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x105);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x109);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x10d);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = param_2[0x7d];
  *(undefined4 *)((longlong)param_1 + 0x1ff) = param_2[0x7e];
  *(undefined4 *)((longlong)param_1 + 0x203) = param_2[0x7f];
  *(undefined4 *)((longlong)param_1 + 0x207) = param_2[0x80];
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)(param_2 + 0x81);
  return;
}


/*
 * FUN_14001f18c at 14001f18c
 * undefined __fastcall FUN_14001f18c(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14001f18c-14001f5de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001f18c(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = *(undefined4 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x82);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x85);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x86);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x87);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = param_2[0x22];
  *(undefined4 *)((longlong)param_1 + 0x8e) = param_2[0x23];
  *(undefined4 *)((longlong)param_1 + 0x92) = param_2[0x24];
  *(undefined4 *)((longlong)param_1 + 0x96) = param_2[0x25];
  *(undefined4 *)((longlong)param_1 + 0x9a) = param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0x9e) = param_2[0x27];
  *(undefined4 *)((longlong)param_1 + 0xa2) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xa6) = param_2[0x29];
  *(undefined4 *)((longlong)param_1 + 0xaa) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xae) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0xb2) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xb6) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0xba) = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xbe) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xc2) = param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0xc6) = param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0xca) = param_2[0x32];
  *(undefined4 *)((longlong)param_1 + 0xce) = param_2[0x33];
  *(undefined4 *)((longlong)param_1 + 0xd2) = param_2[0x34];
  *(undefined4 *)((longlong)param_1 + 0xe2) = param_2[0x37];
  *(undefined4 *)((longlong)param_1 + 0xda) = param_2[0x35];
  *(undefined4 *)((longlong)param_1 + 0xde) = param_2[0x36];
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xe1);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xe5);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xe9);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xf1);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xf5);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xf9);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xfd);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0x101);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1c5);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1c9);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1cd);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1d1);
  *(int *)((longlong)param_1 + 0x1db) = *(int *)((longlong)param_2 + 0x1d5) + 1;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1d9);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1dd);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1e1);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = *(undefined4 *)((longlong)param_2 + 0x1e5);
  *(undefined4 *)((longlong)param_1 + 0x1ef) = *(undefined4 *)((longlong)param_2 + 0x1e9);
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1ed);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1ee);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x1ef);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1f1);
  *(undefined1 *)(param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x1f2);
  *(undefined2 *)((longlong)param_1 + 0x1f9) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x105);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x109);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x10d);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 499);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1f7);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1fb);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1ff);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x203);
  return;
}


/*
 * FUN_14001f5e0 at 14001f5e0
 * undefined __fastcall FUN_14001f5e0(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14001f5e0-14001fa2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001f5e0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x82) != '\0');
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(undefined4 *)((longlong)param_1 + 0x9a) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x9d);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xaa) = *(undefined4 *)((longlong)param_2 + 0xa5);
  *(undefined4 *)((longlong)param_1 + 0xae) = *(undefined4 *)((longlong)param_2 + 0xa9);
  *(undefined4 *)((longlong)param_1 + 0xb2) = *(undefined4 *)((longlong)param_2 + 0xad);
  *(undefined4 *)((longlong)param_1 + 0xb6) = *(undefined4 *)((longlong)param_2 + 0xb1);
  *(undefined4 *)((longlong)param_1 + 0xba) = *(undefined4 *)((longlong)param_2 + 0xb5);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0xb9);
  *(undefined4 *)((longlong)param_1 + 0xc2) = *(undefined4 *)((longlong)param_2 + 0xbd);
  *(undefined4 *)((longlong)param_1 + 0xc6) = *(undefined4 *)((longlong)param_2 + 0xc1);
  *(undefined4 *)((longlong)param_1 + 0xca) = *(undefined4 *)((longlong)param_2 + 0xc5);
  *(undefined4 *)((longlong)param_1 + 0xce) = *(undefined4 *)((longlong)param_2 + 0xc9);
  *(undefined4 *)((longlong)param_1 + 0xd2) = *(undefined4 *)((longlong)param_2 + 0xcd);
  *(undefined4 *)((longlong)param_1 + 0xe2) = *(undefined4 *)((longlong)param_2 + 0xd9);
  *(undefined4 *)((longlong)param_1 + 0xda) = *(undefined4 *)((longlong)param_2 + 0xd1);
  *(undefined4 *)((longlong)param_1 + 0xde) = *(undefined4 *)((longlong)param_2 + 0xd5);
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xdd);
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xde);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xe2);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xe6);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xee);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xf2);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xf6);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xfa);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xfe);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1c2);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1c6);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1ca);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1ce);
  *(int *)((longlong)param_1 + 0x1db) = *(int *)((longlong)param_2 + 0x1d2) + 1;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1d6);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1da);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1de);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = *(undefined4 *)((longlong)param_2 + 0x1e2);
  *(undefined4 *)((longlong)param_1 + 0x1ef) = *(undefined4 *)((longlong)param_2 + 0x1e6);
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1ea);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1eb);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)(param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1ed);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1ee);
  *(undefined1 *)(param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x1ef);
  *(undefined2 *)((longlong)param_1 + 0x1f9) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x102);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x106);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x10a);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = param_2[0x7c];
  *(undefined4 *)((longlong)param_1 + 0x1ff) = param_2[0x7d];
  *(undefined4 *)((longlong)param_1 + 0x203) = param_2[0x7e];
  *(undefined4 *)((longlong)param_1 + 0x207) = param_2[0x7f];
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)(param_2 + 0x80);
  return;
}


/*
 * FUN_14001fa30 at 14001fa30
 * undefined __fastcall FUN_14001fa30(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14001fa30-14001fe77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001fa30(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x82) != '\0');
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(undefined4 *)((longlong)param_1 + 0x9a) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x9d);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xaa) = *(undefined4 *)((longlong)param_2 + 0xa5);
  *(undefined4 *)((longlong)param_1 + 0xae) = *(undefined4 *)((longlong)param_2 + 0xa9);
  *(undefined4 *)((longlong)param_1 + 0xb2) = *(undefined4 *)((longlong)param_2 + 0xad);
  *(undefined4 *)((longlong)param_1 + 0xb6) = *(undefined4 *)((longlong)param_2 + 0xb1);
  *(undefined4 *)((longlong)param_1 + 0xba) = *(undefined4 *)((longlong)param_2 + 0xb5);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0xb9);
  *(undefined4 *)((longlong)param_1 + 0xc2) = *(undefined4 *)((longlong)param_2 + 0xbd);
  *(undefined4 *)((longlong)param_1 + 0xc6) = *(undefined4 *)((longlong)param_2 + 0xc1);
  *(undefined4 *)((longlong)param_1 + 0xca) = *(undefined4 *)((longlong)param_2 + 0xc5);
  *(undefined4 *)((longlong)param_1 + 0xce) = *(undefined4 *)((longlong)param_2 + 0xc9);
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(undefined4 *)((longlong)param_1 + 0xe2) = *(undefined4 *)((longlong)param_2 + 0xd5);
  *(undefined4 *)((longlong)param_1 + 0xda) = *(undefined4 *)((longlong)param_2 + 0xcd);
  *(undefined4 *)((longlong)param_1 + 0xde) = *(undefined4 *)((longlong)param_2 + 0xd1);
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xd9);
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xda);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xde);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xe2);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xe6);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xea);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xee);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xf2);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xf6);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1ba);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1be);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1c2);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1c6);
  *(int *)((longlong)param_1 + 0x1db) = *(int *)((longlong)param_2 + 0x1ca) + 1;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1ce);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1d2);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1d6);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = *(undefined4 *)((longlong)param_2 + 0x1da);
  *(undefined4 *)((longlong)param_1 + 0x1ef) = *(undefined4 *)((longlong)param_2 + 0x1de);
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1e2);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1e3);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)(param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1e5);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1e6);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xfa);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xfe);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0x102);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1e7);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1eb);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1ef);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 499);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1f7);
  return;
}


/*
 * FUN_14001fe78 at 14001fe78
 * undefined __fastcall FUN_14001fe78(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14001fe78-1400202c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14001fe78(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x82) != '\0');
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(undefined4 *)((longlong)param_1 + 0x9a) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x9d);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xaa) = *(undefined4 *)((longlong)param_2 + 0xa5);
  *(undefined4 *)((longlong)param_1 + 0xae) = *(undefined4 *)((longlong)param_2 + 0xa9);
  *(undefined4 *)((longlong)param_1 + 0xb2) = *(undefined4 *)((longlong)param_2 + 0xad);
  *(undefined4 *)((longlong)param_1 + 0xb6) = *(undefined4 *)((longlong)param_2 + 0xb1);
  *(undefined4 *)((longlong)param_1 + 0xba) = *(undefined4 *)((longlong)param_2 + 0xb5);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0xb9);
  *(undefined4 *)((longlong)param_1 + 0xc2) = *(undefined4 *)((longlong)param_2 + 0xbd);
  *(undefined4 *)((longlong)param_1 + 0xc6) = *(undefined4 *)((longlong)param_2 + 0xc1);
  *(undefined4 *)((longlong)param_1 + 0xca) = *(undefined4 *)((longlong)param_2 + 0xc5);
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(uint *)((longlong)param_1 + 0xe2) = -(uint)(*(char *)((longlong)param_2 + 0xd6) != '\0') & 3;
  *(undefined4 *)((longlong)param_1 + 0xda) = *(undefined4 *)((longlong)param_2 + 0xcd);
  *(undefined4 *)((longlong)param_1 + 0xde) = *(undefined4 *)((longlong)param_2 + 0xd1);
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xd5);
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xd7);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xdb);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xdf);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xe3);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xe7);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xeb);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xef);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xf3);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1b7);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1bb);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1bf);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1c3);
  *(int *)((longlong)param_1 + 0x1db) = *(int *)((longlong)param_2 + 0x1c7) + 1;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1cb);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1cf);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1d3);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = *(undefined4 *)((longlong)param_2 + 0x1d7);
  *(undefined4 *)((longlong)param_1 + 0x1ef) = *(undefined4 *)((longlong)param_2 + 0x1db);
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1df);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 0x78);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x1e1);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1e2);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1e3);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xf7);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xfb);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xff);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = param_2[0x79];
  *(undefined4 *)((longlong)param_1 + 0x1ff) = param_2[0x7a];
  *(undefined4 *)((longlong)param_1 + 0x203) = param_2[0x7b];
  *(undefined4 *)((longlong)param_1 + 0x207) = param_2[0x7c];
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)(param_2 + 0x7d);
  return;
}


/*
 * FUN_1400202c8 at 1400202c8
 * undefined __fastcall FUN_1400202c8(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 1400202c8-140020710
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400202c8(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x82) != '\0');
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(undefined4 *)((longlong)param_1 + 0x9a) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x9d);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xaa) = *(undefined4 *)((longlong)param_2 + 0xa5);
  *(undefined4 *)((longlong)param_1 + 0xae) = *(undefined4 *)((longlong)param_2 + 0xa9);
  *(undefined4 *)((longlong)param_1 + 0xb2) = *(undefined4 *)((longlong)param_2 + 0xad);
  *(undefined4 *)((longlong)param_1 + 0xb6) = *(undefined4 *)((longlong)param_2 + 0xb1);
  *(undefined4 *)((longlong)param_1 + 0xba) = *(undefined4 *)((longlong)param_2 + 0xb5);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0xb9);
  *(undefined4 *)((longlong)param_1 + 0xc2) = *(undefined4 *)((longlong)param_2 + 0xbd);
  *(undefined4 *)((longlong)param_1 + 0xc6) = *(undefined4 *)((longlong)param_2 + 0xc1);
  *(undefined4 *)((longlong)param_1 + 0xca) = *(undefined4 *)((longlong)param_2 + 0xc5);
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(undefined4 *)((longlong)param_1 + 0xda) = *(undefined4 *)((longlong)param_2 + 0xc9);
  *(undefined4 *)((longlong)param_1 + 0xde) = *(undefined4 *)((longlong)param_2 + 0xcd);
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xd1);
  *(uint *)((longlong)param_1 + 0xe2) = (uint)(*(char *)((longlong)param_2 + 0xd2) != '\0');
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xd3);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xd7);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xdb);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xdf);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xe3);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xe7);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xeb);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xef);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1b3);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1b7);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1bb);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1bf);
  *(int *)((longlong)param_1 + 0x1db) = *(int *)((longlong)param_2 + 0x1c3) + 1;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1c7);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1cb);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1cf);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = *(undefined4 *)((longlong)param_2 + 0x1d3);
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1d7);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x1d9);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1da);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1db);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xf3);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xf7);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xfb);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1dd);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1e1);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1e5);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1e9);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1ed);
  return;
}


/*
 * FUN_140020714 at 140020714
 * undefined __fastcall FUN_140020714(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140020714-140020b51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140020714(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x82) != '\0');
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = param_2[0x21];
  *(undefined4 *)((longlong)param_1 + 0x8e) = param_2[0x22];
  *(undefined4 *)((longlong)param_1 + 0x92) = param_2[0x23];
  *(undefined4 *)((longlong)param_1 + 0x96) = param_2[0x24];
  *(undefined4 *)((longlong)param_1 + 0x9a) = param_2[0x25];
  *(undefined4 *)((longlong)param_1 + 0x9e) = param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0xa2) = param_2[0x27];
  *(undefined4 *)((longlong)param_1 + 0xa6) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xaa) = param_2[0x29];
  *(undefined4 *)((longlong)param_1 + 0xae) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xb2) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0xb6) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xba) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0xbe) = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xc2) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xc6) = param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0xca) = param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(undefined4 *)((longlong)param_1 + 0xda) = param_2[0x32];
  *(undefined4 *)((longlong)param_1 + 0xde) = param_2[0x33];
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)(param_2 + 0x34);
  *(uint *)((longlong)param_1 + 0xe2) = (uint)(*(char *)((longlong)param_2 + 0xd1) != '\0');
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xd2);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xd6);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xda);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xde);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xe2);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xe6);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xea);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xee);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1b2);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1b6);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1ba);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1be);
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1c6);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1ca);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1ce);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1d2);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1d3);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)(param_2 + 0x75);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1d5);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1d6);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xf2);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xf6);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xfa);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1d7);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1db);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1df);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1e3);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1e7);
  return;
}


/*
 * FUN_140020b54 at 140020b54
 * undefined __fastcall FUN_140020b54(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140020b54-140020f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140020b54(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x82) != '\0');
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = param_2[0x21];
  *(undefined4 *)((longlong)param_1 + 0x8e) = param_2[0x22];
  *(undefined4 *)((longlong)param_1 + 0x92) = param_2[0x23];
  *(undefined4 *)((longlong)param_1 + 0x96) = param_2[0x24];
  *(undefined4 *)((longlong)param_1 + 0x9a) = param_2[0x25];
  *(undefined4 *)((longlong)param_1 + 0x9e) = param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0xa2) = param_2[0x27];
  *(undefined4 *)((longlong)param_1 + 0xa6) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xaa) = param_2[0x29];
  *(undefined4 *)((longlong)param_1 + 0xae) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xb2) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0xb6) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xba) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0xbe) = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xc2) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xc6) = param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0xca) = param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(undefined4 *)((longlong)param_1 + 0xda) = param_2[0x32];
  *(undefined4 *)((longlong)param_1 + 0xde) = 1;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)(param_2 + 0x33);
  *(uint *)((longlong)param_1 + 0xe2) = (uint)(*(char *)((longlong)param_2 + 0xcd) != '\0');
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xce);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xd2);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xd6);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xda);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xde);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xe2);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xe6);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xea);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1ae);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1b2);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1b6);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1ba);
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1c2);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1c6);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1ca);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1ce);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1cf);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)(param_2 + 0x74);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1d1);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1d2);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xee);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xf2);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xf6);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1d3);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1d7);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1db);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1df);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1e3);
  return;
}


/*
 * FUN_140020f90 at 140020f90
 * undefined __fastcall FUN_140020f90(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140020f90-1400213b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140020f90(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x82) != '\0');
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = param_2[0x21];
  *(undefined4 *)((longlong)param_1 + 0x8e) = param_2[0x22];
  *(undefined4 *)((longlong)param_1 + 0x92) = param_2[0x23];
  *(undefined4 *)((longlong)param_1 + 0x96) = param_2[0x24];
  *(undefined4 *)((longlong)param_1 + 0x9a) = param_2[0x25];
  *(undefined4 *)((longlong)param_1 + 0x9e) = param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0xa2) = param_2[0x27];
  *(undefined4 *)((longlong)param_1 + 0xa6) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined4 *)((longlong)param_1 + 0xae) = param_2[0x29];
  *(undefined4 *)((longlong)param_1 + 0xb2) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xb6) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0xba) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xbe) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0xc2) = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xc6) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xca) = param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)(param_2 + 0x31);
  *(uint *)((longlong)param_1 + 0xe2) = (uint)(*(char *)((longlong)param_2 + 0xc5) != '\0');
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xc6);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xca);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xce);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xd2);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xd6);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xda);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xde);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xe2);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1a6);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1aa);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1ae);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1b2);
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1b6);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1ba);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1be);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1c2);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1c3);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)(param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1c5);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1c6);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xe6);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xea);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xee);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1c7);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1cb);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1cf);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1d3);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1d7);
  return;
}


/*
 * FUN_1400213b8 at 1400213b8
 * undefined __fastcall FUN_1400213b8(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 1400213b8-1400217d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400213b8(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 99);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x77);
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x82) != '\0');
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = param_2[0x21];
  *(undefined4 *)((longlong)param_1 + 0x8e) = param_2[0x22];
  *(undefined4 *)((longlong)param_1 + 0x92) = param_2[0x23];
  *(undefined4 *)((longlong)param_1 + 0x96) = param_2[0x24];
  *(undefined4 *)((longlong)param_1 + 0x9a) = param_2[0x25];
  *(undefined4 *)((longlong)param_1 + 0x9e) = param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0xa2) = param_2[0x27];
  *(undefined4 *)((longlong)param_1 + 0xa6) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined4 *)((longlong)param_1 + 0xae) = param_2[0x29];
  *(undefined4 *)((longlong)param_1 + 0xb2) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xb6) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0xba) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xbe) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0xc2) = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xca) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)(param_2 + 0x30);
  *(uint *)((longlong)param_1 + 0xe2) = (uint)(*(char *)((longlong)param_2 + 0xc1) != '\0');
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xc2);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xc6);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xca);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xce);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xd2);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xd6);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xda);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xde);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1a2);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1a6);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1aa);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1ae);
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1b2);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1b6);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1ba);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1be);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1bf);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1c1);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1c2);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xe2);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xe6);
    *(undefined4 *)((longlong)param_1 + lVar1 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar1 * 0xc + 0xea);
    lVar1 = lVar2;
  } while (lVar2 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1c3);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1c7);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1cb);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1cf);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1d3);
  return;
}


/*
 * FUN_1400217dc at 1400217dc
 * undefined __fastcall FUN_1400217dc(int * param_1, int * param_2)
 * Address ranges: 1400217dc-140021c05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_1400217dc(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = 6;
  if (*param_2 != 5) {
    iVar1 = *param_2;
  }
  *param_1 = iVar1;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(char *)(param_1 + 8) = (char)param_2[8];
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(char *)(param_1 + 9) = (char)param_2[9];
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x4b) = *(undefined4 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(char *)((longlong)param_1 + 0x51) = (char)param_2[0x14];
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(char *)((longlong)param_1 + 0x55) = (char)param_2[0x15];
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x56);
  param_1[0x16] = *(int *)((longlong)param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)((longlong)param_2 + 0x5b);
  param_1[0x19] = *(int *)((longlong)param_2 + 99);
  param_1[0x1a] = *(int *)((longlong)param_2 + 0x67);
  param_1[0x1b] = *(int *)((longlong)param_2 + 0x6b);
  param_1[0x1c] = *(int *)((longlong)param_2 + 0x6f);
  param_1[0x1d] = *(int *)((longlong)param_2 + 0x73);
  param_1[0x1e] = *(int *)((longlong)param_2 + 0x77);
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x82) != '\0');
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(char *)((longlong)param_1 + 0x81) = (char)param_2[0x1f];
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(char *)((longlong)param_1 + 0x85) = (char)param_2[0x20];
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(int *)((longlong)param_1 + 0x8a) = param_2[0x21];
  *(int *)((longlong)param_1 + 0x8e) = param_2[0x22];
  *(int *)((longlong)param_1 + 0x92) = param_2[0x23];
  *(int *)((longlong)param_1 + 0x96) = param_2[0x24];
  *(int *)((longlong)param_1 + 0x9a) = param_2[0x25];
  *(int *)((longlong)param_1 + 0x9e) = param_2[0x26];
  *(int *)((longlong)param_1 + 0xa2) = param_2[0x27];
  *(int *)((longlong)param_1 + 0xa6) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xaa) = 0;
  *(int *)((longlong)param_1 + 0xae) = param_2[0x29];
  *(int *)((longlong)param_1 + 0xb2) = param_2[0x2a];
  *(int *)((longlong)param_1 + 0xb6) = param_2[0x2b];
  *(int *)((longlong)param_1 + 0xba) = param_2[0x2c];
  *(int *)((longlong)param_1 + 0xbe) = param_2[0x2d];
  *(int *)((longlong)param_1 + 0xc2) = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xc6) = 0;
  *(int *)((longlong)param_1 + 0xca) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(char *)((longlong)param_1 + 0xe6) = (char)param_2[0x30];
  *(uint *)((longlong)param_1 + 0xe2) = (uint)(*(char *)((longlong)param_2 + 0xc1) != '\0');
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xc2);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xc6);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xca);
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xce);
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xd2);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xd6);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xda);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xde);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x1a2);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x1a6);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x1aa);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x1ae);
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x1b2);
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x1b6);
  *(undefined4 *)((longlong)param_1 + 0x1e7) = *(undefined4 *)((longlong)param_2 + 0x1ba);
  *(undefined4 *)((longlong)param_1 + 0x1eb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x1be);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1bf);
  *(char *)((longlong)param_1 + 0x1f5) = (char)param_2[0x70];
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1c1);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = *(undefined1 *)((longlong)param_2 + 0x1c2);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar2 * 0xc + 0xe2);
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar2 * 0xc + 0xe6);
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar2 * 0xc + 0xea);
    lVar2 = lVar3;
  } while (lVar3 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1c3);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1c7);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1cb);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1cf);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1d3);
  return;
}


/*
 * FUN_140021c08 at 140021c08
 * undefined __fastcall FUN_140021c08(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140021c08-14002202a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140021c08(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  param_1[6] = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  param_1[7] = param_2[7];
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x4a) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7b);
  param_1[0x19] = param_2[0x18];
  param_1[0x1a] = param_2[0x19];
  param_1[0x1b] = param_2[0x1a];
  param_1[0x1c] = param_2[0x1b];
  param_1[0x1d] = param_2[0x1c];
  param_1[0x1e] = param_2[0x1d];
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x7f) != '\0');
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x16] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x81);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0x9d);
  *(undefined4 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined4 *)((longlong)param_1 + 0xae) = *(undefined4 *)((longlong)param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xb2) = *(undefined4 *)((longlong)param_2 + 0xa5);
  *(undefined4 *)((longlong)param_1 + 0xb6) = *(undefined4 *)((longlong)param_2 + 0xa9);
  *(undefined4 *)((longlong)param_1 + 0xba) = *(undefined4 *)((longlong)param_2 + 0xad);
  cVar1 = *(char *)((longlong)param_2 + 0xb9);
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(uint *)((longlong)param_1 + 0xca) = (uint)(cVar1 == '\0');
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xba);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0xb1);
  *(undefined4 *)((longlong)param_1 + 0xc2) = *(undefined4 *)((longlong)param_2 + 0xb5);
  *(undefined4 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(uint *)((longlong)param_1 + 0xe2) = (uint)(*(char *)((longlong)param_2 + 0xbb) != '\0');
  *(undefined4 *)((longlong)param_1 + 0xe7) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xeb) = param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0xef) = param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0xf7) = param_2[0x32];
  *(undefined4 *)((longlong)param_1 + 0xfb) = param_2[0x33];
  *(undefined4 *)((longlong)param_1 + 0xff) = param_2[0x34];
  *(undefined4 *)((longlong)param_1 + 0x103) = param_2[0x35];
  *(undefined4 *)((longlong)param_1 + 0x107) = param_2[0x36];
  *(undefined4 *)((longlong)param_1 + 0x1cb) = param_2[0x67];
  *(undefined4 *)((longlong)param_1 + 0x1cf) = param_2[0x68];
  *(undefined4 *)((longlong)param_1 + 0x1d3) = param_2[0x69];
  *(undefined4 *)((longlong)param_1 + 0x1d7) = param_2[0x6a];
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e7) = param_2[0x6d];
  *(undefined4 *)((longlong)param_1 + 0x1eb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)(param_2 + 0x6e);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1b9);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x1ba);
  *(undefined4 *)((longlong)param_1 + 0x1df) = param_2[0x6b];
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1bb);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1e3) = param_2[0x6c];
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10b) = param_2[lVar2 * 3 + 0x37];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10f) = param_2[lVar2 * 3 + 0x38];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x113) = param_2[lVar2 * 3 + 0x39];
    lVar2 = lVar3;
  } while (lVar3 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1bd);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1c1);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1c5);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1c9);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1cd);
  return;
}


/*
 * FUN_14002202c at 14002202c
 * undefined __fastcall FUN_14002202c(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14002202c-14002242c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14002202c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  param_1[6] = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  param_1[7] = param_2[7];
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x4a) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7b);
  param_1[0x19] = param_2[0x18];
  param_1[0x1a] = param_2[0x19];
  param_1[0x1b] = param_2[0x1a];
  param_1[0x1c] = param_2[0x1b];
  param_1[0x1d] = param_2[0x1c];
  param_1[0x1e] = param_2[0x1d];
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x7f) != '\0');
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x16] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x81);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0x9d);
  *(undefined8 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0xa9);
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(uint *)((longlong)param_1 + 0xca) = (uint)(cVar1 == '\0');
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xaa);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xc2) = *(undefined4 *)((longlong)param_2 + 0xa5);
  *(undefined4 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(uint *)((longlong)param_1 + 0xe2) = (uint)(*(char *)((longlong)param_2 + 0xab) != '\0');
  *(undefined4 *)((longlong)param_1 + 0xe7) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0xeb) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xef) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0xf7) = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xfb) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xff) = param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0x103) = param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0x107) = param_2[0x32];
  *(undefined4 *)((longlong)param_1 + 0x1cb) = param_2[99];
  *(undefined4 *)((longlong)param_1 + 0x1cf) = param_2[100];
  *(undefined4 *)((longlong)param_1 + 0x1d3) = param_2[0x65];
  *(undefined4 *)((longlong)param_1 + 0x1d7) = param_2[0x66];
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e7) = param_2[0x69];
  *(undefined4 *)((longlong)param_1 + 0x1eb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)(param_2 + 0x6a);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1a9);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x1aa);
  *(undefined4 *)((longlong)param_1 + 0x1df) = param_2[0x67];
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1ab);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1e3) = param_2[0x68];
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10b) = param_2[lVar2 * 3 + 0x33];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10f) = param_2[lVar2 * 3 + 0x34];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x113) = param_2[lVar2 * 3 + 0x35];
    lVar2 = lVar3;
  } while (lVar3 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x1ad);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x1b1);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1b5);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1b9);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1bd);
  return;
}


/*
 * FUN_140022430 at 140022430
 * undefined __fastcall FUN_140022430(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140022430-140022829
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140022430(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  param_1[6] = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  param_1[7] = param_2[7];
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x4a) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x7b);
  param_1[0x19] = param_2[0x18];
  param_1[0x1a] = param_2[0x19];
  param_1[0x1b] = param_2[0x1a];
  param_1[0x1c] = param_2[0x1b];
  param_1[0x1d] = param_2[0x1c];
  param_1[0x1e] = param_2[0x1d];
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x7f) != '\0');
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x16] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x81);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0x9d);
  *(undefined8 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0xa9);
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(uint *)((longlong)param_1 + 0xca) = (uint)(cVar1 == '\0');
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xaa);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xc2) = *(undefined4 *)((longlong)param_2 + 0xa5);
  *(undefined4 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(uint *)((longlong)param_1 + 0xe2) = (uint)(*(char *)((longlong)param_2 + 0xab) != '\0');
  *(undefined4 *)((longlong)param_1 + 0xe7) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0xeb) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xef) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0xf7) = param_2[0x2e];
  *(undefined4 *)((longlong)param_1 + 0xfb) = param_2[0x2f];
  *(undefined4 *)((longlong)param_1 + 0xff) = param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0x103) = param_2[0x31];
  *(undefined4 *)((longlong)param_1 + 0x107) = param_2[0x32];
  *(undefined4 *)((longlong)param_1 + 0x1cb) = param_2[99];
  *(undefined4 *)((longlong)param_1 + 0x1cf) = param_2[100];
  *(undefined4 *)((longlong)param_1 + 0x1d3) = param_2[0x65];
  *(undefined4 *)((longlong)param_1 + 0x1d7) = param_2[0x66];
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e7) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)(param_2 + 0x6a);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x1a9);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x1aa);
  *(undefined4 *)((longlong)param_1 + 0x1df) = param_2[0x67];
  *(undefined1 *)((longlong)param_1 + 0x1f6) = *(undefined1 *)((longlong)param_2 + 0x1ab);
  *(undefined1 *)((longlong)param_1 + 0x1f7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1e3) = param_2[0x68];
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10b) = param_2[lVar2 * 3 + 0x33];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10f) = param_2[lVar2 * 3 + 0x34];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x113) = param_2[lVar2 * 3 + 0x35];
    lVar2 = lVar3;
  } while (lVar3 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = param_2[0x6b];
  *(undefined4 *)((longlong)param_1 + 0x1ff) = param_2[0x6c];
  *(undefined4 *)((longlong)param_1 + 0x203) = param_2[0x6d];
  *(undefined4 *)((longlong)param_1 + 0x207) = param_2[0x6e];
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)(param_2 + 0x6f);
  return;
}


/*
 * FUN_14002282c at 14002282c
 * undefined __fastcall FUN_14002282c(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14002282c-140022bf1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14002282c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  param_1[6] = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  param_1[7] = param_2[7];
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x4a) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x75);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x77);
  param_1[0x19] = param_2[0x17];
  param_1[0x1a] = param_2[0x18];
  param_1[0x1b] = param_2[0x19];
  param_1[0x1c] = param_2[0x1a];
  param_1[0x1d] = param_2[0x1b];
  param_1[0x1e] = param_2[0x1c];
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x7b) != '\0');
  *(ulonglong *)(param_1 + 0x17) = (ulonglong)(uint)param_2[0x16];
  param_1[0x16] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x7d);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x81);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined8 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(uint *)((longlong)param_1 + 0xca) = (uint)(cVar1 == '\0');
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0xa2);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined8 *)((longlong)param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0xa3);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xa7);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xab);
  *(undefined4 *)((longlong)param_1 + 0xf7) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xaf);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xb3);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xb7);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xbb);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x17f);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x183);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x187);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x18b);
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e7) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x197);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 0x66);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x199);
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 399);
  *(undefined2 *)((longlong)param_1 + 0x1f6) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 0x193);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar2 * 0xc + 0xbf);
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar2 * 0xc + 0xc3);
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar2 * 0xc + 199);
    lVar2 = lVar3;
  } while (lVar3 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x19a);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x19e);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x1a2);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1a6);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1aa);
  return;
}


/*
 * FUN_140022bf4 at 140022bf4
 * undefined __fastcall FUN_140022bf4(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140022bf4-140022fb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140022bf4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  param_1[6] = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  param_1[7] = param_2[7];
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x4a) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x75);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x77);
  param_1[0x19] = param_2[0x17];
  param_1[0x1a] = param_2[0x18];
  param_1[0x1b] = param_2[0x19];
  param_1[0x1c] = param_2[0x1a];
  param_1[0x1d] = param_2[0x1b];
  param_1[0x1e] = param_2[0x1c];
  param_1[0x1f] = (uint)(*(char *)((longlong)param_2 + 0x7b) != '\0');
  *(ulonglong *)(param_1 + 0x17) = (ulonglong)(uint)param_2[0x16];
  param_1[0x16] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x7d);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x81);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x85);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x8d);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x91);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0x95);
  *(undefined8 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x9d);
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(uint *)((longlong)param_1 + 0xca) = (uint)(cVar1 == '\0');
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0x9e);
  *(undefined4 *)((longlong)param_1 + 0xbe) = *(undefined4 *)((longlong)param_2 + 0x99);
  *(undefined8 *)((longlong)param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe7) = *(undefined4 *)((longlong)param_2 + 0x9f);
  *(undefined4 *)((longlong)param_1 + 0xeb) = *(undefined4 *)((longlong)param_2 + 0xa3);
  *(undefined4 *)((longlong)param_1 + 0xef) = *(undefined4 *)((longlong)param_2 + 0xa7);
  *(undefined4 *)((longlong)param_1 + 0xf7) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfb) = *(undefined4 *)((longlong)param_2 + 0xab);
  *(undefined4 *)((longlong)param_1 + 0xff) = *(undefined4 *)((longlong)param_2 + 0xaf);
  *(undefined4 *)((longlong)param_1 + 0x103) = *(undefined4 *)((longlong)param_2 + 0xb3);
  *(undefined4 *)((longlong)param_1 + 0x107) = *(undefined4 *)((longlong)param_2 + 0xb7);
  *(undefined4 *)((longlong)param_1 + 0x1cb) = *(undefined4 *)((longlong)param_2 + 0x17b);
  *(undefined4 *)((longlong)param_1 + 0x1cf) = *(undefined4 *)((longlong)param_2 + 0x17f);
  *(undefined4 *)((longlong)param_1 + 0x1d3) = *(undefined4 *)((longlong)param_2 + 0x183);
  *(undefined4 *)((longlong)param_1 + 0x1d7) = *(undefined4 *)((longlong)param_2 + 0x187);
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e7) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)((longlong)param_2 + 0x193);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 0x65);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x195);
  *(undefined4 *)((longlong)param_1 + 0x1df) = *(undefined4 *)((longlong)param_2 + 0x18b);
  *(undefined2 *)((longlong)param_1 + 0x1f6) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1e3) = *(undefined4 *)((longlong)param_2 + 399);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10b) =
         *(undefined4 *)((longlong)param_2 + lVar2 * 0xc + 0xbb);
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10f) =
         *(undefined4 *)((longlong)param_2 + lVar2 * 0xc + 0xbf);
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x113) =
         *(undefined4 *)((longlong)param_2 + lVar2 * 0xc + 0xc3);
    lVar2 = lVar3;
  } while (lVar3 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x196);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x19a);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x19e);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x1a2);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1a6);
  return;
}


/*
 * FUN_140022fbc at 140022fbc
 * undefined __fastcall FUN_140022fbc(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140022fbc-140023384
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140022fbc(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  param_1[6] = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x23);
  param_1[7] = param_2[7];
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)(param_2 + 9);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3b);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3f);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x33);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x4b) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x43);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x47);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x75);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x77);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)(param_2 + 0x1e);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 0x5d);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x61);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x65);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x69);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x6d);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x71);
  param_1[0x1f] = (uint)(*(char *)(param_2 + 0x1f) != '\0');
  *(ulonglong *)(param_1 + 0x17) = (ulonglong)*(uint *)((longlong)param_2 + 0x59);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x55);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x7e);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x82);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x86);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x8a);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x8e);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x92);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0x96);
  *(undefined8 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x9a);
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(uint *)((longlong)param_1 + 0xca) = (uint)(cVar1 == '\0');
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0x9b);
  cVar1 = *(char *)((longlong)param_2 + 0x22);
  *(undefined8 *)((longlong)param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a) = 0;
  *(uint *)((longlong)param_1 + 0xbe) = (uint)(cVar1 == '\0');
  *(undefined4 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe7) = param_2[0x27];
  *(undefined4 *)((longlong)param_1 + 0xeb) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xef) = param_2[0x29];
  *(undefined4 *)((longlong)param_1 + 0xf7) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfb) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xff) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0x103) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0x107) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0x1cb) = param_2[0x5e];
  *(undefined4 *)((longlong)param_1 + 0x1cf) = param_2[0x5f];
  *(undefined4 *)((longlong)param_1 + 0x1d3) = param_2[0x60];
  *(undefined4 *)((longlong)param_1 + 0x1d7) = param_2[0x61];
  *(undefined4 *)((longlong)param_1 + 0x1db) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e7) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)(param_2 + 100);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x191);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x192);
  *(undefined4 *)((longlong)param_1 + 0x1df) = param_2[0x62];
  *(undefined2 *)((longlong)param_1 + 0x1f6) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1e3) = param_2[99];
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10b) = param_2[lVar2 * 3 + 0x2e];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10f) = param_2[lVar2 * 3 + 0x2f];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x113) = param_2[lVar2 * 3 + 0x30];
    lVar2 = lVar3;
  } while (lVar3 != 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = *(undefined4 *)((longlong)param_2 + 0x193);
  *(undefined4 *)((longlong)param_1 + 0x1ff) = *(undefined4 *)((longlong)param_2 + 0x197);
  *(undefined4 *)((longlong)param_1 + 0x203) = *(undefined4 *)((longlong)param_2 + 0x19b);
  *(undefined4 *)((longlong)param_1 + 0x207) = *(undefined4 *)((longlong)param_2 + 0x19f);
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)((longlong)param_2 + 0x1a3);
  return;
}


/*
 * FUN_140023388 at 140023388
 * undefined __fastcall FUN_140023388(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140023388-14002374c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140023388(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  param_1[6] = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x23);
  param_1[7] = param_2[7];
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)(param_2 + 9);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x3b);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x3f);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x33);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x4b) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x43);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x47);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x75);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x77);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)(param_2 + 0x1e);
  param_1[0x19] = *(undefined4 *)((longlong)param_2 + 0x5d);
  param_1[0x1a] = *(undefined4 *)((longlong)param_2 + 0x61);
  param_1[0x1b] = *(undefined4 *)((longlong)param_2 + 0x65);
  param_1[0x1c] = *(undefined4 *)((longlong)param_2 + 0x69);
  param_1[0x1d] = *(undefined4 *)((longlong)param_2 + 0x6d);
  param_1[0x1e] = *(undefined4 *)((longlong)param_2 + 0x71);
  param_1[0x1f] = (uint)(*(char *)(param_2 + 0x1f) != '\0');
  *(ulonglong *)(param_1 + 0x17) = (ulonglong)*(uint *)((longlong)param_2 + 0x59);
  param_1[0x16] = *(undefined4 *)((longlong)param_2 + 0x55);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8a) = *(undefined4 *)((longlong)param_2 + 0x7e);
  *(undefined4 *)((longlong)param_1 + 0x8e) = *(undefined4 *)((longlong)param_2 + 0x82);
  *(undefined4 *)((longlong)param_1 + 0x92) = *(undefined4 *)((longlong)param_2 + 0x86);
  *(undefined4 *)((longlong)param_1 + 0x96) = *(undefined4 *)((longlong)param_2 + 0x8a);
  *(undefined4 *)((longlong)param_1 + 0x9e) = *(undefined4 *)((longlong)param_2 + 0x8e);
  *(undefined4 *)((longlong)param_1 + 0xa2) = *(undefined4 *)((longlong)param_2 + 0x92);
  *(undefined4 *)((longlong)param_1 + 0xa6) = *(undefined4 *)((longlong)param_2 + 0x96);
  *(undefined8 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x9a);
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 1;
  *(uint *)((longlong)param_1 + 0xca) = (uint)(cVar1 == '\0');
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 0x9b);
  cVar1 = *(char *)((longlong)param_2 + 0x22);
  *(undefined8 *)((longlong)param_1 + 0xc2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a) = 0;
  *(uint *)((longlong)param_1 + 0xbe) = (uint)(cVar1 == '\0');
  *(undefined4 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe7) = param_2[0x27];
  *(undefined4 *)((longlong)param_1 + 0xeb) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xef) = param_2[0x29];
  *(undefined4 *)((longlong)param_1 + 0xf7) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfb) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xff) = param_2[0x2b];
  *(undefined4 *)((longlong)param_1 + 0x103) = param_2[0x2c];
  *(undefined4 *)((longlong)param_1 + 0x107) = param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0x1cb) = param_2[0x46];
  *(undefined4 *)((longlong)param_1 + 0x1cf) = param_2[0x47];
  *(undefined4 *)((longlong)param_1 + 0x1d3) = param_2[0x48];
  *(undefined8 *)((longlong)param_1 + 0x1d7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e7) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 499) = *(undefined1 *)(param_2 + 0x49);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x125);
  *(undefined1 *)((longlong)param_1 + 0x1f5) = *(undefined1 *)((longlong)param_2 + 0x126);
  *(undefined2 *)((longlong)param_1 + 0x1f6) = 0x100;
  *(uint *)((longlong)param_1 + 0x1df) = ~-(uint)(*(char *)((longlong)param_2 + 0x127) != '\0') & 2;
  *(undefined4 *)((longlong)param_1 + 0x1e3) = 7;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  FUN_14002511c((undefined1 *)((longlong)param_1 + 0x10b),0,0xc0);
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10b) = param_2[lVar2 * 3 + 0x2e];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x10f) = param_2[lVar2 * 3 + 0x2f];
    *(undefined4 *)((longlong)param_1 + lVar2 * 0xc + 0x113) = param_2[lVar2 * 3 + 0x30];
    lVar2 = lVar3;
  } while (lVar3 != 8);
  *(undefined4 *)((longlong)param_1 + 0x1fb) = param_2[0x4a];
  *(undefined4 *)((longlong)param_1 + 0x1ff) = param_2[0x4b];
  *(undefined4 *)((longlong)param_1 + 0x203) = param_2[0x4c];
  *(undefined4 *)((longlong)param_1 + 0x207) = param_2[0x4d];
  *(undefined1 *)((longlong)param_1 + 0x20b) = *(undefined1 *)(param_2 + 0x4e);
  return;
}


/*
 * FUN_140023750 at 140023750
 * undefined __fastcall FUN_140023750(undefined8 * param_1, undefined4 * param_2)
 * Address ranges: 140023750-14002396c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140023750(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_218 [66];
  
  FUN_14002511c((undefined1 *)local_218,0,0x20c);
  puVar3 = FUN_1400098a8(local_218);
  lVar5 = 4;
  puVar2 = param_1;
  do {
    puVar6 = puVar2;
    puVar4 = puVar3;
    uVar1 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar1;
    uVar1 = puVar4[3];
    puVar6[2] = puVar4[2];
    puVar6[3] = uVar1;
    uVar1 = puVar4[5];
    puVar6[4] = puVar4[4];
    puVar6[5] = uVar1;
    uVar1 = puVar4[7];
    puVar6[6] = puVar4[6];
    puVar6[7] = uVar1;
    uVar1 = puVar4[9];
    puVar6[8] = puVar4[8];
    puVar6[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar6[10] = puVar4[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar6[0xc] = puVar4[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar6[0xe] = puVar4[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    puVar2 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = *(undefined8 *)((longlong)puVar4 + 0x84);
  *(undefined8 *)((longlong)puVar6 + 0x7c) = *(undefined8 *)((longlong)puVar4 + 0x7c);
  *(undefined8 *)((longlong)puVar6 + 0x84) = uVar1;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = param_2[1];
  *(undefined4 *)(param_1 + 1) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[3];
  *(undefined4 *)(param_1 + 2) = param_2[4];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined4 *)(param_1 + 3) = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(uint *)((longlong)param_1 + 0xbe) = (uint)(*(char *)((longlong)param_2 + 0x17) == '\0');
  *(undefined4 *)((longlong)param_1 + 0x27) = param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x2b) = param_2[0xb];
  *(undefined4 *)((longlong)param_1 + 0x37) = param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 0x3b) = param_2[0xd];
  *(undefined4 *)((longlong)param_1 + 0x3f) = param_2[0xe];
  *(undefined4 *)((longlong)param_1 + 0x2f) = param_2[0xf];
  *(undefined4 *)((longlong)param_1 + 0x33) = param_2[0x10];
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)(param_2 + 0x11) != '\0') & 0x200;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x45);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x47);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x49);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x4d);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x57);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x5a);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)((longlong)param_2 + 0x5e);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x62);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)param_2 + 0x66);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)((longlong)param_2 + 0x7e);
  *(uint *)((longlong)param_1 + 0x7c) = (uint)(*(char *)((longlong)param_2 + 0x7b) != '\0');
  *(ulonglong *)((longlong)param_1 + 0x5c) = (ulonglong)*(uint *)((longlong)param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x77);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)((longlong)param_2 + 0x7e);
  return;
}


/*
 * FUN_140023970 at 140023970
 * undefined __fastcall FUN_140023970(undefined8 * param_1, undefined4 * param_2)
 * Address ranges: 140023970-140023b9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140023970(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_218 [66];
  
  FUN_14002511c((undefined1 *)local_218,0,0x20c);
  puVar4 = FUN_1400098a8(local_218);
  lVar6 = 4;
  puVar2 = param_1;
  do {
    puVar7 = puVar2;
    puVar5 = puVar4;
    uVar1 = puVar5[1];
    *puVar7 = *puVar5;
    puVar7[1] = uVar1;
    uVar1 = puVar5[3];
    puVar7[2] = puVar5[2];
    puVar7[3] = uVar1;
    uVar1 = puVar5[5];
    puVar7[4] = puVar5[4];
    puVar7[5] = uVar1;
    uVar1 = puVar5[7];
    puVar7[6] = puVar5[6];
    puVar7[7] = uVar1;
    uVar1 = puVar5[9];
    puVar7[8] = puVar5[8];
    puVar7[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar7[10] = puVar5[10];
    puVar7[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar7[0xc] = puVar5[0xc];
    puVar7[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar7[0xe] = puVar5[0xe];
    puVar7[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar4 = puVar5 + 0x10;
    puVar2 = puVar7 + 0x10;
  } while (lVar6 != 0);
  uVar1 = *(undefined8 *)((longlong)puVar5 + 0x84);
  *(undefined8 *)((longlong)puVar7 + 0x7c) = *(undefined8 *)((longlong)puVar5 + 0x7c);
  *(undefined8 *)((longlong)puVar7 + 0x84) = uVar1;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = param_2[1];
  *(undefined4 *)(param_1 + 1) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[3];
  *(undefined4 *)(param_1 + 2) = param_2[4];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined4 *)(param_1 + 3) = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(uint *)((longlong)param_1 + 0xbe) = (uint)(*(char *)((longlong)param_2 + 0x17) == '\0');
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x3e) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x3f);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x43);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x45);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x47);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined4 *)((longlong)param_1 + 100) = param_2[0x15];
  *(undefined4 *)(param_1 + 0xd) = param_2[0x16];
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_2[0x17];
  *(undefined4 *)(param_1 + 0xe) = param_2[0x18];
  *(undefined4 *)((longlong)param_1 + 0x74) = param_2[0x19];
  *(uint *)((longlong)param_1 + 0x7c) = (uint)(*(char *)((longlong)param_2 + 0x75) != '\0');
  *(ulonglong *)((longlong)param_1 + 0x5c) = (ulonglong)(uint)param_2[0x1a];
  *(undefined4 *)(param_1 + 0xb) = param_2[0x1b];
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  if (*(char *)((longlong)param_2 + 0x77) == '\0') {
    uVar3 = *(undefined4 *)
             (&DAT_14002a298 +
             ((ulonglong)(-(uint)(*(char *)(param_2 + 0x1d) != '\0') & 2) +
             (ulonglong)(*(char *)((longlong)param_2 + 0x73) != '\0')) * 4);
  }
  else {
    uVar3 = 0x100;
  }
  *(undefined4 *)(param_1 + 0xf) = uVar3;
  return;
}


/*
 * FUN_140023b9c at 140023b9c
 * undefined __fastcall FUN_140023b9c(undefined8 * param_1, undefined4 * param_2)
 * Address ranges: 140023b9c-140023dba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140023b9c(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_218 [66];
  
  FUN_14002511c((undefined1 *)local_218,0,0x20c);
  puVar3 = FUN_1400098a8(local_218);
  lVar5 = 4;
  puVar2 = param_1;
  do {
    puVar6 = puVar2;
    puVar4 = puVar3;
    uVar1 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar1;
    uVar1 = puVar4[3];
    puVar6[2] = puVar4[2];
    puVar6[3] = uVar1;
    uVar1 = puVar4[5];
    puVar6[4] = puVar4[4];
    puVar6[5] = uVar1;
    uVar1 = puVar4[7];
    puVar6[6] = puVar4[6];
    puVar6[7] = uVar1;
    uVar1 = puVar4[9];
    puVar6[8] = puVar4[8];
    puVar6[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar6[10] = puVar4[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar6[0xc] = puVar4[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar6[0xe] = puVar4[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    puVar2 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = *(undefined8 *)((longlong)puVar4 + 0x84);
  *(undefined8 *)((longlong)puVar6 + 0x7c) = *(undefined8 *)((longlong)puVar4 + 0x7c);
  *(undefined8 *)((longlong)puVar6 + 0x84) = uVar1;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = param_2[1];
  *(undefined4 *)(param_1 + 1) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[3];
  *(undefined4 *)(param_1 + 2) = param_2[4];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined4 *)(param_1 + 3) = param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(uint *)((longlong)param_1 + 0xbe) = (uint)(*(char *)((longlong)param_2 + 0x17) == '\0');
  *(undefined4 *)((longlong)param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x37) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x33) = *(undefined4 *)((longlong)param_2 + 0x3a);
  *(uint *)((longlong)param_1 + 0x4b) = -(uint)(*(char *)((longlong)param_2 + 0x3e) != '\0') & 0x200
  ;
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x3f);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x43);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x45);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x43) = *(undefined4 *)((longlong)param_2 + 0x47);
  *(undefined4 *)((longlong)param_1 + 0x47) = *(undefined4 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined4 *)((longlong)param_1 + 100) = param_2[0x15];
  *(undefined4 *)(param_1 + 0xd) = param_2[0x16];
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_2[0x17];
  *(undefined4 *)(param_1 + 0xe) = param_2[0x18];
  *(undefined4 *)((longlong)param_1 + 0x74) = param_2[0x19];
  *(uint *)((longlong)param_1 + 0x7c) = (uint)(*(char *)((longlong)param_2 + 0x75) != '\0');
  *(ulonglong *)((longlong)param_1 + 0x5c) = (ulonglong)(uint)param_2[0x1a];
  *(undefined4 *)(param_1 + 0xb) = param_2[0x1b];
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0xf) =
       *(undefined4 *)
        (&DAT_14002a298 +
        ((ulonglong)(-(uint)(*(char *)(param_2 + 0x1d) != '\0') & 2) +
        (ulonglong)(*(char *)((longlong)param_2 + 0x73) != '\0')) * 4);
  return;
}


/*
 * FUN_140023dc0 at 140023dc0
 * undefined8 * __fastcall FUN_140023dc0(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 140023dc0-140023e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140023dc0(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  DWORD DVar1;
  HRSRC pHVar2;
  undefined8 *puVar3;
  HGLOBAL hResData;
  undefined8 *puVar4;
  
  pHVar2 = FindResourceW(param_1,param_2,param_3);
  if (pHVar2 != (HRSRC)0x0) {
    DVar1 = SizeofResource(param_1,pHVar2);
    if (DVar1 != 0) {
      puVar3 = (undefined8 *)thunk_FUN_14002423c((ulonglong)DVar1);
      pHVar2 = FindResourceW(param_1,param_2,param_3);
      if (pHVar2 != (HRSRC)0x0) {
        DVar1 = SizeofResource(param_1,pHVar2);
        if (DVar1 != 0) {
          hResData = LoadResource(param_1,pHVar2);
          if (hResData != (HGLOBAL)0x0) {
            puVar4 = LockResource(hResData);
            if (puVar4 != (undefined8 *)0x0) {
              FUN_140024620(puVar3,puVar4,(ulonglong)DVar1);
              return puVar3;
            }
          }
        }
      }
      FUN_140024260(puVar3);
    }
  }
  return (undefined8 *)0x0;
}


/*
 * FUN_140023e70 at 140023e70
 * bool __fastcall FUN_140023e70(HINSTANCE param_1, UINT param_2, LPWSTR param_3, int param_4)
 * Address ranges: 140023e70-140023e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_140023e70(HINSTANCE param_1,UINT param_2,LPWSTR param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LoadStringW(param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}


/*
 * FUN_140023e90 at 140023e90
 * undefined __fastcall FUN_140023e90(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 140023e90-140023ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140023e90(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  HRSRC hResInfo;
  
  hResInfo = FindResourceW(param_1,param_2,param_3);
  if (hResInfo != (HRSRC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140023eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SizeofResource(param_1,hResInfo);
    return;
  }
  return;
}


/*
 * entry at 140023ec0
 * undefined __fastcall entry(void)
 * Address ranges: 140023ec0-140023ef1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void entry(void)

{
  undefined8 uVar1;
  
  GetModuleHandleW((LPCWSTR)0x0);
  GetModuleHandleW((LPCWSTR)0x0);
  uVar1 = FUN_14000d1a4();
                    /* WARNING: Subroutine does not return */
  ExitProcess((UINT)uVar1);
}


/*
 * FUN_140023f00 at 140023f00
 * undefined8 * __fastcall FUN_140023f00(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 140023f00-140023f15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140023f00(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_140026360;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}


/*
 * FUN_140023f20 at 140023f20
 * undefined8 * __fastcall FUN_140023f20(undefined8 * param_1, LPCSTR param_2, char param_3)
 * Address ranges: 140023f20-140023f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140023f20(undefined8 *param_1,LPCSTR param_2,char param_3)

{
  HANDLE pvVar1;
  
  *param_1 = &PTR_FUN_140026360;
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_3 != '\0') {
    pvVar1 = CreateFileA(param_2,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    param_1[1] = pvVar1;
    return param_1;
  }
  pvVar1 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  param_1[1] = pvVar1;
  return param_1;
}


/*
 * FUN_140023fa0 at 140023fa0
 * undefined8 * __fastcall FUN_140023fa0(undefined8 * param_1, LPCWSTR param_2, char param_3)
 * Address ranges: 140023fa0-14002401b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140023fa0(undefined8 *param_1,LPCWSTR param_2,char param_3)

{
  HANDLE pvVar1;
  
  *param_1 = &PTR_FUN_140026360;
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_3 != '\0') {
    pvVar1 = CreateFileW(param_2,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    param_1[1] = pvVar1;
    return param_1;
  }
  pvVar1 = CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  param_1[1] = pvVar1;
  return param_1;
}


/*
 * FUN_140024020 at 140024020
 * undefined __fastcall FUN_140024020(undefined8 * param_1)
 * Address ranges: 140024020-140024043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140024020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_140026360;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014002403c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}


/*
 * FUN_140024050 at 140024050
 * undefined8 * __fastcall FUN_140024050(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140024050-14002409e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140024050(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140026360;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}


/*
 * FUN_1400240a0 at 1400240a0
 * DWORD __fastcall FUN_1400240a0(longlong param_1)
 * Address ranges: 1400240a0-1400240cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD FUN_1400240a0(longlong param_1)

{
  BOOL BVar1;
  LARGE_INTEGER local_res8 [4];
  
  BVar1 = GetFileSizeEx(*(HANDLE *)(param_1 + 8),local_res8);
  if ((BVar1 != 0) && (local_res8[0].s.HighPart == 0)) {
    return local_res8[0].s.LowPart;
  }
  return 0;
}


/*
 * FUN_1400240d0 at 1400240d0
 * undefined8 __fastcall FUN_1400240d0(longlong param_1)
 * Address ranges: 1400240d0-1400240de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1400240d0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(longlong *)(param_1 + 8) - 1;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 < 0xfffffffffffffffe);
}


/*
 * FUN_1400240e0 at 1400240e0
 * undefined8 __fastcall FUN_1400240e0(longlong param_1, DWORD param_2, LPVOID param_3, DWORD * param_4)
 * Address ranges: 1400240e0-14002415b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1400240e0(longlong param_1,DWORD param_2,LPVOID param_3,DWORD *param_4)

{
  BOOL BVar1;
  DWORD local_res8 [2];
  
  local_res8[0] = 0;
  if ((longlong)*(HANDLE *)(param_1 + 8) - 1U < 0xfffffffffffffffe) {
    BVar1 = ReadFile(*(HANDLE *)(param_1 + 8),param_3,param_2,local_res8,(LPOVERLAPPED)0x0);
    if (BVar1 == 1) {
      if (param_4 != (DWORD *)0x0) {
        *param_4 = local_res8[0];
        return 0;
      }
      if (local_res8[0] == param_2) {
        return 0;
      }
    }
  }
  return 1;
}


/*
 * FUN_140024160 at 140024160
 * undefined8 __fastcall FUN_140024160(longlong param_1, LONG param_2, int param_3, DWORD * param_4)
 * Address ranges: 140024160-1400241b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140024160(longlong param_1,LONG param_2,int param_3,DWORD *param_4)

{
  DWORD DVar1;
  
  if ((longlong)*(HANDLE *)(param_1 + 8) - 1U < 0xfffffffffffffffe) {
    if (param_3 == 1) {
      DVar1 = 1;
    }
    else if (param_3 == 2) {
      DVar1 = 2;
    }
    else {
      DVar1 = 0;
    }
    DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 8),param_2,(PLONG)0x0,DVar1);
    if (param_4 != (DWORD *)0x0) {
      *param_4 = DVar1;
    }
    return 0;
  }
  return 1;
}


/*
 * FUN_1400241c0 at 1400241c0
 * undefined8 __fastcall FUN_1400241c0(longlong param_1, DWORD param_2, LPCVOID param_3, DWORD * param_4)
 * Address ranges: 1400241c0-14002423b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_1400241c0(longlong param_1,DWORD param_2,LPCVOID param_3,DWORD *param_4)

{
  BOOL BVar1;
  DWORD local_res8 [2];
  
  local_res8[0] = 0;
  if ((longlong)*(HANDLE *)(param_1 + 8) - 1U < 0xfffffffffffffffe) {
    BVar1 = WriteFile(*(HANDLE *)(param_1 + 8),param_3,param_2,local_res8,(LPOVERLAPPED)0x0);
    if (BVar1 == 1) {
      if (param_4 != (DWORD *)0x0) {
        *param_4 = local_res8[0];
        return 0;
      }
      if (local_res8[0] == param_2) {
        return 0;
      }
    }
  }
  return 1;
}


/*
 * FUN_14002423c at 14002423c
 * undefined __fastcall FUN_14002423c(undefined8 param_1)
 * Address ranges: 14002423c-14002425e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_14002423c(undefined8 param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140024258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,0,param_1);
  return;
}


/*
 * FUN_140024260 at 140024260
 * undefined __fastcall FUN_140024260(LPVOID param_1)
 * Address ranges: 140024260-140024286
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140024260(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,param_1);
  }
  return;
}


/*
 * thunk_FUN_14002423c at 140024288
 * undefined __fastcall thunk_FUN_14002423c(undefined8 param_1)
 * Address ranges: 140024288-14002428c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_14002423c
 */


void thunk_FUN_14002423c(undefined8 param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140024258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(pvVar1,0,param_1);
  return;
}


/*
 * FUN_140024290 at 140024290
 * undefined __fastcall FUN_140024290(LPSTR param_1, LPCSTR param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140024290-1400242b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140024290(LPSTR param_1,LPCSTR param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  wvsprintfA(param_1,param_2,(va_list)&local_res18);
  return;
}


/*
 * FUN_1400242b4 at 1400242b4
 * int __fastcall FUN_1400242b4(byte * param_1, byte * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1400242b4-140024601
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1400242b4(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *local_res10;
  undefined8 local_res18 [2];
  byte *local_48 [3];
  
  local_res18[0] = param_3;
  local_res18[1] = param_4;
  bVar8 = *param_2;
  puVar11 = local_res18;
  pbVar6 = param_2 + 1;
  iVar9 = 0;
  if (*param_1 != 0) {
    do {
      while( true ) {
        if (bVar8 == 0) {
          return iVar9;
        }
        if (bVar8 == 0x20) {
          while ((*param_1 < 0x21 && ((0x100002600U >> ((longlong)(char)*param_1 & 0x3fU) & 1) != 0)
                 )) {
            param_1 = param_1 + 1;
          }
          bVar8 = *pbVar6;
          local_res10 = pbVar6 + 1;
          goto LAB_14002442f;
        }
        if (bVar8 != 0x25) break;
        bVar8 = *pbVar6;
        local_res10 = pbVar6 + 1;
        bVar3 = false;
        if (bVar8 < 0x6d) {
          if (bVar8 == 0x6c) {
            bVar8 = *local_res10;
            local_res10 = pbVar6 + 2;
            if (bVar8 != 0x6c) goto LAB_14002442c;
            bVar8 = *local_res10;
            local_res10 = pbVar6 + 3;
            if ((bVar8 == 100) || (bVar8 == 0x69)) {
              bVar3 = true;
              if ((bVar8 != 100) && (bVar8 != 0x75)) goto LAB_14002444b;
LAB_140024460:
              uVar10 = 10;
            }
            else {
              if (bVar8 != 0x6f) {
                if (bVar8 == 0x75) goto LAB_140024460;
                if (bVar8 != 0x78) goto LAB_14002442c;
              }
LAB_14002444b:
              uVar10 = 0;
              if (bVar8 == 0x78) {
                uVar10 = 0x10;
              }
              if (bVar8 == 0x6f) {
                uVar10 = 8;
              }
            }
            bVar8 = *local_res10;
            local_res10 = pbVar6 + 4;
            if (bVar3) {
              lVar5 = FUN_140024cb0(param_1,local_48,uVar10);
            }
            else {
              lVar5 = FUN_140024cb8(param_1,local_48,uVar10);
            }
            if ((local_48[0] == param_1) || ((!bVar3 && (lVar5 < 0)))) {
LAB_1400244b9:
              bVar8 = 0;
              param_1 = local_48[0];
            }
            else {
              *(longlong *)*puVar11 = lVar5;
LAB_1400244ae:
              puVar11 = puVar11 + 1;
              iVar9 = iVar9 + 1;
              param_1 = local_48[0];
            }
          }
          else if (bVar8 == 0x25) {
            bVar8 = *local_res10;
            local_res10 = pbVar6 + 2;
            if (*param_1 != 0x25) {
              bVar8 = 0;
            }
          }
          else {
            if (bVar8 != 99) {
              if ((bVar8 != 100) &&
                 ((((bVar8 == 0x65 || (bVar8 == 0x66)) || (bVar8 == 0x67)) || (bVar8 != 0x69))))
              goto LAB_14002442c;
              bVar3 = true;
              if (bVar8 != 100) goto LAB_1400243a1;
              goto LAB_14002456c;
            }
            bVar8 = *local_res10;
            bVar1 = *param_1;
            param_1 = param_1 + 1;
            *(byte *)*puVar11 = bVar1;
LAB_1400243e0:
            iVar9 = iVar9 + 1;
LAB_1400243e2:
            local_res10 = pbVar6 + 2;
            puVar11 = puVar11 + 1;
          }
        }
        else {
          if (bVar8 != 0x6e) {
            if (bVar8 == 0x6f) {
LAB_1400243a1:
              if (bVar8 == 0x75) {
LAB_14002456c:
                uVar10 = 10;
              }
              else {
                uVar10 = 0;
                if (bVar8 == 0x78) {
                  uVar10 = 0x10;
                }
                if (bVar8 == 0x6f) {
                  uVar10 = 8;
                }
              }
              bVar8 = *local_res10;
              local_res10 = pbVar6 + 2;
              if (bVar3) {
                iVar4 = FUN_140024d34(param_1,local_48,uVar10);
              }
              else {
                iVar4 = FUN_140024d3c(param_1,local_48,uVar10);
              }
              if ((local_48[0] == param_1) || ((!bVar3 && (iVar4 < 0)))) goto LAB_1400244b9;
              *(int *)*puVar11 = iVar4;
              goto LAB_1400244ae;
            }
            if (bVar8 != 0x70) {
              if (bVar8 == 0x73) {
                bVar8 = *local_res10;
                pbVar2 = (byte *)*puVar11;
                while ((pbVar7 = pbVar2, *param_1 < 0x21 &&
                       ((0x100002600U >> ((longlong)(char)*param_1 & 0x3fU) & 1) != 0))) {
                  param_1 = param_1 + 1;
                }
                while( true ) {
                  bVar1 = *param_1;
                  if ((bVar1 < 0x21) && ((0x100002601U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)
                     ) break;
                  *pbVar7 = bVar1;
                  pbVar7 = pbVar7 + 1;
                  param_1 = param_1 + 1;
                }
                if (pbVar7 != pbVar2) {
                  *pbVar7 = 0;
                  goto LAB_1400243e0;
                }
                goto LAB_1400243e2;
              }
              if ((bVar8 == 0x75) || (bVar8 == 0x78)) goto LAB_1400243a1;
            }
          }
LAB_14002442c:
          bVar8 = 0;
        }
LAB_14002442f:
        pbVar6 = local_res10;
        if (*param_1 == 0) {
          return iVar9;
        }
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      if ((int)(char)bVar1 == (uint)bVar8) {
        bVar8 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      }
      else {
        bVar8 = 0;
      }
    } while (*param_1 != 0);
    if (iVar9 == 0) {
      iVar9 = -1;
    }
  }
  return iVar9;
}


/*
 * FUN_140024604 at 140024604
 * int __fastcall FUN_140024604(int param_1)
 * Address ranges: 140024604-140024610
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_140024604(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if (0x19 < param_1 - 0x41U) {
    iVar1 = param_1;
  }
  return iVar1;
}


/*
 * FUN_140024620 at 140024620
 * undefined8 * __fastcall FUN_140024620(undefined8 * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 140024620-14002469c;1400246a0-1400246c9;1400246d0-1400246dd;1400246e0-1400246ec;140024708-14002473a;140024740-14002476d;140024770-14002479b;1400247e0-140024832;140024858-140024862;140024868-140024876;140024878-14002488c;140024890-1400248aa;1400248b0-1400248e1;1400248e8-1400248f8;140024900-140024929;140024930-14002493c;140024958-1400249bd;1400249c0-1400249fb;140024a40-140024a91;140024ab8-140024ac2;140024ac8-140024ad8;140024ae0-140024af6;140024af8-140024c5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 * FUN_140024620(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  if ((param_2 < param_1) && (param_1 < (undefined8 *)(param_3 + (longlong)param_2))) {
    puVar10 = (undefined4 *)((longlong)param_2 + (param_3 - 4));
    puVar11 = (undefined4 *)((longlong)param_1 + (param_3 - 4));
    if (((ulonglong)puVar11 & 3) == 0) {
      uVar9 = param_3 >> 2;
      uVar8 = param_3 & 3;
      if (7 < uVar9) {
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + -1;
          puVar11 = puVar11 + -1;
        }
        switch(uVar8) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1400248df_caseD_2;
        case 3:
          goto switchD_1400248df_caseD_3;
        }
        goto switchD_1400248df_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1400248df_caseD_0;
      case 1:
        goto switchD_1400248df_caseD_1;
      case 2:
        goto switchD_1400248df_caseD_2;
      case 3:
        goto switchD_1400248df_caseD_3;
      default:
        uVar9 = param_3 - ((ulonglong)puVar11 & 3);
        switch((ulonglong)puVar11 & 3) {
        case 1:
          uVar8 = uVar9 & 3;
          *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
          puVar10 = (undefined4 *)((longlong)puVar10 + -1);
          uVar9 = uVar9 >> 2;
          puVar11 = (undefined4 *)((longlong)puVar11 - 1);
          if (7 < uVar9) {
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + -1;
              puVar11 = puVar11 + -1;
            }
            switch(uVar8) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1400248df_caseD_2;
            case 3:
              goto switchD_1400248df_caseD_3;
            }
            goto switchD_1400248df_caseD_1;
          }
          break;
        case 2:
          uVar8 = uVar9 & 3;
          *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
          uVar9 = uVar9 >> 2;
          *(undefined1 *)((longlong)puVar11 + 2) = *(undefined1 *)((longlong)puVar10 + 2);
          puVar10 = (undefined4 *)((longlong)puVar10 + -2);
          puVar11 = (undefined4 *)((longlong)puVar11 - 2);
          if (7 < uVar9) {
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + -1;
              puVar11 = puVar11 + -1;
            }
            switch(uVar8) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1400248df_caseD_2;
            case 3:
              goto switchD_1400248df_caseD_3;
            }
            goto switchD_1400248df_caseD_1;
          }
          break;
        case 3:
          uVar8 = uVar9 & 3;
          *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
          *(undefined1 *)((longlong)puVar11 + 2) = *(undefined1 *)((longlong)puVar10 + 2);
          uVar9 = uVar9 >> 2;
          *(undefined1 *)((longlong)puVar11 + 1) = *(undefined1 *)((longlong)puVar10 + 1);
          puVar10 = (undefined4 *)((longlong)puVar10 + -3);
          puVar11 = (undefined4 *)((longlong)puVar11 - 3);
          if (7 < uVar9) {
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + -1;
              puVar11 = puVar11 + -1;
            }
            switch(uVar8) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1400248df_caseD_2;
            case 3:
              goto switchD_1400248df_caseD_3;
            }
            goto switchD_1400248df_caseD_1;
          }
        }
      }
    }
    switch(uVar9) {
    case 7:
      puVar11[7 - uVar9] = puVar10[7 - uVar9];
    case 6:
      puVar11[6 - uVar9] = puVar10[6 - uVar9];
    case 5:
      puVar11[5 - uVar9] = puVar10[5 - uVar9];
    case 4:
      puVar11[4 - uVar9] = puVar10[4 - uVar9];
    case 3:
      puVar11[3 - uVar9] = puVar10[3 - uVar9];
    case 2:
      puVar11[2 - uVar9] = puVar10[2 - uVar9];
    case 1:
      puVar11[1 - uVar9] = puVar10[1 - uVar9];
      uVar9 = (ulonglong)(uint)((int)uVar9 * -4);
      puVar10 = (undefined4 *)((longlong)puVar10 + uVar9);
      puVar11 = (undefined4 *)((longlong)puVar11 + uVar9);
    }
    switch(uVar8) {
    case 1:
switchD_1400248df_caseD_1:
      *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
      return param_1;
    case 2:
switchD_1400248df_caseD_2:
      *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
      *(undefined1 *)((longlong)puVar11 + 2) = *(undefined1 *)((longlong)puVar10 + 2);
      return param_1;
    case 3:
switchD_1400248df_caseD_3:
      *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
      *(undefined1 *)((longlong)puVar11 + 2) = *(undefined1 *)((longlong)puVar10 + 2);
      *(undefined1 *)((longlong)puVar11 + 1) = *(undefined1 *)((longlong)puVar10 + 1);
      return param_1;
    }
switchD_1400248df_caseD_0:
    return param_1;
  }
  if ((0x7f < param_3) && (((ulonglong)param_1 & 0xf) == ((ulonglong)param_2 & 0xf))) {
    puVar12 = param_1;
    if (((ulonglong)param_2 & 0xf) != 0) {
      uVar9 = 0x10 - ((ulonglong)param_2 & 0xf);
      param_3 = param_3 - uVar9;
      for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
        puVar12 = (undefined8 *)((longlong)puVar12 + 1);
      }
      for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)puVar12 = *(undefined4 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 4);
        puVar12 = (undefined8 *)((longlong)puVar12 + 4);
      }
    }
    for (uVar9 = param_3 >> 7; uVar9 != 0; uVar9 = uVar9 - 1) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[4];
      uVar5 = param_2[5];
      uVar6 = param_2[6];
      uVar7 = param_2[7];
      *puVar12 = *param_2;
      puVar12[1] = uVar1;
      puVar12[2] = uVar2;
      puVar12[3] = uVar3;
      puVar12[4] = uVar4;
      puVar12[5] = uVar5;
      puVar12[6] = uVar6;
      puVar12[7] = uVar7;
      uVar1 = param_2[9];
      uVar2 = param_2[10];
      uVar3 = param_2[0xb];
      uVar4 = param_2[0xc];
      uVar5 = param_2[0xd];
      uVar6 = param_2[0xe];
      uVar7 = param_2[0xf];
      puVar12[8] = param_2[8];
      puVar12[9] = uVar1;
      puVar12[10] = uVar2;
      puVar12[0xb] = uVar3;
      puVar12[0xc] = uVar4;
      puVar12[0xd] = uVar5;
      puVar12[0xe] = uVar6;
      puVar12[0xf] = uVar7;
      param_2 = param_2 + 0x10;
      puVar12 = puVar12 + 0x10;
    }
    if ((param_3 & 0x7f) != 0) {
      for (uVar9 = (param_3 & 0x7f) >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
        uVar1 = param_2[1];
        *puVar12 = *param_2;
        puVar12[1] = uVar1;
        param_2 = param_2 + 2;
        puVar12 = puVar12 + 2;
      }
      if ((param_3 & 0xf) != 0) {
        for (uVar9 = (param_3 & 0xf) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)puVar12 = *(undefined4 *)param_2;
          param_2 = (undefined8 *)((longlong)param_2 + 4);
          puVar12 = (undefined8 *)((longlong)puVar12 + 4);
        }
        for (uVar9 = param_3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)param_2;
          param_2 = (undefined8 *)((longlong)param_2 + 1);
          puVar12 = (undefined8 *)((longlong)puVar12 + 1);
        }
      }
    }
    return param_1;
  }
  puVar12 = param_1;
  if (((ulonglong)param_1 & 3) == 0) {
    uVar9 = param_3 >> 2;
    uVar8 = param_3 & 3;
    if (7 < uVar9) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)puVar12 = *(undefined4 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 4);
        puVar12 = (undefined8 *)((longlong)puVar12 + 4);
      }
      switch(uVar8) {
      case 0:
        return param_1;
      case 2:
        goto switchD_14002469a_caseD_2;
      case 3:
        goto switchD_14002469a_caseD_3;
      }
      goto switchD_14002469a_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_14002469a_caseD_0;
    case 1:
      goto switchD_14002469a_caseD_1;
    case 2:
      goto switchD_14002469a_caseD_2;
    case 3:
      goto switchD_14002469a_caseD_3;
    default:
      uVar9 = (param_3 - 4) + ((ulonglong)param_1 & 3);
      switch((ulonglong)param_1 & 3) {
      case 1:
        uVar8 = uVar9 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
        uVar9 = uVar9 >> 2 & 0x3fffffff;
        *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_2 + 2);
        param_2 = (undefined8 *)((longlong)param_2 + 3);
        puVar12 = (undefined8 *)((longlong)param_1 + 3);
        if (7 < uVar9) {
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)puVar12 = *(undefined4 *)param_2;
            param_2 = (undefined8 *)((longlong)param_2 + 4);
            puVar12 = (undefined8 *)((longlong)puVar12 + 4);
          }
          switch(uVar8) {
          case 0:
            return param_1;
          case 2:
            goto switchD_14002469a_caseD_2;
          case 3:
            goto switchD_14002469a_caseD_3;
          }
          goto switchD_14002469a_caseD_1;
        }
        break;
      case 2:
        uVar8 = uVar9 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar9 = uVar9 >> 2;
        *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
        param_2 = (undefined8 *)((longlong)param_2 + 2);
        puVar12 = (undefined8 *)((longlong)param_1 + 2);
        if (7 < uVar9) {
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)puVar12 = *(undefined4 *)param_2;
            param_2 = (undefined8 *)((longlong)param_2 + 4);
            puVar12 = (undefined8 *)((longlong)puVar12 + 4);
          }
          switch(uVar8) {
          case 0:
            return param_1;
          case 2:
            goto switchD_14002469a_caseD_2;
          case 3:
            goto switchD_14002469a_caseD_3;
          }
          goto switchD_14002469a_caseD_1;
        }
        break;
      case 3:
        uVar8 = uVar9 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
        uVar9 = uVar9 >> 2;
        puVar12 = (undefined8 *)((longlong)param_1 + 1);
        if (7 < uVar9) {
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)puVar12 = *(undefined4 *)param_2;
            param_2 = (undefined8 *)((longlong)param_2 + 4);
            puVar12 = (undefined8 *)((longlong)puVar12 + 4);
          }
          switch(uVar8) {
          case 0:
            return param_1;
          case 2:
            goto switchD_14002469a_caseD_2;
          case 3:
            goto switchD_14002469a_caseD_3;
          }
          goto switchD_14002469a_caseD_1;
        }
      }
    }
  }
  switch(uVar9) {
  case 7:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0x1c) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0x1c);
  case 6:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0x18) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0x18);
  case 5:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0x14) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0x14);
  case 4:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0x10) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0x10);
  case 3:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0xc) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0xc);
  case 2:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -8) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -8);
  case 1:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -4) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -4);
    param_2 = (undefined8 *)((longlong)param_2 + uVar9 * 4);
    puVar12 = (undefined8 *)((longlong)puVar12 + uVar9 * 4);
  }
  switch(uVar8) {
  case 1:
switchD_14002469a_caseD_1:
    *(undefined1 *)puVar12 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_14002469a_caseD_2:
    *(undefined1 *)puVar12 = *(undefined1 *)param_2;
    *(undefined1 *)((longlong)puVar12 + 1) = *(undefined1 *)((longlong)param_2 + 1);
    return param_1;
  case 3:
switchD_14002469a_caseD_3:
    *(undefined1 *)puVar12 = *(undefined1 *)param_2;
    *(undefined1 *)((longlong)puVar12 + 1) = *(undefined1 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)puVar12 + 2) = *(undefined1 *)((longlong)param_2 + 2);
    return param_1;
  }
switchD_14002469a_caseD_0:
  return param_1;
}


/*
 * FUN_140024c60 at 140024c60
 * undefined8 __fastcall FUN_140024c60(undefined8 param_1)
 * Address ranges: 140024c60-140024c8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 FUN_140024c60(undefined8 param_1)

{
  if (DAT_14002c2c4 < DAT_14002c2c0) {
    *(undefined8 *)(DAT_14002c2b8 + (ulonglong)DAT_14002c2c4 * 8) = param_1;
    DAT_14002c2c4 = DAT_14002c2c4 + 1;
    return 0;
  }
  return 0xffffffff;
}


/*
 * FUN_140024c8c at 140024c8c
 * undefined __fastcall FUN_140024c8c(LPVOID param_1)
 * Address ranges: 140024c8c-140024cae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140024c8c(LPVOID param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140024ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,param_1);
  return;
}


/*
 * FUN_140024cb0 at 140024cb0
 * undefined __fastcall FUN_140024cb0(byte * param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 140024cb0-140024cb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140024cb0(byte *param_1,undefined8 *param_2,uint param_3)

{
  FUN_140024ee0(param_1,param_2,param_3,0);
  return;
}


/*
 * FUN_140024cb8 at 140024cb8
 * undefined __fastcall FUN_140024cb8(byte * param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 140024cb8-140024cc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140024cb8(byte *param_1,undefined8 *param_2,uint param_3)

{
  FUN_140024ee0(param_1,param_2,param_3,1);
  return;
}


/*
 * FUN_140024cc4 at 140024cc4
 * char * __fastcall FUN_140024cc4(char * param_1, char * param_2)
 * Address ranges: 140024cc4-140024ce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * FUN_140024cc4(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return param_1;
}


/*
 * FUN_140024ce8 at 140024ce8
 * undefined4 __fastcall FUN_140024ce8(byte * param_1, byte * param_2)
 * Address ranges: 140024ce8-140024d1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_140024ce8(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  while( true ) {
    uVar1 = (uint)*param_2;
    uVar2 = (uint)*param_1;
    if (uVar2 != uVar1) break;
    if (*param_2 == 0) goto LAB_140024d15;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  if ((int)(uVar2 - uVar1) < 0) {
    uVar3 = 0xffffffff;
  }
  else {
LAB_140024d15:
    uVar3 = 0;
    if (uVar2 != uVar1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/*
 * FUN_140024d20 at 140024d20
 * longlong __fastcall FUN_140024d20(char * param_1)
 * Address ranges: 140024d20-140024d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


longlong FUN_140024d20(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return (longlong)(((int)param_1 - iVar2) + -1);
}


/*
 * FUN_140024d34 at 140024d34
 * undefined __fastcall FUN_140024d34(byte * param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 140024d34-140024d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140024d34(byte *param_1,undefined8 *param_2,uint param_3)

{
  FUN_140024d48(param_1,param_2,param_3,0);
  return;
}


/*
 * FUN_140024d3c at 140024d3c
 * undefined __fastcall FUN_140024d3c(byte * param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 140024d3c-140024d46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_140024d3c(byte *param_1,undefined8 *param_2,uint param_3)

{
  FUN_140024d48(param_1,param_2,param_3,1);
  return;
}


/*
 * FUN_140024d48 at 140024d48
 * uint __fastcall FUN_140024d48(byte * param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 140024d48-140024ede
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_140024d48(byte *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar4 = (ulonglong)param_3;
  uVar8 = (ulonglong)*param_1;
  cVar1 = (&DAT_14002c020)[uVar8];
  pbVar6 = param_1;
  while (cVar1 == '\x01') {
    pbVar6 = pbVar6 + 1;
    uVar8 = (ulonglong)*pbVar6;
    cVar1 = (&DAT_14002c020)[uVar8];
  }
  pbVar7 = pbVar6 + 1;
  if ((char)uVar8 == '-') {
    param_4 = param_4 | 2;
LAB_140024d9b:
    uVar8 = (ulonglong)*pbVar7;
    pbVar7 = pbVar6 + 2;
  }
  else if ((char)uVar8 == '+') goto LAB_140024d9b;
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  uVar9 = 0;
  if (param_3 == 0) {
    if ((char)uVar8 != '0') {
      uVar4 = 10;
      goto LAB_140024e03;
    }
    if ((*pbVar7 + 0xa8 & 0xdf) != 0) {
      uVar4 = 8;
      goto LAB_140024e03;
    }
    uVar4 = 0x10;
  }
  else if ((param_3 != 0x10) || ((char)uVar8 != '0')) goto LAB_140024e03;
  if ((*pbVar7 + 0xa8 & 0xdf) == 0) {
    uVar8 = (ulonglong)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
LAB_140024e03:
  do {
    cVar1 = (char)uVar8;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar2 = (int)cVar1 - 0x30;
    }
    else {
      if ((0x19 < (byte)(cVar1 + 0xbfU)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
      iVar3 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        iVar3 = (int)cVar1;
      }
      uVar2 = iVar3 - 0x37;
    }
    if ((uint)uVar4 <= uVar2) break;
    uVar5 = (uint)(0xffffffff / uVar4);
    if ((uVar9 < uVar5) || ((uVar9 == uVar5 && (uVar2 <= (uint)(0xffffffff % uVar4))))) {
      uVar5 = 8;
      uVar9 = uVar9 * (uint)uVar4 + uVar2;
    }
    else {
      uVar5 = 0xc;
    }
    uVar8 = (ulonglong)*pbVar7;
    pbVar7 = pbVar7 + 1;
    param_4 = param_4 | uVar5;
  } while( true );
  pbVar7 = pbVar7 + -1;
  if ((param_4 & 8) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      pbVar7 = param_1;
    }
    uVar9 = 0;
    goto LAB_140024ec5;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) != 0) goto LAB_140024ec5;
    if ((param_4 & 2) == 0) {
      if (uVar9 < 0x80000000) goto LAB_140024ec5;
      goto LAB_140024eab;
    }
    if (uVar9 < 0x80000001) goto LAB_140024ec5;
  }
  else {
LAB_140024eab:
    if ((param_4 & 1) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_140024ec5;
    }
    uVar9 = 0x7fffffff;
    if ((param_4 & 2) == 0) goto LAB_140024ec5;
  }
  uVar9 = 0x80000000;
LAB_140024ec5:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar7;
  }
  if ((param_4 & 2) != 0) {
    return -uVar9;
  }
  return uVar9;
}


/*
 * FUN_140024ee0 at 140024ee0
 * ulonglong __fastcall FUN_140024ee0(byte * param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 140024ee0-14002509e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140024ee0(byte *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = (ulonglong)*param_1;
  cVar1 = (&DAT_14002c020)[uVar9];
  pbVar7 = param_1;
  while (cVar1 == '\x01') {
    pbVar7 = pbVar7 + 1;
    uVar9 = (ulonglong)*pbVar7;
    cVar1 = (&DAT_14002c020)[uVar9];
  }
  pbVar8 = pbVar7 + 1;
  if ((char)uVar9 == '-') {
    param_4 = param_4 | 2;
LAB_140024f37:
    uVar9 = (ulonglong)*pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  else if ((char)uVar9 == '+') goto LAB_140024f37;
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  uVar10 = 0;
  if (param_3 == 0) {
    if ((char)uVar9 != '0') {
      param_3 = 10;
      goto LAB_140024f9f;
    }
    if ((*pbVar8 + 0xa8 & 0xdf) != 0) {
      param_3 = 8;
      goto LAB_140024f9f;
    }
    param_3 = 0x10;
  }
  else if ((param_3 != 0x10) || ((char)uVar9 != '0')) goto LAB_140024f9f;
  if ((*pbVar8 + 0xa8 & 0xdf) == 0) {
    uVar9 = (ulonglong)pbVar8[1];
    pbVar8 = pbVar8 + 2;
  }
LAB_140024f9f:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_3);
  uVar4 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0);
  do {
    cVar1 = (char)uVar9;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar5 = (int)cVar1 - 0x30;
    }
    else {
      if ((0x19 < (byte)(cVar1 + 0xbfU)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
      iVar6 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        iVar6 = (int)cVar1;
      }
      uVar5 = iVar6 - 0x37;
    }
    if (param_3 <= uVar5) break;
    if ((uVar10 < uVar4) ||
       ((uVar10 == uVar4 && (uVar5 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      uVar3 = 8;
      uVar10 = (ulonglong)uVar5 + CONCAT44(0,param_3) * uVar10;
    }
    else {
      uVar3 = 0xc;
    }
    uVar9 = (ulonglong)*pbVar8;
    pbVar8 = pbVar8 + 1;
    param_4 = param_4 | uVar3;
  } while( true );
  pbVar8 = pbVar8 + -1;
  if ((param_4 & 8) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      pbVar8 = param_1;
    }
    uVar10 = 0;
    goto LAB_140025080;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) != 0) goto LAB_140025080;
    if ((param_4 & 2) == 0) {
      if (uVar10 < 0x8000000000000000) goto LAB_140025080;
      goto LAB_140025066;
    }
    if (uVar10 < 0x8000000000000001) goto LAB_140025080;
  }
  else {
LAB_140025066:
    if ((param_4 & 1) != 0) {
      uVar10 = 0xffffffffffffffff;
      goto LAB_140025080;
    }
    if ((param_4 & 2) == 0) {
      uVar10 = 0x7fffffffffffffff;
      goto LAB_140025080;
    }
  }
  uVar10 = 0x8000000000000000;
LAB_140025080:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar8;
  }
  if ((param_4 & 2) != 0) {
    return -uVar10;
  }
  return uVar10;
}


/*
 * FUN_1400250a0 at 1400250a0
 * undefined4 __fastcall FUN_1400250a0(ushort * param_1, ushort * param_2)
 * Address ranges: 1400250a0-1400250d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_1400250a0(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  for (; uVar1 = (uint)*param_2, uVar2 = (uint)*param_1, uVar2 == uVar1; param_1 = param_1 + 1) {
    if (*param_2 == 0) goto LAB_1400250ca;
    param_2 = param_2 + 1;
  }
  if ((int)(uVar2 - uVar1) < 0) {
    uVar3 = 0xffffffff;
  }
  else {
LAB_1400250ca:
    uVar3 = 0;
    if (uVar2 != uVar1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/*
 * FUN_1400250dc at 1400250dc
 * short * __fastcall FUN_1400250dc(short * param_1, short * param_2)
 * Address ranges: 1400250dc-1400250f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


short * FUN_1400250dc(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return param_1;
}


/*
 * FUN_1400250f8 at 1400250f8
 * int __fastcall FUN_1400250f8(byte * param_1, byte * param_2, longlong param_3)
 * Address ranges: 1400250f8-14002511a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_1400250f8(byte *param_1,byte *param_2,longlong param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  for (; (param_3 = param_3 + -1, param_3 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}


/*
 * FUN_14002511c at 14002511c
 * undefined1 * __fastcall FUN_14002511c(undefined1 * param_1, undefined1 param_2, longlong param_3)
 * Address ranges: 14002511c-14002512f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined1 * FUN_14002511c(undefined1 *param_1,undefined1 param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return puVar1;
}


/*
 * FUN_140025130 at 140025130
 * int __fastcall FUN_140025130(int param_1)
 * Address ranges: 140025130-14002513c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_140025130(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if (0x19 < param_1 - 0x61U) {
    iVar1 = param_1;
  }
  return iVar1;
}


/*
 * FUN_140025140 at 140025140
 * ulonglong __fastcall FUN_140025140(byte * param_1, undefined4 * param_2)
 * Address ranges: 140025140-14002517d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140025140(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int local_res18 [4];
  
  uVar2 = FUN_140025180(param_1,local_res18);
  if ((char)uVar2 != '\0') {
    uVar1 = SUB84(local_res18._0_8_,4) + 1;
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 & 0xfffffffe) == 0) {
      *param_2 = (int)local_res18._0_8_;
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


/*
 * FUN_140025180 at 140025180
 * ulonglong __fastcall FUN_140025180(byte * param_1, int * param_2)
 * Address ranges: 140025180-1400252ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ulonglong FUN_140025180(byte *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined8 in_RAX;
  undefined6 uVar11;
  ulonglong uVar9;
  uint7 uVar10;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  
  bVar6 = *param_1;
  uVar11 = (undefined6)((ulonglong)in_RAX >> 0x10);
  uVar9 = CONCAT62(uVar11,CONCAT11(1,bVar6));
  if ((bVar6 == 0x2d) ||
     (uVar9 = CONCAT62(uVar11,(ushort)bVar6), pbVar16 = param_1 + 1, bVar6 == 0x2b)) {
    pbVar16 = param_1 + 2;
    uVar9 = CONCAT71((int7)(uVar9 >> 8),param_1[1]);
  }
  uVar3 = uVar9 >> 8;
  cVar4 = (char)uVar9;
  if (cVar4 == '\0') goto LAB_1400252a6;
  uVar9 = uVar9 & 0xff;
  uVar13 = 0;
  uVar15 = 0;
  uVar14 = 0;
  if (cVar4 != '0') goto LAB_1400251dc;
  pbVar17 = pbVar16 + 1;
  bVar6 = *pbVar16;
  uVar10 = 0;
  uVar1 = uVar15;
  if ((bVar6 == 0x78) || (uVar1 = uVar14, bVar6 == 0x58)) {
    while( true ) {
      uVar15 = uVar1;
      bVar6 = *pbVar17;
      uVar9 = CONCAT71(uVar10,bVar6);
      if (bVar6 == 0) break;
      bVar7 = bVar6 - 0x30;
      uVar9 = CONCAT71(uVar10,bVar7);
      if (bVar6 < 0x30) goto LAB_1400252a6;
      if (9 < bVar7) {
        bVar5 = bVar6 - 0x37;
        uVar9 = CONCAT71(uVar10,bVar5);
        if ((bVar7 < 7) || (bVar5 < 10)) goto LAB_1400252a6;
        if (0xf < bVar5) {
          bVar6 = bVar6 + 0xa9;
          uVar9 = CONCAT71(uVar10,bVar6);
          if (((bVar5 < 0x20) || (bVar6 < 10)) || (0xf < bVar6)) goto LAB_1400252a6;
        }
      }
      if (uVar15 >> 0x1c != 0) goto LAB_1400252a6;
      uVar14 = (uint)uVar13;
      iVar12 = uVar14 << 4;
      uVar13 = (ulonglong)CONCAT31((int3)((uint)iVar12 >> 8),(byte)iVar12 | (byte)uVar9);
      uVar10 = (uint7)(byte)((char)(uVar9 >> 8) + 1);
      pbVar17 = pbVar17 + 1;
      uVar1 = uVar15 << 4 | uVar14 >> 0x1c;
    }
LAB_14002527c:
    if ((char)(uVar9 >> 8) == '\0') goto LAB_1400252a6;
  }
  else {
    if ((bVar6 == 0x62) || (uVar15 = uVar14, bVar6 == 0x42)) {
      while( true ) {
        bVar6 = *pbVar17;
        uVar9 = CONCAT71(uVar10,bVar6);
        if (bVar6 == 0) break;
        bVar7 = bVar6 - 0x30;
        uVar9 = CONCAT71(uVar10,bVar7);
        if ((bVar6 < 0x30) || (1 < bVar7)) goto LAB_1400252a6;
        iVar12 = (int)uVar13;
        uVar13 = (ulonglong)CONCAT14(iVar12 < 0,uVar15) << 1;
        uVar15 = (uint)uVar13 | (uint)(iVar12 < 0);
        if ((uVar13 & 0x100000000) != 0) goto LAB_1400252a6;
        uVar13 = (ulonglong)CONCAT31((int3)((uint)(iVar12 << 1) >> 8),(byte)(iVar12 << 1) | bVar7);
        uVar10 = (uint7)(byte)((char)uVar10 + 1);
        pbVar17 = pbVar17 + 1;
      }
      goto LAB_14002527c;
    }
    uVar9 = (ulonglong)bVar6;
    pbVar16 = pbVar17;
    while (bVar6 != 0) {
LAB_1400251dc:
      bVar6 = (byte)uVar9;
      if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1400252a6;
      uVar2 = (ulonglong)uVar15 * 10;
      uVar9 = uVar2 & 0xffffffff;
      if ((int)(uVar2 >> 0x20) != 0) goto LAB_1400252a6;
      uVar13 = uVar13 * 10;
      uVar9 = uVar13 & 0xffffffff;
      uVar15 = (uint)(uVar13 >> 0x20);
      uVar14 = uVar15 + (uint)uVar2;
      if (CARRY4(uVar15,(uint)uVar2)) goto LAB_1400252a6;
      uVar8 = (uint)uVar13 + (uint)(byte)(bVar6 - 0x30);
      uVar9 = (ulonglong)uVar8;
      uVar1 = (uint)CARRY4((uint)uVar13,(uint)(byte)(bVar6 - 0x30));
      uVar15 = uVar14 + uVar1;
      if (CARRY4(uVar14,uVar1)) goto LAB_1400252a6;
      uVar13 = (ulonglong)uVar8;
      bVar6 = *pbVar16;
      uVar9 = (ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar6);
      pbVar16 = pbVar16 + 1;
    }
  }
  iVar12 = (int)uVar13;
  if (-1 < (int)uVar15) {
    if ((char)uVar3 != '\0') {
      bVar18 = iVar12 != 0;
      iVar12 = -iVar12;
      uVar15 = -(uint)bVar18 - uVar15;
      uVar9 = uVar13;
    }
    *param_2 = iVar12;
    param_2[1] = uVar15;
    return CONCAT71((int7)(uVar9 >> 8),1);
  }
LAB_1400252a6:
  return uVar9 & 0xffffffffffffff00;
}


/*
 * FUN_1400252b0 at 1400252b0
 * undefined __fastcall FUN_1400252b0(void)
 * Address ranges: 1400252b0-140025303
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400252b0(void)

{
  _DAT_14002dd40 = &PTR_FUN_140028be8;
  if (DAT_14002e1c0 != 0) {
    FUN_140010da0(0x14002dd40);
    FUN_140013580(DAT_14002e1c0);
    DAT_14002e1c0 = 0;
    _DAT_14002dd50 = 0;
  }
  FUN_1400122a0((undefined8 *)&DAT_14002dd40);
  return;
}


/*
 * FUN_140025310 at 140025310
 * undefined __fastcall FUN_140025310(void)
 * Address ranges: 140025310-140025363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140025310(void)

{
  _DAT_14002e1e0 = &PTR_FUN_140028be8;
  if (DAT_14002e660 != 0) {
    FUN_140010da0(0x14002e1e0);
    FUN_140013580(DAT_14002e660);
    DAT_14002e660 = 0;
    _DAT_14002e1f0 = 0;
  }
  FUN_1400122a0((undefined8 *)&DAT_14002e1e0);
  return;
}


/*
 * FUN_140025370 at 140025370
 * undefined __fastcall FUN_140025370(void)
 * Address ranges: 140025370-1400253c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140025370(void)

{
  _DAT_14002d400 = &PTR_FUN_140028be8;
  if (DAT_14002d880 != 0) {
    FUN_140010da0(0x14002d400);
    FUN_140013580(DAT_14002d880);
    DAT_14002d880 = 0;
    _DAT_14002d410 = 0;
  }
  FUN_1400122a0((undefined8 *)&DAT_14002d400);
  return;
}


/*
 * FUN_1400253d0 at 1400253d0
 * undefined __fastcall FUN_1400253d0(void)
 * Address ranges: 1400253d0-140025423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400253d0(void)

{
  _DAT_14002d8a0 = &PTR_FUN_140028be8;
  if (DAT_14002dd20 != 0) {
    FUN_140010da0(0x14002d8a0);
    FUN_140013580(DAT_14002dd20);
    DAT_14002dd20 = 0;
    _DAT_14002d8b0 = 0;
  }
  FUN_1400122a0((undefined8 *)&DAT_14002d8a0);
  return;
}


/*
 * FUN_140025430 at 140025430
 * undefined __fastcall FUN_140025430(void)
 * Address ranges: 140025430-140025494
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140025430(void)

{
  longlong lVar1;
  
  _DAT_14002e680 = &PTR_FUN_140028e60;
  if (DAT_14002eb00 != 0) {
    FUN_140012950(0x14002e680);
    lVar1 = DAT_14002eb00;
    *(undefined8 *)(DAT_14002eb00 + 0x530) = 0;
    FUN_140013580(lVar1);
    DAT_14002eb00 = 0;
    _DAT_14002e690 = 0;
  }
  FUN_1400122a0((undefined8 *)&DAT_14002e680);
  return;
}


/*
 * FUN_1400254a0 at 1400254a0
 * undefined __fastcall FUN_1400254a0(void)
 * Address ranges: 1400254a0-140025504
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400254a0(void)

{
  longlong lVar1;
  
  _DAT_14002eb10 = &PTR_FUN_140028e60;
  if (DAT_14002ef90 != 0) {
    FUN_140012950(0x14002eb10);
    lVar1 = DAT_14002ef90;
    *(undefined8 *)(DAT_14002ef90 + 0x530) = 0;
    FUN_140013580(lVar1);
    DAT_14002ef90 = 0;
    _DAT_14002eb20 = 0;
  }
  FUN_1400122a0((undefined8 *)&DAT_14002eb10);
  return;
}


