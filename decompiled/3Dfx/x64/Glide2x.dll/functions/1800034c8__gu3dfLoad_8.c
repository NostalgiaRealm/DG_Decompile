/*
 * _gu3dfLoad@8 at 1800034c8
 * undefined8 __fastcall _gu3dfLoad@8(LPCSTR param_1, uint * param_2)
 * Address ranges: 1800034c8-1800035d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 _gu3dfLoad_8(LPCSTR param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  DWORD local_res18 [4];
  longlong local_28 [4];
  
                    /* 0x34c8  105  _gu3dfLoad@8
                       0x34c8  262  gu3dfLoad */
  FUN_18005d380(local_28,param_1,'\0');
  iVar2 = FUN_180005e7c(local_28,param_2);
  if (iVar2 != 0) {
    FUN_18005d5c0((longlong)local_28,iVar2,0,(DWORD *)0x0);
    local_res18[0] = 0;
    FUN_18005d540((longlong)local_28,param_2[0x108],*(LPVOID *)(param_2 + 0x106),local_res18);
    if ((int)(param_2[0x108] - 7) <= (int)local_res18[0]) {
      uVar3 = param_2[5];
      if ((((uVar3 == 8) || (uVar3 == 9)) || (uVar3 == 10)) ||
         (((uVar3 == 0xb || (uVar3 == 0xc)) || ((uVar3 == 0xd || (uVar3 == 0xe)))))) {
        lVar1 = *(longlong *)(param_2 + 0x106);
        uVar4 = 0;
        if (param_2[0x108] >> 2 != 0) {
          do {
            *(uint *)(lVar1 + uVar4 * 4) =
                 CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 2 + uVar4 * 4),
                                            *(undefined1 *)(lVar1 + 3 + uVar4 * 4)),
                                   *(undefined1 *)(lVar1 + uVar4 * 4)),
                          *(undefined1 *)(lVar1 + 1 + uVar4 * 4));
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
          } while (uVar3 < param_2[0x108] >> 2);
        }
      }
      FUN_18005d480(local_28);
      return 1;
    }
  }
  FUN_18005d480(local_28);
  return 0;
}

