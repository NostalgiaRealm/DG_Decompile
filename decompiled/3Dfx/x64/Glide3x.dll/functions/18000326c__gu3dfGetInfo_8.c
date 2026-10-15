/*
 * _gu3dfGetInfo@8 at 18000326c
 * bool __fastcall _gu3dfGetInfo@8(LPCSTR param_1, uint * param_2)
 * Address ranges: 18000326c-1800032aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _gu3dfGetInfo_8(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  longlong local_28 [4];
  
                    /* 0x326c  94  _gu3dfGetInfo@8
                       0x326c  194  gu3dfGetInfo */
  FUN_180060720(local_28,param_1,'\0');
  iVar1 = FUN_180033084(local_28,param_2);
  FUN_180060820(local_28);
  return iVar1 != 0;
}

