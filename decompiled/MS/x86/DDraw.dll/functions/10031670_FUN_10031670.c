/*
 * FUN_10031670 at 10031670
 * undefined __fastcall FUN_10031670(int param_1)
 * Address ranges: 10031670-1003171b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10031670(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  cVar4 = FUN_1003218f(param_1 + 0x150);
  if (cVar4 != '\0') {
    puVar1 = (uint *)(*(int *)(param_1 + 4) + 200);
    *puVar1 = *puVar1 & 0xfffffff7;
    iVar5 = FUN_1002b7cf(param_1);
    for (iVar2 = iVar5; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x110)) {
      if ((*(uint *)(iVar2 + 0x1bc) & 0xfe00) != 0x200) {
        puVar1 = (uint *)(*(int *)(param_1 + 4) + 200);
        *puVar1 = *puVar1 & 0xfffffff7;
      }
    }
    uVar6 = 0;
    do {
      for (iVar2 = *(int *)(iVar5 + 0x120 + uVar6 * 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x110))
      {
        uVar3 = *(uint *)(*(int *)(param_1 + 4) + 200);
        if ((uVar3 & 8) == 0) break;
        if ((*(uint *)(iVar2 + 0x1bc) & 0xfe00) != 0x200) {
          *(uint *)(*(int *)(param_1 + 4) + 200) = uVar3 & 0xfffffff7;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
  }
  return;
}

