/*
 * FUN_10031592 at 10031592
 * undefined __fastcall FUN_10031592(int param_1)
 * Address ranges: 10031592-1003166f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10031592(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_c;
  
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 200);
  *puVar1 = *puVar1 | 8;
  iVar2 = FUN_1002b7cf(param_1);
  for (iVar5 = iVar2; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x110)) {
    uVar4 = *(uint *)(*(int *)(param_1 + 4) + 200);
    if ((uVar4 & 8) == 0) break;
    if ((*(uint *)(iVar5 + 0x1bc) & 0xfe00) != 0x200) {
      uVar3 = 0;
      if (*(int *)(*(int *)(iVar5 + 4) + 0xc0) == 1) {
        uVar3 = 8;
      }
      *(uint *)(*(int *)(param_1 + 4) + 200) = (uVar3 | 0xfffffff7) & uVar4;
    }
  }
  local_c = 0;
  do {
    iVar5 = *(int *)(param_1 + 4);
    if ((*(byte *)(iVar5 + 200) & 8) == 0) {
      return;
    }
    iVar6 = *(int *)(iVar2 + 0x120 + local_c * 4);
    if (iVar6 != 0) {
      do {
        puVar1 = (uint *)(iVar5 + 200);
        if ((*(byte *)puVar1 & 8) == 0) break;
        if ((*(uint *)(iVar6 + 0x1bc) & 0xfe00) != 0x200) {
          uVar4 = 0;
          if (*(int *)(*(int *)(iVar6 + 4) + 0xc0) == 1) {
            uVar4 = 8;
          }
          *puVar1 = *puVar1 & (uVar4 | 0xfffffff7);
          iVar5 = *(int *)(param_1 + 4);
        }
        iVar6 = *(int *)(iVar6 + 0x110);
      } while (iVar6 != 0);
    }
    local_c = local_c + 1;
    if (4 < local_c) {
      return;
    }
  } while( true );
}

