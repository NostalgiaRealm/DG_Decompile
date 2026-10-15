/*
 * FUN_18015ddc8 at 18015ddc8
 * undefined FUN_18015ddc8(void)
 * Address ranges: 18015ddc8-18015de6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015ddc8(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((0xc < uVar1) || ((0x1500U >> (ulonglong)(uVar1 & 0x1f) & 1) == 0)) {
    if (uVar1 == 9) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + param_2;
      goto LAB_18015de20;
    }
    if ((uVar1 != 0xb) || (*(longlong *)(param_1 + 0x28) != 0)) goto LAB_18015de20;
  }
  *(longlong *)(param_1 + 0x28) = param_2;
LAB_18015de20:
  if ((param_4 & 1) != 0) {
    while (iVar2 = FUN_180104210(param_1 + 0x54,1,0), iVar2 != 0) {
      DataMemoryBarrier(2,2);
      Yield();
    }
    if (*(longlong *)(param_1 + 0x30) == param_3) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

