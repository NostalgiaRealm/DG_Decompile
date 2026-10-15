/*
 * _gu3dfGetInfo@8 at 180005b58
 * bool __cdecl _gu3dfGetInfo@8(LPCSTR param_1, uint * param_2)
 * Address ranges: 180005b58-180005b9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _gu3dfGetInfo_8(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  longlong alStack_30 [4];
  
                    /* 0x5b58  104  _gu3dfGetInfo@8
                       0x5b58  261  gu3dfGetInfo */
  FUN_1800086f0(alStack_30,param_1);
  iVar1 = FUN_180008210(alStack_30,param_2);
  FUN_180008750(alStack_30);
  return iVar1 != 0;
}

