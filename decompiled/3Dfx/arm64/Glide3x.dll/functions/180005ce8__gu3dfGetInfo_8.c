/*
 * _gu3dfGetInfo@8 at 180005ce8
 * bool __cdecl _gu3dfGetInfo@8(LPCSTR param_1, uint * param_2)
 * Address ranges: 180005ce8-180005d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _gu3dfGetInfo_8(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  longlong alStack_30 [4];
  
                    /* 0x5ce8  94  _gu3dfGetInfo@8
                       0x5ce8  194  gu3dfGetInfo */
  FUN_180038ce0(alStack_30,param_1);
  iVar1 = FUN_180037b40(alStack_30,param_2);
  FUN_180038d40(alStack_30);
  return iVar1 != 0;
}

