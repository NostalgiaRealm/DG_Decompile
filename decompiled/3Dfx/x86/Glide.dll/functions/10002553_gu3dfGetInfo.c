/*
 * gu3dfGetInfo at 10002553
 * bool __stdcall gu3dfGetInfo(LPCSTR param_1, uint * param_2)
 * Address ranges: 10002553-10002585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall gu3dfGetInfo,8
 */

/* __stdcall gu3dfGetInfo,8 */

bool gu3dfGetInfo(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  int local_10 [3];
  
                    /* 0x2553  106  _gu3dfGetInfo@8 */
  FUN_10004fc0(local_10,param_1);
  iVar1 = FUN_1000499a(local_10,param_2);
  FUN_10005000(local_10);
  return iVar1 != 0;
}

