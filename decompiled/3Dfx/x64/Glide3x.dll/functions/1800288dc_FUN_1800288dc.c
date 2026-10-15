/*
 * FUN_1800288dc at 1800288dc
 * undefined __fastcall FUN_1800288dc(longlong param_1)
 * Address ranges: 1800288dc-1800289b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800288dc(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar4 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      lVar1 = (longlong)iVar4;
      if (*(char *)(param_1 + 0x32f9 + lVar1) != '\0') {
        lVar3 = lVar1 * 0x1a0 + param_1;
        uVar6 = (ulonglong)*(uint *)(lVar3 + 0x2dbc);
        uVar2 = *(uint *)(param_1 + 0x2e10 + (lVar1 * 0xd + uVar6) * 0x20);
        uVar5 = uVar2;
        for (; (uint)uVar6 <= *(uint *)(lVar3 + 0x2db8); uVar6 = (ulonglong)((uint)uVar6 + 1)) {
          lVar1 = uVar6 * 0x20;
          if (*(uint *)(lVar1 + 0x2e10 + lVar3) == uVar5) {
            uVar5 = uVar5 + (int)(longlong)
                                 (*(float *)(lVar1 + 0x2e20 + lVar3) *
                                 *(float *)(lVar1 + 0x2e1c + lVar3));
          }
          else {
            FUN_1800149f8(*(longlong **)(param_1 + 0x3300),uVar2,uVar5,0,'\0');
            uVar2 = *(uint *)(lVar1 + 0x2e10 + lVar3);
            uVar5 = uVar2;
          }
        }
        FUN_1800149f8(*(longlong **)(param_1 + 0x3300),uVar2,uVar5,0,'\0');
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  return;
}

