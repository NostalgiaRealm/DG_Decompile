/*
 * _gu3dfGetInfo@8 at 180003488
 * bool __fastcall _gu3dfGetInfo@8(LPCSTR param_1, uint * param_2)
 * Address ranges: 180003488-1800034c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _gu3dfGetInfo_8(LPCSTR param_1,uint *param_2)

{
  int iVar1;
  longlong local_28 [4];
  
                    /* 0x3488  104  _gu3dfGetInfo@8
                       0x3488  261  gu3dfGetInfo */
  FUN_18005d380(local_28,param_1,'\0');
  iVar1 = FUN_180005e7c(local_28,param_2);
  FUN_18005d480(local_28);
  return iVar1 != 0;
}

