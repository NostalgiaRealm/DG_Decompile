/*
 * FUN_10042d32 at 10042d32
 * undefined __stdcall FUN_10042d32(int param_1, int param_2, int param_3)
 * Address ranges: 10042d32-10042db8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10042d32(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_c;
  
  local_c = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x9c + local_c);
      iVar2 = local_c * 0xc;
      bVar1 = (&DAT_1005f498)[uVar4];
      iVar3 = *(int *)(param_2 + (uint)bVar1 * 8);
      if (uVar4 == 1) {
        iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x15) * 4;
      }
      *(int *)(param_3 + iVar2) = iVar3;
      *(undefined4 *)(param_3 + 4 + iVar2) = *(undefined4 *)(param_2 + 4 + (uint)bVar1 * 8);
      *(undefined1 *)(param_3 + 8 + iVar2) = *(undefined1 *)(param_1 + 0x18 + uVar4 * 8);
      local_c = local_c + 1;
      *(undefined1 *)(param_3 + 9 + iVar2) = *(undefined1 *)(param_1 + 0x15 + uVar4 * 8);
    } while (local_c < *(uint *)(param_1 + 8));
  }
  return;
}

