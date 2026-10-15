/*
 * FUN_14000a708 at 14000a708
 * uint __fastcall FUN_14000a708(longlong param_1, ushort * param_2)
 * Address ranges: 14000a708-14000a806
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_14000a708(longlong param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  LPWSTR pWVar3;
  LPWSTR pWVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x1b40);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = FUN_14000e270(param_1,0x402,(ulonglong)uVar6);
      if (uVar2 < uVar1) {
        uVar5 = 0;
        lVar7 = (ulonglong)uVar2 * 0x218 + *(longlong *)(param_1 + 0x1b38);
        pWVar3 = CharUpperW((LPWSTR)(ulonglong)*(ushort *)(lVar7 + 0x10));
        pWVar4 = CharUpperW((LPWSTR)(ulonglong)*param_2);
        if (pWVar3 == pWVar4) {
          do {
            if (*(short *)(lVar7 + 0x10 + uVar5 * 2) == 0) break;
            uVar5 = (ulonglong)((int)uVar5 + 1);
            pWVar3 = CharUpperW((LPWSTR)(ulonglong)*(ushort *)(lVar7 + 0x10 + uVar5 * 2));
            pWVar4 = CharUpperW((LPWSTR)(ulonglong)param_2[uVar5]);
          } while (pWVar3 == pWVar4);
        }
        if ((*(short *)(lVar7 + 0x10 + uVar5 * 2) == 0) && (param_2[uVar5] == 0)) {
          return uVar6;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return 0xffffffff;
}

