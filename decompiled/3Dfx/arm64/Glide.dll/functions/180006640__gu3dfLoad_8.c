/*
 * _gu3dfLoad@8 at 180006640
 * undefined8 __cdecl _gu3dfLoad@8(LPCSTR param_1, uint * param_2)
 * Address ranges: 180006640-18000672f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 _gu3dfLoad_8(LPCSTR param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  DWORD local_30 [2];
  longlong alStack_28 [3];
  
                    /* 0x6640  109  _gu3dfLoad@8
                       0x6640  270  gu3dfLoad */
  FUN_180009600(alStack_28,param_1);
  iVar3 = FUN_180009128(alStack_28,param_2);
  if (iVar3 != 0) {
    FUN_1800096a0((longlong)alStack_28,iVar3,0,(DWORD *)0x0);
    local_30[0] = 0;
    FUN_180009720((longlong)alStack_28,param_2[0x108],*(LPVOID *)(param_2 + 0x106),local_30);
    if ((int)(param_2[0x108] - 7) <= (int)local_30[0]) {
      if (param_2[5] - 8 < 7) {
        lVar4 = *(longlong *)(param_2 + 0x106);
        uVar5 = 0;
        if (param_2[0x108] >> 2 != 0) {
          do {
            lVar2 = uVar5 * 4;
            uVar1 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar1;
            *(uint *)(lVar4 + lVar2) =
                 (uint)*(byte *)(lVar4 + 1 + lVar2) |
                 (*(uint *)(lVar4 + lVar2) & 0xff |
                 (uint)CONCAT11(*(undefined1 *)(lVar4 + 2 + lVar2),
                                *(undefined1 *)(lVar4 + 3 + lVar2)) << 8) << 8;
          } while (uVar1 < param_2[0x108] >> 2);
        }
      }
      uVar6 = 1;
      goto LAB_180006718;
    }
  }
  uVar6 = 0;
LAB_180006718:
  FUN_180009660(alStack_28);
  return uVar6;
}

