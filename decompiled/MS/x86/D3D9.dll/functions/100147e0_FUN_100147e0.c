/*
 * FUN_100147e0 at 100147e0
 * undefined __fastcall FUN_100147e0(int param_1)
 * Address ranges: 100147e0-1001486b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100147e0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x30);
    if ((*(uint *)(param_1 + 0x54) & 0x400) != 0) {
      uVar3 = 1;
    }
    local_8 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      do {
        if (uVar3 != 0) {
          uVar2 = 0;
          do {
            iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + local_8 * 0x40 + uVar2 * 4) + 4);
            *(undefined4 *)(iVar1 + 0xb4) = 0;
            *(undefined4 *)(iVar1 + 0x20) = 0;
            *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x28;
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar3);
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(uint *)(param_1 + 100));
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_100cfe2d(*(LPVOID *)(*(int *)(param_1 + 0x48) + -4));
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

