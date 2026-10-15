/*
 * gu3dfGetInfo at 1000232b
 * bool __stdcall gu3dfGetInfo(LPCSTR param_1, uint * param_2)
 * Address ranges: 1000232b-1000235d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall gu3dfGetInfo,8
 */

/* __stdcall gu3dfGetInfo,8 */

bool gu3dfGetInfo(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  int local_10 [3];
  
                    /* 0x232b  94  _gu3dfGetInfo@8 */
  FUN_1002b700(local_10,param_1);
  iVar1 = FUN_1002a4c3(local_10,param_2);
  FUN_1002b740(local_10);
  return iVar1 != 0;
}

