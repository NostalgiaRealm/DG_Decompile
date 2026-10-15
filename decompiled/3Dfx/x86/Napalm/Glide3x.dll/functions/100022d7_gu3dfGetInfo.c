/*
 * gu3dfGetInfo at 100022d7
 * bool __stdcall gu3dfGetInfo(LPCSTR param_1, uint * param_2)
 * Address ranges: 100022d7-10002309
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall gu3dfGetInfo,8
 */

/* __stdcall gu3dfGetInfo,8 */

bool gu3dfGetInfo(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  int local_10 [3];
  
                    /* 0x22d7  116  _gu3dfGetInfo@8 */
  FUN_1002eb10(local_10,param_1);
  iVar1 = FUN_1002d83c(local_10,param_2);
  FUN_1002eb50(local_10);
  return iVar1 != 0;
}

