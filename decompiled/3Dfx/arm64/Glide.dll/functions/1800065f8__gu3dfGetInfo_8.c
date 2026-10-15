/*
 * _gu3dfGetInfo@8 at 1800065f8
 * bool __cdecl _gu3dfGetInfo@8(LPCSTR param_1, uint * param_2)
 * Address ranges: 1800065f8-18000663f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _gu3dfGetInfo_8(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  longlong alStack_30 [4];
  
                    /* 0x65f8  108  _gu3dfGetInfo@8
                       0x65f8  269  gu3dfGetInfo */
  FUN_180009600(alStack_30,param_1);
  iVar1 = FUN_180009128(alStack_30,param_2);
  FUN_180009660(alStack_30);
  return iVar1 != 0;
}

