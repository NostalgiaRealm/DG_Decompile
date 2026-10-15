/*
 * FUN_1801f48c8 at 1801f48c8
 * undefined FUN_1801f48c8(void)
 * Address ranges: 1801f48c8-1801f49a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801f48c8(longlong param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_40 [4];
  ulonglong uVar5;
  
  local_40[0] = FUN_1801f4b08(param_1,*(longlong *)(param_1 + 0x58) + (param_2 & 0xffffffff));
  uVar3 = (uint)(local_40[0] != -1);
  if (local_40[0] != -1) {
    uVar5 = 0;
    uVar4 = 0;
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x90) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18 + 8) +
            (ulonglong)*(uint *)(param_1 + 0x84) * 0x28;
    if (*(int *)(lVar1 + 0x10) != 0) {
      do {
        uVar4 = (uint)uVar5;
        iVar2 = FUN_180222cb8(*(longlong *)(param_1 + 0x70) +
                              (ulonglong)*(uint *)(*(longlong *)(lVar1 + 8) + uVar5 * 4),
                              *(longlong *)(param_1 + 0x70) + (longlong)local_40[0]);
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - param_3) + -1;
          break;
        }
        uVar4 = uVar4 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(lVar1 + 0x10));
    }
    if (uVar4 == *(uint *)(lVar1 + 0x10)) {
      uVar3 = FUN_180108518(lVar1 + 8,local_40);
    }
  }
  return uVar3;
}

