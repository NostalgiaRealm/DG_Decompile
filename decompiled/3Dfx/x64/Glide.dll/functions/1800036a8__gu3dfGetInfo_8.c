/*
 * _gu3dfGetInfo@8 at 1800036a8
 * bool __fastcall _gu3dfGetInfo@8(LPCSTR param_1, uint * param_2)
 * Address ranges: 1800036a8-1800036e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _gu3dfGetInfo_8(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  longlong local_28 [4];
  
                    /* 0x36a8  108  _gu3dfGetInfo@8
                       0x36a8  269  gu3dfGetInfo */
  FUN_18005d820(local_28,param_1,'\0');
  iVar1 = FUN_1800061b8(local_28,param_2);
  FUN_18005d920(local_28);
  return iVar1 != 0;
}

