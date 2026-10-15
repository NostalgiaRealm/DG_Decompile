/*
 * FUN_1800a91b0 at 1800a91b0
 * undefined FUN_1800a91b0(void)
 * Address ranges: 1800a91b0-1800a930b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800a91b0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint local_50 [8];
  
  uVar6 = 0x8876086c;
  if (((param_2 < 8) && ((0xcfU >> (ulonglong)(param_2 & 0x1f) & 1) != 0 && param_2 != 0)) &&
     (uVar6 = 0, param_2 != *(uint *)(param_1 + 0x378))) {
    lVar5 = *(longlong *)(param_1 + -0x80);
    local_50[0] = 0;
    local_50[1] = 0x100;
    local_50[2] = 0x200;
    local_50[3] = 0x400;
    local_50[4] = 0x800;
    local_50[5] = 0x1000;
    plVar1 = (longlong *)&DAT_00006898;
    if (lVar5 != 0) {
      plVar1 = (longlong *)(lVar5 + 0x60);
    }
    uVar6 = 0x8876086c;
    if ((local_50[(int)param_2] & *(uint *)(*plVar1 + 0x44)) != 0) {
      puVar2 = (uint *)&DAT_00000e78;
      if (lVar5 != 0) {
        puVar2 = (uint *)(lVar5 + -0x59c0);
      }
      if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
        bVar3 = false;
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
      }
      else {
        bVar3 = true;
        iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
        if (iVar4 == 0) {
          FUN_180003398();
        }
      }
      if (1 < *(int *)(DAT_18024de60 + 0x87c) - 2U) {
        (**(code **)(**(longlong **)(param_1 + -0x40) + 0x98))
                  (*(longlong **)(param_1 + -0x40),param_2 != 1);
      }
      *(uint *)(param_1 + 0x378) = param_2;
      uVar6 = 0;
      if (bVar3) {
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
      }
      else {
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
      }
    }
  }
  return uVar6;
}

