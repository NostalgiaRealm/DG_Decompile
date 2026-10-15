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

