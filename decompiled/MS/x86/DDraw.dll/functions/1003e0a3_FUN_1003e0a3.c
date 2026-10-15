/*
 * FUN_1003e0a3 at 1003e0a3
 * undefined __thiscall FUN_1003e0a3(void * this, int * param_1)
 * Address ranges: 1003e0a3-1003e104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003e0a3(void *this,int *param_1)

{
  CHAR local_518 [780];
  WCHAR local_20c [260];
  
  FUN_10061680(local_20c,this);
  PathAppendW(local_20c,L"dgVoodooSettings.ini");
  WideCharToMultiByte(0,0x200,local_20c,-1,local_518,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
  (**(code **)(*param_1 + 0xc))(local_20c,1);
  return;
}

