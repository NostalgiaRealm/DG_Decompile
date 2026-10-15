/*
 * FUN_1802198d0 at 1802198d0
 * undefined FUN_1802198d0(void)
 * Address ranges: 1802198d0-1802199fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802198d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar6 = 0;
  lVar8 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      if (*(longlong *)(param_2 + 0xda0 + uVar6 * 8) != 0) {
        FUN_180206a20(param_1);
        *(undefined8 *)(param_2 + 0xda0 + uVar6 * 8) = 0;
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 0x28));
  }
  uVar1 = *(uint *)(param_2 + 0xdb0);
  if (uVar1 != 0xffffffff) {
    lVar7 = *(longlong *)(lVar8 + 0x2230);
    thunk_FUN_1802236f8(lVar7 + 0x28);
    uVar3 = uVar1 & 0xffff;
    uVar2 = uVar3 + 2;
    if (uVar3 < uVar2) {
      lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + (ulonglong)(uVar1 >> 0x10) * 0x10 + 8);
      do {
        uVar6 = -1L << ((ulonglong)uVar3 & 0x3f);
        uVar1 = (uVar3 & 0xffffffc0) + 0x40;
        if (uVar2 < uVar1) {
          uVar6 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar2 & 0x3f) & uVar6;
        }
        *(ulonglong *)(lVar5 + (ulonglong)(uVar3 >> 6) * 8) =
             *(ulonglong *)(lVar5 + (ulonglong)(uVar3 >> 6) * 8) & (uVar6 ^ 0xffffffffffffffff);
        uVar3 = uVar1;
      } while (uVar1 < uVar2);
    }
    thunk_FUN_18022370c(lVar7 + 0x28);
  }
  iVar4 = *(int *)(param_2 + 0xdb4);
  if (iVar4 != -1) {
    lVar8 = *(longlong *)(lVar8 + 0x2238);
    thunk_FUN_1802236f8(lVar8 + 0x28);
    FUN_18020c678(lVar8,iVar4,2);
    thunk_FUN_18022370c(lVar8 + 0x28);
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

