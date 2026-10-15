/*
 * gu3dfGetInfo at 1000258d
 * bool __stdcall gu3dfGetInfo(LPCSTR param_1, uint * param_2)
 * Address ranges: 1000258d-100025bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall gu3dfGetInfo,8
 */

/* __stdcall gu3dfGetInfo,8 */

bool gu3dfGetInfo(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  int local_10 [3];
  
                    /* 0x258d  102  _gu3dfGetInfo@8 */
  FUN_10004c70(local_10,param_1);
  iVar1 = FUN_1000464c(local_10,param_2);
  FUN_10004cb0(local_10);
  return iVar1 != 0;
}

