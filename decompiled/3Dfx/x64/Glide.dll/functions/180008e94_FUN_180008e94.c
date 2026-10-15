/*
 * FUN_180008e94 at 180008e94
 * undefined1 __fastcall FUN_180008e94(longlong param_1, uint param_2, uint param_3)
 * Address ranges: 180008e94-180008f4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180008e94(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  bool bVar8;
  int local_res10 [6];
  
  local_res10[0] =
       FUN_180008f50(param_1,(undefined8 *)((ulonglong)param_2 + *(longlong *)(param_1 + 0x58)),
                     param_3);
  uVar7 = local_res10[0] != -1;
  if ((bool)uVar7) {
    uVar6 = 0;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x84);
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x90) + 8 + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18);
    iVar2 = *(int *)(lVar1 + 0x10 + uVar4 * 0x28);
    bVar8 = iVar2 == 0;
    if (iVar2 != 0) {
      do {
        iVar2 = FUN_18005dc28((byte *)((ulonglong)
                                       *(uint *)(*(longlong *)(lVar1 + 8 + uVar4 * 0x28) + uVar6 * 4
                                                ) + *(longlong *)(param_1 + 0x70)),
                              (byte *)(*(longlong *)(param_1 + 0x70) + (longlong)local_res10[0]));
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (-1 - param_3);
          break;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar1 + 0x10 + uVar4 * 0x28));
      bVar8 = (int)uVar6 == *(int *)(lVar1 + 0x10 + uVar4 * 0x28);
    }
    if (bVar8) {
      uVar3 = FUN_18000944c((longlong *)(lVar1 + (uVar4 * 5 + 1) * 8),local_res10);
      uVar7 = (undefined1)uVar3;
    }
  }
  return uVar7;
}

