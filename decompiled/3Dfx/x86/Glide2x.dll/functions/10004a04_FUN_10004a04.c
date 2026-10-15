/*
 * FUN_10004a04 at 10004a04
 * undefined4 __fastcall FUN_10004a04(LPCSTR param_1, uint * param_2)
 * Address ranges: 10004a04-10004ae0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10004a04(LPCSTR param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_14 [3];
  DWORD local_8;
  
  FUN_10004c70(local_14,param_1);
  iVar2 = FUN_1000464c(local_14,param_2);
  if (iVar2 != 0) {
    FUN_10004cf0(local_14,iVar2,0,(DWORD *)0x0);
    local_8 = 0;
    FUN_10004d50(local_14,param_2[0x107],(LPVOID)param_2[0x106],&local_8);
    if ((int)(param_2[0x107] - 7) <= (int)local_8) {
      uVar3 = param_2[5];
      uVar1 = param_2[0x106];
      if (((((uVar3 == 8) || (uVar3 == 9)) || (uVar3 == 10)) ||
          (((uVar3 == 0xb || (uVar3 == 0xc)) || ((uVar3 == 0xd || (uVar3 == 0xe)))))) &&
         (uVar3 = 0, param_2[0x107] >> 2 != 0)) {
        do {
          *(uint *)(uVar1 + uVar3 * 4) =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar1 + 2 + uVar3 * 4),
                                          *(undefined1 *)(uVar1 + 3 + uVar3 * 4)),
                                 *(undefined1 *)(uVar1 + uVar3 * 4)),
                        *(undefined1 *)(uVar1 + 1 + uVar3 * 4));
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_2[0x107] >> 2);
      }
      uVar4 = 1;
      goto LAB_10004ad4;
    }
  }
  uVar4 = 0;
LAB_10004ad4:
  FUN_10004cb0(local_14);
  return uVar4;
}

