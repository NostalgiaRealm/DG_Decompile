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

