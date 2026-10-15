/*
 * FUN_100108d3 at 100108d3
 * undefined __fastcall FUN_100108d3(int param_1)
 * Address ranges: 100108d3-10010952
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100108d3(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x30);
    local_c = 0;
    if (*(int *)(param_1 + 100) != 0) {
      do {
        uVar3 = 0;
        if (uVar1 != 0) {
          do {
            iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + local_c * 0x40 + uVar3 * 4) + 4);
            *(undefined4 *)(iVar2 + 0xb4) = 0;
            *(undefined4 *)(iVar2 + 0x20) = 0;
            *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 0x28;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar1);
        }
        local_c = local_c + 1;
      } while (local_c < *(uint *)(param_1 + 100));
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_100ad4c5(*(LPVOID *)(*(int *)(param_1 + 0x48) + -4));
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

