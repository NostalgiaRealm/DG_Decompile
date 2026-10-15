/*
 * FUN_180007d00 at 180007d00
 * undefined __fastcall FUN_180007d00(longlong param_1, longlong param_2)
 * Address ranges: 180007d00-180007df3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007d00(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (*(uint *)(param_1 + 0xef8) != 0) {
    uVar6 = 0;
    do {
      uVar5 = (uint)uVar6;
      if (*(longlong *)(*(longlong *)(param_1 + 0xef0) + uVar6 * 8) == param_2) {
        if (uVar5 == 0xffffffff) {
          return;
        }
        if ((*(int *)(param_2 + 0x54) == 0) && (*(int *)(param_1 + 0xe68) == 1)) {
          uVar3 = *(uint *)(param_1 + 0xea8);
          iVar1 = *(int *)(param_2 + 0x48);
          iVar8 = iVar1;
          uVar4 = FUN_1800028a0(iVar1);
          uVar9 = (uint)uVar4;
          uVar4 = FUN_180002844(iVar1);
          uVar2 = (uint)uVar4;
          uVar4 = FUN_1800026c0(iVar1);
          iVar7 = (int)uVar4;
          iVar1 = FUN_180002500(iVar8);
          uVar2 = FUN_180031910(*(int *)(param_2 + 0x60),*(uint *)(param_2 + 100),1,iVar1,iVar7,
                                uVar2,uVar9);
          *(ulonglong *)(&DAT_180112b00 + (ulonglong)uVar3 * 600) =
               *(longlong *)(&DAT_180112b00 + (ulonglong)uVar3 * 600) + (ulonglong)uVar2;
        }
        uVar3 = *(uint *)(param_1 + 0xef8);
        if (uVar3 <= uVar5) {
          return;
        }
        while( true ) {
          uVar2 = uVar5 + 1;
          if (uVar3 <= uVar2) break;
          *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar5 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar2 * 8);
          uVar3 = *(uint *)(param_1 + 0xef8);
          uVar5 = uVar2;
        }
        *(uint *)(param_1 + 0xef8) = uVar3 - 1;
        return;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
    } while (uVar5 + 1 < *(uint *)(param_1 + 0xef8));
  }
  return;
}

